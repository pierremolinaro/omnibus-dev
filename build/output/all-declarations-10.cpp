#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap function_getInfixOperatorMap (const GALGAS_infixOperator & constinArgument_inOp,
                                                      const GALGAS_semanticContext & constinArgument_inContext,
                                                      const GALGAS_mode & constinArgument_inCurrentMode,
                                                      const GALGAS_location & constinArgument_inOperatorLocation,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result_outOperatorMap ; // Returned variable
  switch (constinArgument_inOp.enumValue ()) {
  case GALGAS_infixOperator::kNotBuilt:
    break ;
  case GALGAS_infixOperator::kEnum_equal:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mNonEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mStrictInfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mInfEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mStrictSupOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mSupEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mBooleanXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 190)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 191)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 191)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 191)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outOperatorMap = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_2) {
        result_outOperatorMap = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 201)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 202)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 202)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 202)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outOperatorMap = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        result_outOperatorMap = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 212)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 213)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 213)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 213)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        result_outOperatorMap = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_8) {
        result_outOperatorMap = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 223)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_11) {
        result_outOperatorMap = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_11) {
        result_outOperatorMap = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 234)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        result_outOperatorMap = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_14) {
        result_outOperatorMap = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mLeftShiftOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mRightShiftOperatorMap (HERE) ;
    }
    break ;
  }
