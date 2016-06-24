#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-11.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@selfVarOperatorAssignInstructionAST noteInstructionTypesInPrecedenceGraph'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfVarOperatorAssignInstructionAST * object = (const cPtr_selfVarOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfVarOperatorAssignInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_selfVarOperatorAssignInstructionAST.mSlotID,
                                                              extensionMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@selfVarOperatorAssignInstructionAST analyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfVarOperatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                                         const GALGAS_bool constinArgument_inAllowPanic,
                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfVarOperatorAssignInstructionAST * object = (const cPtr_selfVarOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfVarOperatorAssignInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("instruction-operator-self-assign.galgas", 65)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 66))  COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 66)) ;
  }
  const enumGalgasBool test_1 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("instruction-operator-self-assign.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 69))  COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 69)) ;
  }
  GALGAS_objectInMemoryIR var_targetPtr_4194 ;
  {
  routine_analyzeSelfAccess (object->mAttribute_mFieldList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-operator-self-assign.galgas", 77)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetPtr_4194, inCompiler  COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 71)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4215 = extensionGetter_type (var_targetPtr_4194, inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 88)) ;
  GALGAS_operandIR var_sourceValue_4811 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4215, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceValue_4811, inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 90)) ;
  GALGAS_bool var_noPanicGeneration_4881 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_4944 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 108)) COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 108)) ;
  GALGAS_infixOperatorMap var_operatorMap_5015 ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_5015 = constinArgument_inContext.mAttribute_mAndOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_5015 = constinArgument_inContext.mAttribute_mOrOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_5015 = constinArgument_inContext.mAttribute_mXorOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_4944.boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 119)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 119))  COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 119)) ;
      }
      GALGAS_infixOperatorMap temp_3 ;
      const enumGalgasBool test_4 = var_noPanicGeneration_4881.boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_4) {
        temp_3 = constinArgument_inContext.mAttribute_mAddOperatorMap ;
      }
      var_operatorMap_5015 = temp_3 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_addModuloAssign:
    {
      var_operatorMap_5015 = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_subAssign:
    {
      const enumGalgasBool test_5 = var_panicMode_4944.boolEnum () ;
      if (kBoolTrue == test_5) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 126)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 126))  COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 126)) ;
      }
      GALGAS_infixOperatorMap temp_6 ;
      const enumGalgasBool test_7 = var_noPanicGeneration_4881.boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_7) {
        temp_6 = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      }
      var_operatorMap_5015 = temp_6 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_subModuloAssign:
    {
      var_operatorMap_5015 = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_8 = var_panicMode_4944.boolEnum () ;
      if (kBoolTrue == test_8) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 133)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 133))  COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 133)) ;
      }
      GALGAS_infixOperatorMap temp_9 ;
      const enumGalgasBool test_10 = var_noPanicGeneration_4881.boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_10) {
        temp_9 = constinArgument_inContext.mAttribute_mMulOperatorMap ;
      }
      var_operatorMap_5015 = temp_9 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_5015 = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_divAssign:
    {
      const enumGalgasBool test_11 = var_panicMode_4944.boolEnum () ;
      if (kBoolTrue == test_11) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 140)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 140))  COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 140)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_4881.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.mAttribute_mDivOperatorMap ;
      }
      var_operatorMap_5015 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_divZeroAssign:
    {
      var_operatorMap_5015 = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_modAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_4944.boolEnum () ;
      if (kBoolTrue == test_14) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 147)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 147))  COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 147)) ;
      }
      GALGAS_infixOperatorMap temp_15 ;
      const enumGalgasBool test_16 = var_noPanicGeneration_4881.boolEnum () ;
      if (kBoolTrue == test_16) {
        temp_15 = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_16) {
        temp_15 = constinArgument_inContext.mAttribute_mModOperatorMap ;
      }
      var_operatorMap_5015 = temp_15 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_modZeroAssign:
    {
      var_operatorMap_5015 = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_7213 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_7159 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_5015, var_targetType_4215, var_sourceValue_4811.mAttribute_mType, object->mAttribute_mOperatorLocation, joker_7159, var_binaryOperator_7213, inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 153)) ;
  GALGAS_operandIR var_targetVariableValue_7342 ;
  {
  extensionSetter_appendLoadFromMemory (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetPtr_4194, var_targetVariableValue_7342, inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 161)) ;
  }
  GALGAS_operandIR var_newResultingValue_7549 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_7213.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_targetVariableValue_7342, object->mAttribute_mOperatorLocation, var_sourceValue_4811, var_targetType_4215, var_newResultingValue_7549, inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 162)) ;
  {
  extensionSetter_appendStoreInMemory (ioArgument_ioInstructionGenerationList, var_targetPtr_4194, var_newResultingValue_7549, inCompiler COMMA_SOURCE_FILE ("instruction-operator-self-assign.galgas", 171)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfVarOperatorAssignInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_selfVarOperatorAssignInstructionAST.mSlotID,
                                extensionMethod_selfVarOperatorAssignInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfVarOperatorAssignInstructionAST_analyze (defineExtensionMethod_selfVarOperatorAssignInstructionAST_analyze, NULL) ;

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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mThenInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 112)) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mElseInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 114)) ;
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
                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset constinArgument_inModeSet,
                                                      const GALGAS_bool constinArgument_inAllowPanic,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_operandIR var_testResult_6206 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 141)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_6206, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testResult_6206.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 153)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 153)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testResult_6206.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 154)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 154))  COMMA_SOURCE_FILE ("instruction-if.galgas", 154)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_testResult_6206.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 156)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_6670 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 161)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_6670, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_7347 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 178)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_7347, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 179)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 194)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_6206, object->mAttribute_mTestExpressionEndLocation, var_thenInstructionGenerationList_6670, var_elseInstructionGenerationList_7347  COMMA_SOURCE_FILE ("instruction-if.galgas", 196))  COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
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
  GALGAS_string var_labelTrue_9064 = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 222)).getter_string (SOURCE_FILE ("instruction-if.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 222)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 222)) ;
  GALGAS_string var_labelFalse_9127 = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 223)).getter_string (SOURCE_FILE ("instruction-if.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 223)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 223)) ;
  GALGAS_string var_labelEnd_9189 = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 224)).getter_string (SOURCE_FILE ("instruction-if.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 224)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 224)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTestVariable.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (var_labelTrue_9064, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (var_labelFalse_9127, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 225)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_9064.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 227)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_9189, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_9127.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 231)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_9189, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 233)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 233)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_9189.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 235)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 244)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 245)) ;
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
  cEnumerator_syncInstructionBranchList enumerator_6226 (object->mAttribute_mBranchList, kEnumeration_up) ;
  while (enumerator_6226.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_6226.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 165)) ;
    enumerator_6226.gotoNextObject () ;
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
                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                        const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                        const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inRequiredModeSet,
                                                        const GALGAS_bool constinArgument_inAllowPanic,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_syncInstructionBranchListIR var_onInstructionBranchListIR_7429 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 187)) ;
  cEnumerator_syncInstructionBranchList enumerator_7500 (object->mAttribute_mBranchList, kEnumeration_up) ;
  while (enumerator_7500.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 189)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR_7604 ;
    switch (enumerator_7500.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommand::kNotBuilt:
      break ;
    case GALGAS_guardedCommand::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommand_synchronization * extractPtr_8811 = (const cEnumAssociatedValues_guardedCommand_synchronization *) (enumerator_7500.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_8811->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_8811->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_8811->mAssociatedValue2 ;
        const GALGAS_effectiveParameterListAST extractedValue_effectiveParameterList = extractPtr_8811->mAssociatedValue3 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_7783 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 194)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_8420 ;
        GALGAS_lstring var_guardMangledName_8476 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_7783, var_guardEffectiveParameterListIR_8420, var_guardMangledName_8476, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 195)) ;
        }
        var_guardedCommandIR_7604 = GALGAS_guardedCommandIR::constructor_synchronization (extractedValue_isWhileCommand, var_guardMangledName_8476.mAttribute_string, extractedValue_optionalReceiverName.mAttribute_string, var_guardInstructionGenerationList_7783, var_guardEffectiveParameterListIR_8420  COMMA_SOURCE_FILE ("instruction-sync.galgas", 212)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommand_boolean * extractPtr_9987 = (const cEnumAssociatedValues_guardedCommand_boolean *) (enumerator_7500.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_9987->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_9987->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_9987->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_8930 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 220)) ;
        GALGAS_operandIR var_sourceOperand_9541 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 226)), constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8930, var_sourceOperand_9541, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 221)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceOperand_9541.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 237)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 237)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean")  COMMA_SOURCE_FILE ("instruction-sync.galgas", 238)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_1 = extensionGetter_isStatic (var_sourceOperand_9541.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 239)).boolEnum () ;
          if (kBoolTrue == test_1) {
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static")  COMMA_SOURCE_FILE ("instruction-sync.galgas", 240)) ;
          }
        }
        var_guardedCommandIR_7604 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_8930, var_sourceOperand_9541  COMMA_SOURCE_FILE ("instruction-sync.galgas", 242)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommand_boolAndSync * extractPtr_12264 = (const cEnumAssociatedValues_guardedCommand_boolAndSync *) (enumerator_7500.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_12264->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_12264->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_12264->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_12264->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_12264->mAssociatedValue4 ;
        const GALGAS_effectiveParameterListAST extractedValue_effectiveParameterList = extractPtr_12264->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_10166 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 248)) ;
        GALGAS_operandIR var_boolExpressionResult_10790 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 254)), constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_10166, var_boolExpressionResult_10790, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 249)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_boolExpressionResult_10790.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 265)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 265)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean")  COMMA_SOURCE_FILE ("instruction-sync.galgas", 266)) ;
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = extensionGetter_isStatic (var_boolExpressionResult_10790.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 267)).boolEnum () ;
          if (kBoolTrue == test_3) {
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static")  COMMA_SOURCE_FILE ("instruction-sync.galgas", 268)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_11121 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 270)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_11758 ;
        GALGAS_lstring var_guardMangledName_11814 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_11121, var_guardEffectiveParameterListIR_11758, var_guardMangledName_11814, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 271)) ;
        }
        var_guardedCommandIR_7604 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_10166, var_boolExpressionResult_10790, var_guardMangledName_11814.mAttribute_string, extractedValue_optionalReceiverName.mAttribute_string, var_guardInstructionGenerationList_11121, var_guardEffectiveParameterListIR_11758  COMMA_SOURCE_FILE ("instruction-sync.galgas", 288)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_12351 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 299)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_7500.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_7500.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_12351, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 300)) ;
    {
    ioArgument_ioVariableMap.setter_closeOverride (enumerator_7500.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 315)) ;
    }
    var_onInstructionBranchListIR_7429.addAssign_operation (var_guardedCommandIR_7604, var_branchInstructionGenerationList_12351  COMMA_SOURCE_FILE ("instruction-sync.galgas", 317)) ;
    enumerator_7500.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mAttribute_mStartOf_5F_on_5F_instruction, var_onInstructionBranchListIR_7429  COMMA_SOURCE_FILE ("instruction-sync.galgas", 322))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 322)) ;
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
  ioArgument_ioGenerationAdds.mAttribute_mUsesGuards = GALGAS_bool (true) ;
  GALGAS_string var_startLabel_18565 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("instruction-sync.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 447)) ;
  ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_18565, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)) ;
  GALGAS_string var_startLabelName_18729 = var_startLabel_18565.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_18729.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)) ;
  GALGAS_string var_exitLabelName_18813 = var_startLabel_18565.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)) ;
  GALGAS_string var_selectLabelName_18858 = var_startLabel_18565.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)) ;
  GALGAS_string var_errorLabelName_18904 = var_startLabel_18565.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)) ;
  GALGAS_string var_currentStartBranchLabel_18958 = var_startLabelName_18729 ;
  cEnumerator_syncInstructionBranchListIR enumerator_19018 (object->mAttribute_mOnInstructionBranchListIR, kEnumeration_up) ;
  GALGAS_uint index_18981 ((uint32_t) 0) ;
  while (enumerator_19018.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_19053 = GALGAS_string ("%").add_operation (var_startLabel_18565, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)).add_operation (index_18981.getter_string (SOURCE_FILE ("instruction-sync.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)) ;
    GALGAS_bool var_isWhileGuardedCommand_19123 ;
    switch (enumerator_19018.current (HERE).mAttribute_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_20096 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_19018.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_20096->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_20096->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_20096->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_20096->mAssociatedValue4 ;
        var_isWhileGuardedCommand_19123 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_19053, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_19608 (extractedValue_effectiveParameterListIR, kEnumeration_up) ;
        while (enumerator_19608.hasCurrentObject ()) {
          switch (enumerator_19608.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19608.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (extensionGetter_llvmName (enumerator_19608.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19608.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)).add_operation (extensionGetter_llvmName (enumerator_19608.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19608.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)).add_operation (extensionGetter_llvmName (enumerator_19608.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)) ;
            }
            break ;
          }
          if (enumerator_19608.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)) ;
          }
          enumerator_19608.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_20929 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_19018.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_20929->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_20929->mAssociatedValue1 ;
        const GALGAS_operandIR extractedValue_result = extractPtr_20929->mAssociatedValue2 ;
        var_isWhileGuardedCommand_19123 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)) ;
        GALGAS_string var_acceptedLabelName_20365 = var_startLabel_18565.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (index_18981.getter_string (SOURCE_FILE ("instruction-sync.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)) ;
        GALGAS_string var_rejectedLabelName_20428 = var_startLabel_18565.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (index_18981.getter_string (SOURCE_FILE ("instruction-sync.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (var_acceptedLabelName_20365, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (var_rejectedLabelName_20428, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_20365.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_20428, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_20428.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_19053, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)).add_operation (extensionGetter_llvmName (extractedValue_result.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_22706 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_19018.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_22706->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_22706->mAssociatedValue1 ;
        const GALGAS_operandIR extractedValue_expResult = extractPtr_22706->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_22706->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_22706->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_22706->mAssociatedValue6 ;
        var_isWhileGuardedCommand_19123 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 492)) ;
        GALGAS_string var_testOkLabelName_21236 = var_startLabel_18565.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)).add_operation (index_18981.getter_string (SOURCE_FILE ("instruction-sync.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)) ;
        GALGAS_string var_testExitLabelName_21307 = var_startLabel_18565.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)).add_operation (index_18981.getter_string (SOURCE_FILE ("instruction-sync.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (var_testOkLabelName_21236, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (var_testExitLabelName_21307, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_21236.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)) ;
        GALGAS_string var_guardAcceptationLabelName_21669 = var_startLabel_18565.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)).add_operation (index_18981.getter_string (SOURCE_FILE ("instruction-sync.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_21669, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_21895 (extractedValue_effectiveParameterList, kEnumeration_up) ;
        while (enumerator_21895.hasCurrentObject ()) {
          switch (enumerator_21895.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_21895.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (extensionGetter_llvmName (enumerator_21895.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_21895.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)).add_operation (extensionGetter_llvmName (enumerator_21895.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_21895.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (extensionGetter_llvmName (enumerator_21895.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)) ;
            }
            break ;
          }
          if (enumerator_21895.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)) ;
          }
          enumerator_21895.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_21307, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_21307.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_19053, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_21669, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (var_testOkLabelName_21236, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_18958, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_22740 = var_startLabel_18565.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)).add_operation (index_18981.getter_string (SOURCE_FILE ("instruction-sync.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)) ;
    GALGAS_string var_rejectedLabelName_22800 = var_startLabel_18565.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)).add_operation (index_18981.getter_string (SOURCE_FILE ("instruction-sync.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_19053, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)).add_operation (var_acceptedLabelName_22740, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)).add_operation (var_rejectedLabelName_22800, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_22740.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)) ;
    extensionMethod_instructionListLLVMCode (enumerator_19018.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_19123.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_18729 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_18813 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_22800.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)) ;
    var_currentStartBranchLabel_18958 = var_rejectedLabelName_22800 ;
    enumerator_19018.gotoNextObject () ;
    index_18981.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 457)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_18858, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_18858, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)).add_operation (var_startLabelName_18729, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)).add_operation (var_errorLabelName_18904, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_18904.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_18813, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_23992 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 536)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 536)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 536)), var_staticStringIndex_23992, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 535)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_23992.getter_string (SOURCE_FILE ("instruction-sync.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (object->mAttribute_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_18813.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)) ;
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
  GALGAS_uint var_branchCount_24645 = object->mAttribute_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 553)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_24645)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_24645 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_24830 (object->mAttribute_mOnInstructionBranchListIR, kEnumeration_up) ;
  while (enumerator_24830.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_24830.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 558)) ;
    switch (enumerator_24830.current (HERE).mAttribute_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_25384 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_24830.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25384->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_25384->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_25384->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 561)) ;
        ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 562)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_25551 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_24830.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25551->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 567)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_26086 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_24830.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_26086->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_26086->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_26086->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_26086->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 569)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)) ;
        ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 571)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)) ;
        }
      }
      break ;
    }
    enumerator_24830.gotoNextObject () ;
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
//           Overriding extension method '@abstractCallInstructionAST noteInstructionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCallInstructionAST * object = (const cPtr_abstractCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCallInstructionAST) ;
  cEnumerator_effectiveParameterListAST enumerator_4670 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4670.hasCurrentObject ()) {
    switch (enumerator_4670.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_4895 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_4670.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4895->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 116)), extractedValue_typeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 116)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 116)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_4988 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_4670.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4988->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_4670.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_abstractCallInstructionAST.mSlotID,
                                                              extensionMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@remoteRoutineCallInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_remoteRoutineCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_stringset constinArgument_inRequiredModeSet,
                                                                     const GALGAS_bool constinArgument_inAllowPanic,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_remoteRoutineCallInstructionAST * object = (const cPtr_remoteRoutineCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_remoteRoutineCallInstructionAST) ;
  GALGAS_accessList var_accessList_9265 = object->mAttribute_mAccessList ;
  GALGAS_lstring var_routineName_9320 ;
  GALGAS_arrayElementAccess var_arrayElementAccess_9344 ;
  {
  var_accessList_9265.setter_popLast (var_routineName_9320, var_arrayElementAccess_9344, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 220)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_arrayElementAccess_9344.objectCompare (GALGAS_arrayElementAccess::constructor_noAccess (SOURCE_FILE ("instruction-proc-call.galgas", 221)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_routineName_9320.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("array element access is not alowed here")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 222)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_accessList_9265.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 224)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    routine_analyzeStandaloneRoutineCall (var_routineName_9320, object->mAttribute_mEffectiveParameterList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 225)) ;
    }
  }else if (kBoolFalse == test_2) {
    GALGAS_objectInMemoryIR var_targetObjectPtr_10716 ;
    {
    routine_analyzeVariableAccess (var_accessList_9265, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObjectPtr_10716, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 243)) ;
    }
    GALGAS_lstring var_baseName_10798 ;
    GALGAS_arrayElementAccess joker_10800 ; // Joker input parameter
    var_accessList_9265.method_first (var_baseName_10798, joker_10800, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 260)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_receiverType_10850 = extensionGetter_type (var_targetObjectPtr_10716, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 262)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_10938 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 263)) ;
    GALGAS_lstring var_routineMangledName_10970 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType_10850.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 264)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 264)).add_operation (var_routineName_9320.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 264)), var_routineName_9320.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 264)) ;
    var_effectiveParameterListIR_10938.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 265)), extensionGetter_address (var_targetObjectPtr_10716, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 265))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 265)) ;
    GALGAS_bool var_isPublic_11273 ;
    GALGAS_modeMap var_modeMap_11292 ;
    GALGAS_procedureSignature var_formalSignature_11339 ;
    GALGAS_routineKind var_routineKind_11375 ;
    GALGAS_unifiedTypeMap_2D_proxy var_returnedType_11408 ;
    GALGAS_bool var_appendFileAndLineArgumentForPanicLocation_11461 ;
    GALGAS_bool var_canMutateProperties_11499 ;
    GALGAS_bool var_canAccessPropertiesInUserMode_11547 ;
    GALGAS_string joker_11252 ; // Joker input parameter
    GALGAS_bool joker_11383 ; // Joker input parameter
    constinArgument_inContext.mAttribute_mRoutineMapForContext.method_searchKey (var_routineMangledName_10970, joker_11252, var_isPublic_11273, var_modeMap_11292, var_formalSignature_11339, var_routineKind_11375, joker_11383, var_returnedType_11408, var_appendFileAndLineArgumentForPanicLocation_11461, var_canMutateProperties_11499, var_canAccessPropertiesInUserMode_11547, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 266)) ;
    const enumGalgasBool test_3 = var_isPublic_11273.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 280)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (var_routineMangledName_10970.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("this routine is not public")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 281)) ;
    }
    GALGAS_objectInMemoryIR var_variableKind_11710 ;
    const enumGalgasBool test_5 = var_canMutateProperties_11499.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      GALGAS_unifiedTypeMap_2D_proxy joker_11818_1 ; // Joker input parameter
      GALGAS_bool joker_11848 ; // Joker input parameter
      GALGAS_bool joker_11903 ; // Joker input parameter
      GALGAS_bool joker_11914_1 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_searchForMethodCall (var_baseName_10798, joker_11818_1, joker_11848, var_variableKind_11710, joker_11903, joker_11914_1, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 285)) ;
      }
    }else if (kBoolFalse == test_5) {
      {
      GALGAS_unifiedTypeMap_2D_proxy joker_12017_1 ; // Joker input parameter
      GALGAS_bool joker_12047 ; // Joker input parameter
      GALGAS_bool joker_12102 ; // Joker input parameter
      GALGAS_bool joker_12113_1 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_searchForConstantMethodCall (var_baseName_10798, joker_12017_1, joker_12047, var_variableKind_11710, joker_12102, joker_12113_1, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 294)) ;
      }
    }
    GALGAS_lstring var_routineNameForInvocationGraph_12207 ;
    switch (var_routineKind_11375.enumValue ()) {
    case GALGAS_routineKind::kNotBuilt:
      break ;
    case GALGAS_routineKind::kEnum_function:
      {
        var_routineNameForInvocationGraph_12207 = function_procNameForInvocationGraph (var_receiverType_10850, var_routineName_9320, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 307)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_section:
      {
        var_routineNameForInvocationGraph_12207 = function_sectionNameForInvocationGraph (var_receiverType_10850, var_routineName_9320, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 309)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_service:
      {
        var_routineNameForInvocationGraph_12207 = function_serviceNameForInvocationGraph (var_receiverType_10850, var_routineName_9320, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 311)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_primitive:
      {
        var_routineNameForInvocationGraph_12207 = function_primitiveNameForInvocationGraph (var_receiverType_10850, var_routineName_9320, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 313)) ;
      }
      break ;
    }
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph_12207 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 315)) ;
    }
    GALGAS_routineKindIR var_routineKindIR_12865 = function_checkMode (constinArgument_inRequiredModeSet, var_modeMap_11292.getter_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 319)), var_routineKind_11375, var_routineName_9320.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 317)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_11339, object->mAttribute_mEffectiveParameterList, var_routineName_9320.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_10938, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 324)) ;
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_returnedType_11408.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 342)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (var_routineName_9320.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("cannot be called in instruction: return value")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 343)) ;
    }
    GALGAS_string temp_8 ;
    const enumGalgasBool test_9 = var_variableKind_11710.getter_isGlobalVariable (SOURCE_FILE ("instruction-proc-call.galgas", 346)).boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = var_baseName_10798.mAttribute_string ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_baseGlobalVariableName_13933 = temp_8 ;
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (var_baseGlobalVariableName_13933, var_routineMangledName_10970, var_routineKindIR_12865, var_effectiveParameterListIR_10938, var_appendFileAndLineArgumentForPanicLocation_11461  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 347))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 347)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_remoteRoutineCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_remoteRoutineCallInstructionAST.mSlotID,
                                extensionMethod_remoteRoutineCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_remoteRoutineCallInstructionAST_analyze (defineExtensionMethod_remoteRoutineCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@procCallInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procCallInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                       GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 692)) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_routineKindIR::kNotBuilt:
    break ;
  case GALGAS_routineKindIR::kEnum_function:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForFunction (object->mAttribute_mProcName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 694)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 694)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_serviceInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceCall (object->mAttribute_mProcName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 695)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 695)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_serviceInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceImplementation (object->mAttribute_mProcName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 696)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 696)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_sectionInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionCall (object->mAttribute_mProcName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 697)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_sectionInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionImplementation (object->mAttribute_mProcName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 698)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 698)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_primitiveInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveCall (object->mAttribute_mProcName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 699)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_primitiveInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveImplementation (object->mAttribute_mProcName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 700)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 700)) ;
    }
    break ;
  }
  GALGAS_bool var_first_29713 = GALGAS_bool (true) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 703)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_29765 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_29765.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_first_29713.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_first_29713 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 708)) ;
    }
    switch (enumerator_29765.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_29765.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 712)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 712)).add_operation (extensionGetter_llvmName (enumerator_29765.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 712)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_29765.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 714)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 714)).add_operation (extensionGetter_llvmName (enumerator_29765.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 714)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 714)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_29765.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 716)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 716)).add_operation (extensionGetter_llvmName (enumerator_29765.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 716)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 716)) ;
      }
      break ;
    }
    enumerator_29765.gotoNextObject () ;
  }
  GALGAS_bool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 719)) ;
  if (kBoolTrue == test_1.boolEnum ()) {
    test_1 = object->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
  }
  const enumGalgasBool test_2 = test_1.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_sourceFileName_30358 = object->mAttribute_mProcName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 720)).getter_lastPathComponent (SOURCE_FILE ("instruction-proc-call.galgas", 720)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-proc-call.galgas", 720)) ;
    GALGAS_uint var_staticStringIndex_30552 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, var_sourceFileName_30358, var_staticStringIndex_30552, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 721)) ;
    }
    const enumGalgasBool test_3 = var_first_29713.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 725)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 726)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 728)).add_operation (object->mAttribute_mProcName.mAttribute_location.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 728)).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 728)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 728)) ;
    GALGAS_uint var_sourceFileNameSize_30731 = var_sourceFileName_30358.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 729)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 729)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i8* getelementptr inbounds ([").add_operation (var_sourceFileNameSize_30731.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 730)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 730)).add_operation (var_sourceFileNameSize_30731.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 730)).add_operation (GALGAS_string (" x i8]* @str.array."), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 730)).add_operation (var_staticStringIndex_30552.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 730)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 730)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 730)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 732)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                            extensionMethod_procCallInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_llvmInstructionCode (defineExtensionMethod_procCallInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@procCallInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procCallInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                           GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mRoutineSet.addAssign_operation (object->mAttribute_mProcName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 741)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mGlobalVariableName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVariableName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 743)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                                extensionMethod_procCallInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_enterAccessibleEntities (defineExtensionMethod_procCallInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@unifiedSelfCallInstructionAST analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unifiedSelfCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                   const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                   const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_stringset constinArgument_inRequiredModeSet,
                                                                   const GALGAS_bool constinArgument_inAllowPanic,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unifiedSelfCallInstructionAST * object = (const cPtr_unifiedSelfCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unifiedSelfCallInstructionAST) ;
  GALGAS_fieldList var_fieldList_2644 = object->mAttribute_mFieldList ;
  GALGAS_lstring var_methodName_2696 ;
  GALGAS_arrayElementAccess var_arrayAccess_2713 ;
  {
  var_fieldList_2644.setter_popLast (var_methodName_2696, var_arrayAccess_2713, inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 52)) ;
  }
  const enumGalgasBool test_0 = var_arrayAccess_2713.getter_isAccess (SOURCE_FILE ("instruction-self-call.galgas", 53)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_methodName_2696.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("array access not allowed here")  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 54)) ;
  }
  GALGAS_objectInMemoryIR var_propertyAddressLLVMvar_3416 ;
  {
  routine_analyzeSelfAccess (var_fieldList_2644, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-self-call.galgas", 63)), constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_propertyAddressLLVMvar_3416, inCompiler  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 57)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_3439 = extensionGetter_type (var_propertyAddressLLVMvar_3416, inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 74)) ;
  GALGAS_lstring var_routineMangledName_3496 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType_3439.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 75)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 75)).add_operation (var_methodName_2696.getter_string (SOURCE_FILE ("instruction-self-call.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 75)), var_methodName_2696.mAttribute_location  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 75)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_3640 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-self-call.galgas", 76)) ;
  var_effectiveParameterListIR_3640.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-self-call.galgas", 77)), extensionGetter_address (var_propertyAddressLLVMvar_3416, inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 77))  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 77)) ;
  GALGAS_bool var_isPublic_3860 ;
  GALGAS_modeMap var_modeMap_3877 ;
  GALGAS_procedureSignature var_formalSignature_3922 ;
  GALGAS_routineKind var_routineKind_3956 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_3985 ;
  GALGAS_bool var_appendFileAndLineArgumentForPanicLocation_4036 ;
  GALGAS_bool var_canMutateProperties_4065 ;
  GALGAS_bool var_canAccessPropertiesInUserMode_4104 ;
  GALGAS_string joker_3841 ; // Joker input parameter
  GALGAS_bool joker_3962 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mRoutineMapForContext.method_searchKey (var_routineMangledName_3496, joker_3841, var_isPublic_3860, var_modeMap_3877, var_formalSignature_3922, var_routineKind_3956, joker_3962, var_returnedType_3985, var_appendFileAndLineArgumentForPanicLocation_4036, var_canMutateProperties_4065, var_canAccessPropertiesInUserMode_4104, inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 78)) ;
  GALGAS_bool test_2 = var_canAccessPropertiesInUserMode_4104 ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("instruction-self-call.galgas", 91)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (var_methodName_2696.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("the callee access properties, but current routine is not declared with @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 92)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 92))  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 92)) ;
  }
  GALGAS_bool test_5 = var_canMutateProperties_4065 ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("instruction-self-call.galgas", 94)) ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (var_methodName_2696.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the callee mutates properties, but current routine is not declared with @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 95)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 95))  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 95)) ;
  }
  GALGAS_bool test_8 = GALGAS_bool (kIsStrictSup, var_fieldList_2644.getter_length (SOURCE_FILE ("instruction-self-call.galgas", 97)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_8.boolEnum ()) {
    test_8 = var_isPublic_3860.operator_not (SOURCE_FILE ("instruction-self-call.galgas", 97)) ;
  }
  const enumGalgasBool test_9 = test_8.boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_location location_10 (var_routineMangledName_3496.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_10, GALGAS_string ("this routine is not public")  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 98)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph_4731 ;
  switch (var_routineKind_3956.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_routineNameForInvocationGraph_4731 = function_procNameForInvocationGraph (var_receiverType_3439, var_methodName_2696, inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 104)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineNameForInvocationGraph_4731 = function_sectionNameForInvocationGraph (var_receiverType_3439, var_methodName_2696, inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 106)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineNameForInvocationGraph_4731 = function_serviceNameForInvocationGraph (var_receiverType_3439, var_methodName_2696, inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 108)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_routineNameForInvocationGraph_4731 = function_primitiveNameForInvocationGraph (var_receiverType_3439, var_methodName_2696, inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 110)) ;
    }
    break ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph_4731 COMMA_SOURCE_FILE ("instruction-self-call.galgas", 112)) ;
  }
  GALGAS_routineKindIR var_routineKindIR_5359 = function_checkMode (constinArgument_inRequiredModeSet, var_modeMap_3877.getter_keySet (SOURCE_FILE ("instruction-self-call.galgas", 116)), var_routineKind_3956, var_methodName_2696.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("instruction-self-call.galgas", 114)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_3922, object->mAttribute_mEffectiveParameterList, var_methodName_2696.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_3640, inCompiler  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 121)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_returnedType_3985.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-self-call.galgas", 139)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    GALGAS_location location_12 (var_methodName_2696.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_12, GALGAS_string ("cannot be called in instruction: routine has a return value")  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 140)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (GALGAS_string::makeEmptyString (), var_routineMangledName_3496, var_routineKindIR_5359, var_effectiveParameterListIR_3640, var_appendFileAndLineArgumentForPanicLocation_4036  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 143))  COMMA_SOURCE_FILE ("instruction-self-call.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unifiedSelfCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_unifiedSelfCallInstructionAST.mSlotID,
                                extensionMethod_unifiedSelfCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unifiedSelfCallInstructionAST_analyze (defineExtensionMethod_unifiedSelfCallInstructionAST_analyze, NULL) ;

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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 65)) ;
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
                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool constinArgument_inAllowPanic,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_4022 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 87)) ;
  GALGAS_operandIR var_testValue_4566 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 93)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_4022, var_testValue_4566, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 88)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testValue_4566.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 105)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 105)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testValue_4566.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 106)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 106))  COMMA_SOURCE_FILE ("instruction-while.galgas", 106)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_testValue_4566.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 108)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4961 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 112)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 113)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_4961, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 114)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 129)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 132)), var_testInstructionGenerationList_4022, var_testValue_4566, var_instructionGenerationList_4961  COMMA_SOURCE_FILE ("instruction-while.galgas", 131))  COMMA_SOURCE_FILE ("instruction-while.galgas", 131)) ;
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
  GALGAS_string var_labelTest_6736 = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  GALGAS_string var_labelLoop_6787 = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  GALGAS_string var_labelEnd_6837 = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6736, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 160)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6736.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 161)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 162)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTestExpression.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (var_labelLoop_6787, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (var_labelEnd_6837, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 163)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6787.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 164)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 165)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6736, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 166)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 166)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6837.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 167)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 176)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 177)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 49)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
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
                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                       const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                       const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_stringset constinArgument_inModeSet,
                                                       const GALGAS_bool constinArgument_inAllowPanic,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_operandIR var_iteratedExpressionResult_4069 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 77)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_iteratedExpressionResult_4069, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_iteratedElementType_4152 = var_iteratedExpressionResult_4069.mAttribute_mType.getter_enumerationType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 89)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedElementType_4152.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 90)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, GALGAS_string ("this object is not enumerable")  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 91)) ;
  }
  GALGAS_string var_enumeratedVarLLVMName_4363 = object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 95)) ;
  ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_4363, var_iteratedElementType_4152  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 96)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 98)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedConstant (object->mAttribute_mVarName, var_iteratedElementType_4152, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_iteratedElementType_4152, var_enumeratedVarLLVMName_4363  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 103)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4918 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_4918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 123)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionIR::constructor_new (var_enumeratedVarLLVMName_4363, var_iteratedElementType_4152, object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, var_iteratedExpressionResult_4069, var_instructionGenerationList_4918  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 125))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 125)) ;
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
//                         Overriding extension method '@forInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  GALGAS_string var_startLabel_6662 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  GALGAS_string var_testLabel_6726 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  GALGAS_string var_loopLabel_6789 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)) ;
  GALGAS_string var_endLabel_6851 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)) ;
  GALGAS_string var_ptrVar_6911 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).add_operation (GALGAS_string (".ptr"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)) ;
  GALGAS_string var_currentVar_6977 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)) ;
  GALGAS_string var_elementTypeName_7049 = object->mAttribute_mElementType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_6662, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_6662.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_6726, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_6726.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_6911, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (GALGAS_string (" = phi i8* ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_6662.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (var_ptrVar_6911, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (var_loopLabel_6789, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_6977, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)).add_operation (var_ptrVar_6911, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_6977, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)).add_operation (var_currentVar_6977, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_6977, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (var_endLabel_6851, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (var_loopLabel_6789, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_6789.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 175)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeName_7049, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)).add_operation (var_currentVar_6977, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeName_7049.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 178)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_6911, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)).add_operation (var_elementTypeName_7049, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeName_7049.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 180)).add_operation (var_ptrVar_6911, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 180)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 180)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_6726, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 181)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 181)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_6851.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                            extensionMethod_forInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_llvmInstructionCode (defineExtensionMethod_forInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@forInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                      GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 193)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                                extensionMethod_forInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_enterAccessibleEntities (defineExtensionMethod_forInstructionIR_enterAccessibleEntities, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2766 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2766 COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 61)) ;
    }
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 63)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mLowerBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mUpperBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 65)) ;
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
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_stringset constinArgument_inModeSet,
                                                                      const GALGAS_bool constinArgument_inAllowPanic,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_4193 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 87)) ;
  switch (var_type_4193.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 88)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      GALGAS_location location_0 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_0, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 92)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      GALGAS_location location_2 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_3 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      GALGAS_location location_4 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      GALGAS_location location_5 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_6 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_6, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8146 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4193.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 88)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8146->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8146->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8146->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8146->mAssociatedValue3 ;
      GALGAS_operandIR var_lowerBoundExpressionResult_5566 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
      GALGAS_operandIR var_upperBoundExpressionResult_6162 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 127)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6162, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 122)) ;
      GALGAS_operandIR var_lowerBound_6217 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5566, var_type_4193, object->mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 139)) ;
      GALGAS_operandIR var_upperBound_6441 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6162, var_type_4193, object->mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 145)) ;
      GALGAS_string var_enumeratedVarLLVMName_6683 = object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 152)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 152)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 153)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_6683, var_type_4193  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
      {
      ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 156)) ;
      }
      {
      ioArgument_ioVariableMap.setter_insertUsedConstant (object->mAttribute_mVarName, var_type_4193, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_type_4193, var_enumeratedVarLLVMName_6683  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 157)) ;
      }
      GALGAS_instructionListIR var_instructionGenerationList_7219 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 165)) ;
      extensionMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_7219, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 166)) ;
      {
      ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 181)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName_6683, var_type_4193, extractedValue_unsigned, object->mAttribute_mEndOf_5F_do_5F_instruction, var_lowerBound_6217, var_upperBound_6441, var_instructionGenerationList_7219  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 183))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 183)) ;
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
  GALGAS_string var_llvmType_9225 = object->mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)) ;
  GALGAS_string var_llvmVarName_9266 = function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)) ;
  GALGAS_string var_testLabel_9321 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)) ;
  GALGAS_string var_loopLabel_9384 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 222)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 222)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 222)) ;
  GALGAS_string var_endLabel_9446 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)) ;
  GALGAS_string var_testResult_9510 = GALGAS_string ("%for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)) ;
  GALGAS_string var_loadedVarName_9585 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)) ;
  GALGAS_string var_currentVarName_9663 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)) ;
  GALGAS_string var_nextVarName_9739 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)).add_operation (extensionGetter_llvmName (object->mAttribute_mLowerExpressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)).add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)).add_operation (var_llvmVarName_9266, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9321, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9321.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9585, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (var_llvmVarName_9266, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9510, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (var_loadedVarName_9585, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (extensionGetter_llvmName (object->mAttribute_mUpperExpressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9510, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_loopLabel_9384, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_endLabel_9446, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9384.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_9663, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmVarName_9266, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_9739, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (var_currentVarName_9663, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_nextVarName_9739, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9225, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmVarName_9266, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9321, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9446.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)) ;
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
//                             Overriding extension method '@extendIR llvmInstructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendIR * object = (const cPtr_extendIR *) inObject ;
  macroValidSharedObject (object, cPtr_extendIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)) ;
  GALGAS_bool var_sourceIsUnsigned_778 ;
  GALGAS_bigint joker_739 ; // Joker input parameter
  GALGAS_bigint joker_746 ; // Joker input parameter
  GALGAS_uint joker_789 ; // Joker input parameter
  object->mAttribute_mSource.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).method_integer (joker_739, joker_746, var_sourceIsUnsigned_778, joker_789, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = var_sourceIsUnsigned_778.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("zext") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("sext") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (object->mAttribute_mSource.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (extensionGetter_llvmName (object->mAttribute_mSource.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (object->mAttribute_mResult.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                            extensionMethod_extendIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendIR_llvmInstructionCode (defineExtensionMethod_extendIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@extendIR enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                              GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                                extensionMethod_extendIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendIR_enterAccessibleEntities (defineExtensionMethod_extendIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@binaryOperationIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binaryOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                       GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                       GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binaryOperationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                extensionMethod_binaryOperationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterAccessibleEntities (defineExtensionMethod_binaryOperationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@binaryOperationIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binaryOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = (const cPtr_binaryOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType_4983 = object->mAttribute_mOperandType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
  switch (object->mAttribute_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      const GALGAS_binaryOperationIR temp_0 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_0.ptr (), GALGAS_string ("uadd"), function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 155)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      const GALGAS_binaryOperationIR temp_1 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_1.ptr (), GALGAS_string ("sadd"), function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 163)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 161)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      const GALGAS_binaryOperationIR temp_2 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_2.ptr (), GALGAS_string ("usub"), function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 171)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 169)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      const GALGAS_binaryOperationIR temp_3 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_3.ptr (), GALGAS_string ("ssub"), function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 179)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 177)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      const GALGAS_binaryOperationIR temp_4 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_4.ptr (), GALGAS_string ("umul"), function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 187)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 185)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      const GALGAS_binaryOperationIR temp_5 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_5.ptr (), GALGAS_string ("smul"), function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 195)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 193)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      const GALGAS_binaryOperationIR temp_6 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_6.ptr (), GALGAS_string ("udiv"), function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 203)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 201)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      const GALGAS_binaryOperationIR temp_7 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_7.ptr (), GALGAS_string ("sdiv"), function_panicCodeForSignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 211)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 209)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      const GALGAS_binaryOperationIR temp_8 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_8.ptr (), GALGAS_string ("urem"), function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 219)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 217)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      const GALGAS_binaryOperationIR temp_9 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_9.ptr (), GALGAS_string ("srem"), function_panicCodeForSignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 227)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 225)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (var_llvmType_4983, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binaryOperationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                            extensionMethod_binaryOperationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_llvmInstructionCode (defineExtensionMethod_binaryOperationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@shortCircuitAndOperationIR enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mLeftInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 38)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mRightInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                                extensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_enterAccessibleEntities (defineExtensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@shortCircuitAndOperationIR llvmInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_shortCircuitAndOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  GALGAS_string var_startLabel_1756 = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  GALGAS_string var_trueLabel_1821 = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  GALGAS_string var_falseLabel_1886 = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_1756, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_1756.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mLeftInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mLeftOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_trueLabel_1821, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_falseLabel_1886, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_trueLabel_1821.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mRightInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_falseLabel_1886, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_falseLabel_1886.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (extensionGetter_llvmName (object->mAttribute_mRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_trueLabel_1821, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_startLabel_1756, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_shortCircuitAndOperationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                            extensionMethod_shortCircuitAndOperationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_llvmInstructionCode (defineExtensionMethod_shortCircuitAndOperationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@loadRegisterIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadRegisterIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  GALGAS_string var_llvmType_781 = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (var_llvmType_781, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (var_llvmType_781, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string (" * inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (object->mAttribute_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (var_llvmType_781, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (object->mAttribute_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadRegisterIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                            extensionMethod_loadRegisterIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_llvmInstructionCode (defineExtensionMethod_loadRegisterIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@loadRegisterIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadRegisterIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadRegisterIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                                extensionMethod_loadRegisterIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_enterAccessibleEntities (defineExtensionMethod_loadRegisterIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@loadGlobalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  GALGAS_string var_llvmType_799 = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_799.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (var_llvmType_799, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (function_llvmNameForGlobalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadGlobalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                            extensionMethod_loadGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_llvmInstructionCode (defineExtensionMethod_loadGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@loadGlobalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mVariableName  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadGlobalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                                extensionMethod_loadGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_enterAccessibleEntities (defineExtensionMethod_loadGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@loadLocalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadLocalVariableIR * object = (const cPtr_loadLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadLocalVariableIR) ;
  GALGAS_string var_llvmType_730 = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_730.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (var_llvmType_730, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadLocalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                            extensionMethod_loadLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_llvmInstructionCode (defineExtensionMethod_loadLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@loadLocalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadLocalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                                extensionMethod_loadLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_enterAccessibleEntities (defineExtensionMethod_loadLocalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@loadTaskVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadTaskVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadTaskVariableIR * object = (const cPtr_loadTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadTaskVariableIR) ;
  GALGAS_string var_llvmType_779 = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_779.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (var_llvmType_779, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (function_llvmNameForTaskVariable (object->mAttribute_mTaskName, object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadTaskVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadTaskVariableIR.mSlotID,
                                            extensionMethod_loadTaskVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadTaskVariableIR_llvmInstructionCode (defineExtensionMethod_loadTaskVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@loadTaskVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadTaskVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadTaskVariableIR * object = (const cPtr_loadTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadTaskVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mTaskVariableSet.addAssign_operation (object->mAttribute_mTaskName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 36)).add_operation (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 36))  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadTaskVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadTaskVariableIR.mSlotID,
                                                extensionMethod_loadTaskVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadTaskVariableIR_enterAccessibleEntities (defineExtensionMethod_loadTaskVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@storeVolatileIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeVolatileIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                 GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  GALGAS_string var_llvmType_878 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store volatile ").add_operation (var_llvmType_878, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (var_llvmType_878, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (" * inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (object->mAttribute_mAddress.getter_string (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (var_llvmType_878, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (object->mAttribute_mAddress.getter_hexString (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeVolatileIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                            extensionMethod_storeVolatileIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_llvmInstructionCode (defineExtensionMethod_storeVolatileIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@storeVolatileIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeVolatileIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeVolatileIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                                extensionMethod_storeVolatileIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_enterAccessibleEntities (defineExtensionMethod_storeVolatileIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@storeGlobalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  GALGAS_string var_llvmType_911 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 30)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_911.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (var_llvmType_911, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (function_llvmNameForGlobalVariable (object->mAttribute_mGlobalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeGlobalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                            extensionMethod_storeGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_llvmInstructionCode (defineExtensionMethod_storeGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@storeGlobalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                           GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVarName  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeGlobalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                                extensionMethod_storeGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_enterAccessibleEntities (defineExtensionMethod_storeGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@storeTaskVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeTaskVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeTaskVariableIR * object = (const cPtr_storeTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeTaskVariableIR) ;
  GALGAS_string var_llvmType_874 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_874.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (var_llvmType_874, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForTaskVariable (object->mAttribute_mTaskName, object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeTaskVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeTaskVariableIR.mSlotID,
                                            extensionMethod_storeTaskVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeTaskVariableIR_llvmInstructionCode (defineExtensionMethod_storeTaskVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@storeTaskVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeTaskVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeTaskVariableIR * object = (const cPtr_storeTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeTaskVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mTaskVariableSet.addAssign_operation (object->mAttribute_mTaskName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 39)).add_operation (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 39))  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeTaskVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeTaskVariableIR.mSlotID,
                                                extensionMethod_storeTaskVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeTaskVariableIR_enterAccessibleEntities (defineExtensionMethod_storeTaskVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@storeLocalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeLocalVariableIR * object = (const cPtr_storeLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeLocalVariableIR) ;
  GALGAS_string var_llvmType_835 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_835.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (var_llvmType_835, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mLocalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeLocalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                            extensionMethod_storeLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_llvmInstructionCode (defineExtensionMethod_storeLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@storeLocalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeLocalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                                extensionMethod_storeLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_enterAccessibleEntities (defineExtensionMethod_storeLocalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@loadStructureConstantIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadStructureConstantIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadStructureConstantIR * object = (const cPtr_loadStructureConstantIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadStructureConstantIR) ;
  GALGAS_string var_llvmType_734 = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_734.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (var_llvmType_734, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (object->mAttribute_mTypeName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (GALGAS_string (".init\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadStructureConstantIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadStructureConstantIR.mSlotID,
                                            extensionMethod_loadStructureConstantIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadStructureConstantIR_llvmInstructionCode (defineExtensionMethod_loadStructureConstantIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@loadStructureConstantIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadStructureConstantIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                             GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadStructureConstantIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadStructureConstantIR.mSlotID,
                                                extensionMethod_loadStructureConstantIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadStructureConstantIR_enterAccessibleEntities (defineExtensionMethod_loadStructureConstantIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@getElementPtrIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getElementPtrIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                 GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getElementPtrIR * object = (const cPtr_getElementPtrIR *) inObject ;
  macroValidSharedObject (object, cPtr_getElementPtrIR) ;
  GALGAS_string var_llvmType_907 = extensionGetter_type (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 28)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_907.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)).add_operation (var_llvmType_907, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)).add_operation (extensionGetter_llvmName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)) ;
  cEnumerator_elementPtrList enumerator_1126 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_1126.hasCurrentObject ()) {
    switch (enumerator_1126.current_mIndex (HERE).enumValue ()) {
    case GALGAS_getElementPtrIndexKind::kNotBuilt:
      break ;
    case GALGAS_getElementPtrIndexKind::kEnum_absolute:
      {
        const cEnumAssociatedValues_getElementPtrIndexKind_absolute * extractPtr_1203 = (const cEnumAssociatedValues_getElementPtrIndexKind_absolute *) (enumerator_1126.current_mIndex (HERE).unsafePointer ()) ;
        const GALGAS_uint extractedValue_index = extractPtr_1203->mAssociatedValue0 ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (extractedValue_index.getter_string (SOURCE_FILE ("intermediate-get-element-ptr.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 33)) ;
      }
      break ;
    case GALGAS_getElementPtrIndexKind::kEnum_indirect:
      {
        const cEnumAssociatedValues_getElementPtrIndexKind_indirect * extractPtr_1311 = (const cEnumAssociatedValues_getElementPtrIndexKind_indirect *) (enumerator_1126.current_mIndex (HERE).unsafePointer ()) ;
        const GALGAS_operandIR extractedValue_index = extractPtr_1311->mAssociatedValue0 ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (extractedValue_index.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 34)).add_operation (extensionGetter_llvmName (extractedValue_index.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 34)) ;
      }
      break ;
    }
    enumerator_1126.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ;"), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 37)) ;
  cEnumerator_elementPtrList enumerator_1382 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_1382.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_1382.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 39)) ;
    enumerator_1382.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getElementPtrIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getElementPtrIR.mSlotID,
                                            extensionMethod_getElementPtrIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getElementPtrIR_llvmInstructionCode (defineExtensionMethod_getElementPtrIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@getElementPtrIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getElementPtrIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                     GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                     GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getElementPtrIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getElementPtrIR.mSlotID,
                                                extensionMethod_getElementPtrIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getElementPtrIR_enterAccessibleEntities (defineExtensionMethod_getElementPtrIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@getElementPtrFromSelfIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getElementPtrFromSelfIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getElementPtrFromSelfIR * object = (const cPtr_getElementPtrFromSelfIR *) inObject ;
  macroValidSharedObject (object, cPtr_getElementPtrFromSelfIR) ;
  GALGAS_string var_llvmType_1466 = object->mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 43)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 44)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 44)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_1466.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 45)).add_operation (var_llvmType_1466, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 45)).add_operation (GALGAS_string (" * %self, i32 0"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 45)) ;
  cEnumerator_elementPtrList enumerator_1659 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_1659.hasCurrentObject ()) {
    switch (enumerator_1659.current_mIndex (HERE).enumValue ()) {
    case GALGAS_getElementPtrIndexKind::kNotBuilt:
      break ;
    case GALGAS_getElementPtrIndexKind::kEnum_absolute:
      {
        const cEnumAssociatedValues_getElementPtrIndexKind_absolute * extractPtr_1736 = (const cEnumAssociatedValues_getElementPtrIndexKind_absolute *) (enumerator_1659.current_mIndex (HERE).unsafePointer ()) ;
        const GALGAS_uint extractedValue_index = extractPtr_1736->mAssociatedValue0 ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (extractedValue_index.getter_string (SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 48)) ;
      }
      break ;
    case GALGAS_getElementPtrIndexKind::kEnum_indirect:
      {
        const cEnumAssociatedValues_getElementPtrIndexKind_indirect * extractPtr_1844 = (const cEnumAssociatedValues_getElementPtrIndexKind_indirect *) (enumerator_1659.current_mIndex (HERE).unsafePointer ()) ;
        const GALGAS_operandIR extractedValue_index = extractPtr_1844->mAssociatedValue0 ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (extractedValue_index.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 49)).add_operation (extensionGetter_llvmName (extractedValue_index.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 49)) ;
      }
      break ;
    }
    enumerator_1659.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ;"), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 52)) ;
  cEnumerator_elementPtrList enumerator_1915 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_1915.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_1915.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 54)) ;
    enumerator_1915.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getElementPtrFromSelfIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getElementPtrFromSelfIR.mSlotID,
                                            extensionMethod_getElementPtrFromSelfIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getElementPtrFromSelfIR_llvmInstructionCode (defineExtensionMethod_getElementPtrFromSelfIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@getElementPtrFromSelfIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getElementPtrFromSelfIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                             GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getElementPtrFromSelfIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getElementPtrFromSelfIR.mSlotID,
                                                extensionMethod_getElementPtrFromSelfIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getElementPtrFromSelfIR_enterAccessibleEntities (defineExtensionMethod_getElementPtrFromSelfIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@selectInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionIR * object = (const cPtr_selectInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)).add_operation (GALGAS_string (" = select "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(object->mAttribute_m_5F_if_5F_variable.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (extensionGetter_llvmName (object->mAttribute_m_5F_if_5F_variable.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(object->mAttribute_m_5F_then_5F_variable.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (extensionGetter_llvmName (object->mAttribute_m_5F_then_5F_variable.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(object->mAttribute_m_5F_else_5F_variable.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (extensionGetter_llvmName (object->mAttribute_m_5F_else_5F_variable.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_selectInstructionIR.mSlotID,
                                            extensionMethod_selectInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionIR_llvmInstructionCode (defineExtensionMethod_selectInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@selectInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_selectInstructionIR.mSlotID,
                                                extensionMethod_selectInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionIR_enterAccessibleEntities (defineExtensionMethod_selectInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@testArrayIndexIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testArrayIndexIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testArrayIndexIR * object = (const cPtr_testArrayIndexIR *) inObject ;
  macroValidSharedObject (object, cPtr_testArrayIndexIR) ;
  GALGAS_uint var_staticStringIndex_1080 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mErrorLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_lastPathComponent (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)), var_staticStringIndex_1080, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 28)) ;
  }
  GALGAS_bigint var_max_1135 ;
  GALGAS_bool var_isUnsigned_1160 ;
  GALGAS_bigint joker_1121 ; // Joker input parameter
  GALGAS_uint joker_1171 ; // Joker input parameter
  object->mAttribute_mIndex.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)).method_integer (joker_1121, var_max_1135, var_isUnsigned_1160, joker_1171, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)) ;
  const enumGalgasBool test_0 = var_isUnsigned_1160.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 34)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_testToZero_1257 = GALGAS_string ("%test.index.zero.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)) ;
    GALGAS_string var_testToZeroOk_1332 = GALGAS_string ("test.index.zero.ok.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)) ;
    GALGAS_string var_testToZeroFailure_1414 = GALGAS_string ("test.index.zero.fails.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 37)) ;
    ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 38)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToZero_1257, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (object->mAttribute_mIndex.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (extensionGetter_llvmName (object->mAttribute_mIndex.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToZero_1257, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroOk_1332, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroFailure_1414, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroFailure_1414.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_1080.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (object->mAttribute_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (function_panicCodeForNegativeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 46)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroOk_1332.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_max_1135.objectCompare (object->mAttribute_mSize)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_testToSize_2269 = GALGAS_string ("%test.index.size.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 52)) ;
    GALGAS_string var_testToSizeOk_2344 = GALGAS_string ("test.index.size.ok.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)) ;
    GALGAS_string var_testToSizeFailure_2426 = GALGAS_string ("test.index.size.fails.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToSize_2269, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)) ;
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = var_isUnsigned_1160.boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_string ("ult") ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string ("slt") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_2, inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 56)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (object->mAttribute_mIndex.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (extensionGetter_llvmName (object->mAttribute_mIndex.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (object->mAttribute_mSize.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToSize_2269, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeOk_2344, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeFailure_2426, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeFailure_2426.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_1080.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (object->mAttribute_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 64)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeOk_2344.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)) ;
  }
  ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testArrayIndexIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_testArrayIndexIR.mSlotID,
                                            extensionMethod_testArrayIndexIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testArrayIndexIR_llvmInstructionCode (defineExtensionMethod_testArrayIndexIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@testArrayIndexIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testArrayIndexIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                      GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                      GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testArrayIndexIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_testArrayIndexIR.mSlotID,
                                                extensionMethod_testArrayIndexIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testArrayIndexIR_enterAccessibleEntities (defineExtensionMethod_testArrayIndexIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@sourceLocationIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sourceLocationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sourceLocationIR * object = (const cPtr_sourceLocationIR *) inObject ;
  macroValidSharedObject (object, cPtr_sourceLocationIR) ;
  const enumGalgasBool test_0 = object->mAttribute_mSourceLocation.getter_isNowhere (SOURCE_FILE ("intermediate-comment-source-line.galgas", 19)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ;---------\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 20)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ;--------- ").add_operation (object->mAttribute_mSourceLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_string (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (object->mAttribute_mSourceLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_lastPathComponent (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sourceLocationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_sourceLocationIR.mSlotID,
                                            extensionMethod_sourceLocationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sourceLocationIR_llvmInstructionCode (defineExtensionMethod_sourceLocationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@sourceLocationIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sourceLocationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                      GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                      GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sourceLocationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_sourceLocationIR.mSlotID,
                                                extensionMethod_sourceLocationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sourceLocationIR_enterAccessibleEntities (defineExtensionMethod_sourceLocationIR_enterAccessibleEntities, NULL) ;

