#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


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
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList_2997 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  GALGAS_objectIR var_leftOperandPossibleReference_3484 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_2997, var_leftOperandPossibleReference_3484, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 52)) ;
  GALGAS_objectIR var_leftOperand_3643 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_3484, object->mProperty_mOperatorLocation, var_leftOperand_3643, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 66)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_3731 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 73)) ;
  GALGAS_objectIR var_rightOperandPossibleReference_4219 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_3643, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 78)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3731, var_rightOperandPossibleReference_4219, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 74)) ;
  GALGAS_objectIR var_rightOperand_4380 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_4219, object->mProperty_mOperatorLocation, var_rightOperand_4380, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 88)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_leftOperand_3643, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 96)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_rightOperand_4380, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 99)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 99)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 100)) ;
  }
  GALGAS_bool test_4 = var_leftOperandPossibleReference_3484.getter_isLiteralInteger (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 103)) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = var_rightOperandPossibleReference_4219.getter_isLiteralInteger (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 103)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bigint var_leftStaticValue_4918 ;
    GALGAS_PLMType joker_4882 ; // Joker input parameter
    var_leftOperandPossibleReference_3484.method_literalInteger (joker_4882, var_leftStaticValue_4918, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    GALGAS_bigint var_rightStaticValue_5013 ;
    GALGAS_PLMType joker_4976 ; // Joker input parameter
    var_rightOperandPossibleReference_4219.method_literalInteger (joker_4976, var_rightStaticValue_5013, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 105)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_type (var_leftOperand_3643, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 106)), var_leftStaticValue_4918.operator_and (var_rightStaticValue_5013 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 106))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 106)) ;
  }else if (kBoolFalse == test_5) {
    {
    routine_getNewTempVariable (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 109)), object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 109)) ;
    }
    {
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_3643, var_leftInstructionGenerationList_2997, var_rightOperand_4380, var_rightInstructionGenerationList_3731, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 111)) ;
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
            GALGAS_bigint var_minTarget_4760 ;
            GALGAS_bigint var_maxTarget_4779 ;
            GALGAS_bool joker_4781_3 ; // Joker input parameter
            GALGAS_uint joker_4781_2 ; // Joker input parameter
            GALGAS_string joker_4781_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.method_integer (var_minTarget_4760, var_maxTarget_4779, joker_4781_3, joker_4781_2, joker_4781_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105)) ;
            const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_minTarget_4760.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 106)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 107)) ;
              var_leftOperand_3733.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_9) {
              var_leftOperand_3733 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 109)), var_maxTarget_4779  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)) ;
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
          const cEnumAssociatedValues_PLMType_integer * extractPtr_5311 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_3575, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 86)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5311->mAssociatedValue3 ;
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
  GALGAS_PLMType var_resultType_6308 = extensionGetter_type (var_expressionResult_3575, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 141)) ;
  const enumGalgasBool test_15 = var_expressionResult_3575.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 143)).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_bigint var_value_6451 ;
    GALGAS_PLMType joker_6424_1 ; // Joker input parameter
    var_expressionResult_3575.method_literalInteger (joker_6424_1, var_value_6451, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 144)) ;
    GALGAS_bigint var_result_6471 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_6471 = var_value_6451.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 148)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_16 = constinArgument_inOptionalTargetType.getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 150)).boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_bigint var_minTarget_6666 ;
          GALGAS_bigint var_maxTarget_6685 ;
          GALGAS_bool joker_6687_3 ; // Joker input parameter
          GALGAS_uint joker_6687_2 ; // Joker input parameter
          GALGAS_string joker_6687_1 ; // Joker input parameter
          constinArgument_inOptionalTargetType.method_integer (var_minTarget_6666, var_maxTarget_6685, joker_6687_3, joker_6687_2, joker_6687_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 151)) ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictInf, var_minTarget_6666.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 152)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray18  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 153)) ;
            var_result_6471.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_17) {
            var_result_6471 = var_value_6451.operator_xor (var_maxTarget_6685 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 155)) ;
          }
        }else if (kBoolFalse == test_16) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray19  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)) ;
          var_result_6471.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_6471 = var_value_6451.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 161)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_6471 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)).operator_xor (var_value_6451 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6308, var_result_6471  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 165)) ;
  }else if (kBoolFalse == test_15) {
    {
    routine_getNewTempVariable (var_resultType_6308, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 168)) ;
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
                                                                            const GALGAS_semanticContext constinArgument_inContext,
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
  GALGAS_PLMType var_type_3602 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
  GALGAS_uint var_staticStringIndex_3799 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_3799, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (var_type_3602, object->mProperty_mLiteralString.getter_string (HERE).getter_length (SOURCE_FILE ("expression-literal-string.galgas", 65)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)), var_staticStringIndex_3799  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)) ;
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
        GALGAS_bigint var_value_6991 ;
        GALGAS_PLMType joker_6964_1 ; // Joker input parameter
        var_expressionResult_5944.method_literalInteger (joker_6964_1, var_value_6991, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 165)) ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_value_6991.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_value_6991.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 168)).left_shift_operation (var_fieldBitCount_5244 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 168)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            var_accumulatedFieldStaticValues_4662 = var_accumulatedFieldStaticValues_4662.operator_or (var_value_6991.left_shift_operation (var_fieldBitIndex_5213 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) ;
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_5130.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)).left_shift_operation (var_fieldBitCount_5244 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)) ;
          }
        }
      }
      break ;
    case GALGAS_PLMType::kEnum_integer:
      {
        const cEnumAssociatedValues_PLMType_integer * extractPtr_9239 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_5944, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_min = extractPtr_9239->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_max = extractPtr_9239->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_9239->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_expressionBitCount = extractPtr_9239->mAssociatedValue3 ;
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
          GALGAS_objectIR var_partialResult_8338 = var_expressionResult_5944 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4478)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_objectIR var_extendedResult_8511 ;
            {
            routine_getNewTempVariable (var_registerType_4294, enumerator_5130.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_extendedResult_8511, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 193)) ;
            }
            {
            extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_8511, var_partialResult_8338, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 194)) ;
            }
            var_partialResult_8338 = var_extendedResult_8511 ;
          }else if (kBoolFalse == test_20) {
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4478)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_objectIR var_truncatedResult_8797 ;
              {
              routine_getNewTempVariable (var_registerType_4294, enumerator_5130.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_truncatedResult_8797, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 197)) ;
              }
              {
              extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_8797, var_partialResult_8338, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 198)) ;
              }
              var_partialResult_8338 = var_truncatedResult_8797 ;
            }
          }
          GALGAS_objectIR var_shiftedResult_9065 ;
          {
          routine_getNewTempVariable (var_registerType_4294, enumerator_5130.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_shiftedResult_9065, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 202)) ;
          }
          {
          extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9065, var_partialResult_8338, var_fieldBitIndex_5213, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 203)) ;
          }
          var_operandList_5061.addAssign_operation (var_shiftedResult_9065  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 205)) ;
        }
      }
      break ;
    }
    enumerator_5130.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4294, var_accumulatedFieldStaticValues_4662  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)) ;
  cEnumerator_operandList enumerator_9434 (var_operandList_5061, kENUMERATION_UP) ;
  while (enumerator_9434.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_9521 ;
    {
    routine_getNewTempVariable (var_registerType_4294, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 212)), ioArgument_ioTemporaries, var_newResult_9521, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_9521, extensionGetter_type (var_newResult_9521, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 218)), enumerator_9434.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)) ;
    }
    outArgument_outResult = var_newResult_9521 ;
    enumerator_9434.gotoNextObject () ;
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
  GALGAS_internalRepresentation var_internalRepresentation_9514 ;
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 244)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 244)) ;
        var_internalRepresentation_9514.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        var_internalRepresentation_9514 = GALGAS_internalRepresentation::constructor_standAloneIdentifier (object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 246)) ;
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_10219 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_10219->mAssociatedValue0 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 249)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 250)) ;
        var_internalRepresentation_9514.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 251)).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_internalRepresentation_9514 = GALGAS_internalRepresentation::constructor_structureMember (object->mProperty_mObjectName, GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 254))  COMMA_SOURCE_FILE ("expression-primary.galgas", 252)) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 257)) ;
          var_internalRepresentation_9514.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_10272 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_10272.hasCurrentObject ()) {
    switch (enumerator_10272.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_10823 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_10272.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_10823->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (var_internalRepresentation_9514, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 264)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_11456 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_10272.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11456->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_11456->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (var_internalRepresentation_9514, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 278)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_12029 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_10272.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_12029->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_12029->mAssociatedValue1 ;
        {
        routine_handleFunctionCallInExpressionNew (var_internalRepresentation_9514, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 295)) ;
        }
      }
      break ;
    }
    enumerator_10272.gotoNextObject () ;
  }
  switch (var_internalRepresentation_9514.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_12278 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (var_internalRepresentation_9514.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_12278->mAssociatedValue0 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_12222 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_12222, extractedValue_identifier, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 315)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_13235 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (var_internalRepresentation_9514.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13235->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_13235->mAssociatedValue1 ;
      const enumGalgasBool test_6 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 317)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 317)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_12465 ;
        GALGAS_lstring joker_12432_2 ; // Joker input parameter
        GALGAS_propertyMap joker_12432_1 ; // Joker input parameter
        GALGAS_propertyList joker_12467_3 ; // Joker input parameter
        GALGAS_uint joker_12467_2 ; // Joker input parameter
        GALGAS_string joker_12467_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 318)).method_structure (joker_12432_2, joker_12432_1, var_structureMap_12465, joker_12467_3, joker_12467_2, joker_12467_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 318)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_12482 = var_structureMap_12465 ;
        GALGAS_objectIR var_masterPropertyIR_12586 ;
        {
        var_m_12482.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_12508 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_12482.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_12508, extractedValue_propertyName, var_masterPropertyIR_12586, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 320)) ;
        }
        GALGAS_uint var_index_12656 ;
        GALGAS_PLMType joker_12627 ; // Joker input parameter
        GALGAS_lstring joker_12638 ; // Joker input parameter
        var_masterPropertyIR_12586.method_property (joker_12627, joker_12638, var_index_12656, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 321)) ;
        GALGAS_objectIR var_newObject_12677 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_12586, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 323)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 324)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 324))  COMMA_SOURCE_FILE ("expression-primary.galgas", 324)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 325)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 322)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 328)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_12677, extractedValue_currentPointer, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 332)), var_index_12656.getter_string (SOURCE_FILE ("expression-primary.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 329)) ;
        }
        outArgument_outResult = var_newObject_12677 ;
      }else if (kBoolFalse == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 337)), GALGAS_string ("this should be a structure instance"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 337)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_13323 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (var_internalRepresentation_9514.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_13323->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_13323->mAssociatedValue1 ;
      outArgument_outResult = extractedValue_valueIR ;
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
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_17664 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_17664->mAssociatedValue0 ;
      GALGAS_objectIR var_objectIR_14297 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_14229 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_14229, extractedValue_identifier, var_objectIR_14297, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 361)) ;
      }
      switch (var_objectIR_14297.enumValue ()) {
      case GALGAS_objectIR::kNotBuilt:
        break ;
      case GALGAS_objectIR::kEnum_globalVariableReference:
        {
          const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_14618 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (var_objectIR_14297.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_14618->mAssociatedValue0 ;
          const enumGalgasBool test_0 = extractedValue_type.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 364)).boolEnum () ;
          if (kBoolTrue == test_0) {
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_14297  COMMA_SOURCE_FILE ("expression-primary.galgas", 365)) ;
          }else if (kBoolFalse == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 367)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
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
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 371)), GALGAS_string ("\xC2""\xAB""selfObject\xC2""\xBB"" invalid here"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 371)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_localVariableReference:
        {
          const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_15225 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (var_objectIR_14297.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_15225->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_15225->mAssociatedValue1 ;
          const enumGalgasBool test_3 = extractedValue_type.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 373)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_objectIR var_objectIR_14852 = GALGAS_objectIR::constructor_llvmTemporaryValue (extractedValue_type, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 376)), extractedValue_plmName.getter_location (SOURCE_FILE ("expression-primary.galgas", 376))  COMMA_SOURCE_FILE ("expression-primary.galgas", 376)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 376))  COMMA_SOURCE_FILE ("expression-primary.galgas", 374)) ;
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_14852  COMMA_SOURCE_FILE ("expression-primary.galgas", 378)) ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 380)), GALGAS_string ("this should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 380)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_registerReference:
        {
          const cEnumAssociatedValues_objectIR_registerReference * extractPtr_16704 = (const cEnumAssociatedValues_objectIR_registerReference *) (var_objectIR_14297.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_16704->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmRegisterName = extractPtr_16704->mAssociatedValue1 ;
          const GALGAS_bigint extractedValue_address = extractPtr_16704->mAssociatedValue4 ;
          const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_16704->mAssociatedValue5 ;
          const GALGAS_uint extractedValue_arraySize = extractPtr_16704->mAssociatedValue6 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 389)), GALGAS_string ("register is an array, dot notation unavailable"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 389)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_5) {
            GALGAS_objectIR var_registerIR_15741 ;
            {
            routine_getNewTempVariable (extractedValue_type, extractedValue_plmRegisterName.getter_location (SOURCE_FILE ("expression-primary.galgas", 391)), ioArgument_ioTemporaries, var_registerIR_15741, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 391)) ;
            }
            {
            extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerIR_15741, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 392)) ;
            }
            GALGAS_llvmBinaryOperation var_accessOperator_15935 ;
            GALGAS_bigint var_accessRightOperand_15977 ;
            GALGAS_sliceMap var_resultSliceMap_16017 ;
            GALGAS_PLMType var_resultType_16052 ;
            extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_15935, var_accessRightOperand_15977, var_resultSliceMap_16017, var_resultType_16052, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 393)) ;
            GALGAS_objectIR var_resultObject_16087 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_16052, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 402)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 402))  COMMA_SOURCE_FILE ("expression-primary.galgas", 402)), var_resultSliceMap_16017  COMMA_SOURCE_FILE ("expression-primary.galgas", 400)) ;
            ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 405)) ;
            {
            extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_16087, extensionGetter_type (var_registerIR_15741, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 408)), constinArgument_inPropertyName.getter_location (HERE), var_registerIR_15741, var_accessOperator_15935, GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-primary.galgas", 412)), var_accessRightOperand_15977  COMMA_SOURCE_FILE ("expression-primary.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 406)) ;
            }
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_16017, var_resultObject_16087  COMMA_SOURCE_FILE ("expression-primary.galgas", 414)) ;
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_temporaryReference:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 417)), GALGAS_string ("\xC2""\xAB""temporaryReference\xC2""\xBB"" invalid here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 417)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 419)), GALGAS_string ("\xC2""\xAB""property\xC2""\xBB"" invalid here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 419)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmTemporaryValue:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 421)), GALGAS_string ("\xC2""\xAB""llvmTemporaryValue\xC2""\xBB"" invalid here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 421)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalInteger:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 423)), GALGAS_string ("\xC2""\xAB""literalInteger\xC2""\xBB"" invalid here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 423)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmStructureConstant:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 425)), GALGAS_string ("\xC2""\xAB""llvmStructureConstant\xC2""\xBB"" invalid here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 425)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 427)), GALGAS_string ("a global string constant is invalid here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 427)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_zero:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 429)), GALGAS_string ("\xC2""\xAB""zero\xC2""\xBB"" invalid here"), fixItArray13  COMMA_SOURCE_FILE ("expression-primary.galgas", 429)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_possibleFunction:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 431)), GALGAS_string ("\xC2""\xAB""possibleFunction\xC2""\xBB"" invalid here"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 431)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_18715 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_18715->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_18715->mAssociatedValue1 ;
      const enumGalgasBool test_15 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 434)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 434)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_17847 ;
        GALGAS_lstring joker_17814_2 ; // Joker input parameter
        GALGAS_propertyMap joker_17814_1 ; // Joker input parameter
        GALGAS_propertyList joker_17849_3 ; // Joker input parameter
        GALGAS_uint joker_17849_2 ; // Joker input parameter
        GALGAS_string joker_17849_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 435)).method_structure (joker_17814_2, joker_17814_1, var_structureMap_17847, joker_17849_3, joker_17849_2, joker_17849_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 435)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_17864 = var_structureMap_17847 ;
        GALGAS_objectIR var_masterPropertyIR_17974 ;
        {
        var_m_17864.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_17890 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_17864.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_17890, extractedValue_masterPropertyName, var_masterPropertyIR_17974, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 437)) ;
        }
        GALGAS_uint var_index_18044 ;
        GALGAS_PLMType joker_18015 ; // Joker input parameter
        GALGAS_lstring joker_18026 ; // Joker input parameter
        var_masterPropertyIR_17974.method_property (joker_18015, joker_18026, var_index_18044, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 438)) ;
        GALGAS_objectIR var_newObject_18065 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_17974, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 440)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 441)), extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 441))  COMMA_SOURCE_FILE ("expression-primary.galgas", 441)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 442)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 439)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 445)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_18065, extractedValue_currentPointer, extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 449)), var_index_18044.getter_string (SOURCE_FILE ("expression-primary.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 446)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_newObject_18065  COMMA_SOURCE_FILE ("expression-primary.galgas", 452)) ;
      }else if (kBoolFalse == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 454)), GALGAS_string ("'").add_operation (extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 454)).add_operation (GALGAS_string ("' should be a structure"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 454)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 454)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_19560 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_19560->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentObject = extractPtr_19560->mAssociatedValue1 ;
      GALGAS_llvmBinaryOperation var_accessOperator_18871 ;
      GALGAS_bigint var_accessRightOperand_18909 ;
      GALGAS_sliceMap var_resultSliceMap_18945 ;
      GALGAS_PLMType var_resultType_18976 ;
      extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_18871, var_accessRightOperand_18909, var_resultSliceMap_18945, var_resultType_18976, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 457)) ;
      GALGAS_objectIR var_resultObject_19003 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_18976, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 466)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 466))  COMMA_SOURCE_FILE ("expression-primary.galgas", 466)), var_resultSliceMap_18945  COMMA_SOURCE_FILE ("expression-primary.galgas", 464)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 469)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_19003, extensionGetter_type (extractedValue_currentObject, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 472)), constinArgument_inPropertyName.getter_location (HERE), extractedValue_currentObject, var_accessOperator_18871, GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-primary.galgas", 476)), var_accessRightOperand_18909  COMMA_SOURCE_FILE ("expression-primary.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 470)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_18945, var_resultObject_19003  COMMA_SOURCE_FILE ("expression-primary.galgas", 478)) ;
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
  GALGAS_objectIR var_variableIR_20452 ;
  GALGAS_location var_errorLocation_20478 ;
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_20674 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_20674->mAssociatedValue0 ;
      var_errorLocation_20478 = extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 504)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_20617 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_20617, extractedValue_identifier, var_variableIR_20452, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 505)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_21671 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_21671->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_21671->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 507)).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_errorLocation_20478 = extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 508)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_20911 ;
        GALGAS_lstring joker_20878_2 ; // Joker input parameter
        GALGAS_propertyMap joker_20878_1 ; // Joker input parameter
        GALGAS_propertyList joker_20913_3 ; // Joker input parameter
        GALGAS_uint joker_20913_2 ; // Joker input parameter
        GALGAS_string joker_20913_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 509)).method_structure (joker_20878_2, joker_20878_1, var_structureMap_20911, joker_20913_3, joker_20913_2, joker_20913_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 509)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_20928 = var_structureMap_20911 ;
        GALGAS_objectIR var_masterPropertyIR_21032 ;
        {
        var_m_20928.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_20954 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_20928.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_20954, extractedValue_propertyName, var_masterPropertyIR_21032, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
        }
        var_variableIR_20452 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_21032, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 514)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 514))  COMMA_SOURCE_FILE ("expression-primary.galgas", 514)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 515)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 512)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 518)) ;
        GALGAS_uint var_index_21390 ;
        GALGAS_PLMType joker_21361 ; // Joker input parameter
        GALGAS_lstring joker_21372 ; // Joker input parameter
        var_masterPropertyIR_21032.method_property (joker_21361, joker_21372, var_index_21390, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 519)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_variableIR_20452, extractedValue_currentPointerIR, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 523)), var_index_21390.getter_string (SOURCE_FILE ("expression-primary.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 520)) ;
        }
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 527)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 527)) ;
        var_variableIR_20452.drop () ; // Release error dropped variable
        var_errorLocation_20478.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_21814 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_21814->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_21814->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 530)), GALGAS_string ("this object is not an array"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 530)) ;
      var_variableIR_20452.drop () ; // Release error dropped variable
      var_errorLocation_20478.drop () ; // Release error dropped variable
    }
    break ;
  }
  const enumGalgasBool test_3 = extensionGetter_type (var_variableIR_20452, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 533)).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 533)).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_20452, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 534)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 549)), var_variableIR_20452  COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = var_variableIR_20452.getter_isRegisterReference (SOURCE_FILE ("expression-primary.galgas", 550)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_sliceMap var_sliceMap_23009 ;
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_20452, var_sliceMap_23009, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 551)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_sliceMap_23009, var_variableIR_20452  COMMA_SOURCE_FILE ("expression-primary.galgas", 567)) ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_errorLocation_20478, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 569)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handleFunctionCallInExpressionNew'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpressionNew (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
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
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 592)) ;
  }
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_24348 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_24348->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 597)), GALGAS_string ("this is not a function"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 597)) ;
      ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_24910 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_24910->mAssociatedValue0 ;
      {
      routine_handleStandAloneFunctionCallInExpression (ioArgument_ioInternalRepresentation, extractedValue_identifier, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 601)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_25737 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25737->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_25737->mAssociatedValue1 ;
      const enumGalgasBool test_3 = extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 618)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 618)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_objectIR var_callReturnedResult_25521 ;
        {
        routine_handleMethodCallInExpressionNew (extractedValue_propertyName, extractedValue_currentPointerIR, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, ioArgument_ioInstructionGenerationList, var_callReturnedResult_25521, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 619)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 634)), var_callReturnedResult_25521  COMMA_SOURCE_FILE ("expression-primary.galgas", 634)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 636)), GALGAS_string ("this object should be a structure"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 636)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleMethodCallInExpressionNew'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleMethodCallInExpressionNew (const GALGAS_lstring constinArgument_inMethodName,
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
  GALGAS_universalPropertyAndRoutineMapForContext var_currentMap_26578 ;
  GALGAS_lstring joker_26547_2 ; // Joker input parameter
  GALGAS_propertyMap joker_26547_1 ; // Joker input parameter
  GALGAS_propertyList joker_26580_3 ; // Joker input parameter
  GALGAS_uint joker_26580_2 ; // Joker input parameter
  GALGAS_string joker_26580_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 658)).method_structure (joker_26547_2, joker_26547_1, var_currentMap_26578, joker_26580_3, joker_26580_2, joker_26580_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 658)) ;
  GALGAS_lstring var_routineMangledName_26608 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 659)), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 659)) ;
  GALGAS_lstring var_signature_26756 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 661)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_26945 ;
  GALGAS_routineDescriptor var_routineDescriptor_26987 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) var_currentMap_26578.ptr (), constinArgument_inMethodName, var_signature_26756, var_LLVMInvocationRoutineName_26945, var_routineDescriptor_26987, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 663)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_routineDescriptor_26987.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 670)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 670)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 671)), GALGAS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 671)) ;
    var_routineDescriptor_26987.drop () ; // Release error dropped variable
    outArgument_outCallReturnedResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_calleeKindIR var_calleeKind_27243 = function_checkMode (constinArgument_inMode, extensionGetter_executionMode (var_routineDescriptor_26987.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 676)), var_routineDescriptor_26987.getter_mRoutineKind (HERE), constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 674)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_27535 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 681)) ;
    switch (var_routineDescriptor_26987.getter_mRoutineCallingScheme (HERE).enumValue ()) {
    case GALGAS_routineCallingSheme::kNotBuilt:
      break ;
    case GALGAS_routineCallingSheme::kEnum_staticCall:
      {
        var_effectiveParameterListIR_27535.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 684)), constinArgument_inCurrentPointerIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 684)) ;
      }
      break ;
    case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
      {
      }
      break ;
    }
    {
    routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_routineDescriptor_26987.getter_mSignature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_27535, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 688)) ;
    }
    {
    routine_getNewTempVariable (var_routineDescriptor_26987.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 704)), var_routineMangledName_26608.getter_location (SOURCE_FILE ("expression-primary.galgas", 704)), ioArgument_ioTemporaries, outArgument_outCallReturnedResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 704)) ;
    }
    switch (var_routineDescriptor_26987.getter_mRoutineCallingScheme (HERE).enumValue ()) {
    case GALGAS_routineCallingSheme::kNotBuilt:
      break ;
    case GALGAS_routineCallingSheme::kEnum_staticCall:
      {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), outArgument_outCallReturnedResult, var_routineMangledName_26608, var_LLVMInvocationRoutineName_26945, var_calleeKind_27243, var_effectiveParameterListIR_27535  COMMA_SOURCE_FILE ("expression-primary.galgas", 709))  COMMA_SOURCE_FILE ("expression-primary.galgas", 709)) ;
        {
        ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_26608 COMMA_SOURCE_FILE ("expression-primary.galgas", 718)) ;
        }
      }
      break ;
    case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
      {
        const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall * extractPtr_29725 = (const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall *) (var_routineDescriptor_26987.getter_mRoutineCallingScheme (HERE).unsafePointer ()) ;
        const GALGAS_uint extractedValue_propertyIndex = extractPtr_29725->mAssociatedValue0 ;
        const GALGAS_PLMType extractedValue_type = extractPtr_29725->mAssociatedValue1 ;
        GALGAS_objectIR var_propertyReference_29119 = GALGAS_objectIR::constructor_temporaryReference (extractedValue_type, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 722)), constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 722))  COMMA_SOURCE_FILE ("expression-primary.galgas", 722)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 723)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 720)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 726)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_propertyReference_29119, constinArgument_inCurrentPointerIR, constinArgument_inMethodName.getter_string (SOURCE_FILE ("expression-primary.galgas", 730)), extractedValue_propertyIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 727)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (var_propertyReference_29119, extractedValue_type, outArgument_outCallReturnedResult, var_effectiveParameterListIR_27535  COMMA_SOURCE_FILE ("expression-primary.galgas", 734))  COMMA_SOURCE_FILE ("expression-primary.galgas", 734)) ;
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
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 764)) ;
  }
  GALGAS_lstring var_routineMangledName_30783 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inFunctionName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 767)) ;
  GALGAS_lstring var_signature_30898 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 769)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_31095 ;
  GALGAS_routineDescriptor var_routineDescriptor_31137 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), constinArgument_inFunctionName, var_signature_30898, var_LLVMInvocationRoutineName_31095, var_routineDescriptor_31137, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 771)) ;
  GALGAS_routineKind var_routineKind_31205 = var_routineDescriptor_31137.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_31255 = extensionGetter_executionMode (var_routineKind_31205, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 779)) ;
  GALGAS_routineTypedSignature var_formalSignature_31307 = var_routineDescriptor_31137.getter_mSignature (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_routineDescriptor_31137.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 782)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 782)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inFunctionName.getter_location (SOURCE_FILE ("expression-primary.galgas", 783)), GALGAS_string ("not a function (returns no value)"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 783)) ;
    var_routineDescriptor_31137.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    GALGAS_calleeKindIR var_calleeKind_31569 = function_checkMode (constinArgument_inMode, var_calleeMode_31255, var_routineKind_31205, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 786)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_31803 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 793)) ;
    {
    routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_formalSignature_31307, constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_31803, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 794)) ;
    }
    GALGAS_objectIR var_functionResult_32508 ;
    {
    routine_getNewTempVariable (var_routineDescriptor_31137.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 810)), var_routineMangledName_30783.getter_location (SOURCE_FILE ("expression-primary.galgas", 810)), ioArgument_ioTemporaries, var_functionResult_32508, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 810)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_functionResult_32508, var_routineMangledName_30783, var_LLVMInvocationRoutineName_31095, var_calleeKind_31569, var_effectiveParameterListIR_31803  COMMA_SOURCE_FILE ("expression-primary.galgas", 812))  COMMA_SOURCE_FILE ("expression-primary.galgas", 812)) ;
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_30783 COMMA_SOURCE_FILE ("expression-primary.galgas", 821)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 823)), var_functionResult_32508  COMMA_SOURCE_FILE ("expression-primary.galgas", 823)) ;
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
  GALGAS_procEffectiveParameterList var_parameterList_33975 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 845)) ;
  cEnumerator_routineTypedSignature enumerator_34018 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_34061 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_34018.hasCurrentObject () && enumerator_34061.hasCurrentObject ()) {
    switch (enumerator_34061.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_35100 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_34061.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_35100->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_35100->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_35100->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_34018.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 850)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 852)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 852)) ;
        }
        GALGAS_PLMType var_type_34199 = temp_0 ;
        GALGAS_lstring var_varLLVMName_34386 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 854)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 854)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 854)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 854))  COMMA_SOURCE_FILE ("expression-primary.galgas", 854)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 855)) ;
        GALGAS_objectIR var_objectIR_34518 = GALGAS_objectIR::constructor_localVariableReference (var_type_34199, var_varLLVMName_34386  COMMA_SOURCE_FILE ("expression-primary.galgas", 856)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_34636 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_34636, extractedValue_name, var_objectIR_34518, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 858)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_34710 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_34710, extractedValue_name, var_objectIR_34518, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 860)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 860)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_34386.getter_string (SOURCE_FILE ("expression-primary.galgas", 862)), extensionGetter_llvmTypeName (var_type_34199, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 862))  COMMA_SOURCE_FILE ("expression-primary.galgas", 862)) ;
        var_parameterList_33975.addAssign_operation (enumerator_34061.current_mEffectiveParameterKind (HERE), enumerator_34061.current_mSelector (HERE), var_type_34199  COMMA_SOURCE_FILE ("expression-primary.galgas", 863)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 865)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_34199, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_34386.getter_string (SOURCE_FILE ("expression-primary.galgas", 866)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 866)), var_varLLVMName_34386.getter_location (SOURCE_FILE ("expression-primary.galgas", 866))  COMMA_SOURCE_FILE ("expression-primary.galgas", 866)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 866))  COMMA_SOURCE_FILE ("expression-primary.galgas", 866))  COMMA_SOURCE_FILE ("expression-primary.galgas", 864)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_35918 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_34061.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_35918->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_35210 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_35157 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_35157, extractedValue_name, var_objectIR_35210, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 868)) ;
        }
        var_parameterList_33975.addAssign_operation (enumerator_34061.current_mEffectiveParameterKind (HERE), enumerator_34061.current_mSelector (HERE), extensionGetter_type (var_objectIR_35210, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 878))  COMMA_SOURCE_FILE ("expression-primary.galgas", 878)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 880)), GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_35210, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 882)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_35210, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 883)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 883)), extensionGetter_location (var_objectIR_35210, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 884))  COMMA_SOURCE_FILE ("expression-primary.galgas", 883)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 885))  COMMA_SOURCE_FILE ("expression-primary.galgas", 881))  COMMA_SOURCE_FILE ("expression-primary.galgas", 879)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_37045 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_34061.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_37045->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_37045->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_36501 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_34018.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 892)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_36501, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 888)) ;
        GALGAS_objectIR var_expressionValue_36667 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_36501, extractedValue_endOfExp, var_expressionValue_36667, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 902)) ;
        }
        GALGAS_objectIR var_result_36694 = function_checkAssignmentCompatibility (var_expressionValue_36667, enumerator_34018.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 910)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 908)) ;
        var_parameterList_33975.addAssign_operation (enumerator_34061.current_mEffectiveParameterKind (HERE), enumerator_34061.current_mSelector (HERE), enumerator_34018.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 914))  COMMA_SOURCE_FILE ("expression-primary.galgas", 914)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 915)), var_result_36694  COMMA_SOURCE_FILE ("expression-primary.galgas", 915)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_37786 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_34061.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_37786->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_37165 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_37108 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_37108, extractedValue_name, var_objectIR_37165, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 917)) ;
        }
        var_parameterList_33975.addAssign_operation (enumerator_34061.current_mEffectiveParameterKind (HERE), enumerator_34061.current_mSelector (HERE), extensionGetter_type (var_objectIR_37165, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 924))  COMMA_SOURCE_FILE ("expression-primary.galgas", 924)) ;
        GALGAS_objectIR var_argumentIR_37537 = GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_37165, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 926)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_37165, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 927)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 927)), extensionGetter_location (var_objectIR_37165, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 927))  COMMA_SOURCE_FILE ("expression-primary.galgas", 927)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 928))  COMMA_SOURCE_FILE ("expression-primary.galgas", 925)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 930)), var_argumentIR_37537  COMMA_SOURCE_FILE ("expression-primary.galgas", 930)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_39838 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_34061.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_39838->mAssociatedValue0 ;
        switch (constinArgument_inSelfType.enumValue ()) {
        case GALGAS_PLMType::kNotBuilt:
          break ;
        case GALGAS_PLMType::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 934)), GALGAS_string ("'self' is not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 934)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 936)), GALGAS_string ("a structure type is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 936)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_arrayType:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 938)), GALGAS_string ("a structure type is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 938)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_boolean:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 940)), GALGAS_string ("a structure type is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 940)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_staticInteger:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 942)), GALGAS_string ("a structure type is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 942)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 944)), GALGAS_string ("a structure type is required here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 944)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 946)), GALGAS_string ("a structure type is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 946)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 948)), GALGAS_string ("a structure type is required here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 948)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_pointer:
          {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 950)), GALGAS_string ("a structure type is required here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 950)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_integer:
          {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 952)), GALGAS_string ("a structure type is required here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 952)) ;
            var_parameterList_33975.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_structure:
          {
            const cEnumAssociatedValues_PLMType_structure * extractPtr_39828 = (const cEnumAssociatedValues_PLMType_structure *) (constinArgument_inSelfType.unsafePointer ()) ;
            const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_39828->mAssociatedValue2 ;
            GALGAS_universalPropertyAndRoutineMapForContext var_m_39216 = extractedValue_universalMap ;
            GALGAS_objectIR var_propertyObject_39302 ;
            {
            var_m_39216.insulate (HERE) ;
            cPtr_universalPropertyAndRoutineMapForContext * ptr_39244 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_39216.ptr () ;
            callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_39244, extractedValue_name, var_propertyObject_39302, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 955)) ;
            }
            GALGAS_uint var_idx_39355 ;
            GALGAS_PLMType joker_39338_2 ; // Joker input parameter
            GALGAS_lstring joker_39338_1 ; // Joker input parameter
            var_propertyObject_39302.method_property (joker_39338_2, joker_39338_1, var_idx_39355, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 956)) ;
            GALGAS_objectIR var_fieldObjectReference_39455 ;
            {
            routine_getNewTempVariable (extensionGetter_type (var_propertyObject_39302, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 957)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 957)), ioArgument_ioTemporaries, var_fieldObjectReference_39455, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 957)) ;
            }
            {
            extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_39455, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 961)), var_idx_39355, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 958)) ;
            }
            var_parameterList_33975.addAssign_operation (enumerator_34061.current_mEffectiveParameterKind (HERE), enumerator_34061.current_mSelector (HERE), extensionGetter_type (var_propertyObject_39302, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 964))  COMMA_SOURCE_FILE ("expression-primary.galgas", 964)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 966)), var_fieldObjectReference_39455  COMMA_SOURCE_FILE ("expression-primary.galgas", 965)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_34018.gotoNextObject () ;
    enumerator_34061.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 972)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 972)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 973)).getter_string (SOURCE_FILE ("expression-primary.galgas", 973)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 973)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 973)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 974)).getter_string (SOURCE_FILE ("expression-primary.galgas", 973)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 973)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 974)), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 973)) ;
  }else if (kBoolFalse == test_13) {
    cEnumerator_routineTypedSignature enumerator_40174 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_40203 (var_parameterList_33975, kENUMERATION_UP) ;
    while (enumerator_40174.hasCurrentObject () && enumerator_40203.hasCurrentObject ()) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_40174.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 977)).objectCompare (extensionGetter_key (enumerator_40203.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 977)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_40203.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 978)), GALGAS_string ("the actual parameter type is '").add_operation (extensionGetter_key (enumerator_40203.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 978)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 978)).add_operation (enumerator_40174.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 979)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 979)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 979)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 978)) ;
      }
      GALGAS_string var_requiredPassingMode_40504 = extensionGetter_requiredActualPassingModeForSelector (enumerator_40174.current_mFormalArgumentPassingMode (HERE), enumerator_40174.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 981)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 981)) ;
      GALGAS_string var_testedPassingMode_40625 = extensionGetter_passingModeForActualSelector (enumerator_40203.current_mEffectiveParameterPassingMode (HERE), enumerator_40203.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 982)) ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_40504.objectCompare (var_testedPassingMode_40625)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_40203.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 984)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_40504, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 984)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 984)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 984)) ;
      }
      enumerator_40174.gotoNextObject () ;
      enumerator_40203.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                             const GALGAS_string constinArgument_inGlobalVariableReceiverName,
                                             const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                             const GALGAS_bool constinArgument_inGuard,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                             const GALGAS_location constinArgument_inErrorLocation,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             GALGAS_objectIR & ioArgument_ioObjectPtr,
                                             GALGAS_PLMType & outArgument_outReturnedType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 1014)).operator_not (SOURCE_FILE ("expression-primary.galgas", 1014)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1015)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_42281 ;
      GALGAS_objectIR joker_42248_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_42248_1, var_functionName_42281, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1017)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_42281.getter_location (SOURCE_FILE ("expression-primary.galgas", 1018)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1018)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_42452 ;
      GALGAS_lstring var_functionName_42483 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_42452, var_functionName_42483, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1020)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_43190 ;
      GALGAS_calleeKindIR var_routineKind_43239 ;
      GALGAS_lstring var_functionMangledName_43298 ;
      GALGAS_lstring var_functionNameForGeneration_43369 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_42452, var_functionName_42483, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_43190, var_routineKind_43239, var_functionMangledName_43298, var_functionNameForGeneration_43369, outArgument_outReturnedType, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1021)) ;
      }
      GALGAS_objectIR var_functionResult_43557 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_43298.getter_location (SOURCE_FILE ("expression-primary.galgas", 1044)), ioArgument_ioTemporaries, var_functionResult_43557, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1044)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_43557, var_functionMangledName_43298, var_functionNameForGeneration_43369, var_routineKind_43239, var_effectiveParameterListIR_43190  COMMA_SOURCE_FILE ("expression-primary.galgas", 1046))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1046)) ;
      ioArgument_ioObjectPtr = var_functionResult_43557 ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeFunctionCallInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionCallInExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                              const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                              const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                              const GALGAS_objectIR constinArgument_inReceiver,
                                              const GALGAS_lstring constinArgument_inRoutineName,
                                              const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              const GALGAS_mode constinArgument_inRequiredMode,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                              GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                              GALGAS_calleeKindIR & outArgument_outRoutineKindIR,
                                              GALGAS_lstring & outArgument_outRoutineMangledName,
                                              GALGAS_lstring & outArgument_outRoutineNameForGeneration,
                                              GALGAS_PLMType & outArgument_outReturnedType,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outRoutineKindIR.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  outArgument_outRoutineNameForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1084)) ;
  GALGAS_PLMType var_receiverType_45189 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1085)) ;
  GALGAS_bool var_specialCase_45302 = var_receiverType_45189.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 1087)) ;
  const enumGalgasBool test_0 = var_specialCase_45302.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_propertyMap_45427 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_45465 ;
    GALGAS_lstring joker_45383_1 ; // Joker input parameter
    GALGAS_propertyList joker_45467_3 ; // Joker input parameter
    GALGAS_uint joker_45467_2 ; // Joker input parameter
    GALGAS_string joker_45467_1 ; // Joker input parameter
    var_receiverType_45189.method_structure (joker_45383_1, var_propertyMap_45427, var_universalMap_45465, joker_45467_3, joker_45467_2, joker_45467_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1089)) ;
    const enumGalgasBool test_1 = var_propertyMap_45427.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1090)) COMMA_SOURCE_FILE ("expression-primary.galgas", 1090)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_propertyObject_45595 ;
      GALGAS_bool joker_45564 ; // Joker input parameter
      var_propertyMap_45427.method_searchKey (constinArgument_inRoutineName, joker_45564, var_propertyObject_45595, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1091)) ;
      GALGAS_PLMType var_type_45642 ;
      GALGAS_lstring var_plmName_45670 ;
      GALGAS_uint var_index_45694 ;
      var_propertyObject_45595.method_property (var_type_45642, var_plmName_45670, var_index_45694, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1092)) ;
      var_specialCase_45302 = var_type_45642.getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 1093)) ;
      const enumGalgasBool test_2 = var_specialCase_45302.boolEnum () ;
      if (kBoolTrue == test_2) {
        constinArgument_inRoutineName.log ("inRoutineName"  COMMA_SOURCE_FILE ("expression-primary.galgas", 1095)) ;
      }
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_receiverType_45189.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1100)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1101)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 1101)) ;
  }
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_receiverType_45189.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1105)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string ("$").add_operation (extensionGetter_key (var_receiverType_45189, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1105)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1105)) ;
  }
  outArgument_outRoutineMangledName = function_routineMangledNameFromCall (temp_4, constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1104)) ;
  GALGAS_routineDescriptor var_routineDescriptor_46360 ;
  GALGAS_location var_outRoutineLocation_46398 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), constinArgument_inRoutineName, extensionGetter_routineSignature (constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1111)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1111)), outArgument_outRoutineNameForGeneration, var_routineDescriptor_46360, var_outRoutineLocation_46398, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1109)) ;
  GALGAS_bool var_isPublic_46417 = var_routineDescriptor_46360.getter_mIsPublic (HERE) ;
  GALGAS_routineKind var_routineKind_46465 = var_routineDescriptor_46360.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_46515 = extensionGetter_executionMode (var_routineKind_46465, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1118)) ;
  GALGAS_routineTypedSignature var_formalSignature_46602 = var_routineDescriptor_46360.getter_mSignature (HERE) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_routineDescriptor_46360.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1120)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    outArgument_outReturnedType = GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1121)) ;
  }else if (kBoolFalse == test_6) {
    outArgument_outReturnedType = var_routineDescriptor_46360.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1123)) ;
  }
  const enumGalgasBool test_7 = var_isPublic_46417.operator_not (SOURCE_FILE ("expression-primary.galgas", 1126)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_receiverType_45189.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1127)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_declarationFile_46930 = var_outRoutineLocation_46398.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1128)) ;
      GALGAS_string var_invocationFile_46983 = constinArgument_inRoutineName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1129)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_invocationFile_46983.objectCompare (var_declarationFile_46930)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1131)), GALGAS_string ("this routine is not public"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1131)) ;
      }
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 1138)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredMode, var_calleeMode_46515, var_routineKind_46465, constinArgument_inRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1140)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_46602, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1147)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const GALGAS_PLMType constinArgument_inSelfType,
                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                         const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode constinArgument_inRequiredMode,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_49427 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1188)) ;
  cEnumerator_routineTypedSignature enumerator_49470 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_49513 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_49470.hasCurrentObject () && enumerator_49513.hasCurrentObject ()) {
    switch (enumerator_49513.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_51003 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_49513.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_51003->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_51003->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_51003->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_49470.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1193)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1195)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1195)) ;
        }
        GALGAS_PLMType var_type_49651 = temp_0 ;
        GALGAS_lstring var_varLLVMName_49838 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1197)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1197)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1197)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1197))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1197)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1198)) ;
        GALGAS_objectIR var_objectIR_49970 = GALGAS_objectIR::constructor_localVariableReference (var_type_49651, var_varLLVMName_49838  COMMA_SOURCE_FILE ("expression-primary.galgas", 1199)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_50088 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_50088, extractedValue_name, var_objectIR_49970, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1201)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_49651, GALGAS_bool (true), var_objectIR_49970, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1202)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_50384 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_50384, extractedValue_name, var_objectIR_49970, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 1211)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1211)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_49651, GALGAS_bool (true), var_objectIR_49970, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1212)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_49838.getter_string (SOURCE_FILE ("expression-primary.galgas", 1221)), extensionGetter_llvmTypeName (var_type_49651, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1221))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1221)) ;
        var_parameterList_49427.addAssign_operation (enumerator_49513.current_mEffectiveParameterKind (HERE), enumerator_49513.current_mSelector (HERE), var_type_49651  COMMA_SOURCE_FILE ("expression-primary.galgas", 1222)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1224)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_49651, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_49838.getter_string (SOURCE_FILE ("expression-primary.galgas", 1225)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1225)), var_varLLVMName_49838.getter_location (SOURCE_FILE ("expression-primary.galgas", 1225))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1225)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1225))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1225))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1223)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_52062 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_49513.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_52062->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_51113 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_51060 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_51060, extractedValue_name, var_objectIR_51113, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1227)) ;
        }
        GALGAS_PLMType var_type_51200 ;
        GALGAS_bool var_accessIsAllowed_51247 ;
        GALGAS_bool var_isCopyable_51314 ;
        GALGAS_bool var_canBeUsedAsInputParameter_51428 ;
        {
        GALGAS_objectIR joker_51266 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_51200, var_accessIsAllowed_51247, joker_51266, var_isCopyable_51314, var_canBeUsedAsInputParameter_51428, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1228)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_51247.operator_not (SOURCE_FILE ("expression-primary.galgas", 1236)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1237)), GALGAS_string ("routine has no access right on the this variable"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 1237)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter_51428.operator_not (SOURCE_FILE ("expression-primary.galgas", 1239)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1240)), GALGAS_string ("this variable cannot be used as input parameter"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1240)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable_51314.operator_not (SOURCE_FILE ("expression-primary.galgas", 1242)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1243)), GALGAS_string ("an $").add_operation (extensionGetter_key (var_type_51200, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1243)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1243)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1243)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 1243)) ;
        }
        var_parameterList_49427.addAssign_operation (enumerator_49513.current_mEffectiveParameterKind (HERE), enumerator_49513.current_mSelector (HERE), var_type_51200  COMMA_SOURCE_FILE ("expression-primary.galgas", 1245)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1247)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_51200, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_51113, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1248)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1248)), extensionGetter_location (var_objectIR_51113, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1248))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1248)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1248))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1248))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1246)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_53189 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_49513.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_53189->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_53189->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_52645 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_49470.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1254)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_52645, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1250)) ;
        GALGAS_objectIR var_expressionValue_52811 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_52645, extractedValue_endOfExp, var_expressionValue_52811, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1264)) ;
        }
        GALGAS_objectIR var_result_52838 = function_checkAssignmentCompatibility (var_expressionValue_52811, enumerator_49470.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1272)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1270)) ;
        var_parameterList_49427.addAssign_operation (enumerator_49513.current_mEffectiveParameterKind (HERE), enumerator_49513.current_mSelector (HERE), enumerator_49470.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1276))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1276)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 1277)), var_result_52838  COMMA_SOURCE_FILE ("expression-primary.galgas", 1277)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_54073 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_49513.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_54073->mAssociatedValue0 ;
        GALGAS_PLMType var_type_53318 ;
        GALGAS_bool var_accessIsAllowed_53365 ;
        GALGAS_objectIR var_objectIR_53396 ;
        GALGAS_bool var_canBeUsedAsInputParameter_53473 ;
        {
        GALGAS_bool joker_53406_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_53318, var_accessIsAllowed_53365, var_objectIR_53396, joker_53406_1, var_canBeUsedAsInputParameter_53473, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1279)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter_53473.operator_not (SOURCE_FILE ("expression-primary.galgas", 1287)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1288)), GALGAS_string ("this variable cannot be used as output/input parameter"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1288)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed_53365.operator_not (SOURCE_FILE ("expression-primary.galgas", 1290)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1291)), GALGAS_string ("routine has no access right on the this variable"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1291)) ;
        }
        var_parameterList_49427.addAssign_operation (enumerator_49513.current_mEffectiveParameterKind (HERE), enumerator_49513.current_mSelector (HERE), var_type_53318  COMMA_SOURCE_FILE ("expression-primary.galgas", 1293)) ;
        GALGAS_objectIR var_argumentIR_53835 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_53318, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_53396, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1296)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1296)), extensionGetter_location (var_objectIR_53396, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1296))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1296)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1297))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1294)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1299)), var_argumentIR_53835  COMMA_SOURCE_FILE ("expression-primary.galgas", 1299)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_56521 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_49513.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_56521->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1301)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1302)), GALGAS_string ("'self' is not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 1302)) ;
          var_parameterList_49427.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("expression-primary.galgas", 1303)).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1304)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1304)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1304)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 1304)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("expression-primary.galgas", 1305)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1306)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1306)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1306)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 1306)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.enumValue ()) {
              case GALGAS_PLMType::kNotBuilt:
                break ;
              case GALGAS_PLMType::kEnum_opaque:
                {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1310)), GALGAS_string ("a structure type is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 1310)) ;
                  var_parameterList_49427.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_arrayType:
                {
                  TC_Array <C_FixItDescription> fixItArray20 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1312)), GALGAS_string ("a structure type is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-primary.galgas", 1312)) ;
                  var_parameterList_49427.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_boolean:
              case GALGAS_PLMType::kEnum_void:
                {
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1314)), GALGAS_string ("a structure type is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-primary.galgas", 1314)) ;
                  var_parameterList_49427.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_staticInteger:
                {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1316)), GALGAS_string ("a structure type is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-primary.galgas", 1316)) ;
                  var_parameterList_49427.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_literalString:
                {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1318)), GALGAS_string ("a structure type is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-primary.galgas", 1318)) ;
                  var_parameterList_49427.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_enumeration:
                {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1320)), GALGAS_string ("a structure type is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-primary.galgas", 1320)) ;
                  var_parameterList_49427.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_function:
                {
                  TC_Array <C_FixItDescription> fixItArray25 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1322)), GALGAS_string ("a structure type is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-primary.galgas", 1322)) ;
                  var_parameterList_49427.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_pointer:
                {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1324)), GALGAS_string ("a structure type is required here"), fixItArray26  COMMA_SOURCE_FILE ("expression-primary.galgas", 1324)) ;
                  var_parameterList_49427.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_integer:
                {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1326)), GALGAS_string ("a structure type is required here"), fixItArray27  COMMA_SOURCE_FILE ("expression-primary.galgas", 1326)) ;
                  var_parameterList_49427.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_structure:
                {
                  const cEnumAssociatedValues_PLMType_structure * extractPtr_56498 = (const cEnumAssociatedValues_PLMType_structure *) (constinArgument_inSelfType.unsafePointer ()) ;
                  const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_56498->mAssociatedValue2 ;
                  GALGAS_universalPropertyAndRoutineMapForContext var_m_55860 = extractedValue_universalMap ;
                  GALGAS_objectIR var_propertyObject_55948 ;
                  {
                  var_m_55860.insulate (HERE) ;
                  cPtr_universalPropertyAndRoutineMapForContext * ptr_55890 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_55860.ptr () ;
                  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_55890, extractedValue_name, var_propertyObject_55948, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1329)) ;
                  }
                  GALGAS_uint var_idx_56003 ;
                  GALGAS_PLMType joker_55986_2 ; // Joker input parameter
                  GALGAS_lstring joker_55986_1 ; // Joker input parameter
                  var_propertyObject_55948.method_property (joker_55986_2, joker_55986_1, var_idx_56003, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1330)) ;
                  GALGAS_objectIR var_fieldObjectReference_56105 ;
                  {
                  routine_getNewTempVariable (extensionGetter_type (var_propertyObject_55948, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1331)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1331)), ioArgument_ioTemporaries, var_fieldObjectReference_56105, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1331)) ;
                  }
                  {
                  extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_56105, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1335)), var_idx_56003, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1332)) ;
                  }
                  var_parameterList_49427.addAssign_operation (enumerator_49513.current_mEffectiveParameterKind (HERE), enumerator_49513.current_mSelector (HERE), extensionGetter_type (var_propertyObject_55948, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1338))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1338)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1340)), var_fieldObjectReference_56105  COMMA_SOURCE_FILE ("expression-primary.galgas", 1339)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_49470.gotoNextObject () ;
    enumerator_49513.gotoNextObject () ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1347)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1347)))).boolEnum () ;
  if (kBoolTrue == test_28) {
    TC_Array <C_FixItDescription> fixItArray29 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1348)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1348)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1348)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1349)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1348)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1349)), fixItArray29  COMMA_SOURCE_FILE ("expression-primary.galgas", 1348)) ;
  }else if (kBoolFalse == test_28) {
    cEnumerator_routineTypedSignature enumerator_56856 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_56885 (var_parameterList_49427, kENUMERATION_UP) ;
    while (enumerator_56856.hasCurrentObject () && enumerator_56885.hasCurrentObject ()) {
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_56856.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1352)).objectCompare (extensionGetter_key (enumerator_56885.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1352)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_56885.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1353)), GALGAS_string ("the actual parameter type is '").add_operation (extensionGetter_key (enumerator_56885.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1353)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1353)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1353)).add_operation (enumerator_56856.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1354)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1354)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1354)), fixItArray31  COMMA_SOURCE_FILE ("expression-primary.galgas", 1353)) ;
      }
      GALGAS_string var_requiredPassingMode_57186 = extensionGetter_requiredActualPassingModeForSelector (enumerator_56856.current_mFormalArgumentPassingMode (HERE), enumerator_56856.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1356)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1356)) ;
      GALGAS_string var_testedPassingMode_57307 = extensionGetter_passingModeForActualSelector (enumerator_56885.current_mEffectiveParameterPassingMode (HERE), enumerator_56885.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1357)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_57186.objectCompare (var_testedPassingMode_57307)).boolEnum () ;
      if (kBoolTrue == test_32) {
        TC_Array <C_FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_56885.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1359)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_57186, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1359)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1359)), fixItArray33  COMMA_SOURCE_FILE ("expression-primary.galgas", 1359)) ;
      }
      enumerator_56856.gotoNextObject () ;
      enumerator_56885.gotoNextObject () ;
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
                                                         GALGAS_unifiedSymbolMapEx & /* ioArgument_ioVariableMap */,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_3054 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 58)) ;
  GALGAS_objectIR var_expressionResult_3500 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("directive-check.galgas", 63)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3054, var_expressionResult_3500, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 59)) ;
  const enumGalgasBool test_0 = extensionGetter_type (var_expressionResult_3500, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 74)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 74)).operator_not (SOURCE_FILE ("directive-check.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 75)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3500, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 78)).operator_not (SOURCE_FILE ("directive-check.galgas", 78)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 79)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_3883 ;
    GALGAS_PLMType joker_3860_1 ; // Joker input parameter
    var_expressionResult_3500.method_literalInteger (joker_3860_1, var_value_3883, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 81)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_3883.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 82)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 83)) ;
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
//       Overriding extension method '@varAssignmentNoSelfInstructionAST noteInstructionTypesInPrecedenceGraph'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentNoSelfInstructionAST * object = (const cPtr_varAssignmentNoSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentNoSelfInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 62)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varAssignmentNoSelfInstructionAST.mSlotID,
                                                              extensionMethod_varAssignmentNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varAssignmentNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@varAssignmentSelfInstructionAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentSelfInstructionAST * object = (const cPtr_varAssignmentSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentSelfInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 69)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varAssignmentSelfInstructionAST.mSlotID,
                                                              extensionMethod_varAssignmentSelfInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varAssignmentSelfInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@varAssignmentNoSelfInstructionAST analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentNoSelfInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                       const GALGAS_PLMType constinArgument_inSelfType,
                                                                       const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                       const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                       GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentNoSelfInstructionAST * object = (const cPtr_varAssignmentNoSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentNoSelfInstructionAST) ;
  GALGAS_objectIR var_currentObject_4982 ;
  GALGAS_string var_globalVariableReceiverName_5052 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 93)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_4982, var_globalVariableReceiverName_5052, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
  const enumGalgasBool test_0 = var_currentObject_4982.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 108)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 109)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 109)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
    var_currentObject_4982.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperandPossibleReference_5707 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_4982, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_5707, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
  GALGAS_objectIR var_sourceOperand_5887 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_5707, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 129)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 129)), var_sourceOperand_5887, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 126)) ;
  }
  GALGAS_objectIR var_result_5906 = function_checkAssignmentCompatibility (var_sourceOperand_5887, extensionGetter_type (var_currentObject_4982, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 134)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 135)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 135)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 132)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_4982, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 138)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 138)), var_result_5906, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 138)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentNoSelfInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varAssignmentNoSelfInstructionAST.mSlotID,
                                extensionMethod_varAssignmentNoSelfInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentNoSelfInstructionAST_analyze (defineExtensionMethod_varAssignmentNoSelfInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@varAssignmentSelfInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentSelfInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentSelfInstructionAST * object = (const cPtr_varAssignmentSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentSelfInstructionAST) ;
  GALGAS_objectIR var_currentObject_7668 ;
  GALGAS_string var_globalVariableReceiverName_7738 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 159)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_7668, var_globalVariableReceiverName_7738, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 157)) ;
  const enumGalgasBool test_0 = var_currentObject_7668.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 174)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 175)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 175)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 175)) ;
    var_currentObject_7668.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperandPossibleReference_8393 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_7668, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 182)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_8393, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 178)) ;
  GALGAS_objectIR var_sourceOperand_8573 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_8393, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 195)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 195)), var_sourceOperand_8573, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 192)) ;
  }
  GALGAS_objectIR var_result_8592 = function_checkAssignmentCompatibility (var_sourceOperand_8573, extensionGetter_type (var_currentObject_7668, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 200)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 201)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 201)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_7668, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 204)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 204)), var_result_8592, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 204)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentSelfInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varAssignmentSelfInstructionAST.mSlotID,
                                extensionMethod_varAssignmentSelfInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentSelfInstructionAST_analyze (defineExtensionMethod_varAssignmentSelfInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@varOperatorAssignNoSelfInstructionAST noteInstructionTypesInPrecedenceGraph'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignNoSelfInstructionAST * object = (const cPtr_varOperatorAssignNoSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignNoSelfInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 137)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varOperatorAssignNoSelfInstructionAST.mSlotID,
                                                              extensionMethod_varOperatorAssignNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varOperatorAssignNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@varOperatorAssignSelfInstructionAST noteInstructionTypesInPrecedenceGraph'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignSelfInstructionAST * object = (const cPtr_varOperatorAssignSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignSelfInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 144)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varOperatorAssignSelfInstructionAST.mSlotID,
                                                              extensionMethod_varOperatorAssignSelfInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varOperatorAssignSelfInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@varOperatorAssignNoSelfInstructionAST analyze'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignNoSelfInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                           const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignNoSelfInstructionAST * object = (const cPtr_varOperatorAssignNoSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignNoSelfInstructionAST) ;
  GALGAS_objectIR var_targetObject_7051 ;
  GALGAS_string var_globalVariableReceiverName_7121 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("instruction-assignment-operator.galgas", 169)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObject_7051, var_globalVariableReceiverName_7121, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 167)) ;
  const enumGalgasBool test_0 = var_targetObject_7051.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 184)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 185)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 185)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 185)) ;
    var_targetObject_7051.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourcePossibleReference_7770 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_7051, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 192)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_7770, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 188)) ;
  GALGAS_objectIR var_sourceValue_7929 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_7770, object->mProperty_mEndOfSourceExpression, var_sourceValue_7929, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 202)) ;
  }
  GALGAS_bool var_noPanicGeneration_8001 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_8064 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 210)))) ;
  GALGAS_infixOperatorMap var_operatorMap_8126 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_8126 = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_8126 = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_8126 = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_8064.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 221)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 221)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 222)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 222)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 221)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_8001.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
      var_operatorMap_8126 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_8126 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_8064.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 229)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 229)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 230)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 230)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 229)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_8001.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
      var_operatorMap_8126 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_8126 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_8064.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 237)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 237)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 238)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 238)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 237)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_8001.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
      var_operatorMap_8126 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_8126 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_8064.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 245)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 245)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 246)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 246)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 245)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_8001.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
      var_operatorMap_8126 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_8126 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_8064.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 253)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 253)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 254)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 254)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 253)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_8001.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
      var_operatorMap_8126 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_8126 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_10471 ;
  GALGAS_PLMType joker_10417 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_8126, extensionGetter_type (var_targetObject_7051, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 261)), extensionGetter_type (var_sourceValue_7929, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 262)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 263)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 263)), joker_10417, var_binaryOperator_10471, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 260)) ;
  GALGAS_objectIR var_variableValue_10654 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_7051, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 271)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 271)), var_variableValue_10654, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 268)) ;
  }
  GALGAS_objectIR var_newResultingValue_10884 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_10471.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_10654, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 278)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 278)), var_sourceValue_7929, extensionGetter_type (var_targetObject_7051, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 280)), var_newResultingValue_10884, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 274)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_7051, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 285)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 285)), var_newResultingValue_10884, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 283)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignNoSelfInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varOperatorAssignNoSelfInstructionAST.mSlotID,
                                extensionMethod_varOperatorAssignNoSelfInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignNoSelfInstructionAST_analyze (defineExtensionMethod_varOperatorAssignNoSelfInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@varOperatorAssignSelfInstructionAST analyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignSelfInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignSelfInstructionAST * object = (const cPtr_varOperatorAssignSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignSelfInstructionAST) ;
  GALGAS_objectIR var_targetObject_12493 ;
  GALGAS_string var_globalVariableReceiverName_12563 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("instruction-assignment-operator.galgas", 309)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObject_12493, var_globalVariableReceiverName_12563, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 307)) ;
  const enumGalgasBool test_0 = var_targetObject_12493.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 324)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 325)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 325)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 325)) ;
    var_targetObject_12493.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourcePossibleReference_13212 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_12493, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 332)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_13212, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 328)) ;
  GALGAS_objectIR var_sourceValue_13371 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_13212, object->mProperty_mEndOfSourceExpression, var_sourceValue_13371, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 342)) ;
  }
  GALGAS_bool var_noPanicGeneration_13443 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_13506 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 350)))) ;
  GALGAS_infixOperatorMap var_operatorMap_13568 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_13568 = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_13568 = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_13568 = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_13506.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 361)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 361)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 362)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 362)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 361)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_13443.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
      var_operatorMap_13568 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_13568 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_13506.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 369)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 369)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 370)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 370)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 369)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_13443.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
      var_operatorMap_13568 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_13568 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_13506.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 377)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 377)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 378)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 378)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 377)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_13443.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
      var_operatorMap_13568 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_13568 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_13506.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 385)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 385)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 386)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 386)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 385)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_13443.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
      var_operatorMap_13568 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_13568 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_13506.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 393)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 393)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 394)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 394)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 393)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_13443.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
      var_operatorMap_13568 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_13568 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_15913 ;
  GALGAS_PLMType joker_15859 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_13568, extensionGetter_type (var_targetObject_12493, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 401)), extensionGetter_type (var_sourceValue_13371, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 402)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 403)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 403)), joker_15859, var_binaryOperator_15913, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 400)) ;
  GALGAS_objectIR var_variableValue_16096 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_12493, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 411)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 411)), var_variableValue_16096, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 408)) ;
  }
  GALGAS_objectIR var_newResultingValue_16326 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_15913.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_16096, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 418)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 418)), var_sourceValue_13371, extensionGetter_type (var_targetObject_12493, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 420)), var_newResultingValue_16326, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 414)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_12493, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 425)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 425)), var_newResultingValue_16326, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 423)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignSelfInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varOperatorAssignSelfInstructionAST.mSlotID,
                                extensionMethod_varOperatorAssignSelfInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignSelfInstructionAST_analyze (defineExtensionMethod_varOperatorAssignSelfInstructionAST_analyze, NULL) ;

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
                                                                     GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
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
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 100)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 101)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 101)) ;
  }
  GALGAS_PLMType var_targetType_4360 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_5002 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4360, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5002, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 104)) ;
  GALGAS_objectIR var_expressionResult_5152 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_5002, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 121)), var_expressionResult_5152, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 118)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_4360.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_4360 = extensionGetter_type (var_expressionResult_5152, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)) ;
  }
  GALGAS_objectIR var_result_5278 = function_checkAssignmentCompatibility (var_expressionResult_5152, var_targetType_4360, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  GALGAS_lstring var_varName_5525 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 136))  COMMA_SOURCE_FILE ("instruction-var.galgas", 136)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 137)) ;
  GALGAS_objectIR var_objectIR_5657 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_5278, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 138)), var_varName_5525  COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5751 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5751, object->mProperty_mVarName, var_objectIR_5657, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 139)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertDefinedVariable (object->mProperty_mVarName, extensionGetter_type (var_result_5278, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 142)), GALGAS_bool (true), var_objectIR_5657, extensionGetter_copyable (extensionGetter_type (var_result_5278, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 140)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varName_5525.getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_5278, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149))  COMMA_SOURCE_FILE ("instruction-var.galgas", 149)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varName_5525.getter_string (SOURCE_FILE ("instruction-var.galgas", 151)), extensionGetter_type (var_result_5278, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 152)), var_result_5278, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
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
                                                       GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_PLMType var_targetType_7120 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_7120, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 175)).operator_not (SOURCE_FILE ("instruction-var.galgas", 175)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 176)), GALGAS_string ("$").add_operation (extensionGetter_key (var_targetType_7120, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 176)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 176)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 176)) ;
  }
  GALGAS_lstring var_varLLVMName_7365 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 179))  COMMA_SOURCE_FILE ("instruction-var.galgas", 179)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  GALGAS_objectIR var_objectIR_7497 = GALGAS_objectIR::constructor_localVariableReference (var_targetType_7120, var_varLLVMName_7365  COMMA_SOURCE_FILE ("instruction-var.galgas", 181)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7592 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7592, object->mProperty_mVarName, var_objectIR_7497, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 182)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 182)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUndefinedVariable (object->mProperty_mVarName, var_targetType_7120, GALGAS_bool (true), var_objectIR_7497, extensionGetter_copyable (var_targetType_7120, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_7365.getter_string (SOURCE_FILE ("instruction-var.galgas", 192)), extensionGetter_llvmTypeName (var_targetType_7120, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 192))  COMMA_SOURCE_FILE ("instruction-var.galgas", 192)) ;
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
                                                                     GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
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
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-let.galgas", 73)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 74)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 74)) ;
  }
  GALGAS_PLMType var_targetType_3452 = temp_0 ;
  GALGAS_objectIR var_expressionResultPossibleReference_4104 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3452, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4104, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 77)) ;
  GALGAS_objectIR var_expressionResult_4269 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4104, object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 94)), var_expressionResult_4269, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 91)) ;
  }
  GALGAS_objectIR var_result_4316 = function_checkAssignmentCompatibility (var_expressionResult_4269, var_targetType_3452, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_4316, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)).operator_not (SOURCE_FILE ("instruction-let.galgas", 106)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 107)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_4316, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
    var_result_4316.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_varPLMName_4690 = GALGAS_lstring::constructor_new (object->mProperty_mConstantName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)), object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 110))  COMMA_SOURCE_FILE ("instruction-let.galgas", 110)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 111)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_4316, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (var_varPLMName_4690.getter_string (SOURCE_FILE ("instruction-let.galgas", 113)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_4316, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113))  COMMA_SOURCE_FILE ("instruction-let.galgas", 113)) ;
    GALGAS_objectIR var_localConstant_4952 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_4316, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)), var_varPLMName_4690  COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
    {
    extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_localConstant_4952, object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 115)), var_result_4316, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5154 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5154, object->mProperty_mConstantName, var_expressionResult_4269, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertConstant (object->mProperty_mConstantName, extensionGetter_type (var_result_4316, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 120)), GALGAS_bool (true), var_expressionResult_4269, extensionGetter_copyable (extensionGetter_type (var_result_4316, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 123)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
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
                                                       GALGAS_unifiedSymbolMapEx & /* ioArgument_ioVariableMap */,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                       GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 50)) ;
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
                                                          GALGAS_unifiedSymbolMapEx & /* ioArgument_ioVariableMap */,
                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 57)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3216 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 61)) ;
  GALGAS_objectIR var_expressionValue_3665 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-assert.galgas", 66)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3216, var_expressionValue_3665, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 62)) ;
  const enumGalgasBool test_2 = extensionGetter_type (var_expressionValue_3665, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 77)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3665, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 85)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_instructionGenerationList_3216, var_expressionValue_3665  COMMA_SOURCE_FILE ("instruction-assert.galgas", 86))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 86)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 114)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 125)) ;
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
                                                         GALGAS_unifiedSymbolMapEx & /* ioArgument_ioVariableMap */,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 55)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3228 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 59)) ;
  GALGAS_objectIR var_result_3696 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 64)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3228, var_result_3696, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 60)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3228.getter_length (SOURCE_FILE ("instruction-panic.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3696.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 77)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 77)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_3696, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_4038 ;
    GALGAS_bigint var_max_4051 ;
    GALGAS_bool joker_4053_3 ; // Joker input parameter
    GALGAS_uint joker_4053_2 ; // Joker input parameter
    GALGAS_string joker_4053_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)).method_integer (var_min_4038, var_max_4051, joker_4053_3, joker_4053_2, joker_4053_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)) ;
    GALGAS_bigint var_throwValue_4109 ;
    GALGAS_PLMType joker_4085_1 ; // Joker input parameter
    var_result_3696.method_literalInteger (joker_4085_1, var_throwValue_4109, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_4109.objectCompare (var_min_4038)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_4109.objectCompare (var_max_4051)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.getter_mPanicCodeType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 85)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_throwValue_4109  COMMA_SOURCE_FILE ("instruction-panic.galgas", 86))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 86)) ;
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
  GALGAS_uint var_staticStringIndex_5403 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 111)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 111)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 111)), var_staticStringIndex_5403, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_5403.getter_string (SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)) ;
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
                                                      GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_objectIR var_testResultPossibleReference_5210 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-if.galgas", 117)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResultPossibleReference_5210, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)) ;
  GALGAS_objectIR var_testResult_5376 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResultPossibleReference_5210, object->mProperty_mTestExpressionEndLocation, var_testResult_5376, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 127)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testResult_5376, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 134)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testResult_5376, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 135)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_5376, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)).operator_not (SOURCE_FILE ("instruction-if.galgas", 136)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_5376, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 138)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
      }
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5898 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5898, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_6061 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 144)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_6061, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 145)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6745 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 161)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6745, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7361 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7361, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 177)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_5376, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_6061, var_elseInstructionGenerationList_6745  COMMA_SOURCE_FILE ("instruction-if.galgas", 180))  COMMA_SOURCE_FILE ("instruction-if.galgas", 180)) ;
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
  GALGAS_string var_labelTrue_8526 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GALGAS_string var_labelFalse_8589 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  GALGAS_string var_labelEnd_8651 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).getter_string (SOURCE_FILE ("instruction-if.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelTrue_8526, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelFalse_8589, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8526.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8651, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8589.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8651, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8651.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
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
                                                        GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_syncInstructionBranchListIR var_onInstructionBranchListIR_6678 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 165)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_6749 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_6749.hasCurrentObject ()) {
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_6774 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6774, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 167)) ;
    }
    {
    ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 168)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR_6903 ;
    switch (enumerator_6749.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandAST_synchronization * extractPtr_8107 = (const cEnumAssociatedValues_guardedCommandAST_synchronization *) (enumerator_6749.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_8107->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_8107->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_8107->mAssociatedValue2 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_8107->mAssociatedValue3 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_7082 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 173)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_7716 ;
        GALGAS_lstring var_guardMangledName_7772 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_7082, var_guardEffectiveParameterListIR_7716, var_guardMangledName_7772, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 174)) ;
        }
        var_guardedCommandIR_6903 = GALGAS_guardedCommandIR::constructor_synchronization (extractedValue_isWhileCommand, var_guardMangledName_7772.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_7082, var_guardEffectiveParameterListIR_7716  COMMA_SOURCE_FILE ("instruction-sync.galgas", 191)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_9161 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6749.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_9161->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_9161->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_9161->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_8226 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 199)) ;
        GALGAS_objectIR var_sourceOperand_8728 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 204)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8226, var_sourceOperand_8728, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 200)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_sourceOperand_8728, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 214)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 214)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 215)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_8728, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 216)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 217)) ;
          }
        }
        var_guardedCommandIR_6903 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_8226, var_sourceOperand_8728  COMMA_SOURCE_FILE ("instruction-sync.galgas", 219)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_11309 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6749.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_11309->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_11309->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_11309->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_11309->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_11309->mAssociatedValue4 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_11309->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_9340 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 225)) ;
        GALGAS_objectIR var_boolExpressionResult_9851 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 230)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_9340, var_boolExpressionResult_9851, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 226)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_boolExpressionResult_9851, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 240)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 240)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 241)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = extensionGetter_isStatic (var_boolExpressionResult_9851, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 242)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 243)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_10169 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 245)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_10803 ;
        GALGAS_lstring var_guardMangledName_10859 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_10169, var_guardEffectiveParameterListIR_10803, var_guardMangledName_10859, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 246)) ;
        }
        var_guardedCommandIR_6903 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_9340, var_boolExpressionResult_9851, var_guardMangledName_10859.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_10169, var_guardEffectiveParameterListIR_10803  COMMA_SOURCE_FILE ("instruction-sync.galgas", 263)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_11396 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 274)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_6749.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_6749.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_11396, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 275)) ;
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_12027 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_12027, enumerator_6749.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 290)) ;
    }
    {
    ioArgument_ioVariableMap.setter_closeOverride (enumerator_6749.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 291)) ;
    }
    var_onInstructionBranchListIR_6678.addAssign_operation (var_guardedCommandIR_6903, var_branchInstructionGenerationList_11396  COMMA_SOURCE_FILE ("instruction-sync.galgas", 293)) ;
    enumerator_6749.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_onInstructionBranchListIR_6678  COMMA_SOURCE_FILE ("instruction-sync.galgas", 298))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 298)) ;
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
                               GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                               GALGAS_allocaList & ioArgument_ioAllocaList,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 320)) ;
  GALGAS_PLMType var_receiverType_13360 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_type_13487 ;
    GALGAS_objectIR var_objectIR_13526 ;
    {
    GALGAS_bool joker_13495_1 ; // Joker input parameter
    GALGAS_bool joker_13534_2 ; // Joker input parameter
    GALGAS_bool joker_13534_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForMethodCall (constinArgument_inReceiverName, var_type_13487, joker_13495_1, var_objectIR_13526, joker_13534_2, joker_13534_1, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 323)) ;
    }
    var_receiverType_13360 = var_type_13487 ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 331)), var_objectIR_13526  COMMA_SOURCE_FILE ("instruction-sync.galgas", 331)) ;
  }else if (kBoolFalse == test_0) {
    var_receiverType_13360 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 333)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("$").add_operation (extensionGetter_key (var_receiverType_13360, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 336)) ;
  }
  outArgument_outGuardMangledName = function_routineMangledNameFromCall (temp_1, constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 335)) ;
  GALGAS_bool var_isPublic_13931 ;
  GALGAS_routineTypedSignature var_formalSignature_13979 ;
  constinArgument_inContext.getter_mGuardMapForContext (HERE).method_searchKey (outArgument_outGuardMangledName, var_isPublic_13931, var_formalSignature_13979, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 340)) ;
  const enumGalgasBool test_3 = var_isPublic_13931.operator_not (SOURCE_FILE ("instruction-sync.galgas", 346)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_declarationFile_14127 = constinArgument_inContext.getter_mGuardMapForContext (HERE).getter_locationForKey (outArgument_outGuardMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 348)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 348)) ;
      GALGAS_string var_invocationFile_14236 = constinArgument_inGuardName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 349)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_invocationFile_14236.objectCompare (var_declarationFile_14127)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 351)), GALGAS_string ("this guard is not public"), fixItArray6  COMMA_SOURCE_FILE ("instruction-sync.galgas", 351)) ;
      }
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 354)), GALGAS_string ("this guard is not public"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 358)) ;
  }
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature_13979, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), outArgument_outGuardMangledName, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 360)) ;
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
  GALGAS_string var_startLabel_17493 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 426)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 427)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_17493, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 429)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 429)) ;
  GALGAS_string var_startLabelName_17657 = var_startLabel_17493.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_17657.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 431)) ;
  GALGAS_string var_exitLabelName_17741 = var_startLabel_17493.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 432)) ;
  GALGAS_string var_selectLabelName_17786 = var_startLabel_17493.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 433)) ;
  GALGAS_string var_errorLabelName_17832 = var_startLabel_17493.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 434)) ;
  GALGAS_string var_currentStartBranchLabel_17886 = var_startLabelName_17657 ;
  cEnumerator_syncInstructionBranchListIR enumerator_17946 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_17909 ((uint32_t) 0) ;
  while (enumerator_17946.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_17981 = GALGAS_string ("%").add_operation (var_startLabel_17493, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)).add_operation (index_17909.getter_string (SOURCE_FILE ("instruction-sync.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)) ;
    GALGAS_bool var_isWhileGuardedCommand_18051 ;
    switch (enumerator_17946.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_18985 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_17946.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_18985->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_18985->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_18985->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_18985->mAssociatedValue4 ;
        var_isWhileGuardedCommand_18051 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 442)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_17981, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_18536 (extractedValue_effectiveParameterListIR, kENUMERATION_UP) ;
        while (enumerator_18536.hasCurrentObject ()) {
          switch (enumerator_18536.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18536.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)).add_operation (extensionGetter_llvmName (enumerator_18536.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18536.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)).add_operation (extensionGetter_llvmName (enumerator_18536.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18536.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)).add_operation (extensionGetter_llvmName (enumerator_18536.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)) ;
            }
            break ;
          }
          if (enumerator_18536.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)) ;
          }
          enumerator_18536.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 457)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_19803 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_17946.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_19803->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_19803->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_19803->mAssociatedValue2 ;
        var_isWhileGuardedCommand_18051 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 460)) ;
        GALGAS_string var_acceptedLabelName_19253 = var_startLabel_17493.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)).add_operation (index_17909.getter_string (SOURCE_FILE ("instruction-sync.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)) ;
        GALGAS_string var_rejectedLabelName_19316 = var_startLabel_17493.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 462)).add_operation (index_17909.getter_string (SOURCE_FILE ("instruction-sync.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 462)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 462)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)).add_operation (var_acceptedLabelName_19253, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)).add_operation (var_rejectedLabelName_19316, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_19253.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_19316, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_19316.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_17981, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_21534 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_17946.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_21534->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_21534->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_21534->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_21534->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_21534->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_21534->mAssociatedValue6 ;
        var_isWhileGuardedCommand_18051 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)) ;
        GALGAS_string var_testOkLabelName_20110 = var_startLabel_17493.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (index_17909.getter_string (SOURCE_FILE ("instruction-sync.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)) ;
        GALGAS_string var_testExitLabelName_20181 = var_startLabel_17493.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)).add_operation (index_17909.getter_string (SOURCE_FILE ("instruction-sync.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (var_testOkLabelName_20110, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (var_testExitLabelName_20181, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_20110.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)) ;
        GALGAS_string var_guardAcceptationLabelName_20536 = var_startLabel_17493.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)).add_operation (index_17909.getter_string (SOURCE_FILE ("instruction-sync.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_20536, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_20762 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_20762.hasCurrentObject ()) {
          switch (enumerator_20762.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20762.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (extensionGetter_llvmName (enumerator_20762.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20762.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)).add_operation (extensionGetter_llvmName (enumerator_20762.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20762.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)).add_operation (extensionGetter_llvmName (enumerator_20762.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)) ;
            }
            break ;
          }
          if (enumerator_20762.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 490)) ;
          }
          enumerator_20762.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 492)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_20181, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_20181.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_17981, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_20536, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (var_testOkLabelName_20110, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_17886, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_21568 = var_startLabel_17493.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (index_17909.getter_string (SOURCE_FILE ("instruction-sync.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)) ;
    GALGAS_string var_rejectedLabelName_21628 = var_startLabel_17493.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)).add_operation (index_17909.getter_string (SOURCE_FILE ("instruction-sync.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_17981, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)).add_operation (var_acceptedLabelName_21568, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)).add_operation (var_rejectedLabelName_21628, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_21568.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)) ;
    extensionMethod_instructionListLLVMCode (enumerator_17946.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_18051.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_17657 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_17741 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21628.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)) ;
    var_currentStartBranchLabel_17886 = var_rejectedLabelName_21628 ;
    enumerator_17946.gotoNextObject () ;
    index_17909.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 436)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_17786, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_17786, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (var_startLabelName_17657, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (var_errorLabelName_17832, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_17832.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_17741, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_22820 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 515)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 515)), var_staticStringIndex_22820, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_22820.getter_string (SOURCE_FILE ("instruction-sync.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_17741.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)) ;
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
  GALGAS_uint var_branchCount_23473 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 532)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_23473)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_23473 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_23658 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_23658.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_23658.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)) ;
    switch (enumerator_23658.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_24212 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_23658.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24212->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_24212->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24212->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 543)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_24379 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_23658.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24379->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_24914 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_23658.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24914->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24914->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_24914->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24914->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 549)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 552)) ;
        }
      }
      break ;
    }
    enumerator_23658.gotoNextObject () ;
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
                                                         GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3529 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 71)) ;
  GALGAS_objectIR var_testValuePossibleReference_4000 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-while.galgas", 76)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3529, var_testValuePossibleReference_4000, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)) ;
  GALGAS_objectIR var_testValue_4160 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testValuePossibleReference_4000, object->mProperty_mEndOf_5F_test_5F_expression, var_testValue_4160, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 86)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testValue_4160, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 93)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_4160, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 94)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 94)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 94)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_4160, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 96)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_4535 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 99)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4560 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4560, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 100)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 101)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4535, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 102)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5242 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5242, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 117)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 118)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 121)), var_testInstructionGenerationList_3529, var_testValue_4160, var_instructionGenerationList_4535  COMMA_SOURCE_FILE ("instruction-while.galgas", 120))  COMMA_SOURCE_FILE ("instruction-while.galgas", 120)) ;
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
  GALGAS_string var_labelTest_6428 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  GALGAS_string var_labelLoop_6479 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  GALGAS_string var_labelEnd_6529 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6428, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 149)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6428.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_m_5F_while_5F_Expression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (var_labelLoop_6479, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (var_labelEnd_6529, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6479.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6428, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6529.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 165)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 166)) ;
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
                                                       GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedObjectPointer_4409 ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4323 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4323, object->mProperty_mIteratedObject, var_iteratedObjectPointer_4409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 98)) ;
  }
  {
  GALGAS_PLMType joker_4481_2 ; // Joker input parameter
  GALGAS_bool joker_4481_1 ; // Joker input parameter
  GALGAS_objectIR joker_4498 ; // Joker input parameter
  GALGAS_bool joker_4543_2 ; // Joker input parameter
  GALGAS_bool joker_4543_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mIteratedObject, joker_4481_2, joker_4481_1, joker_4498, joker_4543_2, joker_4543_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
  }
  GALGAS_PLMType var_iteratedTypeKind_4587 = extensionGetter_type (var_iteratedObjectPointer_4409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)) ;
  GALGAS_PLMType var_iteratedElementType_4781 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4587.objectCompare (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 110)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_iteratedElementType_4781 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_iteratedTypeKind_4587.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_5019 ; // Joker input parameter
      GALGAS_bigint joker_5055_4 ; // Joker input parameter
      GALGAS_constantMap joker_5055_3 ; // Joker input parameter
      GALGAS_uint joker_5055_2 ; // Joker input parameter
      GALGAS_string joker_5055_1 ; // Joker input parameter
      var_iteratedTypeKind_4587.method_arrayType (joker_5019, var_iteratedElementType_4781, joker_5055_4, joker_5055_3, joker_5055_2, joker_5055_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 115)), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 115)) ;
      var_iteratedElementType_4781.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_enumeratedVarLLVMName_5186 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 118)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 118)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 118))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 118)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 119)) ;
  ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_5186.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 120)), extensionGetter_llvmTypeName (var_iteratedElementType_4781, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 120))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 120)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5430 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5430, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 122)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 123)) ;
  }
  GALGAS_objectIR var_objectIR_5520 = GALGAS_objectIR::constructor_localVariableReference (var_iteratedElementType_4781, var_enumeratedVarLLVMName_5186  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 124)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5634 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5634, object->mProperty_mVarName, var_objectIR_5520, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 125)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_iteratedElementType_4781, GALGAS_bool (true), var_objectIR_5520, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 126)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5972 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 135)) ;
  GALGAS_objectIR var_whileExpressionResult_6437 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-for-in-do.galgas", 140)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5972, var_whileExpressionResult_6437, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)) ;
  const enumGalgasBool test_3 = extensionGetter_type (var_whileExpressionResult_6437, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 151)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 151)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bool test_5 = object->mProperty_mStaticWhileExpression ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_isStatic (var_whileExpressionResult_6437, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
    }else if (kBoolFalse == test_6) {
      GALGAS_bool test_8 = extensionGetter_isStatic (var_whileExpressionResult_6437, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 155)) ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)) ;
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_7018 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 159)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_for_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_7018, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7632 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7632, object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 175)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4587.objectCompare (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 178)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_enumeratedVarLLVMName_5186.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 180)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_4409, var_whileExpression_5F_GenerationList_5972, var_whileExpressionResult_6437, var_doInstructionList_5F_GenerationList_7018  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = var_iteratedTypeKind_4587.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 187)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_PLMType var_elementType_8183 ;
      GALGAS_bigint var_size_8198 ;
      GALGAS_lstring joker_8153 ; // Joker input parameter
      GALGAS_constantMap joker_8200_3 ; // Joker input parameter
      GALGAS_uint joker_8200_2 ; // Joker input parameter
      GALGAS_string joker_8200_1 ; // Joker input parameter
      var_iteratedTypeKind_4587.method_arrayType (joker_8153, var_elementType_8183, var_size_8198, joker_8200_3, joker_8200_2, joker_8200_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 188)) ;
      GALGAS_stringset var_invokedFunctionSet_8237 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 189)) ;
      const enumGalgasBool test_13 = ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 190)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 190)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_8237, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 191)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_enumeratedVarLLVMName_5186.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 194)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4409, var_whileExpression_5F_GenerationList_5972, var_whileExpressionResult_6437, var_doInstructionList_5F_GenerationList_7018, var_elementType_8183, var_size_8198.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 201)), var_invokedFunctionSet_8237  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 193))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 193)) ;
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
  GALGAS_string var_elementTypeLLVMName_10842 = extensionGetter_llvmTypeName (object->mProperty_mElementType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  GALGAS_string var_listTypeLLVMName_10895 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)).add_operation (var_elementTypeLLVMName_10842, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  GALGAS_string var_locationIndex_10970 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  GALGAS_string var_startLabel_11046 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)) ;
  GALGAS_string var_testLabel_11099 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  GALGAS_string var_whileLabel_11152 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)) ;
  GALGAS_string var_nextLabel_11205 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  GALGAS_string var_loopVar_11255 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)) ;
  GALGAS_string var_loopLabel_11301 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)) ;
  GALGAS_string var_endLabel_11352 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  GALGAS_string var_indexVar_11405 = GALGAS_string ("for.index.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)) ;
  GALGAS_string var_ptrVar_11450 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)) ;
  GALGAS_string var_currentValue_11499 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_10970, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_11046, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_11046.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11450, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)).add_operation (var_listTypeLLVMName_10895, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_10895, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_11099, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_11099.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11450, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_elementTypeLLVMName_10842, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_ptrVar_11450, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_startLabel_11046, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_ptrVar_11450, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (var_nextLabel_11205, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11405, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)).add_operation (var_startLabel_11046, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)).add_operation (var_indexVar_11405, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (var_nextLabel_11205, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_11255, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (var_indexVar_11405, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_11255, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (var_whileLabel_11152, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (var_endLabel_11352, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_11152.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_loopLabel_11301, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_endLabel_11352, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_11301.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_11499, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (var_elementTypeLLVMName_10842, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10842.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (var_ptrVar_11450, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_10842, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (var_currentValue_11499, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (var_elementTypeLLVMName_10842, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_11205, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_11205.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11450, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)).add_operation (var_elementTypeLLVMName_10842, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10842.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)).add_operation (var_ptrVar_11450, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11405, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 322)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 322)).add_operation (var_indexVar_11405, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 322)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 322)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_11099, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_11352.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)) ;
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mIteratedObjectName.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 338))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)) ;
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
  GALGAS_string var_startLabel_15296 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  GALGAS_string var_testLabel_15361 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  GALGAS_string var_loopLabel_15425 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 363)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 363)) ;
  GALGAS_string var_whileLabel_15490 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  GALGAS_string var_nextLabel_15555 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)) ;
  GALGAS_string var_endLabel_15618 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)) ;
  GALGAS_string var_ptrVar_15679 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  GALGAS_string var_currentVar_15740 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_15296, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15296.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15679, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string (".start = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15361, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_15361.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15679, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).add_operation (GALGAS_string (" = phi i8* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).add_operation (var_ptrVar_15679, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15296.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)).add_operation (var_ptrVar_15679, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)).add_operation (var_nextLabel_15555, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15740, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)).add_operation (var_ptrVar_15679, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15740, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_currentVar_15740, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_15740, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)).add_operation (var_endLabel_15618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)).add_operation (var_whileLabel_15490, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_15490.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 386)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)).add_operation (var_loopLabel_15425, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)).add_operation (var_endLabel_15618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_15425.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 392)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_15740, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_15555, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_15555.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 400)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15679, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 401)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 401)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_15679, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 402)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 402)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15361, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 403)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 403)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_15618.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 406)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 416)) ;
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
                                                                      GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_PLMType var_type_4263 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)) ;
  switch (var_type_4263.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_boolean:
  case GALGAS_PLMType::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      const cEnumAssociatedValues_PLMType_integer * extractPtr_8987 = (const cEnumAssociatedValues_PLMType_integer *) (var_type_4263.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8987->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8987->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8987->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8987->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResultPossibleReference_5672 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4263, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResultPossibleReference_5672, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 115)) ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5895 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResultPossibleReference_5672, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, var_lowerBoundExpressionResult_5895, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 129)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResultPossibleReference_6412 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4263, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResultPossibleReference_6412, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 135)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_6635 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResultPossibleReference_6412, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, var_upperBoundExpressionResult_6635, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)) ;
      }
      GALGAS_objectIR var_lowerBound_6692 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5895, var_type_4263, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 156)) ;
      GALGAS_objectIR var_upperBound_6916 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6635, var_type_4263, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 162)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_7150 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7150, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      }
      {
      ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)) ;
      }
      GALGAS_lstring var_enumeratedVarLLVMName_7294 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_7294.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 174)), extensionGetter_llvmTypeName (var_type_4263, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 174))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 174)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_objectIR var_objectIR_7529 = GALGAS_objectIR::constructor_localVariableReference (var_type_4263, var_enumeratedVarLLVMName_7294  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 176)) ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7631 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7631, object->mProperty_mVarName, var_objectIR_7529, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 177)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_type_4263, GALGAS_bool (true), var_objectIR_7529, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)) ;
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7993 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 188)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7993, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 189)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_8631 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8631, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 204)) ;
      }
      {
      ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 205)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName_7294.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 208)), var_type_4263, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_6692, var_upperBound_6916, var_instructionGenerationList_7993  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 207))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 207)) ;
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
  GALGAS_string var_llvmType_10051 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  GALGAS_string var_llvmVarName_10092 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  GALGAS_string var_testLabel_10147 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  GALGAS_string var_loopLabel_10210 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  GALGAS_string var_endLabel_10272 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  GALGAS_string var_testResult_10336 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)) ;
  GALGAS_string var_loadedVarName_10411 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  GALGAS_string var_currentVarName_10489 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  GALGAS_string var_nextVarName_10565 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmVarName_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10147, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10147.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_10411, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (var_llvmVarName_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_10336, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 258)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 258)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (var_loadedVarName_10411, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_10336, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 261)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 261)).add_operation (var_loopLabel_10210, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 261)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 261)).add_operation (var_endLabel_10272, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 261)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10210.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 263)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_10489, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (var_llvmVarName_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_10565, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (var_currentVarName_10489, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)).add_operation (var_nextVarName_10565, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)).add_operation (var_llvmType_10051, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)).add_operation (var_llvmVarName_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10147, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 268)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10272.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 270)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 279)) ;
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
//        Overriding extension method '@complexCallNoSelfInstructionAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallNoSelfInstructionAST * object = (const cPtr_complexCallNoSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallNoSelfInstructionAST) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72)) ;
  cEnumerator_effectiveArgumentListAST enumerator_3713 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_3713.hasCurrentObject ()) {
    switch (enumerator_3713.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3943 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3713.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3943->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 78)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 78)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4036 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3713.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4036->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 80)) ;
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
    enumerator_3713.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_complexCallNoSelfInstructionAST.mSlotID,
                                                              extensionMethod_complexCallNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_complexCallNoSelfInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@complexCallSelfInstructionAST noteInstructionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallSelfInstructionAST * object = (const cPtr_complexCallSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallSelfInstructionAST) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 90)) ;
  cEnumerator_effectiveArgumentListAST enumerator_4464 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_4464.hasCurrentObject ()) {
    switch (enumerator_4464.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4694 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4464.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4694->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 96)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 96)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4787 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4464.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4787->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 98)) ;
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
    enumerator_4464.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_complexCallSelfInstructionAST.mSlotID,
                                                              extensionMethod_complexCallSelfInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallSelfInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_complexCallSelfInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@simpleCallInstructionAST noteInstructionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_simpleCallInstructionAST * object = (const cPtr_simpleCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_simpleCallInstructionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_5137 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_5137.hasCurrentObject ()) {
    switch (enumerator_5137.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5367 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_5137.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_5367->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 113)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 113)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_5460 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_5137.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_5460->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 115)) ;
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
    enumerator_5137.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_simpleCallInstructionAST.mSlotID,
                                                              extensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@simpleCallInstructionAST analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                              const GALGAS_PLMType constinArgument_inSelfType,
                                                              const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                              const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_mode constinArgument_inCurrentMode,
                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                              GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_simpleCallInstructionAST * object = (const cPtr_simpleCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_simpleCallInstructionAST) ;
  GALGAS_lstring var_calledRoutineSignature_13459 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 310)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_13681 ;
  GALGAS_routineDescriptor var_routineDescriptor_13727 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), object->mProperty_mSandAloneRoutineName, var_calledRoutineSignature_13459, var_LLVMInvocationRoutineName_13681, var_routineDescriptor_13727, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 312)) ;
  GALGAS_lstring var_routineMangledName_13795 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 319)) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_13795 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 325)) ;
  }
  GALGAS_calleeKindIR var_routineKindIR_14056 = function_checkMode (constinArgument_inCurrentMode, extensionGetter_executionMode (var_routineDescriptor_13727.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 329)), var_routineDescriptor_13727.getter_mRoutineKind (HERE), object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 327)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14345 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 334)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineDescriptor_13727.getter_mSignature (HERE), object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_14345, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 335)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 356)), var_routineMangledName_13795, var_LLVMInvocationRoutineName_13681, var_routineKindIR_14056, var_effectiveParameterListIR_14345  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 354))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 354)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_simpleCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_simpleCallInstructionAST.mSlotID,
                                extensionMethod_simpleCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_simpleCallInstructionAST_analyze (defineExtensionMethod_simpleCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@complexCallNoSelfInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallNoSelfInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallNoSelfInstructionAST * object = (const cPtr_complexCallNoSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallNoSelfInstructionAST) ;
  GALGAS_objectIR var_currentObject_16702 ;
  GALGAS_string var_globalVariableReceiverName_16765 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_read (SOURCE_FILE ("instruction-procedure-call.galgas", 382)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_16702, var_globalVariableReceiverName_16765, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 380)) ;
  GALGAS_PLMType var_returnedType_17461 ;
  {
  routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_16765, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, object->mProperty_mArguments, object->mProperty_mEndOfArguments, ioArgument_ioInstructionGenerationList, var_currentObject_16702, var_returnedType_17461, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 398)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType_17461.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 418)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfArguments, GALGAS_string ("the function cannot be called in instruction: lost return value"), fixItArray1  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 419)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallNoSelfInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_complexCallNoSelfInstructionAST.mSlotID,
                                extensionMethod_complexCallNoSelfInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallNoSelfInstructionAST_analyze (defineExtensionMethod_complexCallNoSelfInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@complexCallSelfInstructionAST analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallSelfInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                   const GALGAS_PLMType constinArgument_inSelfType,
                                                                   const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                   const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallSelfInstructionAST * object = (const cPtr_complexCallSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallSelfInstructionAST) ;
  GALGAS_objectIR var_currentObject_19060 ;
  GALGAS_string var_globalVariableReceiverName_19123 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_read (SOURCE_FILE ("instruction-procedure-call.galgas", 441)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_19060, var_globalVariableReceiverName_19123, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 439)) ;
  GALGAS_PLMType var_returnedType_19819 ;
  {
  routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_19123, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, object->mProperty_mArguments, object->mProperty_mEndOfArguments, ioArgument_ioInstructionGenerationList, var_currentObject_19060, var_returnedType_19819, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 457)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType_19819.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 477)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfArguments, GALGAS_string ("the function cannot be called in instruction: lost return value"), fixItArray1  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 478)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallSelfInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_complexCallSelfInstructionAST.mSlotID,
                                extensionMethod_complexCallSelfInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallSelfInstructionAST_analyze (defineExtensionMethod_complexCallSelfInstructionAST_analyze, NULL) ;

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
                                                          GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_4111 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 93)) ;
  GALGAS_objectIR var_switchValueIRPossibleReference_4586 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-switch.galgas", 98)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_4111, var_switchValueIRPossibleReference_4586, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)) ;
  GALGAS_objectIR var_switchValueIR_4754 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIRPossibleReference_4586, object->mProperty_mEndOf_5F_test_5F_expression, var_switchValueIR_4754, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 108)) ;
  }
  GALGAS_constantMap var_enumConstantMap_4816 ;
  const enumGalgasBool test_0 = extensionGetter_type (var_switchValueIR_4754, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 116)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string joker_4932_1 ; // Joker input parameter
    extensionGetter_type (var_switchValueIR_4754, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)).method_enumeration (var_enumConstantMap_4816, joker_4932_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_switchValueIR_4754, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 119)) ;
    var_enumConstantMap_4816.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_switchValueIR_4754, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 123)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 124)) ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5254 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5254, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 128)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5364 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 129)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5406 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 130)) ;
  cEnumerator_switchCaseListAST enumerator_5470 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_5470.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5511 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 132)) ;
    cEnumerator_lstringlist enumerator_5553 (enumerator_5470.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5553.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5623 ;
      GALGAS_lstring joker_5625 ; // Joker input parameter
      var_enumConstantMap_4816.method_searchKey (enumerator_5553.current_mValue (HERE), var_constantIdx_5623, joker_5625, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
      var_caseIdentifierIndexList_5511.addAssign_operation (var_constantIdx_5623.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 135))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_5364.getter_hasKey (enumerator_5553.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 136)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 136)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_5553.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 137)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 137)) ;
      }
      var_usedEnumerationValues_5364.addAssign_operation (enumerator_5553.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 139))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 139)) ;
      enumerator_5553.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5909 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 141)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5470.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_switch_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5909, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
    var_switchCaseListIR_5406.addAssign_operation (var_caseIdentifierIndexList_5511, var_instructionGenerationList_5909  COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)) ;
    enumerator_5470.gotoNextObject () ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6630 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6630, object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)) ;
  }
  cEnumerator_constantMap enumerator_6836 (var_enumConstantMap_4816, kENUMERATION_UP) ;
  while (enumerator_6836.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_5364.getter_hasKey (enumerator_6836.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 163)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 163)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6836.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)) ;
    }
    enumerator_6836.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)), var_switchExpressionGenerationList_4111, var_switchValueIR_4754, var_switchCaseListIR_5406  COMMA_SOURCE_FILE ("instruction-switch.galgas", 168))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
  GALGAS_string var_labelOtherwise_8505 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8505, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
  cEnumerator_switchCaseListIR enumerator_8755 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8706 ((uint32_t) 0) ;
  while (enumerator_8755.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8818 (enumerator_8755.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8818.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)).add_operation (enumerator_8818.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)).add_operation (index_8706.getter_string (SOURCE_FILE ("instruction-switch.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)) ;
      enumerator_8818.gotoNextObject () ;
    }
    enumerator_8755.gotoNextObject () ;
    index_8706.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 207)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
  cEnumerator_switchCaseListIR enumerator_9101 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_9058 ((uint32_t) 0) ;
  while (enumerator_9101.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)).add_operation (index_9058.getter_string (SOURCE_FILE ("instruction-switch.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)) ;
    extensionMethod_instructionListLLVMCode (enumerator_9101.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8505, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
    enumerator_9101.gotoNextObject () ;
    index_9058.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8505.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 221)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 230)) ;
  cEnumerator_switchCaseListIR enumerator_9848 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9848.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9848.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 232)) ;
    enumerator_9848.gotoNextObject () ;
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
//                                 Routine 'handleSubscriptInAssignmentAndExpression'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptInAssignmentAndExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                                       const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                       const GALGAS_bool constinArgument_inGuard,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                       const GALGAS_location constinArgument_inErrorLocation,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)).getter_isArrayType (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 22)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = ioArgument_ioObjectPtr.getter_isRegisterReference (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 39)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)) ;
      }
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray2  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 58)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Routine 'handleSubscriptArrayInAssignmentAndExpression'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptArrayInAssignmentAndExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                                            const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                            const GALGAS_bool constinArgument_inGuard,
                                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                            const GALGAS_mode constinArgument_inCurrentMode,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                            GALGAS_unifiedSymbolMapEx & /* ioArgument_ioVariableMap */,
                                                            GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                            const GALGAS_location constinArgument_inErrorLocation,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_type_3286 ;
  GALGAS_bigint var_arraySize_3314 ;
  GALGAS_lstring joker_3263 ; // Joker input parameter
  GALGAS_constantMap joker_3316_3 ; // Joker input parameter
  GALGAS_uint joker_3316_2 ; // Joker input parameter
  GALGAS_string joker_3316_1 ; // Joker input parameter
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)).method_arrayType (joker_3263, var_type_3286, var_arraySize_3314, joker_3316_3, joker_3316_2, joker_3316_1, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)) ;
  GALGAS_objectIR var_indexResultPossibleReference_3816 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 88)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_3816, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 84)) ;
  GALGAS_objectIR var_indexResult_3973 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_3816, constinArgument_inErrorLocation, var_indexResult_3973, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 98)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_3973.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 104)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_4106 ;
    GALGAS_PLMType joker_4074_1 ; // Joker input parameter
    var_indexResult_3973.method_literalInteger (joker_4074_1, var_indexValue_4106, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 105)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_4106.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 106)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_4106.objectCompare (var_arraySize_3314)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_3314.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_4289 = GALGAS_objectIR::constructor_temporaryReference (var_type_3286, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 112)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 115)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_4289, ioArgument_ioObjectPtr, var_indexValue_4106.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 116)) ;
      }
      ioArgument_ioObjectPtr = var_result_4289 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_3973, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 123)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 123)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_4963 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_3973, constinArgument_inErrorLocation, var_arraySize_3314, var_generatePanicInstruction_4963, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 125)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_4963 ;
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
      GALGAS_objectIR var_result_5166 = GALGAS_objectIR::constructor_temporaryReference (var_type_3286, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 138)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 135)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 141)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_5166, ioArgument_ioObjectPtr, extensionGetter_llvmName (var_indexResult_3973, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 142)) ;
      }
      ioArgument_ioObjectPtr = var_result_5166 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 149)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Routine 'handleSubscriptArrayInAssignmentAndExpressionNew'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptArrayInAssignmentAndExpressionNew (const GALGAS_PLMType constinArgument_inSelfType,
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
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_type_6523 ;
  GALGAS_bigint var_arraySize_6551 ;
  GALGAS_lstring joker_6500 ; // Joker input parameter
  GALGAS_constantMap joker_6553_3 ; // Joker input parameter
  GALGAS_uint joker_6553_2 ; // Joker input parameter
  GALGAS_string joker_6553_1 ; // Joker input parameter
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 171)).method_arrayType (joker_6500, var_type_6523, var_arraySize_6551, joker_6553_3, joker_6553_2, joker_6553_1, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 171)) ;
  GALGAS_objectIR var_indexResultPossibleReference_7053 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 177)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_7053, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 173)) ;
  GALGAS_objectIR var_indexResult_7210 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_7053, constinArgument_inErrorLocation, var_indexResult_7210, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 187)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_7210.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 193)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_7343 ;
    GALGAS_PLMType joker_7311_1 ; // Joker input parameter
    var_indexResult_7210.method_literalInteger (joker_7311_1, var_indexValue_7343, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 194)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_7343.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 195)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_7343.objectCompare (var_arraySize_6551)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_6551.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 196)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 196)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_7526 = GALGAS_objectIR::constructor_temporaryReference (var_type_6523, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 201)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 198)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 204)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_7526, ioArgument_ioObjectPtr, var_indexValue_7343.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 208)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 205)) ;
      }
      ioArgument_ioObjectPtr = var_result_7526 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_7210, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 212)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 212)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 213)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_8200 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_7210, constinArgument_inErrorLocation, var_arraySize_6551, var_generatePanicInstruction_8200, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 214)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_8200 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 220)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 220)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 221)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_8403 = GALGAS_objectIR::constructor_temporaryReference (var_type_6523, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 227)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 224)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 230)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_8403, ioArgument_ioObjectPtr, extensionGetter_llvmName (var_indexResult_7210, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 231)) ;
      }
      ioArgument_ioObjectPtr = var_result_8403 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 238)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Routine 'handleSubscriptRegisterArrayInAssignmentAndExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptRegisterArrayInAssignmentAndExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                                                    const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                    const GALGAS_bool constinArgument_inGuard,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_unifiedSymbolMapEx & /* ioArgument_ioVariableMap */,
                                                                    GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                                    const GALGAS_location constinArgument_inErrorLocation,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_registerType_9886 ;
  GALGAS_lstring var_registerName_9916 ;
  GALGAS_bool var_readable_9943 ;
  GALGAS_bool var_writable_9970 ;
  GALGAS_bigint var_registerAddress_10011 ;
  GALGAS_sliceMap var_registerBitSliceMap_10055 ;
  GALGAS_uint var_arraySize_10090 ;
  GALGAS_uint var_elementArraySize_10154 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_9886, var_registerName_9916, var_readable_9943, var_writable_9970, var_registerAddress_10011, var_registerBitSliceMap_10055, var_arraySize_10090, var_elementArraySize_10154, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 261)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_10090.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting"), fixItArray1  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 272)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_readable_9943.operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 273)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context"), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 274)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_indexResultPossibleReference_10916 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 280)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_10916, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 276)) ;
      GALGAS_objectIR var_indexResult_11085 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_10916, constinArgument_inErrorLocation, var_indexResult_11085, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 290)) ;
      }
      const enumGalgasBool test_4 = var_indexResult_11085.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 297)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bigint var_indexValue_11251 ;
        GALGAS_PLMType joker_11219_1 ; // Joker input parameter
        var_indexResult_11085.method_literalInteger (joker_11219_1, var_indexValue_11251, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 298)) ;
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_indexValue_11251.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 299)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsSupOrEqual, var_indexValue_11251.objectCompare (var_arraySize_10090.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 299)))) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_10090.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 300)), fixItArray7  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 300)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_9886, var_registerName_9916, var_readable_9943, var_writable_9970, var_registerAddress_10011.add_operation (var_indexValue_11251.multiply_operation (var_elementArraySize_10154.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 307)), var_registerBitSliceMap_10055, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 302)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_8 = extensionGetter_type (var_indexResult_11085, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 314)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 314)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 315)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_bool var_generatePanicInstruction_12068 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_11085, constinArgument_inErrorLocation, var_arraySize_10090.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 319)), var_generatePanicInstruction_12068, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 316)) ;
            }
            GALGAS_bool test_10 = var_generatePanicInstruction_12068 ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 322)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 322)) ;
            }
            const enumGalgasBool test_11 = test_10.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic"), fixItArray12  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 323)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_12283 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_9886, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 328)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 328)), var_registerBitSliceMap_10055, GALGAS_bool (true)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 326)) ;
          ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 332)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_12283, var_indexResult_11085, var_registerAddress_10011, var_elementArraySize_10154.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 333)) ;
          }
          ioArgument_ioObjectPtr = var_registerAddressObject_12283 ;
        }else if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray13  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 341)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Routine 'handleSubscriptRegisterArrayInAssignmentAndExpressionNew'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (const GALGAS_PLMType constinArgument_inSelfType,
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
                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                                       GALGAS_sliceMap & outArgument_outSliceMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSliceMap.drop () ; // Release 'out' argument
  GALGAS_PLMType var_registerType_13750 ;
  GALGAS_lstring var_registerName_13780 ;
  GALGAS_bool var_readable_13807 ;
  GALGAS_bool var_writable_13834 ;
  GALGAS_bigint var_registerAddress_13875 ;
  GALGAS_uint var_arraySize_13936 ;
  GALGAS_uint var_elementArraySize_14000 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_13750, var_registerName_13780, var_readable_13807, var_writable_13834, var_registerAddress_13875, outArgument_outSliceMap, var_arraySize_13936, var_elementArraySize_14000, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 364)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_13936.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting"), fixItArray1  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 375)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_readable_13807.operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 376)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context"), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 377)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_indexResultPossibleReference_14762 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 383)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_14762, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 379)) ;
      GALGAS_objectIR var_indexResult_14931 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_14762, constinArgument_inErrorLocation, var_indexResult_14931, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 393)) ;
      }
      const enumGalgasBool test_4 = var_indexResult_14931.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 400)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bigint var_indexValue_15097 ;
        GALGAS_PLMType joker_15065_1 ; // Joker input parameter
        var_indexResult_14931.method_literalInteger (joker_15065_1, var_indexValue_15097, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 401)) ;
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_indexValue_15097.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 402)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsSupOrEqual, var_indexValue_15097.objectCompare (var_arraySize_13936.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 402)))) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_13936.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 403)), fixItArray7  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 403)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_13750, var_registerName_13780, var_readable_13807, var_writable_13834, var_registerAddress_13875.add_operation (var_indexValue_15097.multiply_operation (var_elementArraySize_14000.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 410)), outArgument_outSliceMap, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 405)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_8 = extensionGetter_type (var_indexResult_14931, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 417)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 417)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 418)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_bool var_generatePanicInstruction_15906 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_14931, constinArgument_inErrorLocation, var_arraySize_13936.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 422)), var_generatePanicInstruction_15906, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 419)) ;
            }
            GALGAS_bool test_10 = var_generatePanicInstruction_15906 ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 425)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 425)) ;
            }
            const enumGalgasBool test_11 = test_10.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic"), fixItArray12  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 426)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_16155 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_13750, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 432)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 432)), outArgument_outSliceMap, GALGAS_bool (true)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 430)) ;
          ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 436)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_16155, var_indexResult_14931, var_registerAddress_13875, var_elementArraySize_14000.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 437)) ;
          }
          GALGAS_objectIR var_loadedValueIR_16787 ;
          {
          extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddressObject_16155, constinArgument_inErrorLocation, var_loadedValueIR_16787, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 444)) ;
          }
          ioArgument_ioObjectPtr = var_loadedValueIR_16787 ;
        }else if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray13  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 452)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInAssignment'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInAssignment (GALGAS_objectIR & ioArgument_ioObject,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 166)).getter_isStructure (SOURCE_FILE ("lvalue-without-self.galgas", 166)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_7008 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_7052 ;
    GALGAS_lstring joker_6965 ; // Joker input parameter
    GALGAS_propertyList joker_7060_3 ; // Joker input parameter
    GALGAS_uint joker_7060_2 ; // Joker input parameter
    GALGAS_string joker_7060_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 167)).method_structure (joker_6965, var_structureObjectMap_7008, var_universalMap_7052, joker_7060_3, joker_7060_2, joker_7060_1, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 167)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_7008.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 173)) COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 173)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_7199 ;
      GALGAS_bool joker_7178 ; // Joker input parameter
      var_structureObjectMap_7008.method_searchKey (constinArgument_inPropertyName, joker_7178, var_property_7199, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 174)) ;
      const enumGalgasBool test_2 = var_property_7199.getter_isProperty (SOURCE_FILE ("lvalue-without-self.galgas", 175)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_PLMType var_type_7277 ;
        GALGAS_lstring var_name_7295 ;
        GALGAS_uint var_index_7312 ;
        var_property_7199.method_property (var_type_7277, var_name_7295, var_index_7312, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 176)) ;
        GALGAS_objectIR var_newObject_7335 = GALGAS_objectIR::constructor_temporaryReference (var_type_7277, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 179)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 179))  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 179)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("lvalue-without-self.galgas", 180)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 177)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 183)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_7335, ioArgument_ioObject, var_name_7295.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 187)), var_index_7312.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 184)) ;
        }
        ioArgument_ioObject = var_newObject_7335 ;
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 192)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray3  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 192)) ;
        ioArgument_ioObject.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObject = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObject, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 195)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 198)), GALGAS_string ("the current object has no property"), fixItArray4  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 198)) ;
    ioArgument_ioObject.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInAssignment'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInAssignment (const GALGAS_PLMType constinArgument_inSelfType,
                                           const GALGAS_objectIR constinArgument_inObject,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           GALGAS_objectIR & outArgument_outObjectPtr,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectPtr.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("lvalue-with-self.galgas", 147)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_type_6019 ;
    GALGAS_lstring var_name_6037 ;
    GALGAS_uint var_index_6054 ;
    constinArgument_inObject.method_property (var_type_6019, var_name_6037, var_index_6054, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 148)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_6019, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("lvalue-with-self.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 151)), var_name_6037.getter_location (SOURCE_FILE ("lvalue-with-self.galgas", 151))  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 151)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("lvalue-with-self.galgas", 152)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 149)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 155)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_6037.getter_string (SOURCE_FILE ("lvalue-with-self.galgas", 159)), var_index_6054, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 156)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("lvalue-with-self.galgas", 163)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 163)) ;
    outArgument_outObjectPtr.drop () ; // Release error dropped variable
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
  cEnumerator_routineFormalArgumentList enumerator_4408 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4408.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4408.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 105)).add_operation (enumerator_4408.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 105)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 105)) ;
    enumerator_4408.gotoNextObject () ;
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
  cEnumerator_effectiveArgumentListAST enumerator_5120 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_5120.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_5120.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 123)).add_operation (enumerator_5120.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 123)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 123)) ;
    enumerator_5120.gotoNextObject () ;
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
  cEnumerator_routineFormalArgumentList enumerator_5644 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5644.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5735 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5644.current_mFormalArgumentTypeName (HERE), var_typeProxy_5735 COMMA_SOURCE_FILE ("context-routines.galgas", 136)) ;
    }
    outArgument_outResult.addAssign_operation (enumerator_5644.current_mFormalArgumentPassingMode (HERE), enumerator_5644.current_mSelector (HERE), var_typeProxy_5735  COMMA_SOURCE_FILE ("context-routines.galgas", 137)) ;
    enumerator_5644.gotoNextObject () ;
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
                                 GALGAS_unifiedSymbolMapEx & outArgument_outVariableMap,
                                 GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 15)) ;
  outArgument_outVariableMap = GALGAS_unifiedSymbolMapEx::constructor_emptyMap (SOURCE_FILE ("unified-symbol-map.galgas", 16)) ;
  cEnumerator_moduleMap enumerator_1071 (constinArgument_inContext.getter_mModuleMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1071.hasCurrentObject ()) {
    GALGAS_lstring var_moduleTypeName_1097 = function_moduleMangledNameFromModuleName (enumerator_1071.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 19)) ;
    GALGAS_PLMType var_moduleType_1164 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_1097, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 20)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 20)) ;
    {
    outArgument_outVariableMap.setter_insertModule (enumerator_1071.current_lkey (HERE), var_moduleType_1164, GALGAS_bool (false), GALGAS_objectIR::constructor_globalVariableReference (var_moduleType_1164, enumerator_1071.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 25)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 21)) ;
    }
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_1561 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertModule ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1561, enumerator_1071.current_lkey (HERE), var_moduleType_1164, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 29)) ;
    }
    enumerator_1071.gotoNextObject () ;
  }
  cEnumerator_controlRegisterMap enumerator_1724 (constinArgument_inContext.getter_mControlRegisterMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1724.hasCurrentObject ()) {
    GALGAS_bool var_registerIsReadable_1754 = extensionGetter_controlRegisterAccess (constinArgument_inRequiredMode, enumerator_1724.current (HERE).getter_mIsAccessibleInUserMode (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 33)) ;
    GALGAS_bool test_0 = var_registerIsReadable_1754 ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = enumerator_1724.current (HERE).getter_mIsReadOnly (HERE).operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 34)) ;
    }
    GALGAS_bool test_1 = test_0 ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 34)) ;
    }
    GALGAS_bool var_registerIsWritable_1856 = test_1 ;
    GALGAS_objectIR var_objectReference_1957 = GALGAS_objectIR::constructor_registerReference (enumerator_1724.current (HERE).getter_mType (HERE), enumerator_1724.current (HERE).getter_lkey (HERE), var_registerIsReadable_1754, var_registerIsWritable_1856, enumerator_1724.current (HERE).getter_mAddress (HERE), enumerator_1724.current (HERE).getter_mRegisterFieldAccessMap (HERE), enumerator_1724.current (HERE).getter_mArraySize (HERE), enumerator_1724.current (HERE).getter_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 35)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_2350 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertRegister ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2350, enumerator_1724.current (HERE).getter_lkey (HERE), var_registerIsReadable_1754, var_registerIsWritable_1856, var_objectReference_1957, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 45)) ;
    }
    const enumGalgasBool test_2 = var_registerIsReadable_1754.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 51)).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      outArgument_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_1724.current (HERE).getter_lkey (HERE), enumerator_1724.current (HERE).getter_mType (HERE), GALGAS_bool (false), var_objectReference_1957, GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 52)) ;
      }
    }else if (kBoolFalse == test_2) {
      GALGAS_bool test_3 = enumerator_1724.current (HERE).getter_mIsReadOnly (HERE) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = inArgument_inGlobalsAreConstant ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        outArgument_outVariableMap.setter_insertUsedConstant (enumerator_1724.current (HERE).getter_lkey (HERE), enumerator_1724.current (HERE).getter_mType (HERE), GALGAS_bool (true), var_objectReference_1957, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 61)) ;
        }
      }else if (kBoolFalse == test_4) {
        {
        outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_1724.current (HERE).getter_lkey (HERE), enumerator_1724.current (HERE).getter_mType (HERE), GALGAS_bool (true), var_objectReference_1957, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 70)) ;
        }
      }
    }
    enumerator_1724.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_3590 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_3590.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_3616 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_3616, enumerator_3590.current_lkey (HERE), enumerator_3590.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 82)) ;
    }
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_3590.current_lkey (HERE), extensionGetter_type (enumerator_3590.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 85)), GALGAS_bool (true), enumerator_3590.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 83)) ;
    }
    enumerator_3590.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_4059 (constinArgument_inContext.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
  while (enumerator_4059.hasCurrentObject ()) {
    GALGAS_objectIR var_objectIR_4079 = GALGAS_objectIR::constructor_globalVariableReference (enumerator_4059.current (HERE).getter_type (HERE), enumerator_4059.current (HERE).getter_lkey (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 94)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_4183 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4183, enumerator_4059.current (HERE).getter_lkey (HERE), var_objectIR_4079, inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 95)) ;
    }
    GALGAS_bool var_writeAccess_4276 = enumerator_4059.current (HERE).getter_allowedAccessToAll (HERE) ;
    GALGAS_bool var_allowedAccess_4328 = var_writeAccess_4276 ;
    GALGAS_bool test_5 = inArgument_inGlobalsAreConstant ;
    if (kBoolTrue != test_5.boolEnum ()) {
      test_5 = enumerator_4059.current (HERE).getter_isConstant (HERE) ;
    }
    GALGAS_bool test_6 = test_5 ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = var_writeAccess_4276.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 98)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      outArgument_outVariableMap.setter_insertUsedConstant (enumerator_4059.current (HERE).getter_lkey (HERE), enumerator_4059.current (HERE).getter_type (HERE), var_allowedAccess_4328, var_objectIR_4079, extensionGetter_copyable (enumerator_4059.current (HERE).getter_type (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 104)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 99)) ;
      }
    }else if (kBoolFalse == test_7) {
      {
      outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_4059.current (HERE).getter_lkey (HERE), enumerator_4059.current (HERE).getter_type (HERE), var_allowedAccess_4328, var_objectIR_4079, extensionGetter_copyable (enumerator_4059.current (HERE).getter_type (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 113)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 108)) ;
      }
    }
    enumerator_4059.gotoNextObject () ;
  }
  cEnumerator_internalRoutineMapForContext enumerator_5123 (constinArgument_inContext.getter_mRoutineMapForContext (HERE).getter_mInternalRoutineMapForContext (HERE), kENUMERATION_UP) ;
  while (enumerator_5123.hasCurrentObject ()) {
    cEnumerator_routineArgumentSignatureMapForContext enumerator_5195 (enumerator_5123.current (HERE).getter_mRoutineArgumentSignatureMapForContext (HERE), kENUMERATION_UP) ;
    while (enumerator_5195.hasCurrentObject ()) {
      {
      outArgument_outUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_5223 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
      callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5223, enumerator_5123.current (HERE).getter_lkey (HERE), enumerator_5195.current (HERE).getter_lkey (HERE), enumerator_5195.current (HERE).getter_mRoutineLLVMName (HERE), enumerator_5195.current (HERE).getter_mDescriptor (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 121)) ;
      }
      enumerator_5195.gotoNextObject () ;
    }
    enumerator_5123.gotoNextObject () ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_lstring var_resultVarName_5516 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 131)), constinArgument_inReturnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 131)) ;
    GALGAS_PLMType var_resultType_5610 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 132)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 132)) ;
    GALGAS_objectIR var_objectIR_5708 = GALGAS_objectIR::constructor_localVariableReference (var_resultType_5610, var_resultVarName_5516  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 133)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_5808 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5808, var_resultVarName_5516, var_objectIR_5708, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("unified-symbol-map.galgas", 134)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 134)) ;
    }
    {
    outArgument_outVariableMap.setter_insertOutputFormalArgument (var_resultVarName_5516, var_resultType_5610, GALGAS_bool (true), var_objectIR_5708, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 135)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_unifiedSymbolMapEx & outArgument_outVariableMap,
                                       GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outVariableMap = GALGAS_unifiedSymbolMapEx::constructor_emptyMap (SOURCE_FILE ("unified-symbol-map.galgas", 153)) ;
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 154)) ;
  cEnumerator_globalConstantMap enumerator_6543 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_6543.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_6569 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6569, enumerator_6543.current_lkey (HERE), enumerator_6543.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 157)) ;
    }
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_6543.current_lkey (HERE), extensionGetter_type (enumerator_6543.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 160)), GALGAS_bool (true), enumerator_6543.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 158)) ;
    }
    enumerator_6543.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("unified-symbol-map.galgas", 177)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_null (SOURCE_FILE ("unified-symbol-map.galgas", 178)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmTemporaryValue (constinArgument_inType, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("unified-symbol-map.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 182)), inArgument_inErrorLocation  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 182)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("unified-symbol-map.galgas", 183))  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 180)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 185)) ;
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
    outArgument_outSemanticContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (var_lkey_10348, inCompiler COMMA_SOURCE_FILE ("context.galgas", 257)), GALGAS_PLMType::constructor_arrayType (function_llvmNameForStaticListType (enumerator_10332.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 259)).getter_nowhere (SOURCE_FILE ("context.galgas", 259)), var_elementType_10469, enumerator_10332.current_mList (HERE).getter_length (SOURCE_FILE ("context.galgas", 261)).getter_bigint (SOURCE_FILE ("context.galgas", 261)), GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 262)), GALGAS_uint ((uint32_t) 0U), function_plmNameForStaticListType (var_lkey_10348, inCompiler COMMA_SOURCE_FILE ("context.galgas", 264)).getter_string (SOURCE_FILE ("context.galgas", 264))  COMMA_SOURCE_FILE ("context.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 256)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_staticListType_10943 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (var_lkey_10348, inCompiler COMMA_SOURCE_FILE ("context.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 267)) ;
    {
    outArgument_outSemanticContext.mProperty_mGlobalConstantMap.setter_insertKey (var_lkey_10348, GALGAS_objectIR::constructor_globalVariableReference (var_staticListType_10943.getter_type (inCompiler COMMA_SOURCE_FILE ("context.galgas", 270)), var_lkey_10348  COMMA_SOURCE_FILE ("context.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 268)) ;
    }
    enumerator_10332.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 274)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_globalVarDeclarationList enumerator_11319 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_11319.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_11319.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 276)) ;
      enumerator_11319.gotoNextObject () ;
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
  result_outResult = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 287)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 287)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 287)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 287)).getter_nowhere (SOURCE_FILE ("context.galgas", 287)) ;
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
  GALGAS_string var_typeDumpFilePath_9258 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 275)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_9375 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 277)) ;
    cEnumerator_unifiedTypeMap enumerator_9404 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_9404.hasCurrentObject ()) {
      var_firstLetterSet_9375.addAssign_operation (enumerator_9404.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).getter_string (SOURCE_FILE ("types.galgas", 279))  COMMA_SOURCE_FILE ("types.galgas", 279)) ;
      enumerator_9404.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_9512 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_9546 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_9582 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_9582.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_9546.objectCompare (enumerator_9582.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_9546 = enumerator_9582.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 285)) ;
        var_tableOfTypeString_9512.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_9546.getter_uint (SOURCE_FILE ("types.galgas", 286)).getter_string (SOURCE_FILE ("types.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (var_currentFirstLetter_9546.getter_string (SOURCE_FILE ("types.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 286)) ;
      }
      var_tableOfTypeString_9512.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_9582.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 288)) ;
      enumerator_9582.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_9975 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 291)), inArgument_inTypeMap, var_firstLetterSet_9375, var_tableOfTypeString_9512 COMMA_SOURCE_FILE ("types.galgas", 290))) ;
    GALGAS_bool joker_10205 ; // Joker input parameter
    var_typeDumpString_9975.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_9258, joker_10205, inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_9258, inCompiler COMMA_SOURCE_FILE ("types.galgas", 298)) ;
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
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)) ;
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
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 69)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_3551 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_3551.hasCurrentObject ()) {
    GALGAS_lstring var_requiredProcedureMangledName_3591 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_3551.current (HERE).getter_mName (HERE), enumerator_3551.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 74)) ;
    outArgument_outIntermediateCodeStruct.mProperty_mRequiredProcedureSet.addAssign_operation (var_requiredProcedureMangledName_3591.getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 75)) ;
    enumerator_3551.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_3854 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_3854.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_3854.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 79)) ;
    enumerator_3854.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_4032 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 85)) ;
  cEnumerator_declarationListAST enumerator_4092 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4092.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDeclarationAST *) enumerator_4092.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 87)) ;
    enumerator_4092.gotoNextObject () ;
  }
  extensionMethod_functionSemanticAnalysis (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 94)), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 93)) ;
  extensionMethod_semanticAnalysis (constinArgument_inAST.getter_mTaskListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 99)) ;
  extensionMethod_systemRoutineSemanticAnalysis (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 105)), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 104)) ;
  extensionMethod_guardSemanticAnalysis (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 111)), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 110)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternProcListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 116)) ;
  extensionMethod_isrSemanticAnalysis (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 121)) ;
  cEnumerator_bootList enumerator_5372 (constinArgument_inAST.getter_mBootListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5372.hasCurrentObject ()) {
    extensionMethod_bootSemanticAnalysis (enumerator_5372.current (HERE), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 127)) ;
    enumerator_5372.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_5565 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5565.hasCurrentObject ()) {
    extensionMethod_initSemanticAnalysis (enumerator_5565.current (HERE), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 134)) ;
    enumerator_5565.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_5794 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5794.hasCurrentObject ()) {
    extensionMethod_panicSemanticAnalysis (enumerator_5794.current (HERE), constinArgument_inSemanticContext, var_temporaries_4032, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 142)) ;
    enumerator_5794.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 149)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 155)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_6259 = var_temporaries_4032.getter_mSubprogramInvocationGraph (HERE).getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 156)) ;
    GALGAS_string var_filePath_6328 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 157)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 157)) ;
    GALGAS_bool joker_6454 ; // Joker input parameter
    var_s_6259.method_writeToFileWhenDifferentContents (var_filePath_6328, joker_6454, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 158)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 161)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_6623 = var_temporaries_4032.getter_mSubprogramInvocationGraph (HERE).getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 162)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_6623.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_6747 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_6845 (var_undefinedNodeKeyList_6623, kENUMERATION_UP) ;
      while (enumerator_6845.hasCurrentObject ()) {
        var_s_6747.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_6845.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 166)) ;
        enumerator_6845.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6747, fixItArray5  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 168)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_7052 ;
      GALGAS_lstringlist var_unsortedLKeyList_7096 ;
      var_temporaries_4032.getter_mSubprogramInvocationGraph (HERE).method_circularities (var_unsortedInformationList_7052, var_unsortedLKeyList_7096 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 170)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_7096.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_s_7162 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7242 (var_unsortedLKeyList_7096, kENUMERATION_UP) ;
        while (enumerator_7242.hasCurrentObject ()) {
          var_s_7162.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7242.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 177)) ;
          enumerator_7242.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_7162, fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 179)) ;
      }
    }
  }
}


