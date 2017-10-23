#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_3406 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_3406, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 58)) ;
  GALGAS_objectIR var_expressionResult_3575 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_3406, object->mProperty_mOperatorLocation, var_expressionResult_3575, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 72)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_3671 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_3709 ;
  GALGAS_objectIR var_leftOperand_3733 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_3671 = constinArgument_inContext.getter_mUnsignedComplementOperatorMap (HERE) ;
      var_binaryOperator_3709 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 85)) ;
      switch (extensionGetter_type (var_expressionResult_3575, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 86)).enumValue ()) {
      case GALGAS_PLMType::kNotBuilt:
        break ;
      case GALGAS_PLMType::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 88)) ;
          var_leftOperand_3733.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)) ;
          var_leftOperand_3733.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_boolean:
      case GALGAS_PLMType::kEnum_void:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 92)) ;
          var_leftOperand_3733.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 94)) ;
          var_leftOperand_3733.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96)) ;
          var_leftOperand_3733.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 98)) ;
          var_leftOperand_3733.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100)) ;
          var_leftOperand_3733.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 102)) ;
          var_leftOperand_3733.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_staticInteger:
        {
          const enumGalgasBool test_8 = constinArgument_inOptionalTargetType.getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 104)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_bigint var_minTarget_4758 ;
            GALGAS_bigint var_maxTarget_4777 ;
            GALGAS_bool joker_4779_3 ; // Joker input parameter
            GALGAS_uint joker_4779_2 ; // Joker input parameter
            GALGAS_string joker_4779_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.method_integer (var_minTarget_4758, var_maxTarget_4777, joker_4779_3, joker_4779_2, joker_4779_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105)) ;
            const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_minTarget_4758.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 106)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 107)) ;
              var_leftOperand_3733.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_9) {
              var_leftOperand_3733 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 109)), var_maxTarget_4777  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)) ;
            }
          }else if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray11  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112)) ;
            var_leftOperand_3733.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_PLMType::kEnum_integer:
        {
          const cEnumAssociatedValues_PLMType_integer * extractPtr_5309 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_3575, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 86)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5309->mAssociatedValue3 ;
          var_leftOperand_3733 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 115)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_3671 = constinArgument_inContext.getter_mNotOperatorMap (HERE) ;
      var_binaryOperator_3709 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 119)) ;
      var_leftOperand_3733 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 120)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 120))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 120)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_3671 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      var_binaryOperator_3709 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 123)) ;
      var_leftOperand_3733 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 124)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 124))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 124)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_3671 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 127)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 129)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 129)), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_binaryOperator_3709 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 132)) ;
        var_leftOperand_3733 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 133)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 133))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 133)) ;
      }else if (kBoolFalse == test_14) {
        var_binaryOperator_3709 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 135)) ;
        var_leftOperand_3733 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 136)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 136))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 136)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_3671.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_key (var_expressionResult_3575, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 140)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 140)) ;
  GALGAS_PLMType var_resultType_6306 = extensionGetter_type (var_expressionResult_3575, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 141)) ;
  const enumGalgasBool test_15 = var_expressionResult_3575.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 143)).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_bigint var_value_6449 ;
    GALGAS_PLMType joker_6422_1 ; // Joker input parameter
    var_expressionResult_3575.method_literalInteger (joker_6422_1, var_value_6449, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 144)) ;
    GALGAS_bigint var_result_6469 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_6469 = var_value_6449.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 148)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_16 = constinArgument_inOptionalTargetType.getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 150)).boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_bigint var_minTarget_6664 ;
          GALGAS_bigint var_maxTarget_6683 ;
          GALGAS_bool joker_6685_3 ; // Joker input parameter
          GALGAS_uint joker_6685_2 ; // Joker input parameter
          GALGAS_string joker_6685_1 ; // Joker input parameter
          constinArgument_inOptionalTargetType.method_integer (var_minTarget_6664, var_maxTarget_6683, joker_6685_3, joker_6685_2, joker_6685_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 151)) ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictInf, var_minTarget_6664.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 152)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray18  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 153)) ;
            var_result_6469.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_17) {
            var_result_6469 = var_value_6449.operator_xor (var_maxTarget_6683 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 155)) ;
          }
        }else if (kBoolFalse == test_16) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray19  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)) ;
          var_result_6469.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_6469 = var_value_6449.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 161)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_6469 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)).operator_xor (var_value_6449 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6306, var_result_6469  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 165)) ;
  }else if (kBoolFalse == test_15) {
    {
    routine_getNewTempVariable (var_resultType_6306, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 168)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 172)), object->mProperty_mOperatorLocation, var_leftOperand_3733, var_binaryOperator_3709, var_expressionResult_3575, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 170)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                          extensionMethod_prefixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-literal-integer.galgas", 63)), object->mProperty_mLiteralInteger.getter_bigint (HERE)  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                          extensionMethod_literalIntegerInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeExpression (defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inConstantName,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@literalStringInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                            const GALGAS_bool /* constinArgument_inGuard */,
                                                                            const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                            const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_uint var_staticStringIndex_3696 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_3696, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (object->mProperty_mLiteralString.getter_string (HERE).getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 64)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)), var_staticStringIndex_3696  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                          extensionMethod_literalStringInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpression (defineExtensionMethod_literalStringInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mValue.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-true-false.galgas", 70)), temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                          extensionMethod_literalBooleanInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_analyzeExpression (defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  cEnumerator_registerIntegerFieldListAST enumerator_3082 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_3082.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3082.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 70)) ;
    enumerator_3082.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@registerConstantExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_PLMType constinArgument_inSelfType,
                                                                             const GALGAS_bool constinArgument_inGuard,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_PLMType var_registerType_4294 ;
  GALGAS_sliceMap var_registerBitSliceMap_4354 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4405 ;
  GALGAS_bigint var_registerAddress_4445 ;
  GALGAS_uint var_registerBitCount_4478 ;
  GALGAS_uint var_powerOfTwoForArraySize_4517 ;
  GALGAS_uint var_elementArraySize_4550 ;
  GALGAS_bool joker_4300 ; // Joker input parameter
  GALGAS_bool joker_4307 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4451 ; // Joker input parameter
  constinArgument_inContext.getter_mControlRegisterMap (HERE).method_searchKey (object->mProperty_mRegisterName, var_registerType_4294, joker_4300, joker_4307, var_registerBitSliceMap_4354, var_registerFieldMap_4405, var_registerAddress_4445, joker_4451, var_registerBitCount_4478, var_powerOfTwoForArraySize_4517, var_elementArraySize_4550, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 93)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4662 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 107)) ;
  cEnumerator_lstringlist enumerator_4704 (object->mProperty_mMaskFieldNames, kENUMERATION_UP) ;
  while (enumerator_4704.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_4787 ;
    GALGAS_uint var_fieldBitCount_4818 ;
    var_registerFieldMap_4405.method_searchKey (enumerator_4704.current_mValue (HERE), var_fieldBitIndex_4787, var_fieldBitCount_4818, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 109)) ;
    GALGAS_bigint var_mask_4837 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 114)).left_shift_operation (var_fieldBitCount_4818 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 114)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 114)) ;
    var_accumulatedFieldStaticValues_4662 = var_accumulatedFieldStaticValues_4662.operator_or (var_mask_4837.left_shift_operation (var_fieldBitIndex_4787 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 115)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 115)) ;
    enumerator_4704.gotoNextObject () ;
  }
  GALGAS_operandList var_operandList_5061 = GALGAS_operandList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 118)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_5130 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_5130.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_5213 ;
    GALGAS_uint var_fieldBitCount_5244 ;
    var_registerFieldMap_4405.method_searchKey (enumerator_5130.current_mFieldName (HERE), var_fieldBitIndex_5213, var_fieldBitCount_5244, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 120)) ;
    GALGAS_objectIR var_expressionResultPossibleReference_5767 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5130.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-cst-registre.galgas", 130)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5767, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 126)) ;
    GALGAS_objectIR var_expressionResult_5944 ;
    {
    extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5767, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 143)), var_expressionResult_5944, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 140)) ;
    }
    switch (extensionGetter_type (var_expressionResult_5944, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)).enumValue ()) {
    case GALGAS_PLMType::kNotBuilt:
      break ;
    case GALGAS_PLMType::kEnum_arrayType:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray0  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_opaque:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_enumeration:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_structure:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_boolean:
    case GALGAS_PLMType::kEnum_void:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 157)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_literalString:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_pointer:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_staticInteger:
      {
        GALGAS_bigint var_value_6989 ;
        GALGAS_PLMType joker_6962_1 ; // Joker input parameter
        var_expressionResult_5944.method_literalInteger (joker_6962_1, var_value_6989, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 165)) ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_value_6989.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_value_6989.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 168)).left_shift_operation (var_fieldBitCount_5244 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 168)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            var_accumulatedFieldStaticValues_4662 = var_accumulatedFieldStaticValues_4662.operator_or (var_value_6989.left_shift_operation (var_fieldBitIndex_5213 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) ;
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)).left_shift_operation (var_fieldBitCount_5244 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)) ;
          }
        }
      }
      break ;
    case GALGAS_PLMType::kEnum_integer:
      {
        const cEnumAssociatedValues_PLMType_integer * extractPtr_9237 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_5944, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_min = extractPtr_9237->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_max = extractPtr_9237->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_9237->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_expressionBitCount = extractPtr_9237->mAssociatedValue3 ;
        const enumGalgasBool test_12 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 174)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)) ;
        }else if (kBoolFalse == test_12) {
          GALGAS_bool test_14 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5244)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 177)) ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_5244.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 179)), fixItArray16  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) ;
          }
          GALGAS_bool test_17 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5244)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 182)) ;
          }
          GALGAS_bool test_18 = test_17 ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 182)) ;
          }
          const enumGalgasBool test_19 = test_18.boolEnum () ;
          if (kBoolTrue == test_19) {
            {
            extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_5944, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 185)).left_shift_operation (var_fieldBitCount_5244 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 185)), function_panicCodeForRegisterFieldOvf (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)), enumerator_5130.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)) ;
            }
          }
          GALGAS_objectIR var_partialResult_8336 = var_expressionResult_5944 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4478)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_objectIR var_extendedResult_8509 ;
            {
            routine_getNewTempVariable (var_registerType_4294, enumerator_5130.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_extendedResult_8509, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 193)) ;
            }
            {
            extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_8509, var_partialResult_8336, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 194)) ;
            }
            var_partialResult_8336 = var_extendedResult_8509 ;
          }else if (kBoolFalse == test_20) {
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4478)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_objectIR var_truncatedResult_8795 ;
              {
              routine_getNewTempVariable (var_registerType_4294, enumerator_5130.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_truncatedResult_8795, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 197)) ;
              }
              {
              extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_8795, var_partialResult_8336, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 198)) ;
              }
              var_partialResult_8336 = var_truncatedResult_8795 ;
            }
          }
          GALGAS_objectIR var_shiftedResult_9063 ;
          {
          routine_getNewTempVariable (var_registerType_4294, enumerator_5130.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_shiftedResult_9063, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 202)) ;
          }
          {
          extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9063, var_partialResult_8336, var_fieldBitIndex_5213, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 203)) ;
          }
          var_operandList_5061.addAssign_operation (var_shiftedResult_9063  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 205)) ;
        }
      }
      break ;
    }
    enumerator_5130.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4294, var_accumulatedFieldStaticValues_4662  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)) ;
  cEnumerator_operandList enumerator_9432 (var_operandList_5061, kENUMERATION_UP) ;
  while (enumerator_9432.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_9519 ;
    {
    routine_getNewTempVariable (var_registerType_4294, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 212)), ioArgument_ioTemporaries, var_newResult_9519, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_9519, extensionGetter_type (var_newResult_9519, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 218)), enumerator_9432.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)) ;
    }
    outArgument_outResult = var_newResult_9519 ;
    enumerator_9432.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                          extensionMethod_registerConstantExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_analyzeExpression (defineExtensionMethod_registerConstantExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inConstantName,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mObjectName COMMA_SOURCE_FILE ("expression-primary.galgas", 163)) ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_6040 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_6040.hasCurrentObject ()) {
    switch (enumerator_6040.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_6104 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_6040.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6104->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_6249 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_6040.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_6249->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 168)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6799 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_6040.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_6799->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_6335 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_6335.hasCurrentObject ()) {
          switch (enumerator_6335.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6589 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_6335.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_6589->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 175)) COMMA_SOURCE_FILE ("expression-primary.galgas", 175)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_6702 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_6335.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_6702->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 177)) ;
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
            {
            }
            break ;
          }
          enumerator_6335.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_6040.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_7328 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_7328.hasCurrentObject ()) {
    switch (enumerator_7328.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_7392 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_7328.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7392->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_7521 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_7328.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_7521->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 195)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_8055 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_7328.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_8055->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_7607 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_7607.hasCurrentObject ()) {
          switch (enumerator_7607.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_7861 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_7607.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_7861->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 202)) COMMA_SOURCE_FILE ("expression-primary.galgas", 202)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7958 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_7607.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_7958->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 204)) ;
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
            {
            }
            break ;
          }
          enumerator_7607.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7328.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@primaryInExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_PLMType constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inGuard,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_objectIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 245)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 245)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        const GALGAS_primaryInExpressionAST temp_2 = object ;
        callExtensionMethod_analyzePrimaryExpressionNoSelf ((const cPtr_primaryInExpressionAST *) temp_2.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 247)) ;
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_11080 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_11080->mAssociatedValue0 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 263)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 264)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_5 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 265)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_primaryInExpressionAST temp_6 = object ;
          callExtensionMethod_analyzePrimaryExpressionWithSelf ((const cPtr_primaryInExpressionAST *) temp_6.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 266)) ;
        }else if (kBoolFalse == test_5) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 281)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                          extensionMethod_primaryInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzeExpression (defineExtensionMethod_primaryInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'analyzePrimaryExpression'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzePrimaryExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                       const GALGAS_bool constinArgument_inGuard,
                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                       const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       const GALGAS_mode constinArgument_inCurrentMode,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                       const GALGAS_lstring constinArgument_inObjectName,
                                       const GALGAS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                       GALGAS_objectIR & outArgument_outResult,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  GALGAS_internalRepresentation var_internalRepresentation_17525 = GALGAS_internalRepresentation::constructor_standAloneIdentifier (constinArgument_inObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 457)) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_17624 (constinArgument_inAccessList, kENUMERATION_UP) ;
  while (enumerator_17624.hasCurrentObject ()) {
    switch (enumerator_17624.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_18175 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_17624.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_18175->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (var_internalRepresentation_17525, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 462)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_18808 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_17624.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_18808->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_18808->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (var_internalRepresentation_17525, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 476)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_19378 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_17624.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_19378->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_19378->mAssociatedValue1 ;
        {
        routine_handleFunctionCallInExpression (var_internalRepresentation_17525, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 493)) ;
        }
      }
      break ;
    }
    enumerator_17624.gotoNextObject () ;
  }
  switch (var_internalRepresentation_17525.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_19627 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (var_internalRepresentation_17525.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_19627->mAssociatedValue0 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_19571 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_19571, extractedValue_identifier, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_20365 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (var_internalRepresentation_17525.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20365->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_20365->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 515)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 515)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_propertyMap var_propertyMap_19825 ;
        GALGAS_lstring joker_19781_1 ; // Joker input parameter
        GALGAS_propertyList joker_19827_3 ; // Joker input parameter
        GALGAS_PLMTypeFlags joker_19827_2 ; // Joker input parameter
        GALGAS_string joker_19827_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 516)).method_structure (joker_19781_1, var_propertyMap_19825, joker_19827_3, joker_19827_2, joker_19827_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 516)) ;
        GALGAS_PLMType var_type_19887 ;
        GALGAS_bool joker_19875_2 ; // Joker input parameter
        GALGAS_objectIR joker_19875_1 ; // Joker input parameter
        GALGAS_propertyAccessKind joker_19889 ; // Joker input parameter
        var_propertyMap_19825.method_searchKey (extractedValue_propertyName, joker_19875_2, joker_19875_1, var_type_19887, joker_19889, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 517)) ;
        GALGAS_objectIR var_newObject_19911 = GALGAS_objectIR::constructor_temporaryReference (var_type_19887, GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 520)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 520))  COMMA_SOURCE_FILE ("expression-primary.galgas", 520))  COMMA_SOURCE_FILE ("expression-primary.galgas", 518)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 522)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_19911, extractedValue_currentPointer, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 523)) ;
        }
        outArgument_outResult = var_newObject_19911 ;
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 530)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 530)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference * extractPtr_20504 = (const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference *) (var_internalRepresentation_17525.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_20504->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_20504->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 533)), GALGAS_string ("temporaryReference 1"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 533)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference * extractPtr_20652 = (const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference *) (var_internalRepresentation_17525.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_20652->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_20652->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 535)), GALGAS_string ("volatileIndirectReference 1"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 535)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_internalRepresentation_universalReference * extractPtr_20850 = (const cEnumAssociatedValues_internalRepresentation_universalReference *) (var_internalRepresentation_17525.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_20850->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_20850->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::constructor_llvmTemporaryValue (extractedValue_type, extractedValue_llvmName.getter_nowhere (SOURCE_FILE ("expression-primary.galgas", 538))  COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'analyzeRegisterExpression'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRegisterExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                        const GALGAS_semanticContext constinArgument_inContext,
                                        const GALGAS_mode constinArgument_inCurrentMode,
                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                        const GALGAS_lstring constinArgument_inRegisterName,
                                        const GALGAS_PLMType constinArgument_inRegisterType,
                                        const GALGAS_bigint constinArgument_inRegisterAddress,
                                        const GALGAS_sliceMap constinArgument_inRegisterSliceMap,
                                        const GALGAS_uint constinArgument_inRegisterArraySize,
                                        const GALGAS_uint constinArgument_inRegisterElementSize,
                                        const GALGAS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                        GALGAS_objectIR & outArgument_outResult,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("expression-primary.galgas", 563)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_getNewTempVariable (constinArgument_inRegisterType, constinArgument_inRegisterName.getter_location (HERE), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 564)) ;
    }
    {
    extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, constinArgument_inRegisterAddress, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 565)) ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_primaryInExpressionAccessListAST var_accessList_22089 = constinArgument_inAccessList ;
    const enumGalgasBool test_1 = var_accessList_22089.getter_mAccessAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 568)).getter_isArrayAccess (SOURCE_FILE ("expression-primary.galgas", 568)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_primaryInExpressionAccessAST var_first_22203 ;
      {
      var_accessList_22089.setter_popFirst (var_first_22203, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 569)) ;
      }
      GALGAS_expressionAST var_indexExpression_22271 ;
      GALGAS_location var_endOfIndex_22308 ;
      var_first_22203.method_arrayAccess (var_indexExpression_22271, var_endOfIndex_22308, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 570)) ;
      GALGAS_objectIR var_indexIR_22881 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_indexExpression_22271, var_endOfIndex_22308, constinArgument_inRegisterArraySize.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 583)), constinArgument_inRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_22881, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 571)) ;
      }
      const enumGalgasBool test_2 = var_indexIR_22881.getter_isLiteralInteger (SOURCE_FILE ("expression-primary.galgas", 588)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bigint var_idx_23024 ;
        GALGAS_PLMType joker_22999_1 ; // Joker input parameter
        var_indexIR_22881.method_literalInteger (joker_22999_1, var_idx_23024, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 589)) ;
        GALGAS_bigint var_addr_23042 = constinArgument_inRegisterAddress.add_operation (var_idx_23024.multiply_operation (constinArgument_inRegisterElementSize.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 590)) ;
        {
        routine_getNewTempVariable (constinArgument_inRegisterType, constinArgument_inRegisterName.getter_location (HERE), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 591)) ;
        }
        {
        extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_addr_23042, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 592)) ;
        }
      }else if (kBoolFalse == test_2) {
        {
        routine_getNewTempVariable (constinArgument_inRegisterType, constinArgument_inRegisterName.getter_location (HERE), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 594)) ;
        }
        {
        extensionSetter_appendLoadVolatileRegisterWithSubscript (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_indexIR_22881, constinArgument_inRegisterAddress, constinArgument_inRegisterElementSize.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 595)) ;
        }
      }
    }else if (kBoolFalse == test_1) {
      {
      routine_getNewTempVariable (constinArgument_inRegisterType, constinArgument_inRegisterName.getter_location (HERE), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 603)) ;
      }
      {
      extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, constinArgument_inRegisterAddress, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
      }
    }
    GALGAS_sliceMap var_currentSliceMap_23832 = constinArgument_inRegisterSliceMap ;
    GALGAS_PLMType var_currentType_23873 = constinArgument_inRegisterType ;
    cEnumerator_primaryInExpressionAccessListAST enumerator_23921 (var_accessList_22089, kENUMERATION_UP) ;
    while (enumerator_23921.hasCurrentObject ()) {
      switch (enumerator_23921.current_mAccess (HERE).enumValue ()) {
      case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
        break ;
      case GALGAS_primaryInExpressionAccessAST::kEnum_property:
        {
          const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_24683 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_23921.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_24683->mAssociatedValue0 ;
          GALGAS_llvmBinaryOperation var_accessOperator_24100 ;
          GALGAS_bigint var_accessRightOperand_24142 ;
          GALGAS_sliceMap var_subMap_24174 ;
          GALGAS_PLMType var_resultType_24209 ;
          var_currentSliceMap_23832.method_searchKey (extractedValue_propertyName, var_accessOperator_24100, var_accessRightOperand_24142, var_subMap_24174, var_resultType_24209, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 612)) ;
          GALGAS_objectIR var_resultIR_24312 ;
          {
          routine_getNewTempVariable (var_resultType_24209, extractedValue_propertyName.getter_location (HERE), ioArgument_ioTemporaries, var_resultIR_24312, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 619)) ;
          }
          {
          extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_24312, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 622)), extractedValue_propertyName.getter_location (HERE), outArgument_outResult, var_accessOperator_24100, GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-primary.galgas", 626)), var_accessRightOperand_24142  COMMA_SOURCE_FILE ("expression-primary.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 620)) ;
          }
          var_currentSliceMap_23832 = var_subMap_24174 ;
          var_currentType_23873 = var_resultType_24209 ;
          outArgument_outResult = var_resultIR_24312 ;
        }
        break ;
      case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_24823 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_23921.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_24823->mAssociatedValue1 ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("receiver is a control register, subscripting is invalid here"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 632)) ;
        }
        break ;
      case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
        {
          const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_24956 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_23921.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_location extractedValue_errorLocation = extractPtr_24956->mAssociatedValue1 ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("receiver is a control register, cannot be used as a function"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 634)) ;
        }
        break ;
      }
      enumerator_23921.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'analyzePrimaryExpressionWithSelf'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzePrimaryExpressionWithSelf (const GALGAS_PLMType constinArgument_inSelfType,
                                               const GALGAS_bool constinArgument_inGuard,
                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                               const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               const GALGAS_mode constinArgument_inCurrentMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               const GALGAS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                               const GALGAS_location constinArgument_inSelfLocation,
                                               GALGAS_objectIR & outArgument_outResult,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  GALGAS_internalRepresentation var_internalRepresentation_30284 = GALGAS_internalRepresentation::constructor_universalReference (constinArgument_inSelfType, GALGAS_string ("%self")  COMMA_SOURCE_FILE ("expression-primary.galgas", 765)) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_30402 (constinArgument_inAccessList, kENUMERATION_UP) ;
  while (enumerator_30402.hasCurrentObject ()) {
    switch (enumerator_30402.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_30953 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_30402.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_30953->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (var_internalRepresentation_30284, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 773)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_31586 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_30402.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_31586->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_31586->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (var_internalRepresentation_30284, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 787)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_32156 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_30402.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_32156->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_32156->mAssociatedValue1 ;
        {
        routine_handleFunctionCallInExpression (var_internalRepresentation_30284, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 804)) ;
        }
      }
      break ;
    }
    enumerator_30402.gotoNextObject () ;
  }
  switch (var_internalRepresentation_30284.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_32405 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (var_internalRepresentation_30284.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_32405->mAssociatedValue0 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_32349 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_32349, extractedValue_identifier, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 824)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_33184 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (var_internalRepresentation_30284.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_33184->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_33184->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 826)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 826)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_propertyMap var_propertyMap_32603 ;
        GALGAS_lstring joker_32559_1 ; // Joker input parameter
        GALGAS_propertyList joker_32605_3 ; // Joker input parameter
        GALGAS_PLMTypeFlags joker_32605_2 ; // Joker input parameter
        GALGAS_string joker_32605_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 827)).method_structure (joker_32559_1, var_propertyMap_32603, joker_32605_3, joker_32605_2, joker_32605_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 827)) ;
        GALGAS_objectIR var_masterPropertyIR_32686 ;
        GALGAS_bool joker_32653 ; // Joker input parameter
        GALGAS_PLMType joker_32688_2 ; // Joker input parameter
        GALGAS_propertyAccessKind joker_32688_1 ; // Joker input parameter
        var_propertyMap_32603.method_searchKey (extractedValue_propertyName, joker_32653, var_masterPropertyIR_32686, joker_32688_2, joker_32688_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 828)) ;
        GALGAS_objectIR var_newObject_32711 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_32686, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 830)), GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 831)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 831))  COMMA_SOURCE_FILE ("expression-primary.galgas", 831))  COMMA_SOURCE_FILE ("expression-primary.galgas", 829)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 833)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_32711, extractedValue_currentPointer, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 837)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 834)) ;
        }
        outArgument_outResult = var_newObject_32711 ;
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 841)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 841)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference * extractPtr_33332 = (const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference *) (var_internalRepresentation_30284.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_33332->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_33332->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSelfLocation, GALGAS_string ("volatileAbsoluteReference 2"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 844)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference * extractPtr_33482 = (const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference *) (var_internalRepresentation_30284.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_33482->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_33482->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inSelfLocation, GALGAS_string ("volatileIndirectReference 2"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 846)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_internalRepresentation_universalReference * extractPtr_33621 = (const cEnumAssociatedValues_internalRepresentation_universalReference *) (var_internalRepresentation_30284.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_33621->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_33621->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::constructor_temporaryReference (extractedValue_type, extractedValue_llvmName.getter_nowhere (SOURCE_FILE ("expression-primary.galgas", 848))  COMMA_SOURCE_FILE ("expression-primary.galgas", 848)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                               const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                               const GALGAS_semanticContext /* constinArgument_inContext */,
                                               const GALGAS_mode /* constinArgument_inCurrentMode */,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                               GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_36468 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_36468->mAssociatedValue0 ;
      GALGAS_objectIR var_objectIR_34587 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_34519 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_34519, extractedValue_identifier, var_objectIR_34587, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 869)) ;
      }
      switch (var_objectIR_34587.enumValue ()) {
      case GALGAS_objectIR::kNotBuilt:
        break ;
      case GALGAS_objectIR::kEnum_globalVariableReference:
        {
          const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_34908 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (var_objectIR_34587.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_34908->mAssociatedValue0 ;
          const enumGalgasBool test_0 = extractedValue_type.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 872)).boolEnum () ;
          if (kBoolTrue == test_0) {
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_34587  COMMA_SOURCE_FILE ("expression-primary.galgas", 873)) ;
          }else if (kBoolFalse == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 875)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 875)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_null:
        {
        }
        break ;
      case GALGAS_objectIR::kEnum_selfObject:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 879)), GALGAS_string ("\xC2""\xAB""selfObject\xC2""\xBB"" invalid here"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 879)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_localVariableReference:
        {
          const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_35502 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (var_objectIR_34587.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_35502->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_35502->mAssociatedValue1 ;
          const enumGalgasBool test_3 = extractedValue_type.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 881)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_objectIR var_objectIR_35142 = GALGAS_objectIR::constructor_llvmTemporaryValue (extractedValue_type, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 884)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 884)), extractedValue_plmName.getter_location (SOURCE_FILE ("expression-primary.galgas", 884))  COMMA_SOURCE_FILE ("expression-primary.galgas", 884))  COMMA_SOURCE_FILE ("expression-primary.galgas", 882)) ;
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_35142  COMMA_SOURCE_FILE ("expression-primary.galgas", 886)) ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 888)), GALGAS_string ("this should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 888)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_registerReference:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 891)), GALGAS_string ("register is not handled here"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 891)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_temporaryReference:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 893)), GALGAS_string ("\xC2""\xAB""temporaryReference\xC2""\xBB"" invalid here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 893)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 895)), GALGAS_string ("\xC2""\xAB""property\xC2""\xBB"" invalid here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 895)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmTemporaryValue:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 897)), GALGAS_string ("\xC2""\xAB""llvmTemporaryValue\xC2""\xBB"" invalid here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 897)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalInteger:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 899)), GALGAS_string ("\xC2""\xAB""literalInteger\xC2""\xBB"" invalid here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 899)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmStructureConstant:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 901)), GALGAS_string ("\xC2""\xAB""llvmStructureConstant\xC2""\xBB"" invalid here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 901)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 903)), GALGAS_string ("a global string constant is invalid here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 903)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_zero:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 905)), GALGAS_string ("\xC2""\xAB""zero\xC2""\xBB"" invalid here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 905)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_37365 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_37365->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_37365->mAssociatedValue1 ;
      const enumGalgasBool test_13 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 908)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 908)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_propertyMap var_propertyMap_36662 ;
        GALGAS_lstring joker_36618_1 ; // Joker input parameter
        GALGAS_propertyList joker_36664_3 ; // Joker input parameter
        GALGAS_PLMTypeFlags joker_36664_2 ; // Joker input parameter
        GALGAS_string joker_36664_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 909)).method_structure (joker_36618_1, var_propertyMap_36662, joker_36664_3, joker_36664_2, joker_36664_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 909)) ;
        GALGAS_objectIR var_masterPropertyIR_36751 ;
        GALGAS_bool joker_36718 ; // Joker input parameter
        GALGAS_PLMType joker_36753_2 ; // Joker input parameter
        GALGAS_propertyAccessKind joker_36753_1 ; // Joker input parameter
        var_propertyMap_36662.method_searchKey (extractedValue_masterPropertyName, joker_36718, var_masterPropertyIR_36751, joker_36753_2, joker_36753_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 910)) ;
        GALGAS_objectIR var_newObject_36776 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_36751, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 912)), GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 913)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 913)), extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 913))  COMMA_SOURCE_FILE ("expression-primary.galgas", 913))  COMMA_SOURCE_FILE ("expression-primary.galgas", 911)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 915)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_36776, extractedValue_currentPointer, extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 916)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_newObject_36776  COMMA_SOURCE_FILE ("expression-primary.galgas", 921)) ;
      }else if (kBoolFalse == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 923)), GALGAS_string ("'").add_operation (extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 923)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 923)).add_operation (GALGAS_string ("' should be a structure"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 923)), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 923)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference * extractPtr_37522 = (const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_37522->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_37522->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 926)), GALGAS_string ("temporaryReference 3"), fixItArray15  COMMA_SOURCE_FILE ("expression-primary.galgas", 926)) ;
      ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference * extractPtr_37687 = (const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_37687->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_37687->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 928)), GALGAS_string ("volatileIndirectReference 3"), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 928)) ;
      ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_internalRepresentation_universalReference * extractPtr_38787 = (const cEnumAssociatedValues_internalRepresentation_universalReference *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_38787->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_38787->mAssociatedValue1 ;
      const enumGalgasBool test_17 = extractedValue_type.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 930)).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_propertyMap var_propertyMap_37854 ;
        GALGAS_lstring joker_37810_1 ; // Joker input parameter
        GALGAS_propertyList joker_37856_3 ; // Joker input parameter
        GALGAS_PLMTypeFlags joker_37856_2 ; // Joker input parameter
        GALGAS_string joker_37856_1 ; // Joker input parameter
        extractedValue_type.method_structure (joker_37810_1, var_propertyMap_37854, joker_37856_3, joker_37856_2, joker_37856_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 931)) ;
        GALGAS_PLMType var_propertyType_37926 ;
        GALGAS_propertyAccessKind var_propertyAccess_37946 ;
        GALGAS_bool joker_37906_2 ; // Joker input parameter
        GALGAS_objectIR joker_37906_1 ; // Joker input parameter
        var_propertyMap_37854.method_searchKey (constinArgument_inPropertyName, joker_37906_2, joker_37906_1, var_propertyType_37926, var_propertyAccess_37946, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 932)) ;
        switch (var_propertyAccess_37946.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_constant:
          {
            const cEnumAssociatedValues_propertyAccessKind_constant * extractPtr_38117 = (const cEnumAssociatedValues_propertyAccessKind_constant *) (var_propertyAccess_37946.unsafePointer ()) ;
            const GALGAS_string extractedValue_llvmValue = extractPtr_38117->mAssociatedValue0 ;
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 935)), GALGAS_string ("constant property no handled yet"), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 935)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_38654 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_37946.unsafePointer ()) ;
            const GALGAS_uint extractedValue_index = extractPtr_38654->mAssociatedValue0 ;
            GALGAS_string var_llvmPropertyName_38214 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_38214, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 937)) ;
            }
            GALGAS_PLMType var_currentType_38290 ;
            GALGAS_string var_currentLLVMName_38320 ;
            ioArgument_ioInternalRepresentation.method_universalReference (var_currentType_38290, var_currentLLVMName_38320, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 938)) ;
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_38290, var_currentLLVMName_38320, var_propertyType_37926, var_llvmPropertyName_38214, extractedValue_index, constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 945)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 939)) ;
            }
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_universalReference (var_propertyType_37926, var_llvmPropertyName_38214  COMMA_SOURCE_FILE ("expression-primary.galgas", 947)) ;
          }
          break ;
        }
      }else if (kBoolFalse == test_17) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 950)), GALGAS_string ("'").add_operation (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 950)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 950)).add_operation (GALGAS_string ("' should be a structure"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 950)), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 950)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleArrayAccessInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArrayAccessInExpression (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                            const GALGAS_location constinArgument_inEndOfIndex,
                                            const GALGAS_PLMType constinArgument_inSelfType,
                                            const GALGAS_bool constinArgument_inGuard,
                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                            const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inCurrentMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                            GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_variableIR_39671 ;
  GALGAS_location var_errorLocation_39697 ;
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_39893 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_39893->mAssociatedValue0 ;
      var_errorLocation_39697 = extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 977)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_39836 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_39836, extractedValue_identifier, var_variableIR_39671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 978)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_40712 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_40712->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_40712->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 980)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 980)).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_errorLocation_39697 = extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 981)) ;
        GALGAS_propertyMap var_propertyMap_40141 ;
        GALGAS_lstring joker_40097_1 ; // Joker input parameter
        GALGAS_propertyList joker_40143_3 ; // Joker input parameter
        GALGAS_PLMTypeFlags joker_40143_2 ; // Joker input parameter
        GALGAS_string joker_40143_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 982)).method_structure (joker_40097_1, var_propertyMap_40141, joker_40143_3, joker_40143_2, joker_40143_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 982)) ;
        GALGAS_objectIR var_masterPropertyIR_40224 ;
        GALGAS_bool joker_40191 ; // Joker input parameter
        GALGAS_PLMType joker_40226_2 ; // Joker input parameter
        GALGAS_propertyAccessKind joker_40226_1 ; // Joker input parameter
        var_propertyMap_40141.method_searchKey (extractedValue_propertyName, joker_40191, var_masterPropertyIR_40224, joker_40226_2, joker_40226_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 983)) ;
        var_variableIR_39671 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_40224, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 985)), GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 986)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 986)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 986))  COMMA_SOURCE_FILE ("expression-primary.galgas", 986))  COMMA_SOURCE_FILE ("expression-primary.galgas", 984)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 988)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_variableIR_39671, extractedValue_currentPointerIR, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 992)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 989)) ;
        }
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 995)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 995)) ;
        var_variableIR_39671.drop () ; // Release error dropped variable
        var_errorLocation_39697.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference * extractPtr_40867 = (const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_40867->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_40867->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("temporaryReference 4"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 998)) ;
      var_variableIR_39671.drop () ; // Release error dropped variable
      var_errorLocation_39697.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference * extractPtr_41031 = (const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_41031->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_41031->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("volatileIndirectReference 4"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1000)) ;
      var_variableIR_39671.drop () ; // Release error dropped variable
      var_errorLocation_39697.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_internalRepresentation_universalReference * extractPtr_41209 = (const cEnumAssociatedValues_internalRepresentation_universalReference *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_41209->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_41209->mAssociatedValue1 ;
      var_variableIR_39671 = GALGAS_objectIR::constructor_temporaryReference (extractedValue_type, extractedValue_llvmName.getter_nowhere (SOURCE_FILE ("expression-primary.galgas", 1002))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1002)) ;
      var_errorLocation_39697 = GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-primary.galgas", 1003)) ;
    }
    break ;
  }
  const enumGalgasBool test_4 = extensionGetter_type (var_variableIR_39671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1007)).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 1007)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_PLMType var_elementType_41436 ;
    GALGAS_bigint var_arraySize_41464 ;
    GALGAS_lstring joker_41405_1 ; // Joker input parameter
    GALGAS_constantMap joker_41466_3 ; // Joker input parameter
    GALGAS_PLMTypeFlags joker_41466_2 ; // Joker input parameter
    GALGAS_string joker_41466_1 ; // Joker input parameter
    extensionGetter_type (var_variableIR_39671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1008)).method_arrayType (joker_41405_1, var_elementType_41436, var_arraySize_41464, joker_41466_3, joker_41466_2, joker_41466_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1008)) ;
    {
    routine_handleArraySubscript (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, var_arraySize_41464, var_elementType_41436, ioArgument_ioInstructionGenerationList, var_variableIR_39671, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1009)) ;
    }
    GALGAS_objectIR var_loadedObjectIR_42078 ;
    {
    routine_getNewTempVariable (extensionGetter_type (var_variableIR_39671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1026)), extensionGetter_location (var_variableIR_39671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1026)), ioArgument_ioTemporaries, var_loadedObjectIR_42078, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1026)) ;
    }
    {
    extensionSetter_appendLoadFromTemporaryReference (ioArgument_ioInstructionGenerationList, var_loadedObjectIR_42078, extensionGetter_llvmName (var_variableIR_39671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1029)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1027)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_universalReference (extensionGetter_type (var_loadedObjectIR_42078, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1031)), extensionGetter_name (var_loadedObjectIR_42078, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1031))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1031)) ;
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_5 = var_variableIR_39671.getter_isRegisterReference (SOURCE_FILE ("expression-primary.galgas", 1032)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("control register not handled here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1033)) ;
    }else if (kBoolFalse == test_5) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (var_errorLocation_39697, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 1035)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                             const GALGAS_PLMType constinArgument_inSelfType,
                                             const GALGAS_bool constinArgument_inGuard,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                             const GALGAS_location constinArgument_inErrorLocation,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1058)) ;
  }
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference * extractPtr_43657 = (const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_43657->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_43657->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("temporaryReference 5"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 1063)) ;
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference * extractPtr_43797 = (const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_43797->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_43797->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("volatileIndirectReference 5"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1065)) ;
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_internalRepresentation_universalReference * extractPtr_43922 = (const cEnumAssociatedValues_internalRepresentation_universalReference *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_43922->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_43922->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("indirectReference 5"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 1067)) ;
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_44484 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_44484->mAssociatedValue0 ;
      {
      routine_handleStandAloneFunctionCallInExpression (ioArgument_ioInternalRepresentation, extractedValue_identifier, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1069)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_45345 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_45345->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_45345->mAssociatedValue1 ;
      const enumGalgasBool test_5 = extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1086)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 1086)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_objectIR var_callReturnedResult_45092 ;
        {
        routine_handleMethodCallInExpression (extractedValue_propertyName, extractedValue_currentPointerIR, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, ioArgument_ioInstructionGenerationList, var_callReturnedResult_45092, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1087)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_universalReference (extensionGetter_type (var_callReturnedResult_45092, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1102)), extensionGetter_name (var_callReturnedResult_45092, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1102))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1102)) ;
      }else if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1104)), GALGAS_string ("this object should be a structure"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1104)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleMethodCallInExpression'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleMethodCallInExpression (const GALGAS_lstring constinArgument_inMethodName,
                                           const GALGAS_objectIR constinArgument_inCurrentPointerIR,
                                           const GALGAS_PLMType constinArgument_inSelfType,
                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           const GALGAS_mode constinArgument_inMode,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                           const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           GALGAS_objectIR & outArgument_outCallReturnedResult,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCallReturnedResult.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineMangledName_46144 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1126)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1126)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1126)), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1126)) ;
  GALGAS_lstring var_signature_46292 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1128)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_46498 ;
  GALGAS_routineDescriptor var_routineDescriptor_46540 ;
  GALGAS_location joker_46546 ; // Joker input parameter
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), constinArgument_inMethodName, var_signature_46292, var_LLVMInvocationRoutineName_46498, var_routineDescriptor_46540, joker_46546, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1130)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_routineDescriptor_46540.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1138)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1138)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1139)), GALGAS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1139)) ;
    var_routineDescriptor_46540.drop () ; // Release error dropped variable
    outArgument_outCallReturnedResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_calleeKindIR var_calleeKind_46834 = function_checkMode (constinArgument_inMode, extensionGetter_executionMode (var_routineDescriptor_46540.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1144)), var_routineDescriptor_46540.getter_mRoutineKind (HERE), constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1142)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_47126 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1149)) ;
    switch (var_routineDescriptor_46540.getter_mRoutineCallingScheme (HERE).enumValue ()) {
    case GALGAS_routineCallingSheme::kNotBuilt:
      break ;
    case GALGAS_routineCallingSheme::kEnum_staticCall:
      {
        var_effectiveParameterListIR_47126.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1152)), constinArgument_inCurrentPointerIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 1152)) ;
      }
      break ;
    case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
      {
      }
      break ;
    }
    {
    routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_routineDescriptor_46540.getter_mSignature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_47126, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1156)) ;
    }
    {
    routine_getNewTempVariable (var_routineDescriptor_46540.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1172)), var_routineMangledName_46144.getter_location (SOURCE_FILE ("expression-primary.galgas", 1172)), ioArgument_ioTemporaries, outArgument_outCallReturnedResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1172)) ;
    }
    switch (var_routineDescriptor_46540.getter_mRoutineCallingScheme (HERE).enumValue ()) {
    case GALGAS_routineCallingSheme::kNotBuilt:
      break ;
    case GALGAS_routineCallingSheme::kEnum_staticCall:
      {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), outArgument_outCallReturnedResult, var_routineMangledName_46144, var_LLVMInvocationRoutineName_46498, var_calleeKind_46834, var_effectiveParameterListIR_47126  COMMA_SOURCE_FILE ("expression-primary.galgas", 1177))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1177)) ;
        {
        ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_46144 COMMA_SOURCE_FILE ("expression-primary.galgas", 1186)) ;
        }
      }
      break ;
    case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
      {
        const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall * extractPtr_49231 = (const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall *) (var_routineDescriptor_46540.getter_mRoutineCallingScheme (HERE).unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_49231->mAssociatedValue0 ;
        GALGAS_objectIR var_propertyReference_48694 = GALGAS_objectIR::constructor_temporaryReference (extractedValue_type, GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1190)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1190)), constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1190))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1190))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1188)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1192)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_propertyReference_48694, constinArgument_inCurrentPointerIR, constinArgument_inMethodName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1196)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1193)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (var_propertyReference_48694, extractedValue_type, outArgument_outCallReturnedResult, var_effectiveParameterListIR_47126  COMMA_SOURCE_FILE ("expression-primary.galgas", 1199))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1199)) ;
      }
      break ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'handleStandAloneFunctionCallInExpression'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleStandAloneFunctionCallInExpression (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                                       const GALGAS_lstring constinArgument_inFunctionName,
                                                       const GALGAS_PLMType constinArgument_inSelfType,
                                                       const GALGAS_bool constinArgument_inGuard,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode constinArgument_inMode,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                                       const GALGAS_location constinArgument_inErrorLocation,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1229)) ;
  }
  GALGAS_lstring var_routineMangledName_50289 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inFunctionName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1232)) ;
  GALGAS_lstring var_signature_50404 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1234)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_50614 ;
  GALGAS_routineDescriptor var_routineDescriptor_50656 ;
  GALGAS_location joker_50662 ; // Joker input parameter
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), constinArgument_inFunctionName, var_signature_50404, var_LLVMInvocationRoutineName_50614, var_routineDescriptor_50656, joker_50662, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1236)) ;
  GALGAS_routineKind var_routineKind_50926 = var_routineDescriptor_50656.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_50976 = extensionGetter_executionMode (var_routineKind_50926, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1252)) ;
  GALGAS_routineTypedSignature var_formalSignature_51028 = var_routineDescriptor_50656.getter_mSignature (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_routineDescriptor_50656.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1255)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1255)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inFunctionName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1256)), GALGAS_string ("not a function (returns no value)"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1256)) ;
    var_routineDescriptor_50656.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    GALGAS_calleeKindIR var_calleeKind_51290 = function_checkMode (constinArgument_inMode, var_calleeMode_50976, var_routineKind_50926, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1259)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_51524 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1266)) ;
    {
    routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_formalSignature_51028, constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_51524, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1267)) ;
    }
    GALGAS_objectIR var_functionResult_52229 ;
    {
    routine_getNewTempVariable (var_routineDescriptor_50656.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1283)), var_routineMangledName_50289.getter_location (SOURCE_FILE ("expression-primary.galgas", 1283)), ioArgument_ioTemporaries, var_functionResult_52229, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1283)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_functionResult_52229, var_routineMangledName_50289, var_LLVMInvocationRoutineName_50614, var_calleeKind_51290, var_effectiveParameterListIR_51524  COMMA_SOURCE_FILE ("expression-primary.galgas", 1285))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1285)) ;
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_50289 COMMA_SOURCE_FILE ("expression-primary.galgas", 1294)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_universalReference (extensionGetter_type (var_functionResult_52229, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1296)), extensionGetter_name (var_functionResult_52229, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1296))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1296)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeEffectiveParametersNew'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParametersNew (const GALGAS_PLMType constinArgument_inSelfType,
                                            const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                            const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                            const GALGAS_location constinArgument_inErrorLocation,
                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inRequiredMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                            GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_53729 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1318)) ;
  cEnumerator_routineTypedSignature enumerator_53772 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_53815 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_53772.hasCurrentObject () && enumerator_53815.hasCurrentObject ()) {
    switch (enumerator_53815.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_54601 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_53815.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_54601->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_54601->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_54601->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_53772.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1323)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1325)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1325)) ;
        }
        GALGAS_PLMType var_type_53953 = temp_0 ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_54167 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_54167, extractedValue_name, var_type_53953, extractedValue_name, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1328)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_54243 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_54243, extractedValue_name, var_type_53953, extractedValue_name, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 1330)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1330)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1332)), extensionGetter_llvmTypeName (var_type_53953, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1332))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1332)) ;
        var_parameterList_53729.addAssign_operation (enumerator_53815.current_mEffectiveParameterKind (HERE), enumerator_53815.current_mSelector (HERE), var_type_53953  COMMA_SOURCE_FILE ("expression-primary.galgas", 1333)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1335)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_53953, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1336)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1336))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1336))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1336))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1334)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_55396 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_53815.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_55396->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_54711 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_54658 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_54658, extractedValue_name, var_objectIR_54711, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1338)) ;
        }
        var_parameterList_53729.addAssign_operation (enumerator_53815.current_mEffectiveParameterKind (HERE), enumerator_53815.current_mSelector (HERE), extensionGetter_type (var_objectIR_54711, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1348))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1348)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1350)), GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_54711, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1352)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_54711, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1353)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1353)), extensionGetter_location (var_objectIR_54711, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1354))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1353))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1351))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1349)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_56523 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_53815.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_56523->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_56523->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_55979 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_53772.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1361)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_55979, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1357)) ;
        GALGAS_objectIR var_expressionValue_56145 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_55979, extractedValue_endOfExp, var_expressionValue_56145, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1371)) ;
        }
        GALGAS_objectIR var_result_56172 = function_checkAssignmentCompatibility (var_expressionValue_56145, enumerator_53772.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1379)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1377)) ;
        var_parameterList_53729.addAssign_operation (enumerator_53815.current_mEffectiveParameterKind (HERE), enumerator_53815.current_mSelector (HERE), enumerator_53772.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1383))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1383)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 1384)), var_result_56172  COMMA_SOURCE_FILE ("expression-primary.galgas", 1384)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_57215 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_53815.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_57215->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_56643 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_56586 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_56586, extractedValue_name, var_objectIR_56643, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1386)) ;
        }
        var_parameterList_53729.addAssign_operation (enumerator_53815.current_mEffectiveParameterKind (HERE), enumerator_53815.current_mSelector (HERE), extensionGetter_type (var_objectIR_56643, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1393))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1393)) ;
        GALGAS_objectIR var_argumentIR_57015 = GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_56643, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1395)), GALGAS_lstring::constructor_new (extensionGetter_llvmName (var_objectIR_56643, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1396)), extensionGetter_location (var_objectIR_56643, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1396))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1396))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1394)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1398)), var_argumentIR_57015  COMMA_SOURCE_FILE ("expression-primary.galgas", 1398)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_59160 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_53815.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_59160->mAssociatedValue0 ;
        switch (constinArgument_inSelfType.enumValue ()) {
        case GALGAS_PLMType::kNotBuilt:
          break ;
        case GALGAS_PLMType::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1402)), GALGAS_string ("'self' is not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1402)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1404)), GALGAS_string ("a structure type is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 1404)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_arrayType:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1406)), GALGAS_string ("a structure type is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 1406)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_boolean:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1408)), GALGAS_string ("a structure type is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1408)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_staticInteger:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1410)), GALGAS_string ("a structure type is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 1410)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1412)), GALGAS_string ("a structure type is required here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 1412)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1414)), GALGAS_string ("a structure type is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 1414)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1416)), GALGAS_string ("a structure type is required here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1416)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_pointer:
          {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1418)), GALGAS_string ("a structure type is required here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 1418)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_integer:
          {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1420)), GALGAS_string ("a structure type is required here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1420)) ;
            var_parameterList_53729.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_structure:
          {
            const cEnumAssociatedValues_PLMType_structure * extractPtr_59150 = (const cEnumAssociatedValues_PLMType_structure *) (constinArgument_inSelfType.unsafePointer ()) ;
            const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_59150->mAssociatedValue1 ;
            GALGAS_objectIR var_propertyObject_58688 ;
            GALGAS_bool joker_58667 ; // Joker input parameter
            GALGAS_PLMType joker_58690_2 ; // Joker input parameter
            GALGAS_propertyAccessKind joker_58690_1 ; // Joker input parameter
            extractedValue_propertyMap.method_searchKey (extractedValue_name, joker_58667, var_propertyObject_58688, joker_58690_2, joker_58690_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1422)) ;
            GALGAS_objectIR var_fieldObjectReference_58792 ;
            {
            routine_getNewTempVariable (extensionGetter_type (var_propertyObject_58688, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1423)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1423)), ioArgument_ioTemporaries, var_fieldObjectReference_58792, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1423)) ;
            }
            {
            extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_58792, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1427)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1424)) ;
            }
            var_parameterList_53729.addAssign_operation (enumerator_53815.current_mEffectiveParameterKind (HERE), enumerator_53815.current_mSelector (HERE), extensionGetter_type (var_propertyObject_58688, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1429))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1429)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1431)), var_fieldObjectReference_58792  COMMA_SOURCE_FILE ("expression-primary.galgas", 1430)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_53772.gotoNextObject () ;
    enumerator_53815.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1437)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1437)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1438)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1438)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1438)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1438)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1439)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1438)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1438)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1439)), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 1438)) ;
  }else if (kBoolFalse == test_13) {
    cEnumerator_routineTypedSignature enumerator_59496 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_59525 (var_parameterList_53729, kENUMERATION_UP) ;
    while (enumerator_59496.hasCurrentObject () && enumerator_59525.hasCurrentObject ()) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_59496.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1442)).objectCompare (extensionGetter_key (enumerator_59525.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1442)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_59525.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1443)), GALGAS_string ("the actual parameter type is '").add_operation (extensionGetter_key (enumerator_59525.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1443)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1443)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1443)).add_operation (enumerator_59496.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1444)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1444)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1444)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 1443)) ;
      }
      GALGAS_string var_requiredPassingMode_59826 = extensionGetter_requiredActualPassingModeForSelector (enumerator_59496.current_mFormalArgumentPassingMode (HERE), enumerator_59496.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1446)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1446)) ;
      GALGAS_string var_testedPassingMode_59947 = extensionGetter_passingModeForActualSelector (enumerator_59525.current_mEffectiveParameterPassingMode (HERE), enumerator_59525.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1447)) ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_59826.objectCompare (var_testedPassingMode_59947)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_59525.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1449)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_59826, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1449)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1449)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 1449)) ;
      }
      enumerator_59496.gotoNextObject () ;
      enumerator_59525.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                              extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@checkInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_checkInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                         const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_2997 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 57)) ;
  GALGAS_objectIR var_expressionResult_3443 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("directive-check.galgas", 62)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_2997, var_expressionResult_3443, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 58)) ;
  const enumGalgasBool test_0 = extensionGetter_type (var_expressionResult_3443, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 73)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 73)).operator_not (SOURCE_FILE ("directive-check.galgas", 73)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 74)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3443, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 77)).operator_not (SOURCE_FILE ("directive-check.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 78)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_3826 ;
    GALGAS_PLMType joker_3803_1 ; // Joker input parameter
    var_expressionResult_3443.method_literalInteger (joker_3803_1, var_value_3826, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 80)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_3826.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 81)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 82)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_checkInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                extensionMethod_checkInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_analyze (defineExtensionMethod_checkInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 40)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                              extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@assignmentInstructionAST analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                              const GALGAS_PLMType constinArgument_inSelfType,
                                                              const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                              const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_mode constinArgument_inCurrentMode,
                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_PLMType var_targetType_3217 ;
  extensionMethod_type (object->mProperty_mTargetAST, constinArgument_inSelfType, ioArgument_ioUniversalMap, var_targetType_3217, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_objectIR var_sourceOperandPossibleReference_3717 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3217, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3717, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)) ;
  GALGAS_internalRepresentation var_internalRepresentation_4217 ;
  extensionMethod_analyzeLValueNoSelf (object->mProperty_mTargetAST, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_internalRepresentation_4217, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 78)) ;
  GALGAS_objectIR var_sourceOperand_4392 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_3717, object->mProperty_mTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 95)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 95)), var_sourceOperand_4392, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 92)) ;
  }
  GALGAS_objectIR var_result_4411 = function_checkAssignmentCompatibility (var_sourceOperand_4392, var_targetType_3217, object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 101)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 98)) ;
  GALGAS_lstring var_errorLocation_4602 = object->mProperty_mTargetAST.getter_mIdentifier (HERE) ;
  switch (var_internalRepresentation_4217.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_4878 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (var_internalRepresentation_4217.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_4878->mAssociatedValue0 ;
      GALGAS_objectIR var_objectIR_4783 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_4724 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4724, extractedValue_identifier, var_objectIR_4783, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 107)) ;
      }
      {
      extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_objectIR_4783, var_errorLocation_4602.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 108)), var_result_4411, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference * extractPtr_5030 = (const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference *) (var_internalRepresentation_4217.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5030->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_5030->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreVolatileRegister (ioArgument_ioInstructionGenerationList, extractedValue_type, extractedValue_address.getter_bigint (SOURCE_FILE ("instruction-assignment.galgas", 110)), var_result_4411, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference * extractPtr_5194 = (const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference *) (var_internalRepresentation_4217.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5194->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_5194->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, extractedValue_type, extractedValue_llvmName, var_result_4411, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_internalRepresentation_universalReference * extractPtr_5347 = (const cEnumAssociatedValues_internalRepresentation_universalReference *) (var_internalRepresentation_4217.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5347->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_5347->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreToUniversalReference (ioArgument_ioInstructionGenerationList, extractedValue_llvmName, extractedValue_type, var_result_4411, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_6130 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (var_internalRepresentation_4217.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6130->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_6130->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)).getter_isStructure (SOURCE_FILE ("instruction-assignment.galgas", 116)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_propertyMap var_propertyMap_5560 ;
        GALGAS_lstring joker_5516_1 ; // Joker input parameter
        GALGAS_propertyList joker_5562_3 ; // Joker input parameter
        GALGAS_PLMTypeFlags joker_5562_2 ; // Joker input parameter
        GALGAS_string joker_5562_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117)).method_structure (joker_5516_1, var_propertyMap_5560, joker_5562_3, joker_5562_2, joker_5562_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117)) ;
        GALGAS_PLMType var_type_5622 ;
        GALGAS_bool joker_5610_2 ; // Joker input parameter
        GALGAS_objectIR joker_5610_1 ; // Joker input parameter
        GALGAS_propertyAccessKind joker_5624 ; // Joker input parameter
        var_propertyMap_5560.method_searchKey (extractedValue_propertyName, joker_5610_2, joker_5610_1, var_type_5622, joker_5624, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 118)) ;
        GALGAS_objectIR var_targetRef_5646 = GALGAS_objectIR::constructor_temporaryReference (var_type_5622, GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-assignment.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 121)), extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 121))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 121))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 119)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 123)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_targetRef_5646, extractedValue_currentPointerIR, extractedValue_propertyName.getter_string (SOURCE_FILE ("instruction-assignment.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 124)) ;
        }
        {
        extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetRef_5646, var_errorLocation_4602.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 125)), var_result_4411, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 125)) ;
        }
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 127)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 127)) ;
      }
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                extensionMethod_assignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyze (defineExtensionMethod_assignmentInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2723 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 68)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2723 COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@varInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_lstring var_typeName_3145 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 77)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3145 COMMA_SOURCE_FILE ("instruction-var.galgas", 78)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                                                              extensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                     const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                     const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 99)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 100)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 100)) ;
  }
  GALGAS_PLMType var_targetType_4310 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_4952 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4310, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_4952, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 103)) ;
  GALGAS_objectIR var_expressionResult_5102 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_4952, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 120)), var_expressionResult_5102, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 117)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_4310.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 124)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_4310 = extensionGetter_type (var_expressionResult_5102, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  }
  GALGAS_objectIR var_result_5228 = function_checkAssignmentCompatibility (var_expressionResult_5102, var_targetType_4310, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 127)) ;
  GALGAS_lstring var_plmName_5475 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 135)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 135)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 135))  COMMA_SOURCE_FILE ("instruction-var.galgas", 135)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 136)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5612 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5612, object->mProperty_mVarName, extensionGetter_type (var_result_5228, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 137)), var_plmName_5475, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 137)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 137)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_plmName_5475.getter_string (SOURCE_FILE ("instruction-var.galgas", 139)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_5228, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139))  COMMA_SOURCE_FILE ("instruction-var.galgas", 139)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_plmName_5475.getter_string (SOURCE_FILE ("instruction-var.galgas", 141)), extensionGetter_type (var_result_5228, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 142)), var_result_5228, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 140)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionWithAssignmentAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                extensionMethod_varInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_analyze (defineExtensionMethod_varInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@varInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                       const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                       const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                       const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_PLMType var_targetType_6731 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 162)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 162)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_6731, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 164)).operator_not (SOURCE_FILE ("instruction-var.galgas", 164)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 165)), GALGAS_string ("$").add_operation (extensionGetter_key (var_targetType_6731, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 165)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 165)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 165)) ;
  }
  GALGAS_lstring var_plmName_6972 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 168)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 168)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 168))  COMMA_SOURCE_FILE ("instruction-var.galgas", 168)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 169)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7109 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7109, object->mProperty_mVarName, var_targetType_6731, var_plmName_6972, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 170)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 170)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_plmName_6972.getter_string (SOURCE_FILE ("instruction-var.galgas", 172)), extensionGetter_llvmTypeName (var_targetType_6731, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172))  COMMA_SOURCE_FILE ("instruction-var.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                                extensionMethod_varInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_analyze (defineExtensionMethod_varInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@letInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2148 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2148 COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@letInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                     const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                     const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-let.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 73)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  }
  GALGAS_PLMType var_targetType_3402 = temp_0 ;
  GALGAS_objectIR var_expressionResultPossibleReference_4054 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3402, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4054, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 76)) ;
  GALGAS_objectIR var_expressionResult_4219 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4054, object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 93)), var_expressionResult_4219, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 90)) ;
  }
  GALGAS_objectIR var_result_4266 = function_checkAssignmentCompatibility (var_expressionResult_4219, var_targetType_3402, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 97)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_4266, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).operator_not (SOURCE_FILE ("instruction-let.galgas", 105)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 106)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_4266, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
    var_result_4266.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_plmName_4637 = GALGAS_lstring::constructor_new (object->mProperty_mConstantName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)), object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 109))  COMMA_SOURCE_FILE ("instruction-let.galgas", 109)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 110)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_4266, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (var_plmName_4637.getter_string (SOURCE_FILE ("instruction-let.galgas", 112)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_4266, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112))  COMMA_SOURCE_FILE ("instruction-let.galgas", 112)) ;
    GALGAS_objectIR var_localConstant_4896 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_4266, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), var_plmName_4637  COMMA_SOURCE_FILE ("instruction-let.galgas", 113)) ;
    {
    extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_localConstant_4896, object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 114)), var_result_4266, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5095 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5095, object->mProperty_mConstantName, extensionGetter_type (var_result_4266, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 116)), var_plmName_4637, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionWithAssignmentAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                extensionMethod_letInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_analyze (defineExtensionMethod_letInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@letInstructionNOP noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * /* inObject */,
                                                                                     GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_letInstructionNOP.mSlotID,
                                                              extensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@letInstructionNOP analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionNOP_analyze (const cPtr_instructionAST * /* inObject */,
                                                       const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                       const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                       const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                       const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                       GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 49)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionNOP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_letInstructionNOP.mSlotID,
                                extensionMethod_letInstructionNOP_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionNOP_analyze (defineExtensionMethod_letInstructionNOP_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                                              extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@assertInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                          const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                          const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 56)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3159 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 60)) ;
  GALGAS_objectIR var_expressionValue_3608 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-assert.galgas", 65)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3159, var_expressionValue_3608, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 61)) ;
  const enumGalgasBool test_2 = extensionGetter_type (var_expressionValue_3608, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 76)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 76)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 76)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3608, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 80)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 81)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 84)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_instructionGenerationList_3159, var_expressionValue_3608  COMMA_SOURCE_FILE ("instruction-assert.galgas", 85))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 85)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                extensionMethod_assertInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_analyze (defineExtensionMethod_assertInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@assertInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)).add_operation (object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 113)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                            extensionMethod_assertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_llvmInstructionCode (defineExtensionMethod_assertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@assertInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 124)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                                extensionMethod_assertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_enterAccessibleEntities (defineExtensionMethod_assertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@panicInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                                              extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@panicInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                         const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 54)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3171 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 58)) ;
  GALGAS_objectIR var_result_3639 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 63)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3171, var_result_3639, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 59)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3171.getter_length (SOURCE_FILE ("instruction-panic.galgas", 75)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3639.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 76)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 76)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_3639, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_3981 ;
    GALGAS_bigint var_max_3994 ;
    GALGAS_bool joker_3996_3 ; // Joker input parameter
    GALGAS_uint joker_3996_2 ; // Joker input parameter
    GALGAS_string joker_3996_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)).method_integer (var_min_3981, var_max_3994, joker_3996_3, joker_3996_2, joker_3996_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
    GALGAS_bigint var_throwValue_4052 ;
    GALGAS_PLMType joker_4028_1 ; // Joker input parameter
    var_result_3639.method_literalInteger (joker_4028_1, var_throwValue_4052, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_4052.objectCompare (var_min_3981)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_4052.objectCompare (var_max_3994)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.getter_mPanicCodeType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 84)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_throwValue_4052  COMMA_SOURCE_FILE ("instruction-panic.galgas", 85))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                extensionMethod_panicInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicInstructionAST_analyze (defineExtensionMethod_panicInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@panicInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionIR * object = (const cPtr_panicInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionIR) ;
  GALGAS_uint var_staticStringIndex_5346 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 110)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 110)), var_staticStringIndex_5346, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_5346.getter_string (SOURCE_FILE ("instruction-panic.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                            extensionMethod_panicInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicInstructionIR_llvmInstructionCode (defineExtensionMethod_panicInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@panicInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                        GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                                extensionMethod_panicInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicInstructionIR_enterAccessibleEntities (defineExtensionMethod_panicInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mThenInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mElseInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                              extensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@ifInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_PLMType constinArgument_inSelfType,
                                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_objectIR var_testResultPossibleReference_5160 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-if.galgas", 116)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResultPossibleReference_5160, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 112)) ;
  GALGAS_objectIR var_testResult_5326 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResultPossibleReference_5160, object->mProperty_mTestExpressionEndLocation, var_testResult_5326, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 126)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testResult_5326, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 133)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testResult_5326, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 134)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_5326, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)).operator_not (SOURCE_FILE ("instruction-if.galgas", 135)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_5326, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 137)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
      }
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5848 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5848, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_6012 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 143)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_6012, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 144)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6697 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 160)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6697, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 161)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7314 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7314, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 176)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_5326, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_6012, var_elseInstructionGenerationList_6697  COMMA_SOURCE_FILE ("instruction-if.galgas", 179))  COMMA_SOURCE_FILE ("instruction-if.galgas", 179)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                extensionMethod_ifInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_analyze (defineExtensionMethod_ifInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@ifInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  GALGAS_string var_labelTrue_8480 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).getter_string (SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  GALGAS_string var_labelFalse_8543 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GALGAS_string var_labelEnd_8605 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (var_labelTrue_8480, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (var_labelFalse_8543, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8480.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 210)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8605, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8543.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 214)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8605, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8605.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 218)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                            extensionMethod_ifInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_llvmInstructionCode (defineExtensionMethod_ifInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@ifInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 227)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                                extensionMethod_ifInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_enterAccessibleEntities (defineExtensionMethod_ifInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@syncInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  cEnumerator_syncInstructionBranchListAST enumerator_5455 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_5455.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5455.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 143)) ;
    enumerator_5455.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                                              extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@syncInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_PLMType constinArgument_inSelfType,
                                                        const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                        const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_mode constinArgument_inCurrentMode,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_syncInstructionBranchListIR var_onInstructionBranchListIR_6628 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 164)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_6699 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_6699.hasCurrentObject ()) {
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_6724 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6724, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 166)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR_6854 ;
    switch (enumerator_6699.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandAST_synchronization * extractPtr_8022 = (const cEnumAssociatedValues_guardedCommandAST_synchronization *) (enumerator_6699.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_8022->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_8022->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_8022->mAssociatedValue2 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_8022->mAssociatedValue3 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_7033 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 172)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_7631 ;
        GALGAS_lstring var_guardMangledName_7687 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_7033, var_guardEffectiveParameterListIR_7631, var_guardMangledName_7687, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 173)) ;
        }
        var_guardedCommandIR_6854 = GALGAS_guardedCommandIR::constructor_synchronization (extractedValue_isWhileCommand, var_guardMangledName_7687.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_7033, var_guardEffectiveParameterListIR_7631  COMMA_SOURCE_FILE ("instruction-sync.galgas", 189)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_9076 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6699.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_9076->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_9076->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_9076->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_8141 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 197)) ;
        GALGAS_objectIR var_sourceOperand_8643 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 202)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8141, var_sourceOperand_8643, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 198)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_sourceOperand_8643, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 212)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 212)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 213)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_8643, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 214)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 215)) ;
          }
        }
        var_guardedCommandIR_6854 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_8141, var_sourceOperand_8643  COMMA_SOURCE_FILE ("instruction-sync.galgas", 217)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_11188 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6699.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_11188->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_11188->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_11188->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_11188->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_11188->mAssociatedValue4 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_11188->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_9255 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 223)) ;
        GALGAS_objectIR var_boolExpressionResult_9766 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 228)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_9255, var_boolExpressionResult_9766, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 224)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_boolExpressionResult_9766, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 238)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 238)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 239)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = extensionGetter_isStatic (var_boolExpressionResult_9766, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 240)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 241)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_10084 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 243)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_10682 ;
        GALGAS_lstring var_guardMangledName_10738 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_10084, var_guardEffectiveParameterListIR_10682, var_guardMangledName_10738, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 244)) ;
        }
        var_guardedCommandIR_6854 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_9255, var_boolExpressionResult_9766, var_guardMangledName_10738.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_10084, var_guardEffectiveParameterListIR_10682  COMMA_SOURCE_FILE ("instruction-sync.galgas", 260)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_11275 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 271)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_6699.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_6699.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_11275, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 272)) ;
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_11907 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_11907, enumerator_6699.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 287)) ;
    }
    var_onInstructionBranchListIR_6628.addAssign_operation (var_guardedCommandIR_6854, var_branchInstructionGenerationList_11275  COMMA_SOURCE_FILE ("instruction-sync.galgas", 290)) ;
    enumerator_6699.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_onInstructionBranchListIR_6628  COMMA_SOURCE_FILE ("instruction-sync.galgas", 295))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 295)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                extensionMethod_syncInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncInstructionAST_analyze (defineExtensionMethod_syncInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'analyzeGuardCall'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeGuardCall (const GALGAS_PLMType constinArgument_inSelfType,
                               const GALGAS_lstring constinArgument_inReceiverName,
                               const GALGAS_lstring constinArgument_inGuardName,
                               const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                               const GALGAS_semanticContext constinArgument_inContext,
                               const GALGAS_mode constinArgument_inRequiredMode,
                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                               GALGAS_allocaList & ioArgument_ioAllocaList,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 316)) ;
  GALGAS_PLMType var_receiverType_13191 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectIR var_objectIR_13308 ;
    callExtensionMethod_searchValuedObject ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), constinArgument_inReceiverName, var_objectIR_13308, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 319)) ;
    var_receiverType_13191 = extensionGetter_type (var_objectIR_13308, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 320)) ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 321)), var_objectIR_13308  COMMA_SOURCE_FILE ("instruction-sync.galgas", 321)) ;
  }else if (kBoolFalse == test_0) {
    var_receiverType_13191 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 323)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("$").add_operation (extensionGetter_key (var_receiverType_13191, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 326)) ;
  }
  outArgument_outGuardMangledName = function_routineMangledNameFromCall (temp_1, constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 325)) ;
  GALGAS_bool var_isPublic_13716 ;
  GALGAS_routineTypedSignature var_formalSignature_13764 ;
  constinArgument_inContext.getter_mGuardMapForContext (HERE).method_searchKey (outArgument_outGuardMangledName, var_isPublic_13716, var_formalSignature_13764, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 330)) ;
  const enumGalgasBool test_3 = var_isPublic_13716.operator_not (SOURCE_FILE ("instruction-sync.galgas", 336)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_declarationFile_13912 = constinArgument_inContext.getter_mGuardMapForContext (HERE).getter_locationForKey (outArgument_outGuardMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 338)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 338)) ;
      GALGAS_string var_invocationFile_14021 = constinArgument_inGuardName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 339)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_invocationFile_14021.objectCompare (var_declarationFile_13912)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 341)), GALGAS_string ("this guard is not public"), fixItArray6  COMMA_SOURCE_FILE ("instruction-sync.galgas", 341)) ;
      }
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 344)), GALGAS_string ("this guard is not public"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 344)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 348)) ;
  }
  {
  routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_formalSignature_13764, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 350)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@syncInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mUsesGuards = GALGAS_bool (true) ;
  GALGAS_string var_startLabel_17187 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 413)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_17187, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 416)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 416)) ;
  GALGAS_string var_startLabelName_17351 = var_startLabel_17187.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 417)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_17351.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 418)) ;
  GALGAS_string var_exitLabelName_17435 = var_startLabel_17187.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 419)) ;
  GALGAS_string var_selectLabelName_17480 = var_startLabel_17187.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 420)) ;
  GALGAS_string var_errorLabelName_17526 = var_startLabel_17187.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 421)) ;
  GALGAS_string var_currentStartBranchLabel_17580 = var_startLabelName_17351 ;
  cEnumerator_syncInstructionBranchListIR enumerator_17640 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_17603 ((uint32_t) 0) ;
  while (enumerator_17640.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_17675 = GALGAS_string ("%").add_operation (var_startLabel_17187, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 424)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 424)).add_operation (index_17603.getter_string (SOURCE_FILE ("instruction-sync.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 424)) ;
    GALGAS_bool var_isWhileGuardedCommand_17745 ;
    switch (enumerator_17640.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_18679 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_17640.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_18679->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_18679->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_18679->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_18679->mAssociatedValue4 ;
        var_isWhileGuardedCommand_17745 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 429)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_17675, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 431)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_18230 (extractedValue_effectiveParameterListIR, kENUMERATION_UP) ;
        while (enumerator_18230.hasCurrentObject ()) {
          switch (enumerator_18230.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18230.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)).add_operation (extensionGetter_llvmName (enumerator_18230.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18230.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)).add_operation (extensionGetter_llvmName (enumerator_18230.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18230.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 439)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 439)).add_operation (extensionGetter_llvmName (enumerator_18230.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 439)) ;
            }
            break ;
          }
          if (enumerator_18230.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 442)) ;
          }
          enumerator_18230.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_19497 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_17640.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_19497->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_19497->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_19497->mAssociatedValue2 ;
        var_isWhileGuardedCommand_17745 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 447)) ;
        GALGAS_string var_acceptedLabelName_18947 = var_startLabel_17187.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)).add_operation (index_17603.getter_string (SOURCE_FILE ("instruction-sync.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)) ;
        GALGAS_string var_rejectedLabelName_19010 = var_startLabel_17187.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)).add_operation (index_17603.getter_string (SOURCE_FILE ("instruction-sync.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)).add_operation (var_acceptedLabelName_18947, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)).add_operation (var_rejectedLabelName_19010, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_18947.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_19010, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_19010.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_17675, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_21228 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_17640.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_21228->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_21228->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_21228->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_21228->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_21228->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_21228->mAssociatedValue6 ;
        var_isWhileGuardedCommand_17745 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)) ;
        GALGAS_string var_testOkLabelName_19804 = var_startLabel_17187.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 459)).add_operation (index_17603.getter_string (SOURCE_FILE ("instruction-sync.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 459)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 459)) ;
        GALGAS_string var_testExitLabelName_19875 = var_startLabel_17187.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 460)).add_operation (index_17603.getter_string (SOURCE_FILE ("instruction-sync.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 460)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 460)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)).add_operation (var_testOkLabelName_19804, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)).add_operation (var_testExitLabelName_19875, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_19804.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 462)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)) ;
        GALGAS_string var_guardAcceptationLabelName_20230 = var_startLabel_17187.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)).add_operation (index_17603.getter_string (SOURCE_FILE ("instruction-sync.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_20230, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_20456 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_20456.hasCurrentObject ()) {
          switch (enumerator_20456.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20456.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)).add_operation (extensionGetter_llvmName (enumerator_20456.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20456.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (extensionGetter_llvmName (enumerator_20456.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20456.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (extensionGetter_llvmName (enumerator_20456.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)) ;
            }
            break ;
          }
          if (enumerator_20456.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)) ;
          }
          enumerator_20456.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_19875, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_19875.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_17675, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_20230, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (var_testOkLabelName_19804, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_17580, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_21262 = var_startLabel_17187.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)).add_operation (index_17603.getter_string (SOURCE_FILE ("instruction-sync.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)) ;
    GALGAS_string var_rejectedLabelName_21322 = var_startLabel_17187.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)).add_operation (index_17603.getter_string (SOURCE_FILE ("instruction-sync.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_17675, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)).add_operation (var_acceptedLabelName_21262, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)).add_operation (var_rejectedLabelName_21322, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_21262.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)) ;
    extensionMethod_instructionListLLVMCode (enumerator_17640.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 490)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_17745.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_17351 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_17435 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21322.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 492)) ;
    var_currentStartBranchLabel_17580 = var_rejectedLabelName_21322 ;
    enumerator_17640.gotoNextObject () ;
    index_17603.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 423)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_17480, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_17480, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (var_startLabelName_17351, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (var_errorLabelName_17526, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_17526.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_17435, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_22514 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 502)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 502)), var_staticStringIndex_22514, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_22514.getter_string (SOURCE_FILE ("instruction-sync.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_17435.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                            extensionMethod_syncInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncInstructionIR_llvmInstructionCode (defineExtensionMethod_syncInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@syncInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                       GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  GALGAS_uint var_branchCount_23167 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 519)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_23167)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_23167 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_23352 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_23352.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_23352.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)) ;
    switch (enumerator_23352.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_23906 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_23352.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_23906->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_23906->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_23906->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_24073 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_23352.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24073->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_24608 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_23352.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24608->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24608->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_24608->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24608->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 535)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 536)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)) ;
        }
      }
      break ;
    }
    enumerator_23352.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                                extensionMethod_syncInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncInstructionIR_enterAccessibleEntities (defineExtensionMethod_syncInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                              extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@whileInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3479 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 70)) ;
  GALGAS_objectIR var_testValuePossibleReference_3950 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-while.galgas", 75)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3479, var_testValuePossibleReference_3950, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)) ;
  GALGAS_objectIR var_testValue_4110 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testValuePossibleReference_3950, object->mProperty_mEndOf_5F_test_5F_expression, var_testValue_4110, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 85)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testValue_4110, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 92)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 92)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_4110, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 93)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_4110, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 94)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 95)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_4485 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 98)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4510 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4510, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 99)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4485, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 101)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5194 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5194, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 116)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 120)), var_testInstructionGenerationList_3479, var_testValue_4110, var_instructionGenerationList_4485  COMMA_SOURCE_FILE ("instruction-while.galgas", 119))  COMMA_SOURCE_FILE ("instruction-while.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                extensionMethod_whileInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_analyze (defineExtensionMethod_whileInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@whileInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  GALGAS_string var_labelTest_6381 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  GALGAS_string var_labelLoop_6432 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  GALGAS_string var_labelEnd_6482 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6381, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6381.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 149)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_m_5F_while_5F_Expression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (var_labelLoop_6432, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (var_labelEnd_6482, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6432.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6381, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6482.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                            extensionMethod_whileInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineExtensionMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@whileInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 164)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 165)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                                extensionMethod_whileInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_enterAccessibleEntities (defineExtensionMethod_whileInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                              extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@forInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                       const GALGAS_PLMType constinArgument_inSelfType,
                                                       const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                       const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedObjectPointer_4359 ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4273 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4273, object->mProperty_mIteratedObject, var_iteratedObjectPointer_4359, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 97)) ;
  }
  GALGAS_PLMType var_iteratedTypeKind_4398 = extensionGetter_type (var_iteratedObjectPointer_4359, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
  GALGAS_PLMType var_iteratedElementType_4491 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4398.objectCompare (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 102)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_iteratedElementType_4491 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 103)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 103)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_iteratedTypeKind_4398.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 104)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_4729 ; // Joker input parameter
      GALGAS_bigint joker_4765_4 ; // Joker input parameter
      GALGAS_constantMap joker_4765_3 ; // Joker input parameter
      GALGAS_PLMTypeFlags joker_4765_2 ; // Joker input parameter
      GALGAS_string joker_4765_1 ; // Joker input parameter
      var_iteratedTypeKind_4398.method_arrayType (joker_4729, var_iteratedElementType_4491, joker_4765_4, joker_4765_3, joker_4765_2, joker_4765_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 105)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 107)), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
      var_iteratedElementType_4491.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_plmName_4882 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 110))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  ioArgument_ioAllocaList.addAssign_operation (var_plmName_4882.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 112)), extensionGetter_llvmTypeName (var_iteratedElementType_4491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 112))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 112)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5112 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5256 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5256, object->mProperty_mVarName, var_iteratedElementType_4491, var_plmName_4882, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 116)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5399 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 118)) ;
  GALGAS_objectIR var_whileExpressionResult_5864 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-for-in-do.galgas", 123)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5399, var_whileExpressionResult_5864, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 119)) ;
  const enumGalgasBool test_3 = extensionGetter_type (var_whileExpressionResult_5864, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 134)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 134)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bool test_5 = object->mProperty_mStaticWhileExpression ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_isStatic (var_whileExpressionResult_5864, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 136)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 137)) ;
    }else if (kBoolFalse == test_6) {
      GALGAS_bool test_8 = extensionGetter_isStatic (var_whileExpressionResult_5864, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6445 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 142)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_for_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6445, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 143)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7027 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7027, object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4398.objectCompare (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 159)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_plmName_4882.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 161)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_4359, var_whileExpression_5F_GenerationList_5399, var_whileExpressionResult_5864, var_doInstructionList_5F_GenerationList_6445  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = var_iteratedTypeKind_4398.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 168)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_PLMType var_elementType_7506 ;
      GALGAS_bigint var_size_7521 ;
      GALGAS_lstring joker_7476 ; // Joker input parameter
      GALGAS_constantMap joker_7523_3 ; // Joker input parameter
      GALGAS_PLMTypeFlags joker_7523_2 ; // Joker input parameter
      GALGAS_string joker_7523_1 ; // Joker input parameter
      var_iteratedTypeKind_4398.method_arrayType (joker_7476, var_elementType_7506, var_size_7521, joker_7523_3, joker_7523_2, joker_7523_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
      GALGAS_stringset var_invokedFunctionSet_7560 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 170)) ;
      const enumGalgasBool test_13 = ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 171)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_7560, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_plmName_4882.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 175)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4359, var_whileExpression_5F_GenerationList_5399, var_whileExpressionResult_5864, var_doInstructionList_5F_GenerationList_6445, var_elementType_7506, var_size_7521.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 182)), var_invokedFunctionSet_7560  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 174))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 174)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                extensionMethod_forInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_analyze (defineExtensionMethod_forInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnArrayIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  GALGAS_string var_elementTypeLLVMName_10151 = extensionGetter_llvmTypeName (object->mProperty_mElementType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 241)) ;
  GALGAS_string var_listTypeLLVMName_10204 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)).add_operation (var_elementTypeLLVMName_10151, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)) ;
  GALGAS_string var_locationIndex_10279 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 243)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 243)) ;
  GALGAS_string var_startLabel_10355 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 245)) ;
  GALGAS_string var_testLabel_10408 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 246)) ;
  GALGAS_string var_whileLabel_10461 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 247)) ;
  GALGAS_string var_nextLabel_10514 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 248)) ;
  GALGAS_string var_loopVar_10564 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 249)) ;
  GALGAS_string var_loopLabel_10610 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 250)) ;
  GALGAS_string var_endLabel_10661 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 251)) ;
  GALGAS_string var_indexVar_10714 = GALGAS_string ("for.index.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  GALGAS_string var_ptrVar_10759 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)) ;
  GALGAS_string var_currentValue_10808 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_10279, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_10355, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10355.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10759, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)).add_operation (var_listTypeLLVMName_10204, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_10204, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10408, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10408.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10759, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_elementTypeLLVMName_10151, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_ptrVar_10759, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_startLabel_10355, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_ptrVar_10759, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)).add_operation (var_nextLabel_10514, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10714, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (var_startLabel_10355, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (var_indexVar_10714, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (var_nextLabel_10514, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10564, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)).add_operation (var_indexVar_10714, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10564, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (var_whileLabel_10461, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (var_endLabel_10661, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10461.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_loopLabel_10610, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_endLabel_10661, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10610.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_10808, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)).add_operation (var_elementTypeLLVMName_10151, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10151.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_ptrVar_10759, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_10151, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (var_currentValue_10808, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (var_elementTypeLLVMName_10151, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10514, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10514.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10759, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)).add_operation (var_elementTypeLLVMName_10151, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10151.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)).add_operation (var_ptrVar_10759, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10714, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (var_indexVar_10714, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10408, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10661.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                            extensionMethod_forInstructionOnArrayIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                             GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 317)) ;
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 318)) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mIteratedObjectName.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 319))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                                extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@forInstructionOnStringIR llvmInstructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnStringIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnStringIR * object = (const cPtr_forInstructionOnStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnStringIR) ;
  GALGAS_string var_startLabel_14604 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)) ;
  GALGAS_string var_testLabel_14669 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)) ;
  GALGAS_string var_loopLabel_14733 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)) ;
  GALGAS_string var_whileLabel_14798 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)) ;
  GALGAS_string var_nextLabel_14863 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 346)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 346)) ;
  GALGAS_string var_endLabel_14926 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)) ;
  GALGAS_string var_ptrVar_14987 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 348)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 348)) ;
  GALGAS_string var_currentVar_15048 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)) ;
  GALGAS_string var_stringLLVMTypeName_15118 = extensionGetter_llvmTypeName (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_14604, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14604.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (var_stringLLVMTypeName_15118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (var_stringLLVMTypeName_15118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14669, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_14669.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).add_operation (var_stringLLVMTypeName_15118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).add_operation (GALGAS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).add_operation (var_ptrVar_14987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14604.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).add_operation (var_ptrVar_14987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).add_operation (var_nextLabel_14863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15048, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)).add_operation (GALGAS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)).add_operation (var_stringLLVMTypeName_15118, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)).add_operation (var_ptrVar_14987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15048, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 363)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 363)).add_operation (var_currentVar_15048, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 363)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 363)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_15048, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (var_endLabel_14926, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (var_whileLabel_14798, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_14798.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 369)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (var_loopLabel_14733, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (var_endLabel_14926, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_14733.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_15048, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_14863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_14863.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_14987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14669, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 384)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_14926.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnStringIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnStringIR.mSlotID,
                                            extensionMethod_forInstructionOnStringIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnStringIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnStringIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@forInstructionOnStringIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnStringIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnStringIR * object = (const cPtr_forInstructionOnStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnStringIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnStringIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnStringIR.mSlotID,
                                                extensionMethod_forInstructionOnStringIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnStringIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnStringIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@forLowerUpperBoundInstructionAST noteInstructionTypesInPrecedenceGraph'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2812 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2812 COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 68)) ;
    }
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                                              extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@forLowerUpperBoundInstructionAST analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                      const GALGAS_PLMType constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_PLMType var_type_4213 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
  switch (var_type_4213.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_boolean:
  case GALGAS_PLMType::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 107)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 107)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 109)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 109)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      const cEnumAssociatedValues_PLMType_integer * extractPtr_8581 = (const cEnumAssociatedValues_PLMType_integer *) (var_type_4213.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8581->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8581->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8581->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8581->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResultPossibleReference_5620 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4213, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResultPossibleReference_5620, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5843 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResultPossibleReference_5620, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, var_lowerBoundExpressionResult_5843, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 128)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResultPossibleReference_6360 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4213, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResultPossibleReference_6360, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 134)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_6583 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResultPossibleReference_6360, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, var_upperBoundExpressionResult_6583, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 148)) ;
      }
      GALGAS_objectIR var_lowerBound_6640 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5843, var_type_4213, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 155)) ;
      GALGAS_objectIR var_upperBound_6864 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6583, var_type_4213, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_7098 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7098, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)) ;
      }
      GALGAS_lstring var_enumeratedVarLLVMName_7193 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_7193.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)), extensionGetter_llvmTypeName (var_type_4213, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7531 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7531, object->mProperty_mVarName, var_type_4213, var_enumeratedVarLLVMName_7193, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7680 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7680, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_8284 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8284, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName_7193.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 196)), var_type_4213, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_6640, var_upperBound_6864, var_instructionGenerationList_7680  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 195))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 195)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                extensionMethod_forLowerUpperBoundInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_analyze (defineExtensionMethod_forLowerUpperBoundInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@forLowerUpperBoundInstructionIR llvmInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  GALGAS_string var_llvmType_9645 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  GALGAS_string var_llvmVarName_9686 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  GALGAS_string var_testLabel_9741 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  GALGAS_string var_loopLabel_9804 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  GALGAS_string var_endLabel_9866 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  GALGAS_string var_testResult_9930 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  GALGAS_string var_loadedVarName_10005 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  GALGAS_string var_currentVarName_10082 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
  GALGAS_string var_nextVarName_10157 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmVarName_9686, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9741, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9741.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_10005, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (var_llvmVarName_9686, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9930, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (var_loadedVarName_10005, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9930, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (var_loopLabel_9804, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (var_endLabel_9866, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9804.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_10082, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmVarName_9686, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_10157, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (var_currentVarName_10082, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (var_nextVarName_10157, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (var_llvmType_9645, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (var_llvmVarName_9686, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9741, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9866.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 258)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                            extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@forLowerUpperBoundInstructionIR enterAccessibleEntities'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                                extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@procedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 62)) ;
  cEnumerator_effectiveArgumentListAST enumerator_3034 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_3034.hasCurrentObject ()) {
    switch (enumerator_3034.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3264 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3034.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3264->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 68)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 68)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3357 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3034.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3357->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 70)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_3034.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                                              extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@standAloneProcedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_3720 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_3720.hasCurrentObject ()) {
    switch (enumerator_3720.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3950 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3720.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3950->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 85)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 85)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4043 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3720.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4043->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 87)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_3720.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                                              extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@standAloneProcedureCallInstructionAST analyze'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standAloneProcedureCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                           const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                           const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  GALGAS_lstring var_calledRoutineSignature_6082 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 135)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_6317 ;
  GALGAS_routineDescriptor var_routineDescriptor_6363 ;
  GALGAS_location var_keyLocation_6401 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), object->mProperty_mSandAloneRoutineName, var_calledRoutineSignature_6082, var_LLVMInvocationRoutineName_6317, var_routineDescriptor_6363, var_keyLocation_6401, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 137)) ;
  GALGAS_lstring var_routineMangledName_6469 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 145)) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_6469 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 151)) ;
  }
  GALGAS_calleeKindIR var_routineKindIR_6730 = function_checkMode (constinArgument_inCurrentMode, extensionGetter_executionMode (var_routineDescriptor_6363.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 155)), var_routineDescriptor_6363.getter_mRoutineKind (HERE), object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 153)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_7019 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 160)) ;
  {
  routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_routineDescriptor_6363.getter_mSignature (HERE), object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_7019, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 161)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 180)), var_routineMangledName_6469, var_LLVMInvocationRoutineName_6317, var_routineKindIR_6730, var_effectiveParameterListIR_7019  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 178))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                extensionMethod_standAloneProcedureCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_analyze (defineExtensionMethod_standAloneProcedureCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@procedureCallInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procedureCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_PLMType constinArgument_inSelfType,
                                                                 const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                 const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode constinArgument_inCurrentMode,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_objectIR var_currentObject_8767 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 208)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 208)) ;
      var_currentObject_8767.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_currentObject_8767 = GALGAS_objectIR::constructor_temporaryReference (constinArgument_inSelfType, GALGAS_lstring::constructor_new (GALGAS_string ("%self"), object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 210))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 210)) ;
    }
  }else if (kBoolFalse == test_0) {
    callExtensionMethod_searchValuedObject ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), object->mProperty_mTargetAST.getter_mIdentifier (HERE), var_currentObject_8767, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 213)) ;
  }
  const enumGalgasBool test_3 = extensionGetter_type (var_currentObject_8767, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 216)).getter_isStructure (SOURCE_FILE ("instruction-procedure-call.galgas", 216)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 216)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 217)), GALGAS_string ("receiver has no property"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 217)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_propertyMap var_propertyMap_9471 ;
    GALGAS_lstring joker_9431_1 ; // Joker input parameter
    GALGAS_propertyList joker_9473_3 ; // Joker input parameter
    GALGAS_PLMTypeFlags joker_9473_2 ; // Joker input parameter
    GALGAS_string joker_9473_1 ; // Joker input parameter
    extensionGetter_type (var_currentObject_8767, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 220)).method_structure (joker_9431_1, var_propertyMap_9471, joker_9473_3, joker_9473_2, joker_9473_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 220)) ;
    GALGAS_accessInAssignmentListAST var_accessList_9569 = object->mProperty_mTargetAST.getter_mAccessList (HERE) ;
    GALGAS_accessInAssignmentAST var_lastAccess_9636 ;
    {
    var_accessList_9569.setter_popLast (var_lastAccess_9636, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 223)) ;
    }
    cEnumerator_accessInAssignmentListAST enumerator_9695 (var_accessList_9569, kENUMERATION_UP) ;
    while (enumerator_9695.hasCurrentObject ()) {
      switch (enumerator_9695.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_10614 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_9695.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_10614->mAssociatedValue0 ;
          GALGAS_bool var_isPublic_9856 ;
          GALGAS_objectIR var_propertyObject_9896 ;
          GALGAS_PLMType var_type_9925 ;
          GALGAS_propertyAccessKind var_propertyAccess_9981 ;
          var_propertyMap_9471.method_searchKey (extractedValue_propertyName, var_isPublic_9856, var_propertyObject_9896, var_type_9925, var_propertyAccess_9981, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 228)) ;
          const enumGalgasBool test_5 = var_type_9925.getter_isStructure (SOURCE_FILE ("instruction-procedure-call.galgas", 235)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 235)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 236)), GALGAS_string ("receiver has no property"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 236)) ;
          }else if (kBoolFalse == test_5) {
            GALGAS_lstring joker_10139_1 ; // Joker input parameter
            GALGAS_propertyList joker_10168_3 ; // Joker input parameter
            GALGAS_PLMTypeFlags joker_10168_2 ; // Joker input parameter
            GALGAS_string joker_10168_1 ; // Joker input parameter
            var_type_9925.method_structure (joker_10139_1, var_propertyMap_9471, joker_10168_3, joker_10168_2, joker_10168_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 238)) ;
            GALGAS_objectIR var_newObject_10195 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_propertyObject_9896, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 240)), GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 241)), extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 241))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 241))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 239)) ;
            ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 243)) ;
            {
            extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_10195, var_currentObject_8767, extractedValue_propertyName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 244)) ;
            }
            var_currentObject_8767 = var_newObject_10195 ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_10761 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_9695.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_10761->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_10761->mAssociatedValue1 ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray7  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 252)) ;
          var_currentObject_8767.drop () ; // Release error dropped variable
        }
        break ;
      }
      enumerator_9695.gotoNextObject () ;
    }
    switch (var_lastAccess_9636.enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_10937 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_9636.unsafePointer ()) ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_10937->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 258)) ;
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_14418 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_9636.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_methodName = extractPtr_14418->mAssociatedValue0 ;
        GALGAS_lstring var_routineMangledName_11078 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (extensionGetter_type (var_currentObject_8767, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 261)), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 261)) ;
        GALGAS_lstring var_signature_11226 = extensionGetter_routineSignature (object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 263)) ;
        GALGAS_lstring var_LLVMInvocationRoutineName_11447 ;
        GALGAS_routineDescriptor var_routineDescriptor_11493 ;
        GALGAS_location var_keyLocation_11535 ;
        extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), extractedValue_methodName, var_signature_11226, var_LLVMInvocationRoutineName_11447, var_routineDescriptor_11493, var_keyLocation_11535, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 265)) ;
        GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_11649 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 273)) ;
        var_effectiveParameterListIR_11649.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 276)), var_currentObject_8767  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 276)) ;
        GALGAS_routineKind var_routineKind_11962 = var_routineDescriptor_11493.getter_mRoutineKind (HERE) ;
        GALGAS_mode var_calleeMode_12016 = extensionGetter_executionMode (var_routineKind_11962, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 282)) ;
        GALGAS_routineTypedSignature var_formalSignature_12072 = var_routineDescriptor_11493.getter_mSignature (HERE) ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_routineDescriptor_11493.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 285)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 286)), GALGAS_string ("not a procedure (returns a value)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 286)) ;
          var_routineDescriptor_11493.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_9) {
          GALGAS_calleeKindIR var_calleeKind_12376 = function_checkMode (constinArgument_inCurrentMode, var_calleeMode_12016, var_routineKind_11962, extractedValue_methodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 289)) ;
          {
          routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_formalSignature_12072, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_11649, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 296)) ;
          }
          switch (var_routineDescriptor_11493.getter_mRoutineCallingScheme (HERE).enumValue ()) {
          case GALGAS_routineCallingSheme::kNotBuilt:
            break ;
          case GALGAS_routineCallingSheme::kEnum_staticCall:
            {
              ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 316)), GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 317)), var_routineMangledName_11078, var_LLVMInvocationRoutineName_11447, var_calleeKind_12376, var_effectiveParameterListIR_11649  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 315))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 315)) ;
              {
              ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_11078 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 324)) ;
              }
            }
            break ;
          case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
            {
              const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall * extractPtr_14396 = (const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall *) (var_routineDescriptor_11493.getter_mRoutineCallingScheme (HERE).unsafePointer ()) ;
              const GALGAS_PLMType extractedValue_type = extractPtr_14396->mAssociatedValue0 ;
              GALGAS_objectIR var_propertyReference_13808 = GALGAS_objectIR::constructor_temporaryReference (extractedValue_type, GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 328)), extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 328))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 328))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 326)) ;
              ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 330)) ;
              {
              extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_propertyReference_13808, var_currentObject_8767, extractedValue_methodName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 331)) ;
              }
              ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (var_propertyReference_13808, extractedValue_type, GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 340)), var_effectiveParameterListIR_11649  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 337))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 337)) ;
            }
            break ;
          }
        }
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procedureCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                extensionMethod_procedureCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procedureCallInstructionAST_analyze (defineExtensionMethod_procedureCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 68)) ;
  cEnumerator_switchCaseListAST enumerator_2862 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_2862.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2862.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2862.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                              extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@switchInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                          const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_4061 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 92)) ;
  GALGAS_objectIR var_switchValueIRPossibleReference_4536 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-switch.galgas", 97)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_4061, var_switchValueIRPossibleReference_4536, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 93)) ;
  GALGAS_objectIR var_switchValueIR_4704 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIRPossibleReference_4536, object->mProperty_mEndOf_5F_test_5F_expression, var_switchValueIR_4704, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 107)) ;
  }
  GALGAS_constantMap var_enumConstantMap_4766 ;
  const enumGalgasBool test_0 = extensionGetter_type (var_switchValueIR_4704, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 115)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string joker_4882_1 ; // Joker input parameter
    extensionGetter_type (var_switchValueIR_4704, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).method_enumeration (var_enumConstantMap_4766, joker_4882_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_switchValueIR_4704, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 119)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 119)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 118)) ;
    var_enumConstantMap_4766.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_switchValueIR_4704, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 122)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 123)) ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5204 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5204, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 126)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5267 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 127)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5309 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 128)) ;
  cEnumerator_switchCaseListAST enumerator_5373 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_5373.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5414 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 130)) ;
    cEnumerator_lstringlist enumerator_5456 (enumerator_5373.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5456.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5526 ;
      GALGAS_lstring joker_5528 ; // Joker input parameter
      var_enumConstantMap_4766.method_searchKey (enumerator_5456.current_mValue (HERE), var_constantIdx_5526, joker_5528, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
      var_caseIdentifierIndexList_5414.addAssign_operation (var_constantIdx_5526.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 133))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_5267.getter_hasKey (enumerator_5456.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 134)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_5456.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 135)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)) ;
      }
      var_usedEnumerationValues_5267.addAssign_operation (enumerator_5456.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 137))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 137)) ;
      enumerator_5456.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5812 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 139)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5373.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_switch_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5812, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 140)) ;
    var_switchCaseListIR_5309.addAssign_operation (var_caseIdentifierIndexList_5414, var_instructionGenerationList_5812  COMMA_SOURCE_FILE ("instruction-switch.galgas", 154)) ;
    enumerator_5373.gotoNextObject () ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6499 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6499, object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
  }
  cEnumerator_constantMap enumerator_6644 (var_enumConstantMap_4766, kENUMERATION_UP) ;
  while (enumerator_6644.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_5267.getter_hasKey (enumerator_6644.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 159)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6644.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)) ;
    }
    enumerator_6644.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 165)), var_switchExpressionGenerationList_4061, var_switchValueIR_4704, var_switchCaseListIR_5309  COMMA_SOURCE_FILE ("instruction-switch.galgas", 164))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                extensionMethod_switchInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_analyze (defineExtensionMethod_switchInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@switchInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
  GALGAS_string var_labelOtherwise_8313 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8313, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
  cEnumerator_switchCaseListIR enumerator_8563 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8514 ((uint32_t) 0) ;
  while (enumerator_8563.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8626 (enumerator_8563.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8626.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (enumerator_8626.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (index_8514.getter_string (SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
      enumerator_8626.gotoNextObject () ;
    }
    enumerator_8563.gotoNextObject () ;
    index_8514.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
  cEnumerator_switchCaseListIR enumerator_8909 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8866 ((uint32_t) 0) ;
  while (enumerator_8909.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)).add_operation (index_8866.getter_string (SOURCE_FILE ("instruction-switch.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8909.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8313, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)) ;
    enumerator_8909.gotoNextObject () ;
    index_8866.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8313.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                            extensionMethod_switchInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionIR_llvmInstructionCode (defineExtensionMethod_switchInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@switchInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 226)) ;
  cEnumerator_switchCaseListIR enumerator_9656 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9656.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9656.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 228)) ;
    enumerator_9656.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                                extensionMethod_switchInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionIR_enterAccessibleEntities (defineExtensionMethod_switchInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'handleArraySubscriptNew'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArraySubscriptNew (const GALGAS_PLMType constinArgument_inSelfType,
                                      const GALGAS_bool constinArgument_inGuard,
                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inCurrentMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      const GALGAS_expressionAST constinArgument_inIndexExpression,
                                      const GALGAS_location constinArgument_inErrorLocation,
                                      const GALGAS_bigint constinArgument_inArraySize,
                                      const GALGAS_PLMType constinArgument_inElementType,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      GALGAS_objectIR & outArgument_outIndexIR,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndexIR.drop () ; // Release 'out' argument
  GALGAS_objectIR var_indexResultPossibleReference_1314 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 25)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_1314, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
  GALGAS_objectIR var_indexResult_1471 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_1314, constinArgument_inErrorLocation, var_indexResult_1471, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 35)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_1471.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_1604 ;
    GALGAS_PLMType joker_1572_1 ; // Joker input parameter
    var_indexResult_1471.method_literalInteger (joker_1572_1, var_indexValue_1604, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 42)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_1604.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_1604.objectCompare (constinArgument_inArraySize)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 44)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 44)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outIndexIR = GALGAS_objectIR::constructor_literalInteger (constinArgument_inElementType, var_indexValue_1604  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 46)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_1471, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 48)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 48)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 49)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_2133 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1471, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_2133, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 50)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_2133 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 56)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 56)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 57)) ;
        }
      }
      outArgument_outIndexIR = var_indexResult_1471 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 62)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'handleArraySubscript'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArraySubscript (const GALGAS_PLMType constinArgument_inSelfType,
                                   const GALGAS_bool constinArgument_inGuard,
                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                   const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_mode constinArgument_inCurrentMode,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                   const GALGAS_expressionAST constinArgument_inIndexExpression,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   const GALGAS_bigint constinArgument_inArraySize,
                                   const GALGAS_PLMType constinArgument_inElementType,
                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                   GALGAS_objectIR & ioArgument_ioObjectPtr,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_indexResultPossibleReference_3743 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 90)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_3743, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 86)) ;
  GALGAS_objectIR var_indexResult_3900 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_3743, constinArgument_inErrorLocation, var_indexResult_3900, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 100)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_3900.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 106)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_4033 ;
    GALGAS_PLMType joker_4001_1 ; // Joker input parameter
    var_indexResult_3900.method_literalInteger (joker_4001_1, var_indexValue_4033, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_4033.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 108)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_4033.objectCompare (constinArgument_inArraySize)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_4220 = GALGAS_objectIR::constructor_temporaryReference (constinArgument_inElementType, GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 113)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 113))  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 115)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_4220, ioArgument_ioObjectPtr, var_indexValue_4033.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 116)) ;
      }
      ioArgument_ioObjectPtr = var_result_4220 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_3900, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 123)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 123)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_4861 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_3900, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_4861, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 125)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_4861 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 131)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 131)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 132)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_5064 = GALGAS_objectIR::constructor_temporaryReference (constinArgument_inElementType, GALGAS_lstring::constructor_new (GALGAS_string ("%temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137))  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 135)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 139)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_5064, ioArgument_ioObjectPtr, extensionGetter_llvmName (var_indexResult_3900, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 140)) ;
      }
      ioArgument_ioObjectPtr = var_result_5064 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 147)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeControlRegisterInLValue'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeControlRegisterInLValue (const GALGAS_PLMType constinArgument_inSelfType,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inCurrentMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             const GALGAS_lstring constinArgument_inRegisterName,
                                             const GALGAS_PLMType constinArgument_inRegisterType,
                                             const GALGAS_bool constinArgument_inWritable,
                                             const GALGAS_uint constinArgument_inRegisterAddress,
                                             const GALGAS_uint constinArgument_inArraySize,
                                             const GALGAS_uint constinArgument_inElementSize,
                                             const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                             GALGAS_internalRepresentation & outArgument_outInternalRepresentation,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inWritable.operator_not (SOURCE_FILE ("lvalue.galgas", 236)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("lvalue.galgas", 237)), GALGAS_string ("the control register is not writable in this context"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 237)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 238)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inArraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outInternalRepresentation = GALGAS_internalRepresentation::constructor_volatileAbsoluteReference (constinArgument_inRegisterType, constinArgument_inRegisterAddress  COMMA_SOURCE_FILE ("lvalue.galgas", 240)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("lvalue.galgas", 242)), GALGAS_string ("the control register is an array"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 242)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 244)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_accessInAssignmentAST var_access_10081 ;
        constinArgument_inAccessList.method_first (var_access_10081, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 245)) ;
        switch (var_access_10081.enumValue ()) {
        case GALGAS_accessInAssignmentAST::kNotBuilt:
          break ;
        case GALGAS_accessInAssignmentAST::kEnum_property:
          {
            const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_10251 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_access_10081.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_propertyName = extractPtr_10251->mAssociatedValue0 ;
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 248)), GALGAS_string ("writing a slice of a control register is not allowed"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 248)) ;
            outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
          {
            const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_11534 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_access_10081.unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11534->mAssociatedValue0 ;
            const GALGAS_location extractedValue_endOfIndex = extractPtr_11534->mAssociatedValue1 ;
            GALGAS_objectIR var_indexIR_10860 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inArraySize.getter_bigint (SOURCE_FILE ("lvalue.galgas", 262)), constinArgument_inRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_10860, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 250)) ;
            }
            const enumGalgasBool test_7 = var_indexIR_10860.getter_isLiteralInteger (SOURCE_FILE ("lvalue.galgas", 267)).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_bigint var_idx_11001 ;
              GALGAS_PLMType joker_10976_1 ; // Joker input parameter
              var_indexIR_10860.method_literalInteger (joker_10976_1, var_idx_11001, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 268)) ;
              GALGAS_uint var_addr_11019 = constinArgument_inRegisterAddress.add_operation (var_idx_11001.multiply_operation (constinArgument_inElementSize.getter_bigint (SOURCE_FILE ("lvalue.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 269)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 269)) ;
              outArgument_outInternalRepresentation = GALGAS_internalRepresentation::constructor_volatileAbsoluteReference (constinArgument_inRegisterType, var_addr_11019  COMMA_SOURCE_FILE ("lvalue.galgas", 270)) ;
            }else if (kBoolFalse == test_7) {
              GALGAS_string var_llvmName_11230 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_11230, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 272)) ;
              }
              {
              extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, var_llvmName_11230, var_indexIR_10860, constinArgument_inRegisterAddress.getter_bigint (SOURCE_FILE ("lvalue.galgas", 276)), constinArgument_inElementSize, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 273)) ;
              }
              outArgument_outInternalRepresentation = GALGAS_internalRepresentation::constructor_volatileIndirectReference (constinArgument_inRegisterType, var_llvmName_11230  COMMA_SOURCE_FILE ("lvalue.galgas", 279)) ;
            }
          }
          break ;
        }
      }else if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("lvalue.galgas", 283)), GALGAS_string ("only subscripting is allowed in control register assignment"), fixItArray8  COMMA_SOURCE_FILE ("lvalue.galgas", 283)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeVariableInLValue'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeVariableInLValue (const GALGAS_PLMType constinArgument_inSelfType,
                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inCurrentMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      const GALGAS_lstring constinArgument_inVariableName,
                                      const GALGAS_string constinArgument_inLLVMName,
                                      const GALGAS_PLMType constinArgument_inVariableType,
                                      const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                      GALGAS_internalRepresentation & outArgument_outInternalRepresentation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_PLMType var_currentType_12558 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_12597 = constinArgument_inLLVMName ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 307)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_objectIR joker_12720 ; // Joker input parameter
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_12669 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_12669, constinArgument_inVariableName, joker_12720, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 308)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_objectIR joker_12806 ; // Joker input parameter
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_12751 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_12751, constinArgument_inVariableName, joker_12806, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 310)) ;
    }
    cEnumerator_accessInAssignmentListAST enumerator_12841 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_12841.hasCurrentObject ()) {
      switch (enumerator_12841.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_13878 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_12841.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_13878->mAssociatedValue0 ;
          const enumGalgasBool test_1 = var_currentType_12558.getter_isStructure (SOURCE_FILE ("lvalue.galgas", 314)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_propertyMap var_propertyMap_13031 ;
            GALGAS_lstring joker_12987_1 ; // Joker input parameter
            GALGAS_propertyList joker_13033_3 ; // Joker input parameter
            GALGAS_PLMTypeFlags joker_13033_2 ; // Joker input parameter
            GALGAS_string joker_13033_1 ; // Joker input parameter
            var_currentType_12558.method_structure (joker_12987_1, var_propertyMap_13031, joker_13033_3, joker_13033_2, joker_13033_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 315)) ;
            GALGAS_PLMType var_propertyType_13114 ;
            GALGAS_propertyAccessKind var_propertyAccess_13154 ;
            GALGAS_bool joker_13085_2 ; // Joker input parameter
            GALGAS_objectIR joker_13085_1 ; // Joker input parameter
            var_propertyMap_13031.method_searchKey (extractedValue_propertyName, joker_13085_2, joker_13085_1, var_propertyType_13114, var_propertyAccess_13154, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 316)) ;
            switch (var_propertyAccess_13154.enumValue ()) {
            case GALGAS_propertyAccessKind::kNotBuilt:
              break ;
            case GALGAS_propertyAccessKind::kEnum_constant:
              {
                TC_Array <C_FixItDescription> fixItArray2 ;
                inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 319)), GALGAS_string ("a constant property cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 319)) ;
                var_currentType_12558.drop () ; // Release error dropped variable
                var_currentLLVMName_12597.drop () ; // Release error dropped variable
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_indexed:
              {
                const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_13770 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_13154.unsafePointer ()) ;
                const GALGAS_uint extractedValue_index = extractPtr_13770->mAssociatedValue0 ;
                GALGAS_string var_newLLVMvariable_13425 ;
                {
                extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13425, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 321)) ;
                }
                {
                extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_12558, var_currentLLVMName_12597, var_propertyType_13114, var_newLLVMvariable_13425, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 322)) ;
                }
                var_currentType_12558 = var_propertyType_13114 ;
                var_currentLLVMName_12597 = var_newLLVMvariable_13425 ;
              }
              break ;
            }
          }else if (kBoolFalse == test_1) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 334)), GALGAS_string ("this should be a structure instance"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 334)) ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_15189 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_12841.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15189->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_15189->mAssociatedValue1 ;
          const enumGalgasBool test_4 = var_currentType_12558.getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 337)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_PLMType var_elementType_14065 ;
            GALGAS_bigint var_arraySize_14093 ;
            GALGAS_lstring joker_14034_1 ; // Joker input parameter
            GALGAS_constantMap joker_14095_3 ; // Joker input parameter
            GALGAS_PLMTypeFlags joker_14095_2 ; // Joker input parameter
            GALGAS_string joker_14095_1 ; // Joker input parameter
            var_currentType_12558.method_arrayType (joker_14034_1, var_elementType_14065, var_arraySize_14093, joker_14095_3, joker_14095_2, joker_14095_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 338)) ;
            GALGAS_objectIR var_indexIR_14704 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_14093, var_elementType_14065, ioArgument_ioInstructionGenerationList, var_indexIR_14704, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 339)) ;
            }
            GALGAS_string var_newLLVMvariable_14777 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_14777, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 356)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_12558, var_currentLLVMName_12597, var_elementType_14065, var_newLLVMvariable_14777, var_indexIR_14704, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 357)) ;
            }
            var_currentType_12558 = var_elementType_14065 ;
            var_currentLLVMName_12597 = var_newLLVMvariable_14777 ;
          }else if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray5  COMMA_SOURCE_FILE ("lvalue.galgas", 367)) ;
            var_currentType_12558.drop () ; // Release error dropped variable
            var_currentLLVMName_12597.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_12841.gotoNextObject () ;
    }
  }
  outArgument_outInternalRepresentation = GALGAS_internalRepresentation::constructor_universalReference (var_currentType_12558, var_currentLLVMName_12597  COMMA_SOURCE_FILE ("lvalue.galgas", 372)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeSelfAssignmentTarget'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSelfAssignmentTarget (const GALGAS_PLMType constinArgument_inSelfType,
                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          const GALGAS_mode constinArgument_inCurrentMode,
                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                          const GALGAS_location constinArgument_inSelfLocation,
                                          const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                          GALGAS_internalRepresentation & outArgument_outInternalRepresentation,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("lvalue.galgas", 391)).operator_not (SOURCE_FILE ("lvalue.galgas", 391)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inSelfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 392)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_PLMType var_currentType_16249 = constinArgument_inSelfType ;
    GALGAS_string var_currentLLVMName_16286 = GALGAS_string ("%self") ;
    cEnumerator_accessInAssignmentListAST enumerator_16329 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_16329.hasCurrentObject ()) {
      switch (enumerator_16329.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17366 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_16329.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_17366->mAssociatedValue0 ;
          const enumGalgasBool test_2 = var_currentType_16249.getter_isStructure (SOURCE_FILE ("lvalue.galgas", 399)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_propertyMap var_propertyMap_16519 ;
            GALGAS_lstring joker_16475_1 ; // Joker input parameter
            GALGAS_propertyList joker_16521_3 ; // Joker input parameter
            GALGAS_PLMTypeFlags joker_16521_2 ; // Joker input parameter
            GALGAS_string joker_16521_1 ; // Joker input parameter
            var_currentType_16249.method_structure (joker_16475_1, var_propertyMap_16519, joker_16521_3, joker_16521_2, joker_16521_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 400)) ;
            GALGAS_PLMType var_propertyType_16602 ;
            GALGAS_propertyAccessKind var_propertyAccess_16642 ;
            GALGAS_bool joker_16573_2 ; // Joker input parameter
            GALGAS_objectIR joker_16573_1 ; // Joker input parameter
            var_propertyMap_16519.method_searchKey (extractedValue_propertyName, joker_16573_2, joker_16573_1, var_propertyType_16602, var_propertyAccess_16642, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 401)) ;
            switch (var_propertyAccess_16642.enumValue ()) {
            case GALGAS_propertyAccessKind::kNotBuilt:
              break ;
            case GALGAS_propertyAccessKind::kEnum_constant:
              {
                TC_Array <C_FixItDescription> fixItArray3 ;
                inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 404)), GALGAS_string ("a constant property cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 404)) ;
                var_currentType_16249.drop () ; // Release error dropped variable
                var_currentLLVMName_16286.drop () ; // Release error dropped variable
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_indexed:
              {
                const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_17258 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_16642.unsafePointer ()) ;
                const GALGAS_uint extractedValue_index = extractPtr_17258->mAssociatedValue0 ;
                GALGAS_string var_newLLVMvariable_16913 ;
                {
                extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_16913, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 406)) ;
                }
                {
                extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_16249, var_currentLLVMName_16286, var_propertyType_16602, var_newLLVMvariable_16913, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 407)) ;
                }
                var_currentType_16249 = var_propertyType_16602 ;
                var_currentLLVMName_16286 = var_newLLVMvariable_16913 ;
              }
              break ;
            }
          }else if (kBoolFalse == test_2) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 419)), GALGAS_string ("this should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 419)) ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_18677 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_16329.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_18677->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_18677->mAssociatedValue1 ;
          const enumGalgasBool test_5 = var_currentType_16249.getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 422)).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_PLMType var_elementType_17553 ;
            GALGAS_bigint var_arraySize_17581 ;
            GALGAS_lstring joker_17522_1 ; // Joker input parameter
            GALGAS_constantMap joker_17583_3 ; // Joker input parameter
            GALGAS_PLMTypeFlags joker_17583_2 ; // Joker input parameter
            GALGAS_string joker_17583_1 ; // Joker input parameter
            var_currentType_16249.method_arrayType (joker_17522_1, var_elementType_17553, var_arraySize_17581, joker_17583_3, joker_17583_2, joker_17583_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 423)) ;
            GALGAS_objectIR var_indexIR_18192 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_17581, var_elementType_17553, ioArgument_ioInstructionGenerationList, var_indexIR_18192, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 424)) ;
            }
            GALGAS_string var_newLLVMvariable_18265 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_18265, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 441)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_16249, var_currentLLVMName_16286, var_elementType_17553, var_newLLVMvariable_18265, var_indexIR_18192, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 442)) ;
            }
            var_currentType_16249 = var_elementType_17553 ;
            var_currentLLVMName_16286 = var_newLLVMvariable_18265 ;
          }else if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 452)) ;
            var_currentType_16249.drop () ; // Release error dropped variable
            var_currentLLVMName_16286.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_16329.gotoNextObject () ;
    }
    outArgument_outInternalRepresentation = GALGAS_internalRepresentation::constructor_universalReference (var_currentType_16249, var_currentLLVMName_16286  COMMA_SOURCE_FILE ("lvalue.galgas", 456)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromAST'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_routineMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                   const GALGAS_lstring & constinArgument_inRoutineName,
                                                   const GALGAS_routineFormalArgumentList & constinArgument_inFormalArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 101)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 101)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 101)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 103)) ;
  cEnumerator_routineFormalArgumentList enumerator_4396 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4396.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4396.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 105)).add_operation (enumerator_4396.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 105)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 105)) ;
    enumerator_4396.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 107)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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
  const GALGAS_routineFormalArgumentList operand2 = GALGAS_routineFormalArgumentList::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                     inCompiler
                                                                                                     COMMA_THERE) ;
  return function_routineMangledNameFromAST (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromCall'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_routineMangledNameFromCall (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                                    const GALGAS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 119)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 119)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 119)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 121)) ;
  cEnumerator_effectiveArgumentListAST enumerator_5108 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_5108.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_5108.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 123)).add_operation (enumerator_5108.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 123)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 123)) ;
    enumerator_5108.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 125)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'routineSignature'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSignature (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                               const GALGAS_routineFormalArgumentList constinArgument_inFormalArgumentList,
                               GALGAS_routineTypedSignature & outArgument_outResult,
                               C_Compiler * /* inCompiler */
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  outArgument_outResult = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 134)) ;
  cEnumerator_routineFormalArgumentList enumerator_5632 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5632.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5723 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5632.current_mFormalArgumentTypeName (HERE), var_typeProxy_5723 COMMA_SOURCE_FILE ("context-routines.galgas", 136)) ;
    }
    outArgument_outResult.addAssign_operation (enumerator_5632.current_mFormalArgumentPassingMode (HERE), enumerator_5632.current_mSelector (HERE), var_typeProxy_5723  COMMA_SOURCE_FILE ("context-routines.galgas", 137)) ;
    enumerator_5632.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'initialVariableMap'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initialVariableMap (const GALGAS_semanticContext constinArgument_inContext,
                                 const GALGAS_mode constinArgument_inRequiredMode,
                                 GALGAS_bool inArgument_inGlobalsAreConstant,
                                 const GALGAS_lstring constinArgument_inReturnTypeName,
                                 GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 14)) ;
  cEnumerator_moduleMap enumerator_1004 (constinArgument_inContext.getter_mModuleMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1004.hasCurrentObject ()) {
    GALGAS_lstring var_moduleTypeName_1030 = function_moduleMangledNameFromModuleName (enumerator_1004.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 17)) ;
    GALGAS_PLMType var_moduleType_1097 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_1030, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 18)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 18)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_1199 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertModule ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1199, enumerator_1004.current_lkey (HERE), var_moduleType_1097, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 19)) ;
    }
    enumerator_1004.gotoNextObject () ;
  }
  cEnumerator_controlRegisterMap enumerator_1362 (constinArgument_inContext.getter_mControlRegisterMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1362.hasCurrentObject ()) {
    GALGAS_bool var_registerIsReadable_1392 = extensionGetter_controlRegisterAccess (constinArgument_inRequiredMode, enumerator_1362.current (HERE).getter_mIsAccessibleInUserMode (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 23)) ;
    GALGAS_bool test_0 = var_registerIsReadable_1392 ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = enumerator_1362.current (HERE).getter_mIsReadOnly (HERE).operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 24)) ;
    }
    GALGAS_bool test_1 = test_0 ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 24)) ;
    }
    GALGAS_bool var_registerIsWritable_1494 = test_1 ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_1594 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertRegister ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1594, enumerator_1362.current (HERE).getter_lkey (HERE), var_registerIsReadable_1392, var_registerIsWritable_1494, enumerator_1362.current (HERE).getter_mType (HERE), enumerator_1362.current (HERE).getter_mAddress (HERE), enumerator_1362.current (HERE).getter_mRegisterFieldAccessMap (HERE), enumerator_1362.current (HERE).getter_mArraySize (HERE), enumerator_1362.current (HERE).getter_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 25)) ;
    }
    enumerator_1362.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_2090 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_2090.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_2116 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2116, enumerator_2090.current_lkey (HERE), enumerator_2090.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 38)) ;
    }
    enumerator_2090.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_2298 (constinArgument_inContext.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
  while (enumerator_2298.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_2324 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2324, enumerator_2298.current (HERE).getter_lkey (HERE), enumerator_2298.current (HERE).getter_type (HERE), inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 42)) ;
    }
    GALGAS_bool var_writeAccess_2422 = enumerator_2298.current (HERE).getter_allowedAccessToAll (HERE) ;
    GALGAS_bool var_allowedAccess_2474 = var_writeAccess_2422 ;
    enumerator_2298.gotoNextObject () ;
  }
  cEnumerator_internalRoutineMapForContext enumerator_2646 (constinArgument_inContext.getter_mRoutineMapForContext (HERE).getter_mInternalRoutineMap (HERE), kENUMERATION_UP) ;
  while (enumerator_2646.hasCurrentObject ()) {
    cEnumerator_routineArgumentSignatureMapForContext enumerator_2718 (enumerator_2646.current (HERE).getter_mRoutineArgumentSignatureMapForContext (HERE), kENUMERATION_UP) ;
    while (enumerator_2718.hasCurrentObject ()) {
      {
      outArgument_outUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_2746 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
      callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2746, enumerator_2646.current (HERE).getter_lkey (HERE), enumerator_2718.current (HERE).getter_lkey (HERE), enumerator_2718.current (HERE).getter_mRoutineLLVMName (HERE), enumerator_2718.current (HERE).getter_mDescriptor (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 49)) ;
      }
      enumerator_2718.gotoNextObject () ;
    }
    enumerator_2646.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_lstring var_resultVarName_3039 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 59)), constinArgument_inReturnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 59)) ;
    GALGAS_PLMType var_resultType_3133 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 60)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 60)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_3237 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_3237, var_resultVarName_3039, var_resultType_3133, var_resultVarName_3039, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("unified-symbol-map.galgas", 61)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 61)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 71)) ;
  cEnumerator_globalConstantMap enumerator_3704 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_3704.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_3730 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_3730, enumerator_3704.current_lkey (HERE), enumerator_3704.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 74)) ;
    }
    enumerator_3704.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempVariable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempVariable (const GALGAS_PLMType constinArgument_inType,
                                 GALGAS_location inArgument_inErrorLocation,
                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                 GALGAS_objectIR & outArgument_outTempVariable,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("unified-symbol-map.galgas", 86)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_null (SOURCE_FILE ("unified-symbol-map.galgas", 87)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_4175 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4175, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 89)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmTemporaryValue (constinArgument_inType, GALGAS_lstring::constructor_new (var_llvmName_4175, inArgument_inErrorLocation  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 90))  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 90)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedDeclarationList (const GALGAS_ast constinArgument_inAST,
                                          const GALGAS_string constinArgument_inSourceFile,
                                          const GALGAS_location constinArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_1622 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 28)) ;
  cEnumerator_declarationListAST enumerator_1674 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_1674.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) enumerator_1674.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 30)) ;
    enumerator_1674.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mBootListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mInitListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 33)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mPanicClauseListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 34)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternProcListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 36)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mGuardListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mControlRegisterDeclarationListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  cEnumerator_stringlist enumerator_2647 (var_precedenceGraph_1622.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 43)), kENUMERATION_UP) ;
  while (enumerator_2647.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2664 = enumerator_2647.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2664.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 45)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2664.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 45)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2664.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2859 = var_split_2664.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
        GALGAS_integerDeclarationAST var_declaration_2934 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_2859  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_2934.ptr (), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2664.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_3101 = var_split_2664.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)) ;
          GALGAS_integerDeclarationAST var_declaration_3176 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_3101  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_3176.ptr (), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
        }
      }
    }
    enumerator_2647.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 58)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s_3488 = var_precedenceGraph_1622.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 59)) ;
    GALGAS_string var_filePath_3534 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 60)) ;
    GALGAS_bool joker_3632 ; // Joker input parameter
    var_s_3488.method_writeToFileWhenDifferentContents (var_filePath_3534, joker_3632, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 64)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1622.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 65)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3854 (var_precedenceGraph_1622.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 66)), kENUMERATION_UP) ;
    while (enumerator_3854.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_3854.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 67)), enumerator_3854.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)), fixItArray7  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)) ;
      enumerator_3854.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4068 ;
    GALGAS_lstringlist joker_4001 ; // Joker input parameter
    GALGAS_lstringlist joker_4076 ; // Joker input parameter
    var_precedenceGraph_1622.method_topologicalSort (outArgument_outDeclarationListAST, joker_4001, var_unsortedSemanticDeclarationListAST_4068, joker_4076, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 70)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4068.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s_4155 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4068.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 78)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 78)) ;
      cEnumerator_declarationListAST enumerator_4370 (var_unsortedSemanticDeclarationListAST_4068, kENUMERATION_UP) ;
      while (enumerator_4370.hasCurrentObject ()) {
        var_s_4155.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4370.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)) ;
        enumerator_4370.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4155, fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
      cEnumerator_declarationListAST enumerator_4542 (var_unsortedSemanticDeclarationListAST_4068, kENUMERATION_UP) ;
      while (enumerator_4542.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_abstractDeclarationAST *) enumerator_4542.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4542.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), fixItArray10  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)) ;
        enumerator_4542.gotoNextObject () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const GALGAS_declarationListAST constinArgument_inDeclarationListAST,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_staticlistValues_5F_listMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 197)) ;
  cEnumerator_initList enumerator_8174 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8174.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_8174.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 200)) ;
    enumerator_8174.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_8319 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8319.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_8319.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 204)) ;
    enumerator_8319.gotoNextObject () ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 207)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 208)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternProcListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 209)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 210)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 211)) ;
  cEnumerator_declarationListAST enumerator_8983 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_8983.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_8983.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, ioArgument_ioStaticListValueMap, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 214)) ;
    enumerator_8983.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 222)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 227)) ;
  }
  {
  routine_enterControlRegistersInContext (constinArgument_inAST.getter_mControlRegisterDeclarationListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 232)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 237)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 242)) ;
  cEnumerator_declarationListAST enumerator_10025 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_10025.hasCurrentObject ()) {
    callExtensionMethod_enterRoutinesInContext ((const cPtr_abstractDeclarationAST *) enumerator_10025.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 245)) ;
    enumerator_10025.gotoNextObject () ;
  }
  cEnumerator_staticlistValues_5F_listMap enumerator_10332 (ioArgument_ioStaticListValueMap, kENUMERATION_UP) ;
  while (enumerator_10332.hasCurrentObject ()) {
    GALGAS_lstring var_lkey_10348 = GALGAS_lstring::constructor_new (enumerator_10332.current_key (HERE), GALGAS_location::constructor_nowhere (SOURCE_FILE ("context.galgas", 253))  COMMA_SOURCE_FILE ("context.galgas", 253)) ;
    GALGAS_lstring var_elementTypePLMName_10407 = function_plmNameForStaticListElementType (var_lkey_10348, inCompiler COMMA_SOURCE_FILE ("context.galgas", 254)) ;
    GALGAS_PLMType var_elementType_10469 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.getter_mTypeMap (HERE), var_elementTypePLMName_10407, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 255)).getter_type (inCompiler COMMA_SOURCE_FILE ("context.galgas", 255)) ;
    {
    outArgument_outSemanticContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (var_lkey_10348, inCompiler COMMA_SOURCE_FILE ("context.galgas", 257)), GALGAS_PLMType::constructor_arrayType (function_llvmNameForStaticListType (enumerator_10332.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 259)).getter_nowhere (SOURCE_FILE ("context.galgas", 259)), var_elementType_10469, enumerator_10332.current_mList (HERE).getter_length (SOURCE_FILE ("context.galgas", 261)).getter_bigint (SOURCE_FILE ("context.galgas", 261)), GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 262)), GALGAS_PLMTypeFlags::constructor_none (SOURCE_FILE ("context.galgas", 263)), function_plmNameForStaticListType (var_lkey_10348, inCompiler COMMA_SOURCE_FILE ("context.galgas", 264)).getter_string (SOURCE_FILE ("context.galgas", 264))  COMMA_SOURCE_FILE ("context.galgas", 258)), outArgument_outSemanticContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("context.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 256)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_staticListType_10996 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (var_lkey_10348, inCompiler COMMA_SOURCE_FILE ("context.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 268)) ;
    {
    outArgument_outSemanticContext.mProperty_mGlobalConstantMap.setter_insertKey (var_lkey_10348, GALGAS_objectIR::constructor_globalVariableReference (var_staticListType_10996.getter_type (inCompiler COMMA_SOURCE_FILE ("context.galgas", 271)), var_lkey_10348  COMMA_SOURCE_FILE ("context.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 269)) ;
    }
    enumerator_10332.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 275)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_globalVarDeclarationList enumerator_11372 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_11372.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_11372.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 277)) ;
      enumerator_11372.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_combineTypeNamesForInfixOperator (const GALGAS_string & constinArgument_inLeftTypeName,
                                                          const GALGAS_string & constinArgument_inRightTypeName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 288)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 288)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 288)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 288)).getter_nowhere (SOURCE_FILE ("context.galgas", 288)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_combineTypeNamesForInfixOperator [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_combineTypeNamesForInfixOperator ("combineTypeNamesForInfixOperator",
                                                                                  functionWithGenericHeader_combineTypeNamesForInfixOperator,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_combineTypeNamesForInfixOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTypeMapHTMLFile (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_9156 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_9273 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 282)) ;
    cEnumerator_unifiedTypeMap enumerator_9302 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_9302.hasCurrentObject ()) {
      var_firstLetterSet_9273.addAssign_operation (enumerator_9302.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)).getter_string (SOURCE_FILE ("types.galgas", 284))  COMMA_SOURCE_FILE ("types.galgas", 284)) ;
      enumerator_9302.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_9410 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_9444 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_9480 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_9480.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_9444.objectCompare (enumerator_9480.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 289)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_9444 = enumerator_9480.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)) ;
        var_tableOfTypeString_9410.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_9444.getter_uint (SOURCE_FILE ("types.galgas", 291)).getter_string (SOURCE_FILE ("types.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 291)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 291)).add_operation (var_currentFirstLetter_9444.getter_string (SOURCE_FILE ("types.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 291)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 291)) ;
      }
      var_tableOfTypeString_9410.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_9480.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 293)) ;
      enumerator_9480.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_9873 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 296)), inArgument_inTypeMap, var_firstLetterSet_9273, var_tableOfTypeString_9410 COMMA_SOURCE_FILE ("types.galgas", 295))) ;
    GALGAS_bool joker_10103 ; // Joker input parameter
    var_typeDumpString_9873.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_9156, joker_10103, inCompiler COMMA_SOURCE_FILE ("types.galgas", 301)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_9156, inCompiler COMMA_SOURCE_FILE ("types.galgas", 303)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Filewrapper template 'typeDumpGenerationTemplate dump'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    "<tr><td class=\"result_title\">Type Name</td><td class=\"result_title\">Description</td><td class=\"result_title\">LLVM Type Name</td></tr>\n" ;
  GALGAS_uint index_1322_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1322 (in_GLOBAL_5F_TYPE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1322.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1322.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1322.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td><td>" ;
      result << extensionGetter_descriptionForHTMLFile (enumerator_1322.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1322.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1322_.increment () ;
      enumerator_1322.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'linkForHTMLTypeMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForHTMLTypeMap (const GALGAS_string & constinArgument_inTypeName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 322)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 322)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 322)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 322)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR function_checkAssignmentCompatibility (const GALGAS_objectIR & constinArgument_inSourceValue,
                                                       const GALGAS_PLMType & constinArgument_inOptionalTargetAnnotationType,
                                                       const GALGAS_location & constinArgument_inErrorLocation,
                                                       const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_outResult ; // Returned variable
  GALGAS_PLMType var_sourceType_886 = extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetAnnotationType.objectCompare (var_sourceType_886)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = constinArgument_inSourceValue ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = constinArgument_inOptionalTargetAnnotationType.getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 17)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outResult = constinArgument_inSourceValue ;
    }else if (kBoolFalse == test_1) {
      GALGAS_bool test_2 = var_sourceType_886.getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inOptionalTargetAnnotationType.getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value_1220 ;
        GALGAS_PLMType joker_1201_1 ; // Joker input parameter
        constinArgument_inSourceValue.method_literalInteger (joker_1201_1, var_value_1220, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
        GALGAS_bigint var_minTarget_1284 ;
        GALGAS_bigint var_maxTarget_1303 ;
        GALGAS_bool joker_1305_3 ; // Joker input parameter
        GALGAS_uint joker_1305_2 ; // Joker input parameter
        GALGAS_string joker_1305_1 ; // Joker input parameter
        constinArgument_inOptionalTargetAnnotationType.method_integer (var_minTarget_1284, var_maxTarget_1303, joker_1305_3, joker_1305_2, joker_1305_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value_1220.objectCompare (var_minTarget_1284)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget_1303.objectCompare (var_value_1220)) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large"), fixItArray6  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)) ;
          result_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          result_outResult = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 25)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (extensionGetter_key (constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (extensionGetter_key (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_8 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_8) {
    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, extensionGetter_key (result_outResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the $").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), fixItArray10  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [5] = {
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkAssignmentCompatibility (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_objectIR operand0 = GALGAS_objectIR::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_PLMType operand1 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_bool operand3 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_checkAssignmentCompatibility (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_objectIR,
                                                                              4,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const GALGAS_string constinArgument_inSourceFile,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticStringMap constinArgument_inGlobalLiteralStringMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 76)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_3818 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_3818.hasCurrentObject ()) {
    GALGAS_lstring var_requiredProcedureMangledName_3858 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_3818.current (HERE).getter_mName (HERE), enumerator_3818.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 81)) ;
    outArgument_outIntermediateCodeStruct.mProperty_mRequiredProcedureSet.addAssign_operation (var_requiredProcedureMangledName_3858.getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 82)) ;
    enumerator_3818.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_4121 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4121.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_4121.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 86)) ;
    enumerator_4121.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_4299 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 92)) ;
  cEnumerator_declarationListAST enumerator_4359 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4359.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDeclarationAST *) enumerator_4359.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 94)) ;
    enumerator_4359.gotoNextObject () ;
  }
  extensionMethod_functionSemanticAnalysis (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 101)), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 100)) ;
  extensionMethod_semanticAnalysis (constinArgument_inAST.getter_mTaskListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 106)) ;
  extensionMethod_systemRoutineSemanticAnalysis (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 112)), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 111)) ;
  extensionMethod_guardSemanticAnalysis (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 118)), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 117)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternProcListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 123)) ;
  extensionMethod_isrSemanticAnalysis (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 128)) ;
  cEnumerator_bootList enumerator_5639 (constinArgument_inAST.getter_mBootListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5639.hasCurrentObject ()) {
    extensionMethod_bootSemanticAnalysis (enumerator_5639.current (HERE), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 134)) ;
    enumerator_5639.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_5832 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5832.hasCurrentObject ()) {
    extensionMethod_initSemanticAnalysis (enumerator_5832.current (HERE), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 141)) ;
    enumerator_5832.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_6061 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_6061.hasCurrentObject ()) {
    extensionMethod_panicSemanticAnalysis (enumerator_6061.current (HERE), constinArgument_inSemanticContext, var_temporaries_4299, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 149)) ;
    enumerator_6061.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 156)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 162)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_6526 = var_temporaries_4299.getter_mSubprogramInvocationGraph (HERE).getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 163)) ;
    GALGAS_string var_filePath_6595 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 164)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 164)) ;
    GALGAS_bool joker_6721 ; // Joker input parameter
    var_s_6526.method_writeToFileWhenDifferentContents (var_filePath_6595, joker_6721, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 168)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 168)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_6890 = var_temporaries_4299.getter_mSubprogramInvocationGraph (HERE).getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 169)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_6890.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_7014 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_7112 (var_undefinedNodeKeyList_6890, kENUMERATION_UP) ;
      while (enumerator_7112.hasCurrentObject ()) {
        var_s_7014.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_7112.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 173)) ;
        enumerator_7112.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_7014, fixItArray5  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 175)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_7319 ;
      GALGAS_lstringlist var_unsortedLKeyList_7363 ;
      var_temporaries_4299.getter_mSubprogramInvocationGraph (HERE).method_circularities (var_unsortedInformationList_7319, var_unsortedLKeyList_7363 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 177)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_7363.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 181)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_s_7429 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7509 (var_unsortedLKeyList_7363, kENUMERATION_UP) ;
        while (enumerator_7509.hasCurrentObject ()) {
          var_s_7429.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7509.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 184)) ;
          enumerator_7509.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_7429, fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 186)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterFormalArguments'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterFormalArguments (const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_routineFormalArgumentList constinArgument_inFormalArgumentPassingMode,
                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListForGeneration & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentList enumerator_1257 (constinArgument_inFormalArgumentPassingMode, kENUMERATION_UP) ;
  while (enumerator_1257.hasCurrentObject ()) {
    GALGAS_PLMType var_typeProxy_1278 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_1257.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_1257.current_mFormalArgumentPassingMode (HERE), var_typeProxy_1278, enumerator_1257.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)) ;
    switch (enumerator_1257.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_1606 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1606, enumerator_1257.current_mFormalArgumentName (HERE), var_typeProxy_1278, enumerator_1257.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 31)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_1725 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1725, enumerator_1257.current_mFormalArgumentName (HERE), var_typeProxy_1278, enumerator_1257.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("semantic-routines.galgas", 33)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 33)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_1862 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1862, enumerator_1257.current_mFormalArgumentName (HERE), var_typeProxy_1278, enumerator_1257.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("semantic-routines.galgas", 35)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 35)) ;
        }
      }
      break ;
    }
    enumerator_1257.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'routineSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSemanticAnalysis (const GALGAS_PLMType constinArgument_inSelfType,
                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                      const GALGAS_mode constinArgument_inRoutineMode,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_routineFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                      const GALGAS_lstring constinArgument_inReturnTypeName,
                                      const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                      const GALGAS_location /* constinArgument_inEndOfRoutineDeclaration */,
                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                      const GALGAS_bool constinArgument_inWarnIfUnused,
                                      const GALGAS_bool constinArgument_inGlobalFunction,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 61)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (extensionGetter_key (constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 61)) ;
  }
  GALGAS_lstring var_routineMangledName_2909 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 60)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_3286 ;
  {
  routine_initialVariableMap (constinArgument_inContext, constinArgument_inRoutineMode, GALGAS_bool (false), constinArgument_inReturnTypeName, var_universalMap_3286, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 66)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_3378 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 75)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_3286, var_formalArguments_3378, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 76)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_2909.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 84)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 84)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_2909, var_routineMangledName_2909, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 85)) ;
    }
  }
  GALGAS_allocaList var_allocaList_3840 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 91)) ;
  GALGAS_instructionListIR var_instructionGenerationList_3892 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 92)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineMangledName_2909, constinArgument_inContext, constinArgument_inRoutineMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_3286, var_allocaList_3840, var_instructionGenerationList_3892, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 93)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_3286.ptr (), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 108)) ;
  GALGAS_PLMType temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 113)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 115)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 115)) ;
  }
  GALGAS_PLMType var_returnType_4636 = temp_3 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR.setter_insertKey (var_routineMangledName_2909, constinArgument_inSelfType, var_routineMangledName_2909, var_formalArguments_3378, var_allocaList_3840, var_instructionGenerationList_3892, ioArgument_ioIntermediateCodeStruct.getter_mRequiredProcedureSet (HERE).getter_hasKey (var_routineMangledName_2909.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 124)), constinArgument_inWarnIfUnused, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_4636, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 117)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'llvmAttributeFunction'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmAttributeFunction (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (" nounwind ") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmAttributeFunction ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmAttributeFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmAttributeFunction) {
    gOnceFunctionResult_llvmAttributeFunction = onceFunction_llvmAttributeFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmAttributeFunction = true ;
  }
  return gOnceFunctionResult_llvmAttributeFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmAttributeFunction (void) {
  gOnceFunctionResult_llvmAttributeFunction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmAttributeFunction (NULL,
                                                                   releaseOnceFunctionResult_llvmAttributeFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmAttributeFunction [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmAttributeFunction (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_llvmAttributeFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmAttributeFunction ("llvmAttributeFunction",
                                                                       functionWithGenericHeader_llvmAttributeFunction,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_llvmAttributeFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'staticAttribute'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticAttribute (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("static") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticAttribute = false ;
static GALGAS_string gOnceFunctionResult_staticAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticAttribute) {
    gOnceFunctionResult_staticAttribute = onceFunction_staticAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticAttribute = true ;
  }
  return gOnceFunctionResult_staticAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticAttribute (void) {
  gOnceFunctionResult_staticAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticAttribute (NULL,
                                                             releaseOnceFunctionResult_staticAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticAttribute (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_staticAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticAttribute ("staticAttribute",
                                                                 functionWithGenericHeader_staticAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_staticAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmRegularTypeMangledNameFromName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmRegularTypeMangledNameFromName (const GALGAS_lstring & constinArgument_inName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 18)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 18)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmRegularTypeMangledNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmRegularTypeMangledNameFromName (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmRegularTypeMangledNameFromName (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmRegularTypeMangledNameFromName ("llvmRegularTypeMangledNameFromName",
                                                                                    functionWithGenericHeader_llvmRegularTypeMangledNameFromName,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_llvmRegularTypeMangledNameFromName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'moduleMangledNameFromModuleName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_moduleMangledNameFromModuleName (const GALGAS_lstring & constinArgument_inModuleName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (constinArgument_inModuleName.getter_string (HERE).add_operation (GALGAS_string ("$"), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)), constinArgument_inModuleName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_moduleMangledNameFromModuleName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_moduleMangledNameFromModuleName (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_moduleMangledNameFromModuleName (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_moduleMangledNameFromModuleName ("moduleMangledNameFromModuleName",
                                                                                 functionWithGenericHeader_moduleMangledNameFromModuleName,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_moduleMangledNameFromModuleName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'userModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_userModeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("user") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_userModeName = false ;
static GALGAS_string gOnceFunctionResult_userModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_userModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userModeName) {
    gOnceFunctionResult_userModeName = onceFunction_userModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userModeName = true ;
  }
  return gOnceFunctionResult_userModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_userModeName (void) {
  gOnceFunctionResult_userModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_userModeName (NULL,
                                                          releaseOnceFunctionResult_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_userModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_userModeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_userModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_userModeName ("userModeName",
                                                              functionWithGenericHeader_userModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_initNameForInvocationGraph (const GALGAS_PLMType & constinArgument_inReceiverType,
                                                    const GALGAS_lbigint & constinArgument_inPriority,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1722 = GALGAS_string ("init") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("generated-code-prefixes.galgas", 41)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_1722.plusAssign_operation(GALGAS_string (" $").add_operation (extensionGetter_key (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 42)) ;
  }
  var_s_1722.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 44)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_1722, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 45)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_PLMType operand0 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_lbigint operand1 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_initNameForInvocationGraph (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initNameForInvocationGraph ("initNameForInvocationGraph",
                                                                            functionWithGenericHeader_initNameForInvocationGraph,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            2,
                                                                            functionArgs_initNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'panicNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_panicNameForInvocationGraph (const GALGAS_string & constinArgument_inName,
                                                     const GALGAS_lbigint & constinArgument_inPriority,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_2106 = GALGAS_string ("panic ").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)).add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2106, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 52)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicNameForInvocationGraph (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lbigint operand1 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_panicNameForInvocationGraph (operand0,
                                               operand1,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicNameForInvocationGraph ("panicNameForInvocationGraph",
                                                                             functionWithGenericHeader_panicNameForInvocationGraph,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             2,
                                                                             functionArgs_panicNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'literalStringName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalStringName (const GALGAS_uint & constinArgument_inIndex,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 60)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalStringName (C_Compiler * inCompiler,
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'literalCharacterArrayName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalCharacterArrayName (const GALGAS_uint & constinArgument_inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalCharacterArrayName (C_Compiler * inCompiler,
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'staticStringTypeName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticStringTypeName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("staticString") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticStringTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (NULL,
                                                                  releaseOnceFunctionResult_staticStringTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticStringTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticStringTypeName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'boolTypeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_boolTypeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bool") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'staticIntegerTypeName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticIntegerTypeName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("staticInt") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticIntegerTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticIntegerTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticIntegerTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticIntegerTypeName) {
    gOnceFunctionResult_staticIntegerTypeName = onceFunction_staticIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticIntegerTypeName = true ;
  }
  return gOnceFunctionResult_staticIntegerTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticIntegerTypeName (void) {
  gOnceFunctionResult_staticIntegerTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticIntegerTypeName (NULL,
                                                                   releaseOnceFunctionResult_staticIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticIntegerTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticIntegerTypeName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_staticIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticIntegerTypeName ("staticIntegerTypeName",
                                                                       functionWithGenericHeader_staticIntegerTypeName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_staticIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'functionResultVariableName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_functionResultVariableName (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("result") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GALGAS_string gOnceFunctionResult_functionResultVariableName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_functionResultVariableName) {
    gOnceFunctionResult_functionResultVariableName = onceFunction_functionResultVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_functionResultVariableName = true ;
  }
  return gOnceFunctionResult_functionResultVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_functionResultVariableName (void) {
  gOnceFunctionResult_functionResultVariableName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_functionResultVariableName (NULL,
                                                                        releaseOnceFunctionResult_functionResultVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_functionResultVariableName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_functionResultVariableName (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_functionResultVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_functionResultVariableName ("functionResultVariableName",
                                                                            functionWithGenericHeader_functionResultVariableName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_functionResultVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForFunction'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForFunction (const GALGAS_string & constinArgument_inName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("func.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 100)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 100)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForFunction (C_Compiler * inCompiler,
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForFunction ("llvmNameForFunction",
                                                                     functionWithGenericHeader_llvmNameForFunction,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'interruptNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_interruptNameForInvocationGraph (const GALGAS_lstring & constinArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_4401 = GALGAS_string ("interrupt ").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 108)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_4401, constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 109)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_interruptNameForInvocationGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_interruptNameForInvocationGraph (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_interruptNameForInvocationGraph (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_interruptNameForInvocationGraph ("interruptNameForInvocationGraph",
                                                                                 functionWithGenericHeader_interruptNameForInvocationGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_interruptNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'llvmNameForServiceInterrupt'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmNameForServiceInterrupt (const GALGAS_lstring & constinArgument_inName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("isr.service.").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceInterrupt [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForServiceInterrupt (C_Compiler * inCompiler,
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceInterrupt ("llvmNameForServiceInterrupt",
                                                                             functionWithGenericHeader_llvmNameForServiceInterrupt,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             1,
                                                                             functionArgs_llvmNameForServiceInterrupt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmNameForSectionOrSafeInterrupt'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionOrSafeInterrupt (const GALGAS_string & constinArgument_inName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("isr.section.or.safe.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 121)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionOrSafeInterrupt [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionOrSafeInterrupt (C_Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionOrSafeInterrupt (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionOrSafeInterrupt ("llvmNameForSectionOrSafeInterrupt",
                                                                                   functionWithGenericHeader_llvmNameForSectionOrSafeInterrupt,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   1,
                                                                                   functionArgs_llvmNameForSectionOrSafeInterrupt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'llvmNameForSVCCall'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSVCCall (const GALGAS_lstring & constinArgument_inName,
                                           const GALGAS_routineKind & constinArgument_inMode,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  switch (constinArgument_inMode.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      result_result = function_llvmNameForPrimitiveCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 131)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = function_llvmNameForServiceCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 133)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = function_llvmNameForSectionCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 135)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      result_result = function_llvmNameForSafeCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 137)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 139)), GALGAS_string ("INTERNAL ERROR"), fixItArray0  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 139)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSVCCall [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineKind,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSVCCall (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_llvmNameForSVCCall (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSVCCall ("llvmNameForSVCCall",
                                                                    functionWithGenericHeader_llvmNameForSVCCall,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    2,
                                                                    functionArgs_llvmNameForSVCCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'llvmNameForSVCImplementation'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSVCImplementation (const GALGAS_lstring & constinArgument_inName,
                                                     const GALGAS_routineKind & constinArgument_inMode,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  switch (constinArgument_inMode.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      result_result = function_llvmNameForPrimitiveImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = function_llvmNameForServiceImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 150)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = function_llvmNameForSectionImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 152)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      result_result = function_llvmNameForSafeImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 154)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 156)), GALGAS_string ("INTERNAL ERROR"), fixItArray0  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSVCImplementation [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineKind,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSVCImplementation (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_llvmNameForSVCImplementation (operand0,
                                                operand1,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSVCImplementation ("llvmNameForSVCImplementation",
                                                                              functionWithGenericHeader_llvmNameForSVCImplementation,
                                                                              & kTypeDescriptor_GALGAS_string,
                                                                              2,
                                                                              functionArgs_llvmNameForSVCImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForPrimitiveCall'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForPrimitiveCall (const GALGAS_string & constinArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("primitive.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 165)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 165)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForPrimitiveCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForPrimitiveCall (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForPrimitiveCall (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForPrimitiveCall ("llvmNameForPrimitiveCall",
                                                                          functionWithGenericHeader_llvmNameForPrimitiveCall,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForPrimitiveCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmNameForPrimitiveImplementation'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForPrimitiveImplementation (const GALGAS_string & constinArgument_inName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("primitive.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 171)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 171)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForPrimitiveImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForPrimitiveImplementation (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForPrimitiveImplementation (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForPrimitiveImplementation ("llvmNameForPrimitiveImplementation",
                                                                                    functionWithGenericHeader_llvmNameForPrimitiveImplementation,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    1,
                                                                                    functionArgs_llvmNameForPrimitiveImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForServiceCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForServiceCall (const GALGAS_string & constinArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("service.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 179)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 179)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForServiceCall (C_Compiler * inCompiler,
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceCall ("llvmNameForServiceCall",
                                                                        functionWithGenericHeader_llvmNameForServiceCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForServiceCall) ;