//---
  return result_outOperatorMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_getInfixOperatorMap [5] = {
  & kTypeDescriptor_GALGAS_infixOperator,
  & kTypeDescriptor_GALGAS_semanticContext,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_getInfixOperatorMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_infixOperator operand0 = GALGAS_infixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                             inCompiler
                                                                             COMMA_THERE) ;
  const GALGAS_semanticContext operand1 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  const GALGAS_mode operand2 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_getInfixOperatorMap (operand0,
                                       operand1,
                                       operand2,
                                       operand3,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_getInfixOperatorMap ("getInfixOperatorMap",
                                                                     functionWithGenericHeader_getInfixOperatorMap,
                                                                     & kTypeDescriptor_GALGAS_infixOperatorMap,
                                                                     4,
                                                                     functionArgs_getInfixOperatorMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 19)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 28)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                           const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList_3016 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  GALGAS_objectIR var_leftOperandPossibleReference_3525 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_3016, var_leftOperandPossibleReference_3525, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 52)) ;
  GALGAS_objectIR var_leftOperand_3661 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_3525, var_leftOperand_3661, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 66)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_3749 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 72)) ;
  GALGAS_objectIR var_rightOperandPossibleReference_4259 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_3661, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 77)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3749, var_rightOperandPossibleReference_4259, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 73)) ;
  GALGAS_objectIR var_rightOperand_4397 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_4259, var_rightOperand_4397, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 87)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_leftOperand_3661, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 93)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 93)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 94)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_rightOperand_4397, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 97)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 97)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 98)) ;
  }
  GALGAS_bool test_4 = var_leftOperandPossibleReference_3525.getter_isLiteralInteger (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 101)) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = var_rightOperandPossibleReference_4259.getter_isLiteralInteger (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 101)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bigint var_leftStaticValue_4945 ;
    GALGAS_PLMType joker_4909 ; // Joker input parameter
    var_leftOperandPossibleReference_3525.method_literalInteger (joker_4909, var_leftStaticValue_4945, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 102)) ;
    GALGAS_bigint var_rightStaticValue_5040 ;
    GALGAS_PLMType joker_5003 ; // Joker input parameter
    var_rightOperandPossibleReference_4259.method_literalInteger (joker_5003, var_rightStaticValue_5040, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 103)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_type (var_leftOperand_3661, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)), var_leftStaticValue_4945.operator_and (var_rightStaticValue_5040 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
  }else if (kBoolFalse == test_5) {
    {
    routine_getNewTempValue (extensionGetter_booleanType (constinArgument_inContext, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)) ;
    }
    {
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_3661, var_leftInstructionGenerationList_3016, var_rightOperand_4397, var_rightInstructionGenerationList_3749, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 109)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                          extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@integerSliceExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                            const GALGAS_lstring constinArgument_inConstantName,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerSliceExpressionAST * object = (const cPtr_integerSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerSliceExpressionAST) ;
  cEnumerator_integerSliceFieldListAST enumerator_2546 (object->mProperty_mSliceValues, kENUMERATION_UP) ;
  while (enumerator_2546.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2546.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 58)) ;
    enumerator_2546.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_integerSliceExpressionAST.mSlotID,
                                                             extensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@integerSliceExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerSliceExpressionAST * object = (const cPtr_integerSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerSliceExpressionAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 69)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 69)) ;
  }
  cEnumerator_integerSliceFieldListAST enumerator_3254 (object->mProperty_mSliceValues, kENUMERATION_UP) ;
  while (enumerator_3254.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3254.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 71)) ;
    const enumGalgasBool test_0 = enumerator_3254.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_sliceWidth_3401 = enumerator_3254.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 73)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_sliceWidth_3401.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3254.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 75)), GALGAS_string ("the bit slice width should be > 0"), fixItArray2  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 75)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_lstring var_sliceTypeName_3574 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_sliceWidth_3401.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 77)), enumerator_3254.current_mExpressionLocation (HERE)  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 77)) ;
        {
        ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (var_sliceTypeName_3574, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 78)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 78)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3254.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_lstring var_sliceTypeName_3780 = GALGAS_lstring::constructor_new (GALGAS_string ("bool"), enumerator_3254.current_mExpressionLocation (HERE)  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 81)) ;
        {
        ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (var_sliceTypeName_3780, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 82)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 82)) ;
        }
      }
    }
    enumerator_3254.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_integerSliceExpressionAST.mSlotID,
                                                             extensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@integerSliceExpressionAST analyzeExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerSliceExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                         const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         GALGAS_objectIR & outArgument_outResult,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerSliceExpressionAST * object = (const cPtr_integerSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerSliceExpressionAST) ;
  GALGAS_PLMType var_resultType_4991 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 106)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 106)) ;
  const enumGalgasBool test_0 = var_resultType_4991.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-integer-slice.galgas", 108)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 108)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 109)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 109)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_bool var_unsigned_5293 ;
    GALGAS_uint var_bitCount_5316 ;
    GALGAS_bigint joker_5268_2 ; // Joker input parameter
    GALGAS_bigint joker_5268_1 ; // Joker input parameter
    var_resultType_4991.getter_kind (HERE).method_integer (joker_5268_2, joker_5268_1, var_unsigned_5293, var_bitCount_5316, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 111)) ;
    const enumGalgasBool test_2 = var_unsigned_5293.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 113)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 113)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_uint var_leftShiftAmount_5534 = var_bitCount_5316 ;
      GALGAS_bigint var_accumulatedFieldStaticValues_5588 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 117)) ;
      GALGAS_operandIRList var_operandList_5626 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-integer-slice.galgas", 118)) ;
      cEnumerator_integerSliceFieldListAST enumerator_5703 (object->mProperty_mSliceValues, kENUMERATION_UP) ;
      while (enumerator_5703.hasCurrentObject ()) {
        GALGAS_uint var_sliceWidth_5731 ;
        GALGAS_lstring var_expressionTypeName_5767 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_5703.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5703.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 123)), GALGAS_string ("anonymous selector not allowed here"), fixItArray5  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)) ;
          var_operandList_5626.drop () ; // Release error dropped variable
          var_sliceWidth_5731.drop () ; // Release error dropped variable
          var_expressionTypeName_5767.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_5703.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            var_sliceWidth_5731 = GALGAS_uint ((uint32_t) 1U) ;
            var_expressionTypeName_5767 = GALGAS_lstring::constructor_new (GALGAS_string ("bool"), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 126)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_7 = enumerator_5703.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 127)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 127)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_5703.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 128)), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray8  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)) ;
              var_operandList_5626.drop () ; // Release error dropped variable
              var_sliceWidth_5731.drop () ; // Release error dropped variable
              var_expressionTypeName_5767.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_7) {
              var_sliceWidth_5731 = enumerator_5703.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 130)) ;
              var_expressionTypeName_5767 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_sliceWidth_5731.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 131)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 131)) ;
              const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_sliceWidth_5731.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5703.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 133)), GALGAS_string ("the bit slice width should be > 0"), fixItArray10  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 133)) ;
              }
            }
          }
        }
        const enumGalgasBool test_11 = GALGAS_bool (kIsSupOrEqual, var_leftShiftAmount_5534.objectCompare (var_sliceWidth_5731)).boolEnum () ;
        if (kBoolTrue == test_11) {
          var_leftShiftAmount_5534 = var_leftShiftAmount_5534.substract_operation (var_sliceWidth_5731, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)) ;
        }else if (kBoolFalse == test_11) {
          GALGAS_uint var_specifiedBitCount_6694 = var_bitCount_5316.add_operation (var_sliceWidth_5731, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 139)).substract_operation (var_leftShiftAmount_5534, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 139)) ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_5703.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 140)), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6694.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 140)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 140)).add_operation (var_bitCount_5316.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 140)), fixItArray12  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 140)) ;
          var_leftShiftAmount_5534 = GALGAS_uint ((uint32_t) 0U) ;
        }
        GALGAS_PLMType var_expressionTargetType_6949 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_expressionTypeName_5767, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 144)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 144)) ;
        GALGAS_objectIR var_expressionResultPossibleReference_7612 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5703.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_expressionTargetType_6949, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_7612, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 145)) ;
        GALGAS_objectIR var_expressionResult_7788 ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_7612, var_expressionResult_7788, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 159)) ;
        }
        switch (extensionGetter_type (var_expressionResult_7788, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 165)).getter_kind (HERE).enumValue ()) {
        case GALGAS_typeKind::kNotBuilt:
          break ;
        case GALGAS_typeKind::kEnum_arrayType:
          {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 167)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_dynamicArrayType:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray14  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 169)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray15  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 171)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray16  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 173)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_structure:
          {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray17  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 175)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_syncTool:
          {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray18  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_boolean:
          {
            const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_expressionResult_7788, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 179)).getter_plmOriginalTypeName (SOURCE_FILE ("expression-integer-slice.galgas", 179)).objectCompare (var_expressionTargetType_6949.getter_plmOriginalTypeName (SOURCE_FILE ("expression-integer-slice.galgas", 179)))).boolEnum () ;
            if (kBoolTrue == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an $").add_operation (var_expressionTargetType_6949.getter_plmOriginalTypeName (SOURCE_FILE ("expression-integer-slice.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)).add_operation (GALGAS_string (" expression is required, found an $"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)).add_operation (extensionGetter_type (var_expressionResult_7788, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 182)).getter_plmOriginalTypeName (SOURCE_FILE ("expression-integer-slice.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)).add_operation (GALGAS_string (" expression"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 182)), fixItArray20  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 180)) ;
            }
            const enumGalgasBool test_21 = var_expressionResult_7788.getter_isLiteralInteger (SOURCE_FILE ("expression-integer-slice.galgas", 184)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_bigint var_value_9069 ;
              GALGAS_PLMType joker_9042_1 ; // Joker input parameter
              var_expressionResult_7788.method_literalInteger (joker_9042_1, var_value_9069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 185)) ;
              var_accumulatedFieldStaticValues_5588 = var_accumulatedFieldStaticValues_5588.operator_or (var_value_9069.left_shift_operation (var_leftShiftAmount_5534 COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 186)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 186)) ;
            }else if (kBoolFalse == test_21) {
              GALGAS_objectIR var_extendedResult_9328 ;
              {
              routine_getNewTempValue (var_resultType_4991, ioArgument_ioTemporaries, var_extendedResult_9328, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 189)) ;
              }
              {
              extensionSetter_appendBoolToUInt (ioArgument_ioInstructionGenerationList, var_extendedResult_9328, var_expressionResult_7788, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 190)) ;
              }
              GALGAS_objectIR var_shiftedResult_9534 ;
              {
              routine_getNewTempValue (var_resultType_4991, ioArgument_ioTemporaries, var_shiftedResult_9534, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 192)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9534, var_extendedResult_9328, var_leftShiftAmount_5534, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 193)) ;
              }
              var_operandList_5626.addAssign_operation (var_shiftedResult_9534  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 195)) ;
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 198)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 200)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_pointer:
          {
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 202)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray25 ;
            inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 204)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_staticInteger:
          {
            GALGAS_bigint var_value_10276 ;
            GALGAS_PLMType joker_10249_1 ; // Joker input parameter
            var_expressionResult_7788.method_literalInteger (joker_10249_1, var_value_10276, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 206)) ;
            const enumGalgasBool test_26 = GALGAS_bool (kIsStrictInf, var_value_10276.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 207)))).boolEnum () ;
            if (kBoolTrue == test_26) {
              TC_Array <C_FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray27  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)) ;
            }else if (kBoolFalse == test_26) {
              const enumGalgasBool test_28 = GALGAS_bool (kIsStrictInf, var_value_10276.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)).left_shift_operation (var_sliceWidth_5731 COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)))).boolEnum () ;
              if (kBoolTrue == test_28) {
                var_accumulatedFieldStaticValues_5588 = var_accumulatedFieldStaticValues_5588.operator_or (var_value_10276.left_shift_operation (var_leftShiftAmount_5534 COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 210)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 210)) ;
              }else if (kBoolFalse == test_28) {
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 212)).left_shift_operation (var_sliceWidth_5731 COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 212)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 212)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 212)), fixItArray29  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 212)) ;
              }
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_integer:
          {
            const cEnumAssociatedValues_typeKind_integer * extractPtr_11586 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_type (var_expressionResult_7788, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 165)).getter_kind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_min = extractPtr_11586->mAssociatedValue0 ;
            const GALGAS_bigint extractedValue_max = extractPtr_11586->mAssociatedValue1 ;
            const GALGAS_bool extractedValue_unsigned = extractPtr_11586->mAssociatedValue2 ;
            const GALGAS_uint extractedValue_expressionBitCount = extractPtr_11586->mAssociatedValue3 ;
            const enumGalgasBool test_30 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 215)).boolEnum () ;
            if (kBoolTrue == test_30) {
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5731.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 216)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 216)), fixItArray31  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 216)) ;
            }else if (kBoolFalse == test_30) {
              const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, extractedValue_expressionBitCount.objectCompare (var_sliceWidth_5731)).boolEnum () ;
              if (kBoolTrue == test_32) {
                TC_Array <C_FixItDescription> fixItArray33 ;
                inCompiler->emitSemanticError (enumerator_5703.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5731.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 218)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 218)), fixItArray33  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 218)) ;
              }else if (kBoolFalse == test_32) {
                GALGAS_objectIR var_extendedResult_11191 ;
                {
                routine_getNewTempValue (var_resultType_4991, ioArgument_ioTemporaries, var_extendedResult_11191, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 221)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_11191, var_expressionResult_7788, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 222)) ;
                }
                GALGAS_objectIR var_shiftedResult_11393 ;
                {
                routine_getNewTempValue (var_resultType_4991, ioArgument_ioTemporaries, var_shiftedResult_11393, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 224)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_11393, var_extendedResult_11191, var_leftShiftAmount_5534, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 225)) ;
                }
                var_operandList_5626.addAssign_operation (var_shiftedResult_11393  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 227)) ;
              }
            }
          }
          break ;
        }
        enumerator_5703.gotoNextObject () ;
      }
      const enumGalgasBool test_34 = GALGAS_bool (kIsNotEqual, var_leftShiftAmount_5534.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (object->mProperty_mLocation, var_bitCount_5316.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 232)).add_operation (GALGAS_string (" bits required, "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 232)).add_operation (var_bitCount_5316.substract_operation (var_leftShiftAmount_5534, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 232)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 232)).add_operation (GALGAS_string (" bits defined"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 232)), fixItArray35  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 232)) ;
      }
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4991, var_accumulatedFieldStaticValues_5588  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 235)) ;
      cEnumerator_operandIRList enumerator_11958 (var_operandList_5626, kENUMERATION_UP) ;
      while (enumerator_11958.hasCurrentObject ()) {
        GALGAS_objectIR var_newResult_12029 ;
        {
        routine_getNewTempValue (var_resultType_4991, ioArgument_ioTemporaries, var_newResult_12029, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 237)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_12029, extensionGetter_type (var_newResult_12029, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 240)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 241)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-integer-slice.galgas", 243)), enumerator_11958.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 238)) ;
        }
        outArgument_outResult = var_newResult_12029 ;
        enumerator_11958.gotoNextObject () ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerSliceExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_integerSliceExpressionAST.mSlotID,
                                          extensionMethod_integerSliceExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerSliceExpressionAST_analyzeExpression (defineExtensionMethod_integerSliceExpressionAST_analyzeExpression, NULL) ;

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
                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_3447 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_3447, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 58)) ;
  GALGAS_objectIR var_expressionResult_3593 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_3447, var_expressionResult_3593, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 72)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_3689 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_3727 ;
  GALGAS_objectIR var_leftOperand_3751 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_3689 = constinArgument_inContext.getter_mUnsignedComplementOperatorMap (HERE) ;
      var_binaryOperator_3727 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 84)) ;
      switch (extensionGetter_type (var_expressionResult_3593, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 85)).getter_kind (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 87)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_dynamicArrayType:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 89)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
      case GALGAS_typeKind::kEnum_void:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 93)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 95)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 99)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_syncTool:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 101)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray8  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105)) ;
          var_leftOperand_3751.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          const enumGalgasBool test_10 = constinArgument_inOptionalTargetType.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 107)).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_bigint var_minTarget_4948 ;
            GALGAS_bigint var_maxTarget_4967 ;
            GALGAS_bool joker_4969_2 ; // Joker input parameter
            GALGAS_uint joker_4969_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.getter_kind (HERE).method_integer (var_minTarget_4948, var_maxTarget_4967, joker_4969_2, joker_4969_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 108)) ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_minTarget_4948.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray12  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 110)) ;
              var_leftOperand_3751.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_11) {
              var_leftOperand_3751 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112)), var_maxTarget_4967  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112)) ;
            }
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)) ;
            var_leftOperand_3751.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_5509 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_type (var_expressionResult_3593, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 85)).getter_kind (HERE).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5509->mAssociatedValue3 ;
          var_leftOperand_3751 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_3689 = constinArgument_inContext.getter_mNotOperatorMap (HERE) ;
      var_binaryOperator_3727 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 122)) ;
      var_leftOperand_3751 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 123)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 123))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 123)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_3689 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      var_binaryOperator_3727 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 126)) ;
      var_leftOperand_3751 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 127)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 127))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 127)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_3689 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 130)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 132)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 132)), fixItArray15  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 131)) ;
      }
      const enumGalgasBool test_16 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_16) {
        var_binaryOperator_3727 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 135)) ;
        var_leftOperand_3751 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 136)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 136))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 136)) ;
      }else if (kBoolFalse == test_16) {
        var_binaryOperator_3727 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 138)) ;
        var_leftOperand_3751 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_3689.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_plmOriginalTypeName (var_expressionResult_3593, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143)) ;
  GALGAS_PLMType var_resultType_6545 = extensionGetter_type (var_expressionResult_3593, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 144)) ;
  const enumGalgasBool test_17 = var_expressionResult_3593.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 146)).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_bigint var_value_6688 ;
    GALGAS_PLMType joker_6661_1 ; // Joker input parameter
    var_expressionResult_3593.method_literalInteger (joker_6661_1, var_value_6688, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147)) ;
    GALGAS_bigint var_result_6708 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_6708 = var_value_6688.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 151)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_18 = constinArgument_inOptionalTargetType.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 153)).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_bigint var_minTarget_6913 ;
          GALGAS_bigint var_maxTarget_6932 ;
          GALGAS_bool joker_6934_2 ; // Joker input parameter
          GALGAS_uint joker_6934_1 ; // Joker input parameter
          constinArgument_inOptionalTargetType.getter_kind (HERE).method_integer (var_minTarget_6913, var_maxTarget_6932, joker_6934_2, joker_6934_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 154)) ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsStrictInf, var_minTarget_6913.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 155)))).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray20  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 156)) ;
            var_result_6708.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_19) {
            var_result_6708 = var_value_6688.operator_xor (var_maxTarget_6932 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)) ;
          }
        }else if (kBoolFalse == test_18) {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray21  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 161)) ;
          var_result_6708.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_6708 = var_value_6688.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 164)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_6708 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 166)).operator_xor (var_value_6688 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 166)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6545, var_result_6708  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 168)) ;
  }else if (kBoolFalse == test_17) {
    {
    routine_getNewTempValue (var_resultType_6545, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 175)), object->mProperty_mOperatorLocation, var_leftOperand_3751, var_binaryOperator_3727, var_expressionResult_3593, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 173)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmTypeNameFromPLMname (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
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
                                                                             const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)), object->mProperty_mLiteralInteger.getter_bigint (HERE)  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmTypeNameFromPLMname (GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
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
                                                                            const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                            const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                            const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_uint var_staticStringIndex_3713 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_3713, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (object->mProperty_mLiteralString.getter_string (HERE).getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 64)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)), var_staticStringIndex_3713  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmTypeNameFromPLMname (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) ;
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
                                                                             const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
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
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_booleanType (constinArgument_inContext, inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)), temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
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
  cEnumerator_registerIntegerFieldListAST enumerator_2988 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_2988.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_2988.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 65)) ;
    enumerator_2988.gotoNextObject () ;
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
                                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_controlRegisterMap var_controlRegisterMap_4249 ;
  constinArgument_inContext.getter_mControlRegisterGroupMap (HERE).method_searchKey (object->mProperty_mRegisterGroupName, var_controlRegisterMap_4249, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 88)) ;
  GALGAS_PLMType var_registerType_4355 ;
  GALGAS_sliceMap var_registerBitSliceMap_4409 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4460 ;
  GALGAS_bigint var_registerAddress_4500 ;
  GALGAS_uint var_registerBitCount_4533 ;
  GALGAS_uint var_powerOfTwoForArraySize_4572 ;
  GALGAS_uint var_elementArraySize_4605 ;
  GALGAS_bool joker_4361_2 ; // Joker input parameter
  GALGAS_bool joker_4361_1 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4506 ; // Joker input parameter
  var_controlRegisterMap_4249.method_searchKey (object->mProperty_mRegisterName, var_registerType_4355, joker_4361_2, joker_4361_1, var_registerBitSliceMap_4409, var_registerFieldMap_4460, var_registerAddress_4500, joker_4506, var_registerBitCount_4533, var_powerOfTwoForArraySize_4572, var_elementArraySize_4605, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 93)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4720 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 106)) ;
  GALGAS_operandIRList var_operandList_4754 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 107)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_4823 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_4823.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4823.current_mFieldName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_4823.current_mFieldName (HERE).getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 110)), GALGAS_string ("anonymous selector not allowed here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 110)) ;
      var_operandList_4754.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_0) {
      GALGAS_uint var_fieldBitIndex_5032 ;
      GALGAS_uint var_fieldBitCount_5065 ;
      var_registerFieldMap_4460.method_searchKey (enumerator_4823.current_mFieldName (HERE), var_fieldBitIndex_5032, var_fieldBitCount_5065, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 112)) ;
      GALGAS_objectIR var_expressionResultPossibleReference_5646 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_4823.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 122)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5646, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 118)) ;
      GALGAS_objectIR var_expressionResult_5812 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5646, var_expressionResult_5812, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 132)) ;
      }
      switch (extensionGetter_type (var_expressionResult_5812, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 138)).getter_kind (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 140)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_dynamicArrayType:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 142)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 144)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 146)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 148)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_syncTool:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 150)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
      case GALGAS_typeKind::kEnum_void:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray8  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 152)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 154)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray10  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 156)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 158)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          GALGAS_bigint var_value_7107 ;
          GALGAS_PLMType joker_7080_1 ; // Joker input parameter
          var_expressionResult_5812.method_literalInteger (joker_7080_1, var_value_7107, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 160)) ;
          const enumGalgasBool test_12 = GALGAS_bool (kIsStrictInf, var_value_7107.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray13  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 162)) ;
          }else if (kBoolFalse == test_12) {
            const enumGalgasBool test_14 = GALGAS_bool (kIsStrictInf, var_value_7107.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)).left_shift_operation (var_fieldBitCount_5065 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)))).boolEnum () ;
            if (kBoolTrue == test_14) {
              var_accumulatedFieldStaticValues_4720 = var_accumulatedFieldStaticValues_4720.operator_or (var_value_7107.left_shift_operation (var_fieldBitIndex_5032 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164)) ;
            }else if (kBoolFalse == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)).left_shift_operation (var_fieldBitCount_5065 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)), fixItArray15  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)) ;
            }
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_9384 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_type (var_expressionResult_5812, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 138)).getter_kind (HERE).unsafePointer ()) ;
          const GALGAS_bigint extractedValue_min = extractPtr_9384->mAssociatedValue0 ;
          const GALGAS_bigint extractedValue_max = extractPtr_9384->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_unsigned = extractPtr_9384->mAssociatedValue2 ;
          const GALGAS_uint extractedValue_expressionBitCount = extractPtr_9384->mAssociatedValue3 ;
          const enumGalgasBool test_16 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 169)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray17  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)) ;
          }else if (kBoolFalse == test_16) {
            GALGAS_bool test_18 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5065)) ;
            if (kBoolTrue == test_18.boolEnum ()) {
              test_18 = constinArgument_inRoutineAttributes.getter_panicAllowed (SOURCE_FILE ("expression-cst-registre.galgas", 172)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 172)) ;
            }
            const enumGalgasBool test_19 = test_18.boolEnum () ;
            if (kBoolTrue == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (enumerator_4823.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_5065.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 174)), fixItArray20  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)) ;
            }
            GALGAS_bool test_21 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5065)) ;
            if (kBoolTrue == test_21.boolEnum ()) {
              test_21 = constinArgument_inRoutineAttributes.getter_panicAllowed (SOURCE_FILE ("expression-cst-registre.galgas", 177)) ;
            }
            GALGAS_bool test_22 = test_21 ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 177)) ;
            }
            const enumGalgasBool test_23 = test_22.boolEnum () ;
            if (kBoolTrue == test_23) {
              {
              extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_5812, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)).left_shift_operation (var_fieldBitCount_5065 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)), function_panicCodeForRegisterFieldOvf (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 181)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 181)), enumerator_4823.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) ;
              }
            }
            GALGAS_objectIR var_partialResult_8522 = var_expressionResult_5812 ;
            const enumGalgasBool test_24 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4533)).boolEnum () ;
            if (kBoolTrue == test_24) {
              GALGAS_objectIR var_extendedResult_8676 ;
              {
              routine_getNewTempValue (var_registerType_4355, ioArgument_ioTemporaries, var_extendedResult_8676, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 188)) ;
              }
              {
              extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_8676, var_partialResult_8522, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 189)) ;
              }
              var_partialResult_8522 = var_extendedResult_8676 ;
            }else if (kBoolFalse == test_24) {
              const enumGalgasBool test_25 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4533)).boolEnum () ;
              if (kBoolTrue == test_25) {
                GALGAS_objectIR var_truncatedResult_8947 ;
                {
                routine_getNewTempValue (var_registerType_4355, ioArgument_ioTemporaries, var_truncatedResult_8947, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 192)) ;
                }
                {
                extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_8947, var_partialResult_8522, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 193)) ;
                }
                var_partialResult_8522 = var_truncatedResult_8947 ;
              }
            }
            GALGAS_objectIR var_shiftedResult_9202 ;
            {
            routine_getNewTempValue (var_registerType_4355, ioArgument_ioTemporaries, var_shiftedResult_9202, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 197)) ;
            }
            {
            extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9202, var_partialResult_8522, var_fieldBitIndex_5032, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 198)) ;
            }
            var_operandList_4754.addAssign_operation (var_shiftedResult_9202  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 200)) ;
          }
        }
        break ;
      }
    }
    enumerator_4823.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4355, var_accumulatedFieldStaticValues_4720  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 206)) ;
  cEnumerator_operandIRList enumerator_9589 (var_operandList_4754, kENUMERATION_UP) ;
  while (enumerator_9589.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_9658 ;
    {
    routine_getNewTempValue (var_registerType_4355, ioArgument_ioTemporaries, var_newResult_9658, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 208)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_9658, extensionGetter_type (var_newResult_9658, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 214)), enumerator_9589.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 209)) ;
    }
    outArgument_outResult = var_newResult_9658 ;
    enumerator_9589.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mReceiverName COMMA_SOURCE_FILE ("expression-primary.galgas", 83)) ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_3518 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3518.hasCurrentObject ()) {
    switch (enumerator_3518.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_3582 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_3518.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_3582->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_3727 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_3518.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3727->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 89)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4268 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_3518.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_4268->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_3815 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_3815.hasCurrentObject ()) {
          switch (enumerator_3815.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4058 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3815.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_4058->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 96)) COMMA_SOURCE_FILE ("expression-primary.galgas", 96)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4171 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3815.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_4171->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 98)) ;
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
          enumerator_3815.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3518.gotoNextObject () ;
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_4797 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_4797.hasCurrentObject ()) {
    switch (enumerator_4797.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_4861 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_4797.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_4861->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_4990 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_4797.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_4990->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 116)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_5515 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_4797.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_5515->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_5078 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_5078.hasCurrentObject ()) {
          switch (enumerator_5078.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5321 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_5078.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_5321->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 123)) COMMA_SOURCE_FILE ("expression-primary.galgas", 123)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_5418 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_5078.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_5418->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 125)) ;
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
          enumerator_5078.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4797.gotoNextObject () ;
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
                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_objectIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 154)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 155)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 155)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const GALGAS_primaryInExpressionAST temp_3 = object ;
      callExtensionMethod_analyzePrimaryExpressionNoSelf ((const cPtr_primaryInExpressionAST *) temp_3.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 157)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 172)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 173)), GALGAS_string ("'self' is not available in this context"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      const GALGAS_primaryInExpressionAST temp_6 = object ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((const cPtr_primaryInExpressionAST *) temp_6.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 175)) ;
    }
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
//                                     Routine 'procAnalyzeAccesListInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_procAnalyzeAccesListInExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                               const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               const GALGAS_mode constinArgument_inMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               const GALGAS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                               GALGAS_objectIR & ioArgument_ioResult,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_primaryInExpressionAccessListAST enumerator_14692 (constinArgument_inAccessList, kENUMERATION_UP) ;
  while (enumerator_14692.hasCurrentObject ()) {
    switch (enumerator_14692.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_14937 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_14692.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_14937->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (ioArgument_ioResult, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 364)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_15571 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_14692.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15571->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_15571->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (ioArgument_ioResult, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 371)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_16330 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_14692.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_methodName = extractPtr_16330->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_16330->mAssociatedValue1 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_16330->mAssociatedValue2 ;
        const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 388)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 389)) ;
          ioArgument_ioResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_methodName, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 391)) ;
          }
        }
      }
      break ;
    }
    enumerator_14692.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'analyzeRegisterExpression'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRegisterExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                        const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                        const GALGAS_semanticContext constinArgument_inContext,
                                        const GALGAS_mode constinArgument_inMode,
                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                        GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                        const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                        const GALGAS_location constinArgument_inErrorLocation,
                                        const GALGAS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                        GALGAS_objectIR & outArgument_outResult,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("expression-primary.galgas", 429)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a control register group has no value"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 430)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_primaryInExpressionAccessListAST var_accessList_17362 = constinArgument_inAccessList ;
    GALGAS_primaryInExpressionAccessAST var_registerNameAsField_17429 ;
    {
    var_accessList_17362.setter_popFirst (var_registerNameAsField_17429, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 433)) ;
    }
    const enumGalgasBool test_2 = var_registerNameAsField_17429.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 434)).operator_not (SOURCE_FILE ("expression-primary.galgas", 434)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the control register group should be followed by a control register name"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 435)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_lstring var_controlRegisterName_17671 ;
      var_registerNameAsField_17429.method_property (var_controlRegisterName_17671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 437)) ;
      GALGAS_PLMType var_inRegisterType_17776 ;
      GALGAS_bool var_userAccess_17817 ;
      GALGAS_sliceMap var_inRegisterSliceMap_17859 ;
      GALGAS_controlRegisterFieldMap var_mRegisterFieldMap_17922 ;
      GALGAS_bigint var_inRegisterAddress_17961 ;
      GALGAS_controlRegisterFieldList var_mControlRegisterFieldList_18033 ;
      GALGAS_uint var_mRegisterBitCount_18098 ;
      GALGAS_uint var_inRegisterArraySize_18137 ;
      GALGAS_uint var_inRegisterElementSize_18198 ;
      GALGAS_bool joker_17786 ; // Joker input parameter
      constinArgument_inControlRegisterMap.method_searchKey (var_controlRegisterName_17671, var_inRegisterType_17776, joker_17786, var_userAccess_17817, var_inRegisterSliceMap_17859, var_mRegisterFieldMap_17922, var_inRegisterAddress_17961, var_mControlRegisterFieldList_18033, var_mRegisterBitCount_18098, var_inRegisterArraySize_18137, var_inRegisterElementSize_18198, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 438)) ;
      GALGAS_bool test_4 = var_userAccess_17817.operator_not (SOURCE_FILE ("expression-primary.galgas", 451)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        GALGAS_bool test_5 = constinArgument_inMode.getter_isUserMode (SOURCE_FILE ("expression-primary.galgas", 451)) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = constinArgument_inMode.getter_isAnyMode (SOURCE_FILE ("expression-primary.galgas", 451)) ;
        }
        test_4 = test_5 ;
      }
      const enumGalgasBool test_6 = test_4.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_controlRegisterName_17671.getter_location (SOURCE_FILE ("expression-primary.galgas", 452)), GALGAS_string ("this control register is not accessible in user mode"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 452)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_accessList_17362.getter_length (SOURCE_FILE ("expression-primary.galgas", 453)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          routine_getNewTempValue (var_inRegisterType_17776, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 454)) ;
          }
          {
          extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_inRegisterAddress_17961, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 455)) ;
          }
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = var_accessList_17362.getter_mAccessAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 456)).getter_isArrayAccess (SOURCE_FILE ("expression-primary.galgas", 456)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_primaryInExpressionAccessAST var_first_18744 ;
            {
            var_accessList_17362.setter_popFirst (var_first_18744, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 457)) ;
            }
            GALGAS_expressionAST var_indexExpression_18814 ;
            GALGAS_location var_endOfIndex_18851 ;
            var_first_18744.method_arrayAccess (var_indexExpression_18814, var_endOfIndex_18851, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 458)) ;
            GALGAS_objectIR var_indexIR_19472 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_indexExpression_18814, var_endOfIndex_18851, var_inRegisterArraySize_18137.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 471)), var_inRegisterType_17776, ioArgument_ioInstructionGenerationList, var_indexIR_19472, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 459)) ;
            }
            const enumGalgasBool test_10 = var_indexIR_19472.getter_isLiteralInteger (SOURCE_FILE ("expression-primary.galgas", 476)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_bigint var_idx_19621 ;
              GALGAS_PLMType joker_19596_1 ; // Joker input parameter
              var_indexIR_19472.method_literalInteger (joker_19596_1, var_idx_19621, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 477)) ;
              GALGAS_bigint var_addr_19641 = var_inRegisterAddress_17961.add_operation (var_idx_19621.multiply_operation (var_inRegisterElementSize_18198.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 478)) ;
              {
              routine_getNewTempValue (var_inRegisterType_17776, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 479)) ;
              }
              {
              extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_addr_19641, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 480)) ;
              }
            }else if (kBoolFalse == test_10) {
              {
              routine_getNewTempValue (var_inRegisterType_17776, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 482)) ;
              }
              {
              extensionSetter_appendLoadVolatileRegisterWithSubscript (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_indexIR_19472, var_inRegisterAddress_17961, var_inRegisterElementSize_18198.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 483)) ;
              }
            }
          }else if (kBoolFalse == test_9) {
            {
            routine_getNewTempValue (var_inRegisterType_17776, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 491)) ;
            }
            {
            extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_inRegisterAddress_17961, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 492)) ;
            }
          }
        }
      }
      GALGAS_sliceMap var_currentSliceMap_20382 = var_inRegisterSliceMap_17859 ;
      GALGAS_PLMType var_currentType_20425 = var_inRegisterType_17776 ;
      cEnumerator_primaryInExpressionAccessListAST enumerator_20475 (var_accessList_17362, kENUMERATION_UP) ;
      while (enumerator_20475.hasCurrentObject ()) {
        switch (enumerator_20475.current_mAccess (HERE).enumValue ()) {
        case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
          break ;
        case GALGAS_primaryInExpressionAccessAST::kEnum_property:
          {
            const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_21259 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_20475.current_mAccess (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_propertyName = extractPtr_21259->mAssociatedValue0 ;
            GALGAS_llvmBinaryOperation var_accessOperator_20664 ;
            GALGAS_bigint var_accessRightOperand_20708 ;
            GALGAS_sliceMap var_subMap_20742 ;
            GALGAS_PLMType var_resultType_20779 ;
            var_currentSliceMap_20382.method_searchKey (extractedValue_propertyName, var_accessOperator_20664, var_accessRightOperand_20708, var_subMap_20742, var_resultType_20779, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 500)) ;
            GALGAS_objectIR var_resultIR_20860 ;
            {
            routine_getNewTempValue (var_resultType_20779, ioArgument_ioTemporaries, var_resultIR_20860, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 507)) ;
            }
            {
            extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_20860, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 510)), extractedValue_propertyName.getter_location (HERE), outArgument_outResult, var_accessOperator_20664, GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 514)), var_accessRightOperand_20708  COMMA_SOURCE_FILE ("expression-primary.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 508)) ;
            }
            var_currentSliceMap_20382 = var_subMap_20742 ;
            var_currentType_20425 = var_resultType_20779 ;
            outArgument_outResult = var_resultIR_20860 ;
          }
          break ;
        case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
          {
            const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_21403 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_20475.current_mAccess (HERE).unsafePointer ()) ;
            const GALGAS_location extractedValue_endOfIndex = extractPtr_21403->mAssociatedValue1 ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("receiver is a control register, subscripting is invalid here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 520)) ;
          }
          break ;
        case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
          {
            const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_21542 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_20475.current_mAccess (HERE).unsafePointer ()) ;
            const GALGAS_location extractedValue_errorLocation = extractPtr_21542->mAssociatedValue2 ;
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("receiver is a control register, cannot be used as a function"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 522)) ;
          }
          break ;
        }
        enumerator_20475.gotoNextObject () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (GALGAS_objectIR & ioArgument_ioResult,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_type_24534 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 606)) ;
  GALGAS_propertyMap var_propertyMap_24583 = var_type_24534.getter_propertyMap (HERE) ;
  GALGAS_propertyAccessKind var_accessKind_24682 ;
  GALGAS_bool joker_24645 ; // Joker input parameter
  var_propertyMap_24583.method_searchKey (constinArgument_inPropertyName, joker_24645, var_accessKind_24682, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 608)) ;
  switch (var_accessKind_24682.enumValue ()) {
  case GALGAS_propertyAccessKind::kNotBuilt:
    break ;
  case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 611)), GALGAS_string ("a method cannot be used in this context"), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 611)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_constantProperty:
    {
      const cEnumAssociatedValues_propertyAccessKind_constantProperty * extractPtr_24878 = (const cEnumAssociatedValues_propertyAccessKind_constantProperty *) (var_accessKind_24682.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_value = extractPtr_24878->mAssociatedValue0 ;
      ioArgument_ioResult = extractedValue_value ;
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_indexed:
    {
      const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_25269 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_accessKind_24682.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_propertyType = extractPtr_25269->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_propertyIndex = extractPtr_25269->mAssociatedValue1 ;
      GALGAS_string var_property_5F_llvmName_24998 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_24998, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 615)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 617)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 618)), var_property_5F_llvmName_24998, extractedValue_propertyIndex, constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 616)) ;
      }
      ioArgument_ioResult = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_24998  COMMA_SOURCE_FILE ("expression-primary.galgas", 623)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleArrayAccessInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArrayAccessInExpression (GALGAS_objectIR & ioArgument_ioResult,
                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                            const GALGAS_location constinArgument_inEndOfIndex,
                                            const GALGAS_PLMType constinArgument_inSelfType,
                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                            const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 646)).getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 646)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_elementType_26268 ;
    GALGAS_bigint var_arraySize_26296 ;
    extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 647)).getter_kind (HERE).method_arrayType (var_elementType_26268, var_arraySize_26296, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 647)) ;
    {
    routine_handleArraySubscript (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, var_arraySize_26296, var_elementType_26268, ioArgument_ioInstructionGenerationList, ioArgument_ioResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 648)) ;
    }
    GALGAS_objectIR var_loadedObjectIR_26890 ;
    {
    routine_getNewTempValue (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 665)), ioArgument_ioTemporaries, var_loadedObjectIR_26890, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 665)) ;
    }
    {
    extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, var_loadedObjectIR_26890, extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 666)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 671)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const GALGAS_lstring constinArgument_inMethodName,
                                             GALGAS_objectIR & ioArgument_ioObjectIR,
                                             const GALGAS_PLMType constinArgument_inSelfType,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_receiverType_27894 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 692)) ;
  GALGAS_propertyMap var_propertyMap_27945 = var_receiverType_27894.getter_propertyMap (HERE) ;
  GALGAS_lstring var_key_27982 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 694)) ;
  GALGAS_propertyAccessKind var_propertyAccess_28117 ;
  GALGAS_bool joker_28076 ; // Joker input parameter
  var_propertyMap_27945.method_searchKey (var_key_27982, joker_28076, var_propertyAccess_28117, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 695)) ;
  switch (var_propertyAccess_28117.enumValue ()) {
  case GALGAS_propertyAccessKind::kNotBuilt:
    break ;
  case GALGAS_propertyAccessKind::kEnum_constantProperty:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 698)), GALGAS_string ("a constant cannot be used as method"), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 698)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
    {
      const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * extractPtr_30553 = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) (var_propertyAccess_28117.unsafePointer ()) ;
      const GALGAS_routineDescriptor extractedValue_routineDescriptor = extractPtr_30553->mAssociatedValue0 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_routineDescriptor.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 701)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 701)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 702)), GALGAS_string ("not a function (returns no value)"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 702)) ;
        ioArgument_ioObjectIR.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_1) {
        GALGAS_calleeKindIR var_calleeKind_28551 = function_checkMode (constinArgument_inMode, extensionGetter_executionMode (extractedValue_routineDescriptor.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 707)), extractedValue_routineDescriptor.getter_routineKind (HERE), constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 705)) ;
        {
        extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 712)) ;
        }
        GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_29014 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 714)) ;
        var_effectiveParameterListIR_29014.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 715)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 715)) ;
        {
        routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_routineDescriptor.getter_signature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_29014, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 717)) ;
        }
        GALGAS_objectIR var_callReturnedResult_29918 ;
        {
        routine_getNewTempValue (extractedValue_routineDescriptor.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 734)), ioArgument_ioTemporaries, var_callReturnedResult_29918, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 734)) ;
        }
        GALGAS_lstring var_routineMangledName_29971 = function_routineMangledNameFromCall (function_llvmTypeStringFromPLMname (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 736)).getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 736)), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 736)) ;
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_callReturnedResult_29918, var_routineMangledName_29971, var_routineMangledName_29971, var_calleeKind_28551, var_effectiveParameterListIR_29014  COMMA_SOURCE_FILE ("expression-primary.galgas", 737))  COMMA_SOURCE_FILE ("expression-primary.galgas", 737)) ;
        {
        ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_29971 COMMA_SOURCE_FILE ("expression-primary.galgas", 746)) ;
        }
        ioArgument_ioObjectIR = var_callReturnedResult_29918 ;
      }
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_indexed:
    {
      const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_32786 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_28117.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_propertyType = extractPtr_32786->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_propertyIndex = extractPtr_32786->mAssociatedValue1 ;
      const enumGalgasBool test_3 = extractedValue_propertyType.getter_kind (HERE).getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 751)).operator_not (SOURCE_FILE ("expression-primary.galgas", 751)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 752)), GALGAS_string ("an indexed property cannot be used as method"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 752)) ;
        ioArgument_ioObjectIR.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        GALGAS_routineDescriptor var_descriptor_30819 ;
        extractedValue_propertyType.getter_kind (HERE).method_function (var_descriptor_30819, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 754)) ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_descriptor_30819.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 756)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 757)), GALGAS_string ("not a function (returns no value)"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 757)) ;
          ioArgument_ioObjectIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_31342 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 767)) ;
          {
          routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_descriptor_30819.getter_signature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_31342, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 768)) ;
          }
          GALGAS_string var_property_5F_llvmName_32080 ;
          {
          extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_32080, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 785)) ;
          }
          {
          extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 787)), extensionGetter_llvmName (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 788)), var_property_5F_llvmName_32080, extractedValue_propertyIndex, constinArgument_inMethodName.getter_string (SOURCE_FILE ("expression-primary.galgas", 791)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 786)) ;
          }
          GALGAS_objectIR var_callReturnedResult_32460 ;
          {
          routine_getNewTempValue (var_descriptor_30819.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 794)), ioArgument_ioTemporaries, var_callReturnedResult_32460, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 794)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_32080  COMMA_SOURCE_FILE ("expression-primary.galgas", 797)), extractedValue_propertyType, var_callReturnedResult_32460, var_effectiveParameterListIR_31342  COMMA_SOURCE_FILE ("expression-primary.galgas", 796))  COMMA_SOURCE_FILE ("expression-primary.galgas", 796)) ;
          ioArgument_ioObjectIR = var_callReturnedResult_32460 ;
        }
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mStandaloneFunctionName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 37)) ;
  }
  cEnumerator_effectiveArgumentListAST enumerator_2075 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_2075.hasCurrentObject ()) {
    switch (enumerator_2075.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2294 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2075.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_2294->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2403 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2075.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_2403->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 45)) ;
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
    enumerator_2075.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_3005 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_3005.hasCurrentObject ()) {
    switch (enumerator_3005.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3224 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3005.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3224->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3317 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3005.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3317->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 66)) ;
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
    enumerator_3005.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneFunctionInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                 const GALGAS_PLMType constinArgument_inSelfType,
                                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                 const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                 const GALGAS_mode constinArgument_inCurrentMode,
                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                 GALGAS_objectIR & outArgument_outFunctionCallReturnedValue,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-standalone-function-call.galgas", 92)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStandaloneFunctionName.getter_location (HERE), GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 93)) ;
  }
  GALGAS_lstring var_routineMangledName_4729 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mStandaloneFunctionName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 96)) ;
  GALGAS_lstring var_signature_4852 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mStandaloneFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 98)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_5087 ;
  GALGAS_routineDescriptor var_routineDescriptor_5129 ;
  GALGAS_location joker_5135 ; // Joker input parameter
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), object->mProperty_mStandaloneFunctionName, var_signature_4852, var_LLVMInvocationRoutineName_5087, var_routineDescriptor_5129, joker_5135, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 100)) ;
  GALGAS_routineKind var_routineKind_5204 = var_routineDescriptor_5129.getter_routineKind (HERE) ;
  GALGAS_mode var_calleeMode_5253 = extensionGetter_executionMode (var_routineKind_5204, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 110)) ;
  GALGAS_routineTypedSignature var_formalSignature_5305 = var_routineDescriptor_5129.getter_signature (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_routineDescriptor_5129.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-standalone-function-call.galgas", 113)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mStandaloneFunctionName.getter_location (SOURCE_FILE ("expression-standalone-function-call.galgas", 114)), GALGAS_string ("not a function (returns no value)"), fixItArray3  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 114)) ;
    var_routineDescriptor_5129.drop () ; // Release error dropped variable
    outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    GALGAS_calleeKindIR var_calleeKind_5597 = function_checkMode (constinArgument_inCurrentMode, var_calleeMode_5253, var_routineKind_5204, object->mProperty_mStandaloneFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 117)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5847 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-standalone-function-call.galgas", 124)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5305, object->mProperty_mArguments, object->mProperty_mStandaloneFunctionName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5847, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 125)) ;
    }
    {
    routine_getNewTempValue (var_routineDescriptor_5129.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 142)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 142)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), outArgument_outFunctionCallReturnedValue, var_routineMangledName_4729, var_LLVMInvocationRoutineName_5087, var_calleeKind_5597, var_effectiveParameterListIR_5847  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 144))  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 144)) ;
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_4729 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 153)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                          extensionMethod_standaloneFunctionInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_analyzeExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression, NULL) ;

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
                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_2910 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 56)) ;
  GALGAS_objectIR var_expressionResult_3386 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 61)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_2910, var_expressionResult_3386, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 57)) ;
  const enumGalgasBool test_0 = extensionGetter_type (var_expressionResult_3386, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 72)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 72)).operator_not (SOURCE_FILE ("directive-check.galgas", 72)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 73)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3386, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 76)).operator_not (SOURCE_FILE ("directive-check.galgas", 76)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 77)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_3774 ;
    GALGAS_PLMType joker_3751_1 ; // Joker input parameter
    var_expressionResult_3386.method_literalInteger (joker_3751_1, var_value_3774, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 79)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_3774.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 80)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 81)) ;
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
                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 55)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3071 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  GALGAS_objectIR var_expressionValue_3550 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 64)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3071, var_expressionValue_3550, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 60)) ;
  const enumGalgasBool test_2 = extensionGetter_type (var_expressionValue_3550, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 75)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 75)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 76)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3550, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 79)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 80)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 83)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_instructionGenerationList_3071, var_expressionValue_3550  COMMA_SOURCE_FILE ("instruction-assert.galgas", 84))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 84)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  GALGAS_uint var_staticStringIndex_5189 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 111)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-assert.galgas", 111)), var_staticStringIndex_5189, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  }
  GALGAS_string var_labelAssertOk_5213 = GALGAS_string ("assert.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  GALGAS_string var_labelAssertEr_5280 = GALGAS_string ("assert.not.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (var_labelAssertOk_5213, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (var_labelAssertEr_5280, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertEr_5280.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_5189.getter_string (SOURCE_FILE ("instruction-assert.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)).add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 122)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertOk_5213.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 123)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 132)) ;
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
                                                              const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_mode constinArgument_inCurrentMode,
                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                              GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_PLMType var_targetType_3187 ;
  extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inSelfType, object->mProperty_mTargetAST.getter_mIdentifier (HERE), object->mProperty_mTargetAST.getter_mAccessList (HERE), var_targetType_3187, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 60)) ;
  GALGAS_objectIR var_sourceOperandPossibleReference_3711 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_targetType_3187, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3711, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 62)) ;
  GALGAS_LValueRepresentation var_lvalueIR_4198 ;
  extensionMethod_analyzeLValue (object->mProperty_mTargetAST, constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_4198, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 77)) ;
  GALGAS_PLMType var_t_4236 = extensionGetter_type (var_sourceOperandPossibleReference_3711, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 92)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_t_4236, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 93)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 93)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 94)), GALGAS_string ("source expression is not copyable"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)) ;
  }else if (kBoolFalse == test_0) {
    {
    extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 98)), var_sourceOperandPossibleReference_3711, var_lvalueIR_4198, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 96)) ;
    }
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
//         Overriding extension method '@sliceAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sliceAssignmentInstructionAST * object = (const cPtr_sliceAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_sliceAssignmentInstructionAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 84)) COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 84)) ;
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 85)) ;
  cEnumerator_sliceAssignmentListAST enumerator_3350 (object->mProperty_mSliceAssignmentList, kENUMERATION_UP) ;
  while (enumerator_3350.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_3350.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_sliceWidth_3433 = enumerator_3350.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 88)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_sliceWidth_3433.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3350.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 90)), GALGAS_string ("the bit slice width should be > 0"), fixItArray2  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 90)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_lstring var_sliceTypeName_3606 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_sliceWidth_3433.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 92)), enumerator_3350.current_mSliceWidth (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 92)) ;
        {
        ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (var_sliceTypeName_3606, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 93)) COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 93)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3350.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_lstring var_sliceTypeName_3816 = GALGAS_lstring::constructor_new (GALGAS_string ("bool"), enumerator_3350.current_mSliceWidth (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 96)) ;
        {
        ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (var_sliceTypeName_3816, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 97)) COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 97)) ;
        }
      }
    }
    switch (enumerator_3350.current_mSliceKind (HERE).enumValue ()) {
    case GALGAS_sliceTargetAST::kNotBuilt:
      break ;
    case GALGAS_sliceTargetAST::kEnum_discarded:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_varDeclaration:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_letDeclaration:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_lValue:
      {
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_4145 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_3350.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_target = extractPtr_4145->mAssociatedValue0 ;
        extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_target, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 104)) ;
      }
      break ;
    }
    enumerator_3350.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@sliceAssignmentInstructionAST analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sliceAssignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                   const GALGAS_PLMType constinArgument_inSelfType,
                                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sliceAssignmentInstructionAST * object = (const cPtr_sliceAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_sliceAssignmentInstructionAST) ;
  GALGAS_PLMType var_resultType_5143 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 126)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 126)) ;
  GALGAS_uint var_bitCount_5278 ;
  const enumGalgasBool test_0 = var_resultType_5143.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 129)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 130)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray1  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 130)) ;
    var_bitCount_5278.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_bool var_unsigned_5462 ;
    GALGAS_bigint joker_5437_2 ; // Joker input parameter
    GALGAS_bigint joker_5437_1 ; // Joker input parameter
    var_resultType_5143.getter_kind (HERE).method_integer (joker_5437_2, joker_5437_1, var_unsigned_5462, var_bitCount_5278, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 132)) ;
    const enumGalgasBool test_2 = var_unsigned_5462.operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 134)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 134)) ;
      var_bitCount_5278.drop () ; // Release error dropped variable
    }
  }
  GALGAS_objectIR var_sourceOperand_6108 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_resultType_5143, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand_6108, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 138)) ;
  const enumGalgasBool test_4 = var_sourceOperand_6108.getter_isReference (SOURCE_FILE ("instruction-slice-assignment.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_objectIR var_loadedResultValue_6308 ;
    {
    extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperand_6108, var_loadedResultValue_6308, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 154)) ;
    }
    var_sourceOperand_6108 = var_loadedResultValue_6308 ;
  }
  const enumGalgasBool test_5 = var_sourceOperand_6108.getter_isLiteralInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 162)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bigint var_value_6546 ;
    GALGAS_PLMType joker_6519_1 ; // Joker input parameter
    var_sourceOperand_6108.method_literalInteger (joker_6519_1, var_value_6546, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 163)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsSupOrEqual, var_value_6546.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 164)).left_shift_operation (var_bitCount_5278 COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 164)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mSourceExpressionLocation, GALGAS_string ("static value too large"), fixItArray7  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 165)) ;
      var_sourceOperand_6108.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_6) {
      var_sourceOperand_6108 = GALGAS_objectIR::constructor_literalInteger (var_resultType_5143, var_value_6546  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 167)) ;
    }
  }
  GALGAS_uint var_rightShiftAmount_6802 = var_bitCount_5278 ;
  GALGAS_bigint var_accumulatedFieldStaticValues_6852 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 172)) ;
  cEnumerator_sliceAssignmentListAST enumerator_6913 (object->mProperty_mSliceAssignmentList, kENUMERATION_UP) ;
  while (enumerator_6913.hasCurrentObject ()) {
    GALGAS_lstring var_sliceTypeName_6967 ;
    GALGAS_uint var_sliceWidth_6988 ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_6913.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (enumerator_6913.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 178)), GALGAS_string ("anonymous selector not allowed here"), fixItArray9  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 178)) ;
      var_sliceWidth_6988.drop () ; // Release error dropped variable
      var_sliceTypeName_6967.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_6913.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
      if (kBoolTrue == test_10) {
        var_sliceWidth_6988 = GALGAS_uint ((uint32_t) 1U) ;
        var_sliceTypeName_6967 = GALGAS_lstring::constructor_new (GALGAS_string ("bool"), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 181)) ;
      }else if (kBoolFalse == test_10) {
        const enumGalgasBool test_11 = enumerator_6913.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas", 182)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 182)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_6913.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 183)), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray12  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 183)) ;
          var_sliceWidth_6988.drop () ; // Release error dropped variable
          var_sliceTypeName_6967.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_11) {
          var_sliceWidth_6988 = enumerator_6913.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 185)) ;
          var_sliceTypeName_6967 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_sliceWidth_6988.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)) ;
          const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, var_sliceWidth_6988.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_6913.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 188)), GALGAS_string ("the bit slice width should be > 0"), fixItArray14  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 188)) ;
          }
        }
      }
    }
    const enumGalgasBool test_15 = GALGAS_bool (kIsSupOrEqual, var_rightShiftAmount_6802.objectCompare (var_sliceWidth_6988)).boolEnum () ;
    if (kBoolTrue == test_15) {
      var_rightShiftAmount_6802 = var_rightShiftAmount_6802.substract_operation (var_sliceWidth_6988, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 192)) ;
    }else if (kBoolFalse == test_15) {
      GALGAS_uint var_specifiedBitCount_7800 = var_bitCount_5278.add_operation (var_sliceWidth_6988, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 194)).substract_operation (var_rightShiftAmount_6802, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 194)) ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (enumerator_6913.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 195)), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_7800.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 195)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 195)).add_operation (var_bitCount_5278.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 195)), fixItArray16  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 195)) ;
      var_rightShiftAmount_6802 = GALGAS_uint ((uint32_t) 0U) ;
    }
    GALGAS_PLMType var_sliceType_8000 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_sliceTypeName_6967, inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 198)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 198)) ;
    GALGAS_objectIR var_shiftedSourceValue_8200 ;
    {
    routine_getNewTempValue (extensionGetter_type (var_sourceOperand_6108, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 200)), ioArgument_ioTemporaries, var_shiftedSourceValue_8200, inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 200)) ;
    }
    {
    extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, var_shiftedSourceValue_8200, var_sourceOperand_6108, var_rightShiftAmount_6802, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 201)) ;
    }
    GALGAS_objectIR var_shiftedTruncatedSourceValue_8395 ;
    {
    routine_getNewTempValue (var_sliceType_8000, ioArgument_ioTemporaries, var_shiftedTruncatedSourceValue_8395, inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 202)) ;
    }
    {
    extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_shiftedTruncatedSourceValue_8395, var_shiftedSourceValue_8200, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 203)) ;
    }
    switch (enumerator_6913.current_mSliceKind (HERE).enumValue ()) {
    case GALGAS_sliceTargetAST::kNotBuilt:
      break ;
    case GALGAS_sliceTargetAST::kEnum_discarded:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_varDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_varDeclaration * extractPtr_9435 = (const cEnumAssociatedValues_sliceTargetAST_varDeclaration *) (enumerator_6913.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_varName = extractPtr_9435->mAssociatedValue0 ;
        GALGAS_lstring var_plmLocalVariableName_8656 = GALGAS_lstring::constructor_new (extractedValue_varName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 209)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 209)), extractedValue_varName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 209))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 209)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 210)) ;
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_varName, var_sliceType_8000, var_plmLocalVariableName_8656, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-slice-assignment.galgas", 211)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 211)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmLocalVariableName_8656.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 213)), var_sliceType_8000, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 213)) ;
        GALGAS_LValueRepresentation var_targetRef_9047 = GALGAS_LValueRepresentation::constructor_universalReference (var_sliceType_8000, function_llvmNameForLocalVariable (var_plmLocalVariableName_8656.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 217))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 215)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, extractedValue_varName.getter_location (HERE), var_shiftedTruncatedSourceValue_8395, var_targetRef_9047, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 220)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_letDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_letDeclaration * extractPtr_10298 = (const cEnumAssociatedValues_sliceTargetAST_letDeclaration *) (enumerator_6913.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_letName = extractPtr_10298->mAssociatedValue0 ;
        GALGAS_lstring var_plmLocalVariableName_9534 = GALGAS_lstring::constructor_new (extractedValue_letName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 228)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 228)), extractedValue_letName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 228))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 228)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 229)) ;
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_letName, GALGAS_bool (false), var_sliceType_8000, var_plmLocalVariableName_9534, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 230)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmLocalVariableName_9534.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 232)), var_sliceType_8000, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 232)) ;
        GALGAS_LValueRepresentation var_targetRef_9908 = GALGAS_LValueRepresentation::constructor_universalReference (var_sliceType_8000, function_llvmNameForLocalVariable (var_plmLocalVariableName_9534.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 236))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 234)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, extractedValue_letName.getter_location (HERE), var_shiftedTruncatedSourceValue_8395, var_targetRef_9908, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 239)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_lValue:
      {
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_11101 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_6913.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_target = extractPtr_11101->mAssociatedValue0 ;
        GALGAS_LValueRepresentation var_lvalueIR_10847 ;
        extensionMethod_analyzeLValue (extractedValue_target, constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_10847, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 246)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, extractedValue_target.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 263)), var_shiftedTruncatedSourceValue_8395, var_lvalueIR_10847, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 261)) ;
        }
      }
      break ;
    }
    enumerator_6913.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sliceAssignmentInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST.mSlotID,
                                extensionMethod_sliceAssignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sliceAssignmentInstructionAST_analyze (defineExtensionMethod_sliceAssignmentInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@bitbandInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionAST * object = (const cPtr_bitbandInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), object->mProperty_mRegisterGroupName.getter_location (SOURCE_FILE ("instruction-bit-banding.galgas", 54))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)) COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)) ;
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mBitExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 55)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_bitbandInstructionAST.mSlotID,
                                                              extensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@bitbandInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bitbandInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                           const GALGAS_mode constinArgument_inMode,
                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionAST * object = (const cPtr_bitbandInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionAST) ;
  GALGAS_valuedObject var_entity_3570 ;
  extensionMethod_searchEntity (ioArgument_ioUniversalMap, object->mProperty_mRegisterGroupName, var_entity_3570, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 76)) ;
  const enumGalgasBool test_0 = var_entity_3570.getter_isRegisterGroup (SOURCE_FILE ("instruction-bit-banding.galgas", 77)).operator_not (SOURCE_FILE ("instruction-bit-banding.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mRegisterGroupName.getter_location (SOURCE_FILE ("instruction-bit-banding.galgas", 78)), GALGAS_string ("a register group is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 78)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_controlRegisterMap var_registerMap_3739 ;
    var_entity_3570.method_registerGroup (var_registerMap_3739, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 80)) ;
    GALGAS_PLMType var_registerType_3828 ;
    GALGAS_bool var_readOnly_3854 ;
    GALGAS_bool var_userAccess_3882 ;
    GALGAS_sliceMap var_inRegisterSliceMap_3929 ;
    GALGAS_controlRegisterFieldMap var_mRegisterFieldMap_3990 ;
    GALGAS_bigint var_registerAddress_4025 ;
    GALGAS_controlRegisterFieldList var_mControlRegisterFieldList_4095 ;
    GALGAS_uint var_registerBitCount_4157 ;
    GALGAS_uint var_registerArraySize_4192 ;
    GALGAS_uint var_registerElementSize_4256 ;
    var_registerMap_3739.method_searchKey (object->mProperty_mRegisterName, var_registerType_3828, var_readOnly_3854, var_userAccess_3882, var_inRegisterSliceMap_3929, var_mRegisterFieldMap_3990, var_registerAddress_4025, var_mControlRegisterFieldList_4095, var_registerBitCount_4157, var_registerArraySize_4192, var_registerElementSize_4256, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 81)) ;
    GALGAS_bool test_2 = GALGAS_bool (kIsStrictInf, var_registerAddress_4025.objectCompare (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterBaseAddress (HERE).getter_bigint (HERE))) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = GALGAS_bool (kIsSupOrEqual, var_registerAddress_4025.objectCompare (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterEndAddress (HERE).getter_bigint (HERE))) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("instruction-bit-banding.galgas", 97)), GALGAS_string ("register address (").add_operation (var_registerAddress_4025.getter_hexString (SOURCE_FILE ("instruction-bit-banding.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)).add_operation (GALGAS_string (") invalid: should be >= "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)).add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterBaseAddress (HERE).getter_bigint (HERE).getter_hexString (SOURCE_FILE ("instruction-bit-banding.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)).add_operation (GALGAS_string (" and < "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 99)).add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterEndAddress (HERE).getter_bigint (HERE).getter_hexString (SOURCE_FILE ("instruction-bit-banding.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)), fixItArray4  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 97)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = var_readOnly_3854.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("instruction-bit-banding.galgas", 102)), GALGAS_string ("this control register cannot be modified (declared with @ro attribute)"), fixItArray6  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 102)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_7 = var_userAccess_3882.operator_not (SOURCE_FILE ("instruction-bit-banding.galgas", 103)) ;
        if (kBoolTrue == test_7.boolEnum ()) {
          GALGAS_bool test_8 = constinArgument_inMode.getter_isUserMode (SOURCE_FILE ("instruction-bit-banding.galgas", 103)) ;
          if (kBoolTrue != test_8.boolEnum ()) {
            test_8 = constinArgument_inMode.getter_isAnyMode (SOURCE_FILE ("instruction-bit-banding.galgas", 103)) ;
          }
          test_7 = test_8 ;
        }
        const enumGalgasBool test_9 = test_7.boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("instruction-bit-banding.galgas", 104)), GALGAS_string ("this control register is not accessible in user mode"), fixItArray10  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 104)) ;
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_registerArraySize_4192.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("instruction-bit-banding.galgas", 106)), GALGAS_string ("control register array not handled yet"), fixItArray12  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)) ;
          }
        }
      }
    }
    GALGAS_PLMType var_requiredBitExpressionType_5420 ;
    GALGAS_uint joker_5428_1 ; // Joker input parameter
    constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_registerBitCount_4157.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 110)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 110)).getter_significantBitCount (SOURCE_FILE ("instruction-bit-banding.galgas", 110)).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 110)), object->mProperty_mBitExpressionLocation  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 110)), var_requiredBitExpressionType_5420, joker_5428_1, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 109)) ;
    GALGAS_objectIR var_bitExpressionOperand_5979 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mBitExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_requiredBitExpressionType_5420, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_bitExpressionOperand_5979, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 115)) ;
    const enumGalgasBool test_13 = var_bitExpressionOperand_5979.getter_isReference (SOURCE_FILE ("instruction-bit-banding.galgas", 130)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_objectIR var_loadedResultValue_6207 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_bitExpressionOperand_5979, var_loadedResultValue_6207, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 131)) ;
      }
      var_bitExpressionOperand_5979 = var_loadedResultValue_6207 ;
    }
    GALGAS_bool test_14 = GALGAS_bool (kIsEqual, extensionGetter_type (var_bitExpressionOperand_5979, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 139)).getter_plmOriginalTypeName (HERE).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 139)))) ;
    if (kBoolTrue == test_14.boolEnum ()) {
      test_14 = var_bitExpressionOperand_5979.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 139)) ;
    }
    const enumGalgasBool test_15 = test_14.boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_bigint var_value_6582 ;
      GALGAS_PLMType joker_6555_1 ; // Joker input parameter
      var_bitExpressionOperand_5979.method_literalInteger (joker_6555_1, var_value_6582, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 140)) ;
      GALGAS_bool test_16 = GALGAS_bool (kIsStrictInf, var_value_6582.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 141)))) ;
      if (kBoolTrue != test_16.boolEnum ()) {
        test_16 = GALGAS_bool (kIsSupOrEqual, var_value_6582.objectCompare (var_registerBitCount_4157.getter_bigint (SOURCE_FILE ("instruction-bit-banding.galgas", 141)))) ;
      }
      const enumGalgasBool test_17 = test_16.boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (object->mProperty_mBitExpressionLocation, GALGAS_string ("static value should be >= 0 and <").add_operation (var_registerBitCount_4157.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 142)), fixItArray18  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 142)) ;
      }else if (kBoolFalse == test_17) {
        var_bitExpressionOperand_5979 = GALGAS_objectIR::constructor_literalInteger (var_requiredBitExpressionType_5420, var_value_6582  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 144)) ;
      }
    }else if (kBoolFalse == test_15) {
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_bitExpressionOperand_5979, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 146)).getter_plmOriginalTypeName (HERE).objectCompare (var_requiredBitExpressionType_5420.getter_plmOriginalTypeName (HERE))).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (object->mProperty_mBitExpressionLocation, GALGAS_string ("bit expression type should be $").add_operation (var_requiredBitExpressionType_5420.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 147)), fixItArray20  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 147)) ;
      }
    }
    GALGAS_PLMType var_requiredSourceExpressionType_7262 ;
    GALGAS_uint joker_7270_1 ; // Joker input parameter
    constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), object->mProperty_mSourceExpressionLocation  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 151)), var_requiredSourceExpressionType_7262, joker_7270_1, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 150)) ;
    GALGAS_objectIR var_sourceExpressionOperand_7833 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_requiredSourceExpressionType_7262, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceExpressionOperand_7833, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 156)) ;
    const enumGalgasBool test_21 = var_sourceExpressionOperand_7833.getter_isReference (SOURCE_FILE ("instruction-bit-banding.galgas", 171)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_objectIR var_loadedResultValue_8067 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceExpressionOperand_7833, var_loadedResultValue_8067, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 172)) ;
      }
      var_sourceExpressionOperand_7833 = var_loadedResultValue_8067 ;
    }
    GALGAS_bool test_22 = GALGAS_bool (kIsEqual, extensionGetter_type (var_sourceExpressionOperand_7833, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 180)).getter_plmOriginalTypeName (HERE).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 180)))) ;
    if (kBoolTrue == test_22.boolEnum ()) {
      test_22 = var_sourceExpressionOperand_7833.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 180)) ;
    }
    const enumGalgasBool test_23 = test_22.boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_bigint var_value_8460 ;
      GALGAS_PLMType joker_8433_1 ; // Joker input parameter
      var_sourceExpressionOperand_7833.method_literalInteger (joker_8433_1, var_value_8460, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 181)) ;
      GALGAS_bool test_24 = GALGAS_bool (kIsStrictInf, var_value_8460.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 182)))) ;
      if (kBoolTrue != test_24.boolEnum ()) {
        test_24 = GALGAS_bool (kIsStrictSup, var_value_8460.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 182)))) ;
      }
      const enumGalgasBool test_25 = test_24.boolEnum () ;
      if (kBoolTrue == test_25) {
        TC_Array <C_FixItDescription> fixItArray26 ;
        inCompiler->emitSemanticError (object->mProperty_mSourceExpressionLocation, GALGAS_string ("static value should be 0 or 1"), fixItArray26  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 183)) ;
      }else if (kBoolFalse == test_25) {
        var_sourceExpressionOperand_7833 = GALGAS_objectIR::constructor_literalInteger (var_requiredSourceExpressionType_7262, var_value_8460  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 185)) ;
      }
    }else if (kBoolFalse == test_23) {
      const enumGalgasBool test_27 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_sourceExpressionOperand_7833, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 187)).getter_plmOriginalTypeName (HERE).objectCompare (var_requiredSourceExpressionType_7262.getter_plmOriginalTypeName (HERE))).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (object->mProperty_mSourceExpressionLocation, GALGAS_string ("bit expression type should be $").add_operation (var_requiredSourceExpressionType_7262.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 188)), fixItArray28  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 188)) ;
      }
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_bitbandInstructionIR::constructor_new (var_registerAddress_4025, var_bitExpressionOperand_5979, var_sourceExpressionOperand_7833, constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterBaseAddress (HERE).getter_bigint (HERE), constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterRelocationAddress (HERE).getter_bigint (HERE), constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterOffsetMultiplier (HERE).getter_bigint (HERE), constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterBitMultiplier (HERE).getter_bigint (HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 191))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 191)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitbandInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_bitbandInstructionAST.mSlotID,
                                extensionMethod_bitbandInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitbandInstructionAST_analyze (defineExtensionMethod_bitbandInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@bitbandInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bitbandInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionIR * object = (const cPtr_bitbandInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionIR) ;
  GALGAS_string var_idx_11012 = ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 234)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 236)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 237)).add_operation (GALGAS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 237)).add_operation (object->mProperty_mRegisterAddress.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 237)).add_operation (object->mProperty_mBitbandRegisterBaseAddress.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 238)).add_operation (GALGAS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 238)).add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 238)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 238)).add_operation (object->mProperty_mBitbandRegisterOffsetMultiplier.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 238)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.offset.").add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 239)).add_operation (GALGAS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 239)).add_operation (extensionGetter_llvmName (object->mProperty_mBitExpressionOperand, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 239)).add_operation (object->mProperty_mBitbandRegisterBitMultiplier.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %offset.").add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 240)).add_operation (GALGAS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 240)).add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 240)).add_operation (GALGAS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 240)).add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 240)).add_operation (GALGAS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.word.addr.").add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 241)).add_operation (GALGAS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 241)).add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 241)).add_operation (object->mProperty_mBitbandRegisterRelocationAddress.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr.").add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 242)).add_operation (GALGAS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 242)).add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 242)).add_operation (GALGAS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.").add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 243)).add_operation (GALGAS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 243)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceExpressionOperand, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 243)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %value.").add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 244)).add_operation (GALGAS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 244)).add_operation (var_idx_11012, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 244)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 244)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitbandInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_bitbandInstructionIR.mSlotID,
                                            extensionMethod_bitbandInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitbandInstructionIR_llvmInstructionCode (defineExtensionMethod_bitbandInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@bitbandInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bitbandInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bitbandInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_bitbandInstructionIR.mSlotID,
                                                extensionMethod_bitbandInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitbandInstructionIR_enterAccessibleEntities (defineExtensionMethod_bitbandInstructionIR_enterAccessibleEntities, NULL) ;

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
    GALGAS_lstring var_typeName_2791 = function_llvmTypeNameFromPLMname (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 68)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2791 COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
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
  GALGAS_lstring var_typeName_3202 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 77)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3202 COMMA_SOURCE_FILE ("instruction-var.galgas", 78)) ;
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
                                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 98)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 99)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
  }
  GALGAS_PLMType var_targetType_4248 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_4920 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_targetType_4248, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_4920, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 102)) ;
  GALGAS_objectIR var_result_4937 = function_checkAssignmentCompatibility (var_sourcePossibleReference_4920, var_targetType_4248, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 116)) ;
  GALGAS_lstring var_plmLocalVariableName_5168 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 123)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 123)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 123))  COMMA_SOURCE_FILE ("instruction-var.galgas", 123)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  {
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, object->mProperty_mVarName, extensionGetter_type (var_result_4937, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)), var_plmLocalVariableName_5168, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 125)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmLocalVariableName_5168.getter_string (SOURCE_FILE ("instruction-var.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 127)), extensionGetter_type (var_result_4937, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 127)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 127)) ;
  {
  extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 131)), var_sourcePossibleReference_4920, GALGAS_LValueRepresentation::constructor_universalReference (extensionGetter_type (var_result_4937, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 133)), function_llvmNameForLocalVariable (var_plmLocalVariableName_5168.getter_string (SOURCE_FILE ("instruction-var.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 133))  COMMA_SOURCE_FILE ("instruction-var.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 129)) ;
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
                                                       const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                       GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_PLMType var_targetType_6551 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 151)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_6551, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)).operator_not (SOURCE_FILE ("instruction-var.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 154)), GALGAS_string ("$").add_operation (var_targetType_6551.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 154)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 154)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 154)) ;
  }
  GALGAS_lstring var_plmName_6806 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 157)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 157)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 157))  COMMA_SOURCE_FILE ("instruction-var.galgas", 157)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 158)) ;
  {
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, object->mProperty_mVarName, var_targetType_6551, var_plmName_6806, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 159)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_6806.getter_string (SOURCE_FILE ("instruction-var.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 161)), var_targetType_6551, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 161)) ;
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
    GALGAS_lstring var_typeName_2186 = function_llvmTypeNameFromPLMname (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2186 COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
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
                                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 71)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 72)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 72)) ;
  }
  GALGAS_PLMType var_targetType_3321 = temp_0 ;
  GALGAS_objectIR var_expressionResultPossibleReference_4003 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_targetType_3321, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4003, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 75)) ;
  GALGAS_objectIR var_expressionResult_4149 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4003, var_expressionResult_4149, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 89)) ;
  }
  GALGAS_objectIR var_result_4196 = function_checkAssignmentCompatibility (var_expressionResult_4149, var_targetType_3321, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 95)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_4196, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)).operator_not (SOURCE_FILE ("instruction-let.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 104)), GALGAS_string ("$").add_operation (extensionGetter_plmOriginalTypeName (var_result_4196, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
    var_result_4196.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_plmName_4583 = GALGAS_lstring::constructor_new (object->mProperty_mConstantName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 107))  COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_plmOriginalTypeName (var_result_4196, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_4583.getter_string (SOURCE_FILE ("instruction-let.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)), extensionGetter_type (var_result_4196, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-let.galgas", 110)) ;
    {
    extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_4196, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112)), function_llvmNameForLocalVariable (var_plmName_4583.getter_string (SOURCE_FILE ("instruction-let.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), var_result_4196, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)) ;
    }
  }
  {
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mConstantName, GALGAS_bool (false), extensionGetter_type (var_result_4196, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 117)), var_plmName_4583, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
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
                                                       const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                       const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                       GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                       GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 48)) ;
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
                                                         const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 53)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3090 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  GALGAS_objectIR var_result_3568 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("instruction-panic.galgas", 60)), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 62)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3090, var_result_3568, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 58)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3090.getter_length (SOURCE_FILE ("instruction-panic.galgas", 74)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3568.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 75)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 75)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_plmOriginalTypeName (var_result_3568, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 76)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 76)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_3931 ;
    GALGAS_bigint var_max_3944 ;
    GALGAS_bool joker_3946_2 ; // Joker input parameter
    GALGAS_uint joker_3946_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)).getter_kind (HERE).method_integer (var_min_3931, var_max_3944, joker_3946_2, joker_3946_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)) ;
    GALGAS_bigint var_throwValue_4002 ;
    GALGAS_PLMType joker_3978_1 ; // Joker input parameter
    var_result_3568.method_literalInteger (joker_3978_1, var_throwValue_4002, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_4002.objectCompare (var_min_3931)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_4002.objectCompare (var_max_3944)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.getter_mPanicCodeType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 83)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_throwValue_4002  COMMA_SOURCE_FILE ("instruction-panic.galgas", 84))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)) ;
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
  GALGAS_uint var_staticStringIndex_5296 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 109)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 109)), var_staticStringIndex_5296, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_5296.getter_string (SOURCE_FILE ("instruction-panic.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 112)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 112)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)) ;
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
                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_objectIR var_testResultPossibleReference_5162 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 115)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResultPossibleReference_5162, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 111)) ;
  GALGAS_objectIR var_testResult_5296 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResultPossibleReference_5162, var_testResult_5296, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 125)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testResult_5296, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 131)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 131)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_plmOriginalTypeName (var_testResult_5296, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 132)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 132)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 132)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_5296, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)).operator_not (SOURCE_FILE ("instruction-if.galgas", 133)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 134)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_5296, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 135)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_5955 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 140)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_5955, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6524 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 155)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6524, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 156)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 169)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_5296, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_5955, var_elseInstructionGenerationList_6524  COMMA_SOURCE_FILE ("instruction-if.galgas", 171))  COMMA_SOURCE_FILE ("instruction-if.galgas", 171)) ;
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
  GALGAS_string var_labelTrue_8133 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).getter_string (SOURCE_FILE ("instruction-if.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)) ;
  GALGAS_string var_labelFalse_8196 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)).getter_string (SOURCE_FILE ("instruction-if.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)) ;
  GALGAS_string var_labelEnd_8258 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).getter_string (SOURCE_FILE ("instruction-if.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (var_labelTrue_8133, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (var_labelFalse_8196, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 200)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8133.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8258, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 204)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8196.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8258, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8258.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 210)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 220)) ;
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
  cEnumerator_syncInstructionBranchListAST enumerator_5027 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_5027.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5027.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 142)) ;
    enumerator_5027.gotoNextObject () ;
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
                                                        const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_mode constinArgument_inMode,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_syncInstructionBranchListIR var_onInstructionBranchListIR_6099 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 162)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_6170 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_6170.hasCurrentObject ()) {
    {
    extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 164)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR_6275 ;
    switch (enumerator_6170.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_7538 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6170.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_7538->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7538->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_7538->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_6416 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 169)) ;
        GALGAS_objectIR var_sourceOperand_6952 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-sync.galgas", 172)) COMMA_SOURCE_FILE ("instruction-sync.galgas", 172)), constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 174)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6416, var_sourceOperand_6952, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 170)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_plmOriginalTypeName (var_sourceOperand_6952, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 184)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 184)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 185)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_6952, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 186)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 187)) ;
          }
        }
        GALGAS_objectIR var_sourceValue_7353 ;
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6416, ioArgument_ioTemporaries, var_sourceOperand_6952, var_sourceValue_7353, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 189)) ;
        }
        var_guardedCommandIR_6275 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isContinue, var_guardInstructionGenerationList_6416, var_sourceValue_7353  COMMA_SOURCE_FILE ("instruction-sync.galgas", 194)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_13331 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6170.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_13331->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_13331->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_warnsOnStaticExpression = extractPtr_13331->mAssociatedValue2 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_13331->mAssociatedValue3 ;
        const GALGAS_lbool extractedValue_usesSelf = extractPtr_13331->mAssociatedValue4 ;
        const GALGAS_lstringlist extractedValue_nameList = extractPtr_13331->mAssociatedValue5 ;
        const GALGAS_effectiveArgumentListAST extractedValue_parameterList = extractPtr_13331->mAssociatedValue6 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_7701 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 200)) ;
        GALGAS_objectIR var_boolExpressionResult_8258 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-sync.galgas", 204)), constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 206)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_7701, var_boolExpressionResult_8258, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 202)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_plmOriginalTypeName (var_boolExpressionResult_8258, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 216)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 216)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 217)) ;
        }else if (kBoolFalse == test_4) {
          GALGAS_bool test_6 = extractedValue_warnsOnStaticExpression ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = extensionGetter_isStatic (var_boolExpressionResult_8258, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 218)) ;
          }
          const enumGalgasBool test_7 = test_6.boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExp, GALGAS_string ("guarded expression is static"), fixItArray8  COMMA_SOURCE_FILE ("instruction-sync.galgas", 219)) ;
          }
        }
        GALGAS_objectIR var_boolExpressionValue_8703 ;
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_7701, ioArgument_ioTemporaries, var_boolExpressionResult_8258, var_boolExpressionValue_8703, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 221)) ;
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_8800 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 227)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_8875 ;
        GALGAS_lstring var_guardMangledName_8907 ;
        const enumGalgasBool test_9 = extractedValue_usesSelf.getter_bool (HERE).boolEnum () ;
        if (kBoolTrue == test_9) {
          const enumGalgasBool test_10 = constinArgument_inSelfType.getter_kind (HERE).getter_isVoid (SOURCE_FILE ("instruction-sync.galgas", 231)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_usesSelf.getter_location (SOURCE_FILE ("instruction-sync.galgas", 232)), GALGAS_string ("'self' is not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-sync.galgas", 232)) ;
            var_guardEffectiveParameterListIR_8875.drop () ; // Release error dropped variable
            var_guardMangledName_8907.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_10) {
            GALGAS_lstringlist var_propertyList_9155 = extractedValue_nameList ;
            GALGAS_lstring var_guardName_9215 ;
            {
            var_propertyList_9155.setter_popLast (var_guardName_9215, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 235)) ;
            }
            GALGAS_objectIR var_currentObject_9250 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 236))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 236)) ;
            cEnumerator_lstringlist enumerator_9356 (var_propertyList_9155, kENUMERATION_UP) ;
            while (enumerator_9356.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression (var_currentObject_9250, enumerator_9356.current_mValue (HERE), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 238)) ;
              }
              enumerator_9356.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_9250, var_guardName_9215, extractedValue_parameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8800, var_guardEffectiveParameterListIR_8875, var_guardMangledName_8907, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 245)) ;
            }
          }
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, extractedValue_nameList.getter_length (SOURCE_FILE ("instruction-sync.galgas", 263)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_12) {
            {
            routine_analyzeStandaloneGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_nameList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 267)), extractedValue_parameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8800, var_guardEffectiveParameterListIR_8875, var_guardMangledName_8907, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 264)) ;
            }
          }else if (kBoolFalse == test_12) {
            GALGAS_lstringlist var_propertyList_11111 = extractedValue_nameList ;
            GALGAS_lstring var_globalReceiverName_11179 ;
            {
            var_propertyList_11111.setter_popFirst (var_globalReceiverName_11179, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 282)) ;
            }
            GALGAS_lstring var_guardName_11227 ;
            {
            var_propertyList_11111.setter_popLast (var_guardName_11227, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 283)) ;
            }
            GALGAS_objectIR var_currentObjectIR_11410 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_11179, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObjectIR_11410, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 284)) ;
            cEnumerator_lstringlist enumerator_11463 (var_propertyList_11111, kENUMERATION_UP) ;
            while (enumerator_11463.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression (var_currentObjectIR_11410, enumerator_11463.current_mValue (HERE), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 291)) ;
              }
              enumerator_11463.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_11410, var_guardName_11227, extractedValue_parameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8800, var_guardEffectiveParameterListIR_8875, var_guardMangledName_8907, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 298)) ;
            }
          }
        }
        const enumGalgasBool test_13 = var_boolExpressionValue_8703.getter_isLiteralInteger (SOURCE_FILE ("instruction-sync.galgas", 316)).boolEnum () ;
        if (kBoolTrue == test_13) {
          GALGAS_bigint var_value_12487 ;
          GALGAS_PLMType joker_12460_1 ; // Joker input parameter
          var_boolExpressionValue_8703.method_literalInteger (joker_12460_1, var_value_12487, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 317)) ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_value_12487.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 318)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            var_guardedCommandIR_6275 = GALGAS_guardedCommandIR::constructor_sync (extractedValue_isContinue, var_guardMangledName_8907.getter_string (HERE), var_guardInstructionGenerationList_8800, var_guardEffectiveParameterListIR_8875  COMMA_SOURCE_FILE ("instruction-sync.galgas", 319)) ;
          }else if (kBoolFalse == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_guardMangledName_8907.getter_location (SOURCE_FILE ("instruction-sync.galgas", 326)), GALGAS_string ("false guard not handled yet"), fixItArray15  COMMA_SOURCE_FILE ("instruction-sync.galgas", 326)) ;
            var_guardedCommandIR_6275.drop () ; // Release error dropped variable
          }
        }else if (kBoolFalse == test_13) {
          var_guardedCommandIR_6275 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isContinue, var_boolExpInstructionGenerationList_7701, var_boolExpressionValue_8703, var_guardMangledName_8907.getter_string (HERE), var_guardInstructionGenerationList_8800, var_guardEffectiveParameterListIR_8875  COMMA_SOURCE_FILE ("instruction-sync.galgas", 329)) ;
        }
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_13418 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 340)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_6170.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, enumerator_6170.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_13418, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 341)) ;
    {
    extensionSetter_closeOverride (ioArgument_ioUniversalMap, enumerator_6170.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)) ;
    }
    var_onInstructionBranchListIR_6099.addAssign_operation (var_guardedCommandIR_6275, var_branchInstructionGenerationList_13418  COMMA_SOURCE_FILE ("instruction-sync.galgas", 356)) ;
    enumerator_6170.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_onInstructionBranchListIR_6099  COMMA_SOURCE_FILE ("instruction-sync.galgas", 361))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 361)) ;
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
                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                               const GALGAS_objectIR constinArgument_inReceiver,
                               const GALGAS_lstring constinArgument_inGuardName,
                               const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                               const GALGAS_semanticContext constinArgument_inContext,
                               const GALGAS_mode constinArgument_inRequiredMode,
                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                               GALGAS_allocaList & ioArgument_ioAllocaList,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  GALGAS_guardMapForContext var_guardMap_15152 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 383)).getter_guardMap (SOURCE_FILE ("instruction-sync.galgas", 383)) ;
  GALGAS_lstring var_guardMangledName_15206 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 384)) ;
  GALGAS_bool var_isPublic_15334 ;
  GALGAS_routineTypedSignature var_formalSignature_15378 ;
  var_guardMap_15152.method_searchKey (var_guardMangledName_15206, var_isPublic_15334, var_formalSignature_15378, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 385)) ;
  const enumGalgasBool test_0 = var_isPublic_15334.operator_not (SOURCE_FILE ("instruction-sync.galgas", 387)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 388)), GALGAS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 388)) ;
    outArgument_outGuardMangledName.drop () ; // Release error dropped variable
    outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = function_routineMangledNameFromCall (function_llvmTypeStringFromPLMname (extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 391)).getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 391)), constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 390)) ;
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 396)) ;
    }
    GALGAS_procCallEffectiveParameterListIR temp_2 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 398)) ;
    temp_2.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 398)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("instruction-sync.galgas", 398)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_15378, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 399)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeStandaloneGuardCall'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeStandaloneGuardCall (const GALGAS_PLMType constinArgument_inSelfType,
                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                         const GALGAS_lstring constinArgument_inGuardName,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode constinArgument_inRequiredMode,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                         GALGAS_lstring & outArgument_outGuardMangledName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 436)) ;
  GALGAS_bool var_isPublic_17679 ;
  GALGAS_routineTypedSignature var_formalSignature_17727 ;
  constinArgument_inContext.getter_mGuardMapForContext (HERE).method_searchKey (outArgument_outGuardMangledName, var_isPublic_17679, var_formalSignature_17727, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 441)) ;
  const enumGalgasBool test_0 = var_isPublic_17679.operator_not (SOURCE_FILE ("instruction-sync.galgas", 447)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_declarationFile_17811 = constinArgument_inContext.getter_mGuardMapForContext (HERE).getter_locationForKey (outArgument_outGuardMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)) ;
    GALGAS_string var_invocationFile_17918 = constinArgument_inGuardName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_invocationFile_17918.objectCompare (var_declarationFile_17811)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 451)), GALGAS_string ("this guard is not public"), fixItArray2  COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)) ;
  }
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 457)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_17727, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)) ;
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
  GALGAS_string var_startLabel_20926 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_20926, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)) ;
  GALGAS_string var_startLabelName_21090 = var_startLabel_20926.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_21090.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)) ;
  GALGAS_string var_exitLabelName_21174 = var_startLabel_20926.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)) ;
  GALGAS_string var_selectLabelName_21219 = var_startLabel_20926.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)) ;
  GALGAS_string var_errorLabelName_21265 = var_startLabel_20926.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)) ;
  GALGAS_string var_currentStartBranchLabel_21319 = var_startLabelName_21090 ;
  cEnumerator_syncInstructionBranchListIR enumerator_21379 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_21342 ((uint32_t) 0) ;
  while (enumerator_21379.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_21414 = GALGAS_string ("%").add_operation (var_startLabel_20926, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)).add_operation (index_21342.getter_string (SOURCE_FILE ("instruction-sync.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)) ;
    GALGAS_bool var_isWhileGuardedCommand_21484 ;
    switch (enumerator_21379.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_22354 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_21379.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_22354->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_22354->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_22354->mAssociatedValue2 ;
        var_isWhileGuardedCommand_21484 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 536)) ;
        GALGAS_string var_acceptedLabelName_21784 = var_startLabel_20926.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)).add_operation (index_21342.getter_string (SOURCE_FILE ("instruction-sync.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)) ;
        GALGAS_string var_rejectedLabelName_21847 = var_startLabel_20926.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 538)).add_operation (index_21342.getter_string (SOURCE_FILE ("instruction-sync.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 538)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 538)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @note.guard.state (i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (var_acceptedLabelName_21784, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (var_rejectedLabelName_21847, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_21784.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_21847, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21847.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 543)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_21414, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_24081 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_21379.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_24081->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_24081->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_24081->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24081->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_24081->mAssociatedValue4 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_24081->mAssociatedValue5 ;
        var_isWhileGuardedCommand_21484 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)) ;
        GALGAS_string var_testOkLabelName_22657 = var_startLabel_20926.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)).add_operation (index_21342.getter_string (SOURCE_FILE ("instruction-sync.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)) ;
        GALGAS_string var_testExitLabelName_22728 = var_startLabel_20926.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 549)).add_operation (index_21342.getter_string (SOURCE_FILE ("instruction-sync.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 549)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 549)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)).add_operation (var_testOkLabelName_22657, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)).add_operation (var_testExitLabelName_22728, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_22657.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 551)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 551)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 552)) ;
        GALGAS_string var_guardAcceptationLabelName_23083 = var_startLabel_20926.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)).add_operation (index_21342.getter_string (SOURCE_FILE ("instruction-sync.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_23083, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 555)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_23309 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_23309.hasCurrentObject ()) {
          switch (enumerator_23309.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23309.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)).add_operation (extensionGetter_llvmName (enumerator_23309.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23309.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 561)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 561)).add_operation (extensionGetter_llvmName (enumerator_23309.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 561)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 561)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23309.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 563)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 563)).add_operation (extensionGetter_llvmName (enumerator_23309.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 563)) ;
            }
            break ;
          }
          if (enumerator_23309.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 566)) ;
          }
          enumerator_23309.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 568)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_22728, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 569)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 569)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_22728.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_21414, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 571)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 571)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_23083, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)).add_operation (var_testOkLabelName_22657, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_21319, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_24942 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_21379.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_24942->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24942->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_24942->mAssociatedValue2 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_24942->mAssociatedValue3 ;
        var_isWhileGuardedCommand_21484 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 576)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_21414, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 577)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 577)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 577)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 578)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_24493 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_24493.hasCurrentObject ()) {
          switch (enumerator_24493.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24493.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 582)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 582)).add_operation (extensionGetter_llvmName (enumerator_24493.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 582)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24493.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 584)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 584)).add_operation (extensionGetter_llvmName (enumerator_24493.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 584)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24493.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 586)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 586)).add_operation (extensionGetter_llvmName (enumerator_24493.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 586)) ;
            }
            break ;
          }
          if (enumerator_24493.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 589)) ;
          }
          enumerator_24493.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 591)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_24976 = var_startLabel_20926.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 593)).add_operation (index_21342.getter_string (SOURCE_FILE ("instruction-sync.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 593)) ;
    GALGAS_string var_rejectedLabelName_25036 = var_startLabel_20926.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 594)).add_operation (index_21342.getter_string (SOURCE_FILE ("instruction-sync.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 594)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_21414, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 595)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 595)).add_operation (var_acceptedLabelName_24976, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 595)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 595)).add_operation (var_rejectedLabelName_25036, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 595)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 595)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 595)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_24976.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 596)) ;
    extensionMethod_instructionListLLVMCode (enumerator_21379.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_21484.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_21090 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_21174 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_25036.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 599)) ;
    var_currentStartBranchLabel_21319 = var_rejectedLabelName_25036 ;
    enumerator_21379.gotoNextObject () ;
    index_21342.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_21219, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 602)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 602)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 602)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 602)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_21219, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 603)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 603)).add_operation (var_startLabelName_21090, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 603)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 603)).add_operation (var_errorLabelName_21265, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 603)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 603)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_21265.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 604)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_21174, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_26228 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 609)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 609)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 609)), var_staticStringIndex_26228, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 608)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_26228.getter_string (SOURCE_FILE ("instruction-sync.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 612)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 612)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 613)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 613)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 613)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 613)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 613)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 614)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 614)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 614)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 614)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 614)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 614)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 615)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_21174.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 617)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 617)) ;
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
  GALGAS_uint var_branchCount_26911 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 626)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_26911)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_26911 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_27096 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_27096.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_27096.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 631)) ;
    switch (enumerator_27096.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_27417 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_27096.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_27417->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 634)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_27661 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_27096.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_27661->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_27661->mAssociatedValue2 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 636)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 637)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_28051 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_27096.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_28051->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_28051->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_28051->mAssociatedValue4 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 639)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 640)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 641)) ;
      }
      break ;
    }
    enumerator_27096.gotoNextObject () ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 47)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
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
                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3404 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 68)) ;
  GALGAS_objectIR var_testValuePossibleReference_3905 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 73)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3404, var_testValuePossibleReference_3905, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 69)) ;
  GALGAS_objectIR var_testValue_4039 ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_3404, ioArgument_ioTemporaries, var_testValuePossibleReference_3905, var_testValue_4039, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 83)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testValue_4039, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_plmOriginalTypeName (var_testValue_4039, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 90)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_4039, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 92)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_4435 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 95)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 96)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4435, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 113)), var_testInstructionGenerationList_3404, var_testValue_4039, var_instructionGenerationList_4435  COMMA_SOURCE_FILE ("instruction-while.galgas", 112))  COMMA_SOURCE_FILE ("instruction-while.galgas", 112)) ;
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
  GALGAS_string var_labelTest_6106 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)) ;
  GALGAS_string var_labelLoop_6157 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)) ;
  GALGAS_string var_labelEnd_6207 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6106, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 141)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6106.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 142)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_m_5F_while_5F_Expression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (var_labelLoop_6157, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (var_labelEnd_6207, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 144)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6157.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6106, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6207.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 73)) ;
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
                                                       const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedObjectPointer_4102 ;
  {
  extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, object->mProperty_mIteratedObject, var_iteratedObjectPointer_4102, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 93)) ;
  }
  GALGAS_PLMType var_iteratedTypeKind_4141 = extensionGetter_type (var_iteratedObjectPointer_4102, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 95)) ;
  GALGAS_PLMType var_iteratedElementType_4234 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4141.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 98)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_iteratedElementType_4234 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_iteratedTypeKind_4141.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 100)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bigint joker_4511_1 ; // Joker input parameter
      var_iteratedTypeKind_4141.getter_kind (HERE).method_arrayType (var_iteratedElementType_4234, joker_4511_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 103)), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 103)) ;
      var_iteratedElementType_4234.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_plmName_4628 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 106))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_4628.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)), var_iteratedElementType_4234, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  }
  {
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mVarName, GALGAS_bool (false), var_iteratedElementType_4234, var_plmName_4628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5076 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
  GALGAS_objectIR var_whileExpressionResult_5571 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 118)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5076, var_whileExpressionResult_5571, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  const enumGalgasBool test_3 = extensionGetter_type (var_whileExpressionResult_5571, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 129)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 129)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 130)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bool test_5 = object->mProperty_mStaticWhileExpression ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_isStatic (var_whileExpressionResult_5571, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 131)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 131)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 132)) ;
    }else if (kBoolFalse == test_6) {
      GALGAS_bool test_8 = extensionGetter_isStatic (var_whileExpressionResult_5571, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 133)) ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)) ;
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6157 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 137)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_for_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6157, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4141.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 153)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_plmName_4628.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 155)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_4102, var_whileExpression_5F_GenerationList_5076, var_whileExpressionResult_5571, var_doInstructionList_5F_GenerationList_6157  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = var_iteratedTypeKind_4141.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_PLMType var_elementType_7138 ;
      GALGAS_bigint var_size_7153 ;
      var_iteratedTypeKind_4141.getter_kind (HERE).method_arrayType (var_elementType_7138, var_size_7153, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)) ;
      GALGAS_stringset var_invokedFunctionSet_7188 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 164)) ;
      const enumGalgasBool test_13 = ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 166)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_7188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_plmName_4628.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 170)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4102, var_whileExpression_5F_GenerationList_5076, var_whileExpressionResult_5571, var_doInstructionList_5F_GenerationList_6157, var_elementType_7138, var_size_7153.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)), var_invokedFunctionSet_7188  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
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
  GALGAS_string var_elementTypeLLVMName_9868 = extensionGetter_llvmTypeName (object->mProperty_mElementType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 236)) ;
  GALGAS_string var_listTypeLLVMName_9921 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)) ;
  GALGAS_string var_locationIndex_9996 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 238)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 238)) ;
  GALGAS_string var_startLabel_10072 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240)) ;
  GALGAS_string var_testLabel_10125 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 241)) ;
  GALGAS_string var_whileLabel_10178 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)) ;
  GALGAS_string var_nextLabel_10231 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 243)) ;
  GALGAS_string var_loopVar_10281 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 244)) ;
  GALGAS_string var_loopLabel_10327 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 245)) ;
  GALGAS_string var_endLabel_10378 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 246)) ;
  GALGAS_string var_indexVar_10431 = GALGAS_string ("for.index.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 248)) ;
  GALGAS_string var_ptrVar_10476 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 249)) ;
  GALGAS_string var_currentValue_10525 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_10072, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10072.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)).add_operation (var_listTypeLLVMName_9921, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_9921, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10125, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10125.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_startLabel_10072, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)).add_operation (var_nextLabel_10231, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (var_startLabel_10072, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (var_nextLabel_10231, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (var_whileLabel_10178, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (var_endLabel_10378, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10178.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (var_loopLabel_10327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (var_endLabel_10378, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10327.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_10525, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9868.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)).add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_currentValue_10525, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10231, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10231.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9868.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10125, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10378.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mIteratedObjectName.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 314))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)) ;
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
  GALGAS_string var_startLabel_14321 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)) ;
  GALGAS_string var_testLabel_14386 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)) ;
  GALGAS_string var_loopLabel_14450 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)) ;
  GALGAS_string var_whileLabel_14515 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)) ;
  GALGAS_string var_nextLabel_14580 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)) ;
  GALGAS_string var_endLabel_14643 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)) ;
  GALGAS_string var_ptrVar_14704 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)) ;
  GALGAS_string var_currentVar_14765 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)) ;
  GALGAS_string var_stringLLVMTypeName_14835 = extensionGetter_llvmTypeName (function_literalStringType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_14321, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14321.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (var_stringLLVMTypeName_14835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (var_stringLLVMTypeName_14835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14386, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_14386.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (var_stringLLVMTypeName_14835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14321.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (var_nextLabel_14580, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_stringLLVMTypeName_14835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_endLabel_14643, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_whileLabel_14515, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_14515.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (var_loopLabel_14450, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (var_endLabel_14643, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_14450.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_14580, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_14580.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14386, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_14643.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 392)) ;
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
    GALGAS_lstring var_typeName_2868 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2868 COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 68)) ;
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
                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_PLMType var_type_4164 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 92)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 92)) ;
  switch (var_type_4164.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)), GALGAS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)), GALGAS_string ("an integer type is required here"), fixItArray9  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8458 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4164.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8458->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8458->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8458->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8458->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResultPossibleReference_5739 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_type_4164, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResultPossibleReference_5739, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 117)) ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5915 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResultPossibleReference_5739, var_lowerBoundExpressionResult_5915, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 131)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResultPossibleReference_6456 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_type_4164, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResultPossibleReference_6456, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 136)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_6632 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResultPossibleReference_6456, var_upperBoundExpressionResult_6632, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 150)) ;
      }
      GALGAS_objectIR var_lowerBound_6689 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5915, var_type_4164, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 156)) ;
      GALGAS_objectIR var_upperBound_6913 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6632, var_type_4164, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 162)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      }
      GALGAS_lstring var_enumeratedVarName_7238 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_enumeratedVarName_7238.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), var_type_4164, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)) ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_10) {
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mVarName, GALGAS_bool (false), var_type_4164, var_enumeratedVarName_7238, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7646 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7646, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      {
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 192)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarName_7238.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 195)), var_type_4164, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_6689, var_upperBound_6913, var_instructionGenerationList_7646  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 194))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 194)) ;
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
  GALGAS_string var_llvmType_9522 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  GALGAS_string var_llvmVarName_9563 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  GALGAS_string var_testLabel_9618 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  GALGAS_string var_loopLabel_9681 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  GALGAS_string var_endLabel_9743 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  GALGAS_string var_testResult_9807 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  GALGAS_string var_loadedVarName_9882 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  GALGAS_string var_currentVarName_9959 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  GALGAS_string var_nextVarName_10034 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (var_llvmVarName_9563, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9618.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9882, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (var_llvmVarName_9563, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9807, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_loadedVarName_9882, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9807, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (var_loopLabel_9681, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (var_endLabel_9743, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9681.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_9959, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmVarName_9563, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_10034, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_currentVarName_9959, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (var_nextVarName_10034, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (var_llvmType_9522, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (var_llvmVarName_9563, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9743.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)) ;
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
  cEnumerator_accessInAssignmentListAST enumerator_3214 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3214.hasCurrentObject ()) {
    switch (enumerator_3214.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_3388 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_3214.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3388->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75)) ;
      }
      break ;
    }
    enumerator_3214.gotoNextObject () ;
  }
  cEnumerator_effectiveArgumentListAST enumerator_3425 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_3425.hasCurrentObject ()) {
    switch (enumerator_3425.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3644 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3425.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3644->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 83)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 83)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3737 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3425.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3737->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 85)) ;
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
    enumerator_3425.gotoNextObject () ;
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
  cEnumerator_effectiveArgumentListAST enumerator_4102 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_4102.hasCurrentObject ()) {
    switch (enumerator_4102.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4321 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4102.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4321->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 102)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 102)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4414 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4102.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4414->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 104)) ;
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
    enumerator_4102.gotoNextObject () ;
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
                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  GALGAS_lstring var_calledRoutineSignature_6317 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 151)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_6560 ;
  GALGAS_routineDescriptor var_routineDescriptor_6606 ;
  GALGAS_location var_keyLocation_6644 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, var_calledRoutineSignature_6317, var_LLVMInvocationRoutineName_6560, var_routineDescriptor_6606, var_keyLocation_6644, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 153)) ;
  GALGAS_lstring var_routineMangledName_6712 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 162)) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_6712 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 168)) ;
  }
  GALGAS_calleeKindIR var_routineKindIR_6973 = function_checkMode (constinArgument_inCurrentMode, extensionGetter_executionMode (var_routineDescriptor_6606.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 172)), var_routineDescriptor_6606.getter_routineKind (HERE), object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 170)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_7260 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 177)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_routineDescriptor_6606.getter_signature (HERE), object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_7260, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 178)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 198)), var_routineMangledName_6712, var_LLVMInvocationRoutineName_6560, var_routineKindIR_6973, var_effectiveParameterListIR_7260  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 196))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 196)) ;
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
                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode constinArgument_inCurrentMode,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_PLMType var_currentType_8940 ;
  GALGAS_string var_currentLLVMAddressVar_8972 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 225)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 226)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 226)) ;
      var_currentType_8940.drop () ; // Release error dropped variable
      var_currentLLVMAddressVar_8972.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_currentType_8940 = constinArgument_inSelfType ;
      var_currentLLVMAddressVar_8972 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 229)) ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_9342 ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, object->mProperty_mIdentifier, var_entity_9342, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 232)) ;
    switch (var_entity_9342.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        const cEnumAssociatedValues_valuedObject_task * extractPtr_9489 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_9342.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_9489->mAssociatedValue0 ;
        var_currentType_8940 = extractedValue_type ;
        var_currentLLVMAddressVar_8972 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 236)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        const cEnumAssociatedValues_valuedObject_driver * extractPtr_9779 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_9342.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_9779->mAssociatedValue0 ;
        const GALGAS_bool extractedValue_instancied = extractPtr_9779->mAssociatedValue1 ;
        const enumGalgasBool test_3 = extractedValue_instancied.boolEnum () ;
        if (kBoolTrue == test_3) {
          var_currentType_8940 = extractedValue_type ;
          var_currentLLVMAddressVar_8972 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 240)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 242)), GALGAS_string ("the driver should be instancied"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 242)) ;
          var_currentType_8940.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_8972.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_registerGroup:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 245)), GALGAS_string ("a control register constant cannot be used in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 245)) ;
        var_currentType_8940.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_8972.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 249)), GALGAS_string ("a global constant cannot be used in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 249)) ;
        var_currentType_8940.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_8972.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_10259 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_9342.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10259->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10259->mAssociatedValue1 ;
        var_currentType_8940 = extractedValue_type ;
        var_currentLLVMAddressVar_8972 = function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_10408 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_9342.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10408->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10408->mAssociatedValue1 ;
        var_currentType_8940 = extractedValue_type ;
        var_currentLLVMAddressVar_8972 = function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 257)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_10567 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_9342.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10567->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10567->mAssociatedValue1 ;
        var_currentType_8940 = extractedValue_type ;
        var_currentLLVMAddressVar_8972 = function_llvmNameForGlobalSyncInstance (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 260)) ;
      }
      break ;
    }
  }
  GALGAS_propertyMap var_currentObjectPropertyMap_10658 = var_currentType_8940.getter_propertyMap (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_10773 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_10827 ;
  {
  var_accessList_10773.setter_popLast (var_lastAccess_10827, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 267)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_10882 (var_accessList_10773, kENUMERATION_UP) ;
  while (enumerator_10882.hasCurrentObject ()) {
    switch (enumerator_10882.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_11951 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_10882.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_11951->mAssociatedValue0 ;
        GALGAS_bool var_isPublic_11046 ;
        GALGAS_propertyAccessKind var_propertyAccess_11094 ;
        var_currentObjectPropertyMap_10658.method_searchKey (extractedValue_propertyName, var_isPublic_11046, var_propertyAccess_11094, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 272)) ;
        switch (var_propertyAccess_11094.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 279)), GALGAS_string ("a method cannot be used in this context"), fixItArray7  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 279)) ;
            var_currentType_8940.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_8972.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 281)), GALGAS_string ("a context property cannot be used in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 281)) ;
            var_currentType_8940.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_8972.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_11934 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_11094.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_11934->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_11934->mAssociatedValue1 ;
            GALGAS_string var_llvmPropertyName_11572 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_11572, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 285)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_8940, var_currentLLVMAddressVar_8972, var_llvmPropertyName_11572, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 286)) ;
            }
            var_currentType_8940 = extractedValue_propertyType ;
            var_currentLLVMAddressVar_8972 = var_llvmPropertyName_11572 ;
            var_currentObjectPropertyMap_10658 = var_currentType_8940.getter_propertyMap (HERE) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12115 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_10882.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_12115->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_12115->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray9  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 298)) ;
        var_currentType_8940.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_8972.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_10882.gotoNextObject () ;
  }
  switch (var_lastAccess_10827.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12279 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_10827.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_12279->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 304)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17535 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_10827.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_17535->mAssociatedValue0 ;
      GALGAS_propertyMap var_propertyMap_12386 = var_currentObjectPropertyMap_10658 ;
      GALGAS_lstring var_key_12432 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 308)) ;
      GALGAS_propertyAccessKind var_propertyAccess_12566 ;
      GALGAS_bool joker_12525 ; // Joker input parameter
      var_propertyMap_12386.method_searchKey (var_key_12432, joker_12525, var_propertyAccess_12566, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 309)) ;
      switch (var_propertyAccess_12566.enumValue ()) {
      case GALGAS_propertyAccessKind::kNotBuilt:
        break ;
      case GALGAS_propertyAccessKind::kEnum_constantProperty:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 312)), GALGAS_string ("a constant cannot be used as method"), fixItArray11  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 312)) ;
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
        {
          const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * extractPtr_15378 = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) (var_propertyAccess_12566.unsafePointer ()) ;
          const GALGAS_routineDescriptor extractedValue_routineDescriptor = extractPtr_15378->mAssociatedValue0 ;
          GALGAS_procCallEffectiveParameterListIR temp_12 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 317)) ;
          temp_12.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 316)), GALGAS_objectIR::constructor_reference (var_currentType_8940, var_currentLLVMAddressVar_8972  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 317))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 317)) ;
          GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_12861 = temp_12 ;
          GALGAS_routineKind var_routineKind_13048 = extractedValue_routineDescriptor.getter_routineKind (HERE) ;
          GALGAS_mode var_calleeMode_13101 = extensionGetter_executionMode (var_routineKind_13048, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 322)) ;
          GALGAS_routineTypedSignature var_formalSignature_13157 = extractedValue_routineDescriptor.getter_signature (HERE) ;
          GALGAS_bool test_13 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = extractedValue_routineDescriptor.getter_canMutateProperties (HERE) ;
          }
          GALGAS_bool test_14 = test_13 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = constinArgument_inRoutineAttributes.getter_mutating (SOURCE_FILE ("instruction-procedure-call.galgas", 326)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 326)) ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 327)), GALGAS_string ("cannot mutate properties, current method is not declared with @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 328)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 328)), fixItArray16  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 327)) ;
          }
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, extractedValue_routineDescriptor.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 331)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 332)), GALGAS_string ("not a procedure (returns a value)"), fixItArray18  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 332)) ;
          }else if (kBoolFalse == test_17) {
            GALGAS_calleeKindIR var_calleeKind_13859 = function_checkMode (constinArgument_inCurrentMode, var_calleeMode_13101, var_routineKind_13048, extractedValue_methodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 335)) ;
            {
            routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_13157, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_12861, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 342)) ;
            }
            GALGAS_lstring var_routineMangledName_14795 = function_routineMangledNameFromCall (function_llvmTypeStringFromPLMname (var_currentType_8940.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 359)), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 359)) ;
            ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 362)), GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 363)), var_routineMangledName_14795, var_routineMangledName_14795, var_calleeKind_13859, var_effectiveParameterListIR_12861  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 361))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 361)) ;
            {
            ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_14795 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 370)) ;
            }
          }
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_indexed:
        {
          const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_17527 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_12566.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_propertyType = extractPtr_17527->mAssociatedValue0 ;
          const GALGAS_uint extractedValue_propertyIndex = extractPtr_17527->mAssociatedValue1 ;
          const enumGalgasBool test_19 = extractedValue_propertyType.getter_kind (HERE).getter_isFunction (SOURCE_FILE ("instruction-procedure-call.galgas", 373)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 373)).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 374)), GALGAS_string ("an indexed property cannot be used as method"), fixItArray20  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 374)) ;
          }else if (kBoolFalse == test_19) {
            GALGAS_routineDescriptor var_descriptor_15639 ;
            extractedValue_propertyType.getter_kind (HERE).method_function (var_descriptor_15639, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 376)) ;
            const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, var_descriptor_15639.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 378)))).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 379)), GALGAS_string ("a function returns a value and cannot be called as a procedure"), fixItArray22  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 379)) ;
            }else if (kBoolFalse == test_21) {
              GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_16190 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 389)) ;
              {
              routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_descriptor_15639.getter_signature (HERE), object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_16190, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 390)) ;
              }
              GALGAS_string var_property_5F_llvmName_16968 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_16968, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 407)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_8940, var_currentLLVMAddressVar_8972, var_property_5F_llvmName_16968, extractedValue_propertyIndex, extractedValue_methodName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 408)) ;
              }
              ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_16968  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 417)), extractedValue_propertyType, GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 419)), var_effectiveParameterListIR_16190  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 416))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 416)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
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
  cEnumerator_switchCaseListAST enumerator_2891 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_2891.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2891.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2891.gotoNextObject () ;
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
                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_3996 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 91)) ;
  GALGAS_objectIR var_switchValueIRPossibleReference_4487 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("instruction-switch.galgas", 94)), constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_3996, var_switchValueIRPossibleReference_4487, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 92)) ;
  GALGAS_objectIR var_switchValueIR_4627 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIRPossibleReference_4487, var_switchValueIR_4627, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 106)) ;
  }
  GALGAS_classConstantMap var_enumConstantMap_4680 = extensionGetter_type (var_switchValueIR_4627, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)).getter_classConstantMap (HERE) ;
  const enumGalgasBool test_0 = extensionGetter_type (var_switchValueIR_4627, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)).getter_kind (HERE).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 113)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 113)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_plmOriginalTypeName (var_switchValueIR_4627, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_switchValueIR_4627, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 121)) ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 124)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5254 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 125)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5296 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 126)) ;
  cEnumerator_switchCaseListAST enumerator_5360 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_5360.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5401 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 128)) ;
    cEnumerator_lstringlist enumerator_5443 (enumerator_5360.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5443.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5513 ;
      GALGAS_lstring joker_5515 ; // Joker input parameter
      var_enumConstantMap_4680.method_searchKey (enumerator_5443.current_mValue (HERE), var_constantIdx_5513, joker_5515, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 130)) ;
      var_caseIdentifierIndexList_5401.addAssign_operation (var_constantIdx_5513.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 131))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_5254.getter_hasKey (enumerator_5443.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 132)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_5443.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 133)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
      }
      var_usedEnumerationValues_5254.addAssign_operation (enumerator_5443.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 135))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)) ;
      enumerator_5443.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5799 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 137)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5360.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_switch_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5799, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)) ;
    var_switchCaseListIR_5296.addAssign_operation (var_caseIdentifierIndexList_5401, var_instructionGenerationList_5799  COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
    enumerator_5360.gotoNextObject () ;
  }
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)) ;
  }
  cEnumerator_classConstantMap enumerator_6546 (var_enumConstantMap_4680, kENUMERATION_UP) ;
  while (enumerator_6546.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_5254.getter_hasKey (enumerator_6546.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 156)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 156)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6546.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)) ;
    }
    enumerator_6546.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)), var_switchExpressionGenerationList_3996, var_switchValueIR_4627, var_switchCaseListIR_5296  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
  GALGAS_string var_labelOtherwise_8215 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8215, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)) ;
  cEnumerator_switchCaseListIR enumerator_8465 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8416 ((uint32_t) 0) ;
  while (enumerator_8465.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8528 (enumerator_8465.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8528.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)).add_operation (enumerator_8528.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)).add_operation (index_8416.getter_string (SOURCE_FILE ("instruction-switch.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)) ;
      enumerator_8528.gotoNextObject () ;
    }
    enumerator_8465.gotoNextObject () ;
    index_8416.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
  cEnumerator_switchCaseListIR enumerator_8811 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8768 ((uint32_t) 0) ;
  while (enumerator_8811.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)).add_operation (index_8768.getter_string (SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8811.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8215, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
    enumerator_8811.gotoNextObject () ;
    index_8768.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8215.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 223)) ;
  cEnumerator_switchCaseListIR enumerator_9558 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9558.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9558.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 225)) ;
    enumerator_9558.gotoNextObject () ;
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
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inCurrentMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
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
  GALGAS_objectIR var_indexResultPossibleReference_1361 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 25)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_1361, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
  GALGAS_objectIR var_indexResult_1497 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_1361, var_indexResult_1497, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 35)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_1497.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_1630 ;
    GALGAS_PLMType joker_1598_1 ; // Joker input parameter
    var_indexResult_1497.method_literalInteger (joker_1598_1, var_indexValue_1630, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_1630.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 42)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_1630.objectCompare (constinArgument_inArraySize)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outIndexIR = GALGAS_objectIR::constructor_literalInteger (constinArgument_inElementType, var_indexValue_1630  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_1497, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 48)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_2164 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1497, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_2164, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 49)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_2164 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = constinArgument_inRoutineAttributes.getter_panicAllowed (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 55)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 55)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 56)) ;
        }
      }
      outArgument_outIndexIR = var_indexResult_1497 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 61)) ;
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
                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                   const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_mode constinArgument_inCurrentMode,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                   const GALGAS_expressionAST constinArgument_inIndexExpression,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   const GALGAS_bigint constinArgument_inArraySize,
                                   const GALGAS_PLMType constinArgument_inElementType,
                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                   GALGAS_objectIR & ioArgument_ioObjectPtr,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_indexResultPossibleReference_3827 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 89)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_3827, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 85)) ;
  GALGAS_objectIR var_indexResult_3963 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_3827, var_indexResult_3963, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 99)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_3963.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 104)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_4096 ;
    GALGAS_PLMType joker_4064_1 ; // Joker input parameter
    var_indexResult_3963.method_literalInteger (joker_4064_1, var_indexValue_4096, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 105)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_4096.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 106)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_4096.objectCompare (constinArgument_inArraySize)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_llvmName_4318 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4318, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)) ;
      }
      GALGAS_objectIR var_result_4336 = GALGAS_objectIR::constructor_reference (constinArgument_inElementType, var_llvmName_4318  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 110)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_4336, ioArgument_ioObjectPtr, var_indexValue_4096.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 114)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)) ;
      }
      ioArgument_ioObjectPtr = var_result_4336 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_3963, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 118)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 118)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_4853 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_3963, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_4853, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 120)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_4853 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = constinArgument_inRoutineAttributes.getter_panicAllowed (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 126)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 126)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 127)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_string var_llvmName_5097 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_5097, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 130)) ;
      }
      GALGAS_objectIR var_result_5115 = GALGAS_objectIR::constructor_reference (constinArgument_inElementType, var_llvmName_5097  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 131)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_5115, ioArgument_ioObjectPtr, extensionGetter_llvmName (var_indexResult_3963, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 132)) ;
      }
      ioArgument_ioObjectPtr = var_result_5115 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 139)) ;
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
                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             const GALGAS_lstring constinArgument_inRegisterGroupName,
                                             const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                             const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                             GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 209)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRegisterGroupName.getter_location (SOURCE_FILE ("lvalue.galgas", 210)), GALGAS_string ("a control register group has no value"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 210)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_accessInAssignmentListAST var_accessList_8784 = constinArgument_inAccessList ;
    GALGAS_accessInAssignmentAST var_registerNameAsField_8851 ;
    {
    var_accessList_8784.setter_popFirst (var_registerNameAsField_8851, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 213)) ;
    }
    const enumGalgasBool test_2 = var_registerNameAsField_8851.getter_isProperty (SOURCE_FILE ("lvalue.galgas", 214)).operator_not (SOURCE_FILE ("lvalue.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterGroupName.getter_location (SOURCE_FILE ("lvalue.galgas", 215)), GALGAS_string ("the control register group should be followed by a control register name"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 215)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_lstring var_controlRegisterName_9125 ;
      var_registerNameAsField_8851.method_property (var_controlRegisterName_9125, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 219)) ;
      GALGAS_PLMType var_inRegisterType_9230 ;
      GALGAS_bool var_readOnly_9258 ;
      GALGAS_bool var_userAccess_9288 ;
      GALGAS_sliceMap var_inRegisterSliceMap_9337 ;
      GALGAS_controlRegisterFieldMap var_mRegisterFieldMap_9400 ;
      GALGAS_bigint var_inRegisterAddress_9439 ;
      GALGAS_controlRegisterFieldList var_mControlRegisterFieldList_9511 ;
      GALGAS_uint var_mRegisterBitCount_9576 ;
      GALGAS_uint var_inRegisterArraySize_9615 ;
      GALGAS_uint var_inRegisterElementSize_9676 ;
      constinArgument_inControlRegisterMap.method_searchKey (var_controlRegisterName_9125, var_inRegisterType_9230, var_readOnly_9258, var_userAccess_9288, var_inRegisterSliceMap_9337, var_mRegisterFieldMap_9400, var_inRegisterAddress_9439, var_mControlRegisterFieldList_9511, var_mRegisterBitCount_9576, var_inRegisterArraySize_9615, var_inRegisterElementSize_9676, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 220)) ;
      const enumGalgasBool test_4 = var_readOnly_9258.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_controlRegisterName_9125.getter_location (SOURCE_FILE ("lvalue.galgas", 234)), GALGAS_string ("this control register cannot be modified (declared with @ro attribute)"), fixItArray5  COMMA_SOURCE_FILE ("lvalue.galgas", 234)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        GALGAS_bool test_6 = var_userAccess_9288.operator_not (SOURCE_FILE ("lvalue.galgas", 235)) ;
        if (kBoolTrue == test_6.boolEnum ()) {
          GALGAS_bool test_7 = constinArgument_inMode.getter_isUserMode (SOURCE_FILE ("lvalue.galgas", 235)) ;
          if (kBoolTrue != test_7.boolEnum ()) {
            test_7 = constinArgument_inMode.getter_isAnyMode (SOURCE_FILE ("lvalue.galgas", 235)) ;
          }
          test_6 = test_7 ;
        }
        const enumGalgasBool test_8 = test_6.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_controlRegisterName_9125.getter_location (SOURCE_FILE ("lvalue.galgas", 236)), GALGAS_string ("this control register is not accessible in user mode"), fixItArray9  COMMA_SOURCE_FILE ("lvalue.galgas", 236)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_accessList_8784.getter_length (SOURCE_FILE ("lvalue.galgas", 237)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_10) {
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_inRegisterArraySize_9615.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_11) {
              outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileAbsoluteReference (var_inRegisterType_9230, var_inRegisterAddress_9439.getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 239))  COMMA_SOURCE_FILE ("lvalue.galgas", 239)) ;
            }else if (kBoolFalse == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (var_controlRegisterName_9125.getter_location (SOURCE_FILE ("lvalue.galgas", 241)), GALGAS_string ("the control register is an array"), fixItArray12  COMMA_SOURCE_FILE ("lvalue.galgas", 241)) ;
              outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
            }
          }else if (kBoolFalse == test_10) {
            const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, var_accessList_8784.getter_length (SOURCE_FILE ("lvalue.galgas", 243)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_13) {
              GALGAS_accessInAssignmentAST var_access_10566 ;
              var_accessList_8784.method_first (var_access_10566, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 244)) ;
              switch (var_access_10566.enumValue ()) {
              case GALGAS_accessInAssignmentAST::kNotBuilt:
                break ;
              case GALGAS_accessInAssignmentAST::kEnum_property:
                {
                  const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_10751 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_access_10566.unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_propertyName = extractPtr_10751->mAssociatedValue0 ;
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 247)), GALGAS_string ("writing a slice of a control register is not allowed"), fixItArray14  COMMA_SOURCE_FILE ("lvalue.galgas", 247)) ;
                  outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
                {
                  const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12234 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_access_10566.unsafePointer ()) ;
                  const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_12234->mAssociatedValue0 ;
                  const GALGAS_location extractedValue_endOfIndex = extractPtr_12234->mAssociatedValue1 ;
                  GALGAS_objectIR var_indexIR_11469 ;
                  {
                  routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_inRegisterArraySize_9615.getter_bigint (SOURCE_FILE ("lvalue.galgas", 261)), var_inRegisterType_9230, ioArgument_ioInstructionGenerationList, var_indexIR_11469, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 249)) ;
                  }
                  const enumGalgasBool test_15 = var_indexIR_11469.getter_isLiteralInteger (SOURCE_FILE ("lvalue.galgas", 266)).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    GALGAS_bigint var_idx_11625 ;
                    GALGAS_PLMType joker_11600_1 ; // Joker input parameter
                    var_indexIR_11469.method_literalInteger (joker_11600_1, var_idx_11625, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 267)) ;
                    GALGAS_bigint var_addr_11648 = var_inRegisterAddress_9439.add_operation (var_idx_11625.multiply_operation (var_inRegisterElementSize_9676.getter_bigint (SOURCE_FILE ("lvalue.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 268)) ;
                    outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileAbsoluteReference (var_inRegisterType_9230, var_addr_11648.getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 269))  COMMA_SOURCE_FILE ("lvalue.galgas", 269)) ;
                  }else if (kBoolFalse == test_15) {
                    GALGAS_string var_llvmName_11882 ;
                    {
                    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_11882, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 271)) ;
                    }
                    {
                    extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, var_llvmName_11882, var_indexIR_11469, var_inRegisterAddress_9439, var_inRegisterElementSize_9676, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 272)) ;
                    }
                    outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileIndirectReference (var_inRegisterType_9230, var_llvmName_11882  COMMA_SOURCE_FILE ("lvalue.galgas", 278)) ;
                  }
                }
                break ;
              }
            }else if (kBoolFalse == test_13) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (var_controlRegisterName_9125.getter_location (SOURCE_FILE ("lvalue.galgas", 282)), GALGAS_string ("only subscripting is allowed in control register assignment"), fixItArray16  COMMA_SOURCE_FILE ("lvalue.galgas", 282)) ;
              outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
            }
          }
        }
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
                                      const GALGAS_bool constinArgument_inIsReadAccess,
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      const GALGAS_lstring constinArgument_inVariableName,
                                      const GALGAS_string constinArgument_inLLVMName,
                                      const GALGAS_PLMType constinArgument_inVariableType,
                                      const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                      GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_PLMType var_currentType_13404 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_13443 = constinArgument_inLLVMName ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 311)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = constinArgument_inIsReadAccess.boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      GALGAS_objectIR joker_13594 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_13594, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 313)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      GALGAS_objectIR joker_13680 ; // Joker input parameter
      extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_13680, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 315)) ;
      }
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inIsReadAccess.boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_objectIR joker_13798 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_13798, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 319)) ;
      }
    }else if (kBoolFalse == test_2) {
      {
      GALGAS_objectIR joker_13888 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_13888, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 321)) ;
      }
    }
    cEnumerator_accessInAssignmentListAST enumerator_13931 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_13931.hasCurrentObject ()) {
      switch (enumerator_13931.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_14881 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_13931.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_14881->mAssociatedValue0 ;
          GALGAS_propertyMap var_propertyMap_14037 = var_currentType_13404.getter_propertyMap (HERE) ;
          GALGAS_propertyAccessKind var_propertyAccess_14151 ;
          GALGAS_bool joker_14110 ; // Joker input parameter
          var_propertyMap_14037.method_searchKey (extractedValue_propertyName, joker_14110, var_propertyAccess_14151, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 327)) ;
          switch (var_propertyAccess_14151.enumValue ()) {
          case GALGAS_propertyAccessKind::kNotBuilt:
            break ;
          case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 330)), GALGAS_string ("a method cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 330)) ;
              var_currentType_13404.drop () ; // Release error dropped variable
              var_currentLLVMName_13443.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_constantProperty:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 332)), GALGAS_string ("a constant property cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 332)) ;
              var_currentType_13404.drop () ; // Release error dropped variable
              var_currentLLVMName_13443.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_indexed:
            {
              const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_14869 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_14151.unsafePointer ()) ;
              const GALGAS_PLMType extractedValue_propertyType = extractPtr_14869->mAssociatedValue0 ;
              const GALGAS_uint extractedValue_index = extractPtr_14869->mAssociatedValue1 ;
              GALGAS_string var_newLLVMvariable_14570 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_14570, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 334)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_13404, var_currentLLVMName_13443, var_newLLVMvariable_14570, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 335)) ;
              }
              var_currentType_13404 = extractedValue_propertyType ;
              var_currentLLVMName_13443 = var_newLLVMvariable_14570 ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_16210 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_13931.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_16210->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_16210->mAssociatedValue1 ;
          const enumGalgasBool test_5 = var_currentType_13404.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 346)).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_PLMType var_elementType_15074 ;
            GALGAS_bigint var_arraySize_15102 ;
            var_currentType_13404.getter_kind (HERE).method_arrayType (var_elementType_15074, var_arraySize_15102, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 347)) ;
            GALGAS_objectIR var_indexIR_15725 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_15102, var_elementType_15074, ioArgument_ioInstructionGenerationList, var_indexIR_15725, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 348)) ;
            }
            GALGAS_string var_newLLVMvariable_15798 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_15798, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 365)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_13404, var_currentLLVMName_13443, var_elementType_15074, var_newLLVMvariable_15798, var_indexIR_15725, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 366)) ;
            }
            var_currentType_13404 = var_elementType_15074 ;
            var_currentLLVMName_13443 = var_newLLVMvariable_15798 ;
          }else if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 376)) ;
            var_currentType_13404.drop () ; // Release error dropped variable
            var_currentLLVMName_13443.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_13931.gotoNextObject () ;
    }
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_universalReference (var_currentType_13404, var_currentLLVMName_13443  COMMA_SOURCE_FILE ("lvalue.galgas", 381)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeSelfAssignmentTarget'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSelfAssignmentTarget (const GALGAS_PLMType constinArgument_inSelfType,
                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          const GALGAS_mode constinArgument_inMode,
                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                          const GALGAS_location constinArgument_inSelfLocation,
                                          const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                          GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_bool test_0 = constinArgument_inSelfType.getter_kind (HERE).getter_isStructure (SOURCE_FILE ("lvalue.galgas", 401)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = constinArgument_inSelfType.getter_kind (HERE).getter_isSyncTool (SOURCE_FILE ("lvalue.galgas", 401)) ;
  }
  const enumGalgasBool test_1 = test_0.operator_not (SOURCE_FILE ("lvalue.galgas", 401)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inSelfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 402)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_PLMType var_currentType_17350 = constinArgument_inSelfType ;
    GALGAS_string var_currentLLVMName_17387 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 405)) ;
    cEnumerator_accessInAssignmentListAST enumerator_17441 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_17441.hasCurrentObject ()) {
      switch (enumerator_17441.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_18391 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_17441.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_18391->mAssociatedValue0 ;
          GALGAS_propertyMap var_propertyMap_17547 = var_currentType_17350.getter_propertyMap (HERE) ;
          GALGAS_propertyAccessKind var_propertyAccess_17661 ;
          GALGAS_bool joker_17620 ; // Joker input parameter
          var_propertyMap_17547.method_searchKey (extractedValue_propertyName, joker_17620, var_propertyAccess_17661, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 410)) ;
          switch (var_propertyAccess_17661.enumValue ()) {
          case GALGAS_propertyAccessKind::kNotBuilt:
            break ;
          case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 413)), GALGAS_string ("a method cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 413)) ;
              var_currentType_17350.drop () ; // Release error dropped variable
              var_currentLLVMName_17387.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_constantProperty:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 415)), GALGAS_string ("a constant property cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 415)) ;
              var_currentType_17350.drop () ; // Release error dropped variable
              var_currentLLVMName_17387.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_indexed:
            {
              const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_18379 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_17661.unsafePointer ()) ;
              const GALGAS_PLMType extractedValue_propertyType = extractPtr_18379->mAssociatedValue0 ;
              const GALGAS_uint extractedValue_index = extractPtr_18379->mAssociatedValue1 ;
              GALGAS_string var_newLLVMvariable_18080 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_18080, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 417)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_17350, var_currentLLVMName_17387, var_newLLVMvariable_18080, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 418)) ;
              }
              var_currentType_17350 = extractedValue_propertyType ;
              var_currentLLVMName_17387 = var_newLLVMvariable_18080 ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_19720 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_17441.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_19720->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_19720->mAssociatedValue1 ;
          const enumGalgasBool test_5 = var_currentType_17350.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 429)).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_PLMType var_elementType_18584 ;
            GALGAS_bigint var_arraySize_18612 ;
            var_currentType_17350.getter_kind (HERE).method_arrayType (var_elementType_18584, var_arraySize_18612, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 430)) ;
            GALGAS_objectIR var_indexIR_19235 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_18612, var_elementType_18584, ioArgument_ioInstructionGenerationList, var_indexIR_19235, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 431)) ;
            }
            GALGAS_string var_newLLVMvariable_19308 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_19308, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 448)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_17350, var_currentLLVMName_17387, var_elementType_18584, var_newLLVMvariable_19308, var_indexIR_19235, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 449)) ;
            }
            var_currentType_17350 = var_elementType_18584 ;
            var_currentLLVMName_17387 = var_newLLVMvariable_19308 ;
          }else if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 459)) ;
            var_currentType_17350.drop () ; // Release error dropped variable
            var_currentLLVMName_17387.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_17441.gotoNextObject () ;
    }
    outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_universalReference (var_currentType_17350, var_currentLLVMName_17387  COMMA_SOURCE_FILE ("lvalue.galgas", 463)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const GALGAS_PLMType constinArgument_inSelfType,
                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                         const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode constinArgument_inRequiredMode,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_4657 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 112)) ;
  cEnumerator_routineTypedSignature enumerator_4700 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_4743 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_4700.hasCurrentObject () && enumerator_4743.hasCurrentObject ()) {
    switch (enumerator_4743.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5532 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4743.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_5532->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_5532->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_5532->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_4700.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 117)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 119)).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 119)) ;
        }
        GALGAS_PLMType var_type_4881 = temp_0 ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_name, GALGAS_bool (false), var_type_4881, extractedValue_name, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 122)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_name, var_type_4881, extractedValue_name, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas", 124)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 124)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 126)), var_type_4881, GALGAS_bool (true)  COMMA_SOURCE_FILE ("effective-parameters.galgas", 126)) ;
        var_parameterList_4657.addAssign_operation (enumerator_4743.current_mEffectiveParameterKind (HERE), enumerator_4743.current_mSelector (HERE), var_type_4881  COMMA_SOURCE_FILE ("effective-parameters.galgas", 127)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 129)), GALGAS_objectIR::constructor_reference (var_type_4881, function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 130))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 130))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 128)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_6265 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_4743.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6265->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_5642 ;
        {
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, extractedValue_name, var_objectIR_5642, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 132)) ;
        }
        var_parameterList_4657.addAssign_operation (enumerator_4743.current_mEffectiveParameterKind (HERE), enumerator_4743.current_mSelector (HERE), extensionGetter_type (var_objectIR_5642, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 142))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 142)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 144)), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_5642, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 146)), extensionGetter_llvmName (var_objectIR_5642, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 147)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 147)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 145))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7398 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4743.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7398->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_7398->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_6872 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, enumerator_4700.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 154)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6872, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 150)) ;
        GALGAS_objectIR var_expressionValue_7020 ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_6872, var_expressionValue_7020, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 164)) ;
        }
        GALGAS_objectIR var_result_7047 = function_checkAssignmentCompatibility (var_expressionValue_7020, enumerator_4700.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 171)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 169)) ;
        var_parameterList_4657.addAssign_operation (enumerator_4743.current_mEffectiveParameterKind (HERE), enumerator_4743.current_mSelector (HERE), enumerator_4700.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 175))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 175)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("effective-parameters.galgas", 176)), var_result_7047  COMMA_SOURCE_FILE ("effective-parameters.galgas", 176)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_8052 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_4743.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_8052->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_7518 ;
        {
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, extractedValue_name, var_objectIR_7518, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 178)) ;
        }
        var_parameterList_4657.addAssign_operation (enumerator_4743.current_mEffectiveParameterKind (HERE), enumerator_4743.current_mSelector (HERE), extensionGetter_type (var_objectIR_7518, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 185))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 185)) ;
        GALGAS_objectIR var_argumentIR_7890 = GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_7518, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 187)), extensionGetter_llvmName (var_objectIR_7518, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 188))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 186)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 190)), var_argumentIR_7890  COMMA_SOURCE_FILE ("effective-parameters.galgas", 190)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_8991 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_4743.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_8991->mAssociatedValue0 ;
        GALGAS_propertyAccessKind var_propertyAccess_8192 ;
        GALGAS_bool joker_8151 ; // Joker input parameter
        constinArgument_inSelfType.getter_propertyMap (HERE).method_searchKey (extractedValue_name, joker_8151, var_propertyAccess_8192, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 192)) ;
        switch (var_propertyAccess_8192.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a method cannot be used in this context"), fixItArray3  COMMA_SOURCE_FILE ("effective-parameters.galgas", 195)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a constant property cannot be used here"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 197)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_8981 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_8192.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_8981->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_8981->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_8565 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_8565, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 199)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 202)), var_property_5F_llvmName_8565, extractedValue_propertyIndex, extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 200)) ;
            }
            var_parameterList_4657.addAssign_operation (enumerator_4743.current_mEffectiveParameterKind (HERE), enumerator_4743.current_mSelector (HERE), extractedValue_propertyType  COMMA_SOURCE_FILE ("effective-parameters.galgas", 207)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 208)), GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_8565  COMMA_SOURCE_FILE ("effective-parameters.galgas", 208))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 208)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_4700.gotoNextObject () ;
    enumerator_4743.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 213)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 213)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 214)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 214)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 214)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 215)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 214)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 215)), fixItArray6  COMMA_SOURCE_FILE ("effective-parameters.galgas", 214)) ;
  }else if (kBoolFalse == test_5) {
    cEnumerator_routineTypedSignature enumerator_9327 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_9356 (var_parameterList_4657, kENUMERATION_UP) ;
    while (enumerator_9327.hasCurrentObject () && enumerator_9356.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_9327.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)).getter_plmOriginalTypeName (HERE).objectCompare (enumerator_9356.current_mParameterType (HERE).getter_plmOriginalTypeName (HERE))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9356.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 219)), GALGAS_string ("the actual parameter type is $").add_operation (enumerator_9356.current_mParameterType (HERE).getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)).add_operation (GALGAS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)).add_operation (enumerator_9327.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 220)), fixItArray8  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)) ;
      }
      GALGAS_string var_requiredPassingMode_9699 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9327.current_mFormalArgumentPassingMode (HERE), enumerator_9327.current_mSelector (HERE).getter_string (SOURCE_FILE ("effective-parameters.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 222)) ;
      GALGAS_string var_testedPassingMode_9820 = extensionGetter_passingModeForActualSelector (enumerator_9356.current_mEffectiveParameterPassingMode (HERE), enumerator_9356.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_9699.objectCompare (var_testedPassingMode_9820)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_9356.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 225)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_9699, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 225)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 225)), fixItArray10  COMMA_SOURCE_FILE ("effective-parameters.galgas", 225)) ;
      }
      enumerator_9327.gotoNextObject () ;
      enumerator_9356.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromAST'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_routineMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                   const GALGAS_lstring & constinArgument_inRoutineName,
                                                   const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 102)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 102)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 102)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 104)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_4590 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4590.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4590.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 106)).add_operation (enumerator_4590.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 106)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 106)) ;
    enumerator_4590.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 108)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
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
  const GALGAS_routineFormalArgumentListAST operand2 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 120)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 120)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 120)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 122)) ;
  cEnumerator_effectiveArgumentListAST enumerator_5302 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_5302.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_5302.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 124)).add_operation (enumerator_5302.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 124)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 124)) ;
    enumerator_5302.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 126)) ;
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
                               const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                               GALGAS_routineTypedSignature & outArgument_outSignature,
                               C_Compiler * /* inCompiler */
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 135)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5835 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5835.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5926 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5835.current_mFormalArgumentTypeName (HERE), var_typeProxy_5926 COMMA_SOURCE_FILE ("context-routines.galgas", 137)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_5835.current_mFormalArgumentPassingMode (HERE), enumerator_5835.current_mSelector (HERE), var_typeProxy_5926  COMMA_SOURCE_FILE ("context-routines.galgas", 138)) ;
    enumerator_5835.gotoNextObject () ;
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
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternProcListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 33)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 34)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  cEnumerator_stringlist enumerator_2193 (var_precedenceGraph_1622.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 37)), kENUMERATION_UP) ;
  while (enumerator_2193.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2210 = enumerator_2193.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2210.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 39)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2210.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2210.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)).objectCompare (function_llvmTypeStringFromPLMname (GALGAS_string ("u"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2433 = var_split_2210.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
        GALGAS_integerDeclarationAST var_declaration_2508 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_2433  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 42)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_2508.ptr (), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 43)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2210.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)).objectCompare (function_llvmTypeStringFromPLMname (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_2703 = var_split_2210.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)) ;
          GALGAS_integerDeclarationAST var_declaration_2778 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_2703  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_2778.ptr (), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
        }
      }
    }
    enumerator_2193.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 52)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s_3090 = var_precedenceGraph_1622.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
    GALGAS_string var_filePath_3136 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)) ;
    GALGAS_bool joker_3234 ; // Joker input parameter
    var_s_3090.method_writeToFileWhenDifferentContents (var_filePath_3136, joker_3234, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 55)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 58)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1622.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 59)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3456 (var_precedenceGraph_1622.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 60)), kENUMERATION_UP) ;
    while (enumerator_3456.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_3456.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 61)), enumerator_3456.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)), fixItArray7  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
      enumerator_3456.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_3670 ;
    GALGAS_lstringlist joker_3603 ; // Joker input parameter
    GALGAS_lstringlist joker_3678 ; // Joker input parameter
    var_precedenceGraph_1622.method_topologicalSort (outArgument_outDeclarationListAST, joker_3603, var_unsortedSemanticDeclarationListAST_3670, joker_3678, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 64)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_3670.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 70)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s_3757 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3670.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 72)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 71)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 72)) ;
      cEnumerator_declarationListAST enumerator_3972 (var_unsortedSemanticDeclarationListAST_3670, kENUMERATION_UP) ;
      while (enumerator_3972.hasCurrentObject ()) {
        var_s_3757.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_3972.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 75)) ;
        enumerator_3972.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_3757, fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)) ;
      cEnumerator_declarationListAST enumerator_4144 (var_unsortedSemanticDeclarationListAST_3670, kENUMERATION_UP) ;
      while (enumerator_4144.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_abstractDeclarationAST *) enumerator_4144.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4144.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)), fixItArray10  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)) ;
        enumerator_4144.gotoNextObject () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   GALGAS_subprogramInvocationGraph & outArgument_outSubprogramInvocationGraph,
                                   GALGAS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSubprogramInvocationGraph.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 193)) ;
  outArgument_outDecoratedDeclarationList = GALGAS_declarationDecorationList::constructor_emptyList (SOURCE_FILE ("context.galgas", 194)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 196)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 197)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternProcListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 202)) ;
  extensionMethod_enterSystemRoutineInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 203)) ;
  outArgument_outSubprogramInvocationGraph = GALGAS_subprogramInvocationGraph::constructor_emptyGraph (SOURCE_FILE ("context.galgas", 205)) ;
  cEnumerator_declarationListAST enumerator_8460 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8460.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_8460.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outSubprogramInvocationGraph, ioArgument_ioStaticListValueMap, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 207)) ;
    enumerator_8460.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 217)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 222)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterGroupMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 227)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outSubprogramInvocationGraph, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 232)) ;
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
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 243)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 243)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 243)).getter_nowhere (SOURCE_FILE ("context.galgas", 243)) ;
//---
  return result_result ;
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
//                                            Function 'staticIntegerType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_staticIntegerType (C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 46)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 47)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 48)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 49)), GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 50)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 50)) COMMA_SOURCE_FILE ("types.galgas", 50)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 51)), GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("types.galgas", 52)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 53))  COMMA_SOURCE_FILE ("types.galgas", 45)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticIntegerType [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticIntegerType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_staticIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticIntegerType ("staticIntegerType",
                                                                   functionWithGenericHeader_staticIntegerType,
                                                                   & kTypeDescriptor_GALGAS_PLMType,
                                                                   0,
                                                                   functionArgs_staticIntegerType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'literalStringType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_literalStringType (C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 61)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 62)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 63)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 64)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 65)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 65)) COMMA_SOURCE_FILE ("types.galgas", 65)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 65)) COMMA_SOURCE_FILE ("types.galgas", 65)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("types.galgas", 65)) COMMA_SOURCE_FILE ("types.galgas", 65)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 66)), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("types.galgas", 67)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 68))  COMMA_SOURCE_FILE ("types.galgas", 60)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalStringType [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalStringType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_PLMType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'voidType'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_voidType (C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 76)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 77)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 78)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 79)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 80)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_void (SOURCE_FILE ("types.galgas", 82)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 75)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_voidType [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_voidType (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_PLMType,
                                                          0,
                                                          functionArgs_voidType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'functionType'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_functionType (const GALGAS_routineDescriptor & constinArgument_inDescriptor,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 91)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 92)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 93)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 94)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 95)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_function (constinArgument_inDescriptor  COMMA_SOURCE_FILE ("types.galgas", 97)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 90)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_functionType [2] = {
  & kTypeDescriptor_GALGAS_routineDescriptor,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_functionType ("functionType",
                                                              functionWithGenericHeader_functionType,
                                                              & kTypeDescriptor_GALGAS_PLMType,
                                                              1,
                                                              functionArgs_functionType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTypeMapHTMLFile (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_15037 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 369)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_15154 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 371)) ;
    cEnumerator_unifiedTypeMap enumerator_15183 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_15183.hasCurrentObject ()) {
      var_firstLetterSet_15154.addAssign_operation (enumerator_15183.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 373)).getter_string (SOURCE_FILE ("types.galgas", 373))  COMMA_SOURCE_FILE ("types.galgas", 373)) ;
      enumerator_15183.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_15291 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_15325 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_15361 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_15361.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_15325.objectCompare (enumerator_15361.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 378)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_15325 = enumerator_15361.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 379)) ;
        var_tableOfTypeString_15291.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_15325.getter_uint (SOURCE_FILE ("types.galgas", 380)).getter_string (SOURCE_FILE ("types.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 380)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 380)).add_operation (var_currentFirstLetter_15325.getter_string (SOURCE_FILE ("types.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 380)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 380)) ;
      }
      var_tableOfTypeString_15291.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_15361.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 382)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 382)) ;
      enumerator_15361.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_15754 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 385)), inArgument_inTypeMap, var_firstLetterSet_15154, var_tableOfTypeString_15291 COMMA_SOURCE_FILE ("types.galgas", 384))) ;
    GALGAS_bool joker_15984 ; // Joker input parameter
    var_typeDumpString_15754.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_15037, joker_15984, inCompiler COMMA_SOURCE_FILE ("types.galgas", 390)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_15037, inCompiler COMMA_SOURCE_FILE ("types.galgas", 392)) ;
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
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 411)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 411)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 411)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 411)) ;
//---
  return result_result ;
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
  GALGAS_objectIR result_result ; // Returned variable
  GALGAS_PLMType var_sourceType_876 = extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetAnnotationType.objectCompare (var_sourceType_876)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = constinArgument_inSourceValue ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 17)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = constinArgument_inSourceValue ;
    }else if (kBoolFalse == test_1) {
      GALGAS_bool test_2 = var_sourceType_876.getter_kind (HERE).getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value_1219 ;
        GALGAS_PLMType joker_1200_1 ; // Joker input parameter
        constinArgument_inSourceValue.method_literalInteger (joker_1200_1, var_value_1219, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
        GALGAS_bigint var_minTarget_1288 ;
        GALGAS_bigint var_maxTarget_1307 ;
        GALGAS_bool joker_1309_2 ; // Joker input parameter
        GALGAS_uint joker_1309_1 ; // Joker input parameter
        constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).method_integer (var_minTarget_1288, var_maxTarget_1307, joker_1309_2, joker_1309_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value_1219.objectCompare (var_minTarget_1288)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget_1307.objectCompare (var_value_1219)) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large"), fixItArray6  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)) ;
          result_result.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 25)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (constinArgument_inOptionalTargetAnnotationType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (extensionGetter_plmOriginalTypeName (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_8 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_8) {
    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, extensionGetter_plmOriginalTypeName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the $").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), fixItArray10  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)) ;
    }
  }
//---
  return result_result ;
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
//                                              Routine 'getNewTempValue'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempValue (const GALGAS_PLMType constinArgument_inType,
                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                              GALGAS_objectIR & outArgument_outTempVariable,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 72)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 73)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3403 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3403, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 75)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmValue (constinArgument_inType, var_llvmName_3403  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 76)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempReference'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempReference (const GALGAS_PLMType constinArgument_inType,
                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                  GALGAS_objectIR & outArgument_outTempVariable,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 87)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 88)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3843 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3843, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 90)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_reference (constinArgument_inType, var_llvmName_3843  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 91)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const GALGAS_string constinArgument_inSourceFile,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_declarationDecorationList constinArgument_inDecoratedDeclarationList,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               GALGAS_subprogramInvocationGraph inArgument_inSubprogramInvocationGraph,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticStringMap constinArgument_inGlobalLiteralStringMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 107)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_4848 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4848.hasCurrentObject ()) {
    GALGAS_lstring var_procedureMangledName_4880 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_4848.current (HERE).getter_mName (HERE), enumerator_4848.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 112)) ;
    outArgument_outIntermediateCodeStruct.mProperty_mRequiredProcedureSet.addAssign_operation (var_procedureMangledName_4880.getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 113)) ;
    enumerator_4848.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_5105 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 116)) ;
  var_temporaries_5105.mProperty_mSubprogramInvocationGraph = inArgument_inSubprogramInvocationGraph ;
  cEnumerator_declarationDecorationList enumerator_5237 (constinArgument_inDecoratedDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5237.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDecoratedDeclaration *) enumerator_5237.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_5105, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 119)) ;
    enumerator_5237.gotoNextObject () ;
  }
  extensionMethod_systemRoutineSemanticAnalysis (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), function_voidType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 126)), constinArgument_inSemanticContext, var_temporaries_5105, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 125)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternProcListAST (HERE), constinArgument_inSemanticContext, var_temporaries_5105, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 131)) ;
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 137)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 143)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_6089 = var_temporaries_5105.getter_mSubprogramInvocationGraph (HERE).getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 144)) ;
    GALGAS_string var_filePath_6158 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 145)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 145)) ;
    GALGAS_bool joker_6284 ; // Joker input parameter
    var_s_6089.method_writeToFileWhenDifferentContents (var_filePath_6158, joker_6284, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 146)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 149)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 149)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_6453 = var_temporaries_5105.getter_mSubprogramInvocationGraph (HERE).getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 150)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_6453.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_6577 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_6675 (var_undefinedNodeKeyList_6453, kENUMERATION_UP) ;
      while (enumerator_6675.hasCurrentObject ()) {
        var_s_6577.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_6675.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 154)) ;
        enumerator_6675.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6577, fixItArray5  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 156)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_6882 ;
      GALGAS_lstringlist var_unsortedLKeyList_6926 ;
      var_temporaries_5105.getter_mSubprogramInvocationGraph (HERE).method_circularities (var_unsortedInformationList_6882, var_unsortedLKeyList_6926 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 158)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_6926.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 162)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_s_6992 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7072 (var_unsortedLKeyList_6926, kENUMERATION_UP) ;
        while (enumerator_7072.hasCurrentObject ()) {
          var_s_6992.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7072.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)) ;
          enumerator_7072.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6992, fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 167)) ;
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
                                   const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentPassingMode,
                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListIR & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentListAST enumerator_1222 (constinArgument_inFormalArgumentPassingMode, kENUMERATION_UP) ;
  while (enumerator_1222.hasCurrentObject ()) {
    GALGAS_PLMType var_typeProxy_1243 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_1222.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_1222.current_mFormalArgumentPassingMode (HERE), var_typeProxy_1243, enumerator_1222.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)) ;
    switch (enumerator_1222.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_1222.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_1243, enumerator_1222.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 30)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_1222.current_mFormalArgumentName (HERE), var_typeProxy_1243, enumerator_1222.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("semantic-routines.galgas", 32)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 32)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_1222.current_mFormalArgumentName (HERE), var_typeProxy_1243, enumerator_1222.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("semantic-routines.galgas", 34)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 34)) ;
        }
      }
      break ;
    }
    enumerator_1222.gotoNextObject () ;
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
                                      const GALGAS_routineFormalArgumentListAST constinArgument_inRoutineFormalArgumentList,
                                      const GALGAS_lstring constinArgument_inReturnTypeName,
                                      const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                      const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_bool constinArgument_inWarnIfUnused,
                                      const GALGAS_bool constinArgument_inGlobalFunction,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 61)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = function_llvmTypeStringFromPLMname (constinArgument_inSelfType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 61)) ;
  }
  GALGAS_lstring var_routineMangledName_2767 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 60)) ;
  GALGAS_universalValuedObjectMap var_universalMap_3000 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_3000, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 67)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_3000, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 68)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_lstring var_resultVarName_3167 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 70)), constinArgument_inReturnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 70)) ;
    GALGAS_PLMType var_resultType_3261 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 71)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 71)) ;
    {
    extensionSetter_insertLocalVariable (var_universalMap_3000, var_resultVarName_3167, var_resultType_3261, var_resultVarName_3167, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("semantic-routines.galgas", 72)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 72)) ;
    }
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_3524 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 75)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_3000, var_formalArguments_3524, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 76)) ;
  }
  const enumGalgasBool test_3 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_2767.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 83)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 83)).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_2767, var_routineMangledName_2767, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 84)) ;
    }
  }
  GALGAS_allocaList var_allocaList_3967 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 90)) ;
  GALGAS_instructionListIR var_instructionGenerationList_4019 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 91)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_routineMangledName_2767, constinArgument_inContext, constinArgument_inRoutineMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_3000, var_allocaList_3967, var_instructionGenerationList_4019, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 92)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_3000, var_instructionGenerationList_4019, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 105)) ;
  {
  extensionSetter_closeBranch (var_universalMap_3000, constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 106)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_3000, constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 107)) ;
  }
  GALGAS_PLMType temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = function_voidType (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 110)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)) ;
  }
  GALGAS_PLMType var_returnType_4700 = temp_4 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR.setter_insertKey (var_routineMangledName_2767, constinArgument_inSelfType, var_routineMangledName_2767, var_formalArguments_3524, var_allocaList_3967, var_instructionGenerationList_4019, ioArgument_ioIntermediateCodeStruct.getter_mRequiredProcedureSet (HERE).getter_hasKey (var_routineMangledName_2767.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 121)), constinArgument_inWarnIfUnused, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_4700, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 114)) ;
  }
}


