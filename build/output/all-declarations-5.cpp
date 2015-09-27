#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@throwInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionAST * object = (const cPtr_throwInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 45)) COMMA_SOURCE_FILE ("instruction-throw.galgas", 45)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-throw.galgas", 49)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_operandIR var_result ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inContext.mAttribute_mExceptionCodeType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_unusedInstructionListIR, var_expressionType, var_result, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 50)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 65)).objectCompare (constinArgument_inContext.mAttribute_mExceptionCodeType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 65)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression type is ").add_operation (var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)).add_operation (GALGAS_string (", required type is "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)).add_operation (constinArgument_inContext.mAttribute_mExceptionCodeType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 66)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR.reader_length (SOURCE_FILE ("instruction-throw.galgas", 70)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = categoryReader_isStatic (var_result, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 70)).operator_not (SOURCE_FILE ("instruction-throw.galgas", 70)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression cannot be statically computed")  COMMA_SOURCE_FILE ("instruction-throw.galgas", 71)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-throw.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_throwInstructionIR::constructor_new (object->mAttribute_mThrowLocation, var_result  COMMA_SOURCE_FILE ("instruction-throw.galgas", 75))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 75)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_throwInstructionAST.mSlotID,
                               categoryMethod_throwInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionAST_analyze (defineCategoryMethod_throwInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@throwInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioCode,
                                                                   const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                   GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionIR * object = (const cPtr_throwInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("raise_exception (").add_operation (categoryReader_string (object->mAttribute_mCode, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 98)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 98)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 99)).reader_lastPathComponent (SOURCE_FILE ("instruction-throw.galgas", 99)).reader_utf_38_Representation (SOURCE_FILE ("instruction-throw.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 99)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 99)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 100)).reader_string (SOURCE_FILE ("instruction-throw.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 100)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 100))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 98)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                           categoryMethod_throwInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_llvmInstructionCode (defineCategoryMethod_throwInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@throwInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                       GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                               categoryMethod_throwInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_enterAccessibleEntities (defineCategoryMethod_throwInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@operatorAssignInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                 const GALGAS_receiverType constinArgument_inReceiverType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_stringset constinArgument_inModeSet,
                                                                 const GALGAS_bool constinArgument_inAllowExceptions,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionAST * object = (const cPtr_operatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_bool joker_2921_5 ; // Joker input parameter
  GALGAS_variableKindIR joker_2921_4 ; // Joker input parameter
  GALGAS_bool joker_2921_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2921_2 ; // Joker input parameter
  GALGAS_bool joker_2921_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2921_5, joker_2921_4, joker_2921_3, joker_2921_2, joker_2921_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 68)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightExpressionType ;
  GALGAS_operandIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_rightExpressionType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 74)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)).objectCompare (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("source expression type is '").add_operation (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)).add_operation (GALGAS_string ("', and is not compatible with target type '"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 91)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 91))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)) ;
  }
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3807 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3887_2 ; // Joker input parameter
  GALGAS_bool joker_3887_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVarName, joker_3807, var_accessIsAllowed, var_targetVariableKind, var_isCopiable, joker_3887_2, joker_3887_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 94)) ;
  }
  const enumGalgasBool test_2 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 102)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 103)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap ;
  GALGAS_string var_commentOperator ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
      var_commentOperator = GALGAS_string ("&=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
      var_commentOperator = GALGAS_string ("|=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
      var_commentOperator = GALGAS_string ("^=") ;
    }
    break ;
  }
  GALGAS_llvmBinaryOperation var_llvmOperator ;
  GALGAS_unifiedTypeMap_2D_proxy joker_4569 ; // Joker input parameter
  categoryMethod_checkWith (var_operatorMap, var_targetType, var_rightExpressionType, object->mAttribute_mTargetVarName.mAttribute_location, joker_4569, var_llvmOperator, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 119)) ;
  const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-operator-assign.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127)) ;
  }
  {
  categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, categoryReader_mangledName (var_targetVariableKind, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130)).add_operation (var_commentOperator, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130)).add_operation (categoryReader_string (var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130)) ;
  }
  GALGAS_operandIR var_variableValueName ;
  categoryMethod_loadFromMemory (var_targetVariableKind, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 131)) ;
  GALGAS_operandIR var_newResultingValue ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaries, var_newResultingValue, inCompiler  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 136)) ;
  }
  {
  categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResultingValue, var_targetType, var_variableValueName, var_llvmOperator, var_sourceValueName, object->mAttribute_mTargetVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 137)) ;
  }
  categoryMethod_storeInMemory (var_targetVariableKind, var_newResultingValue, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 145)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorAssignInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_operatorAssignInstructionAST.mSlotID,
                               categoryMethod_operatorAssignInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorAssignInstructionAST_analyze (defineCategoryMethod_operatorAssignInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@ifInstructionAST analyze'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                     const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                     const GALGAS_receiverType constinArgument_inReceiverType,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     const GALGAS_stringset constinArgument_inModeSet,
                                                     const GALGAS_bool constinArgument_inAllowExceptions,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_operandIR var_testResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 121)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_testExpressionType, var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 118)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 133)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134))  COMMA_SOURCE_FILE ("instruction-if.galgas", 134)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 141)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfThenInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_thenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 155)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfElseInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_elseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 156)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 168)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult, object->mAttribute_mTestExpressionEndLocation, var_thenInstructionGenerationList, var_elseInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-if.galgas", 170))  COMMA_SOURCE_FILE ("instruction-if.galgas", 170)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                               categoryMethod_ifInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_analyze (defineCategoryMethod_ifInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@ifInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioCode,
                                                                const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                GALGAS_stringset & ioArgument_ioIntrinsicsDeclarationSet,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (";--- if (").add_operation (categoryReader_string (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196))  COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
  GALGAS_string var_labelTrue = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).reader_string (SOURCE_FILE ("instruction-if.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)) ;
  GALGAS_string var_labelFalse = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)).reader_string (SOURCE_FILE ("instruction-if.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).reader_string (SOURCE_FILE ("instruction-if.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br i1 ").add_operation (categoryReader_string (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (var_labelTrue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (var_labelFalse, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200))  COMMA_SOURCE_FILE ("instruction-if.galgas", 200)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelTrue.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202))  COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204))  COMMA_SOURCE_FILE ("instruction-if.galgas", 204)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelFalse.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206))  COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208))  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210))  COMMA_SOURCE_FILE ("instruction-if.galgas", 210)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                           categoryMethod_ifInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_llvmInstructionCode (defineCategoryMethod_ifInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@ifInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                               categoryMethod_ifInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_enterAccessibleEntities (defineCategoryMethod_ifInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@procCallInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                           const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                           const GALGAS_receiverType constinArgument_inReceiverType,
                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                           const GALGAS_stringset constinArgument_inModeSet,
                                                           const GALGAS_bool constinArgument_inAllowExceptions,
                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                           GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_string var_procMangledName = object->mAttribute_mProcRoutineName.mAttribute_string ;
  cEnumerator_procEffectiveParameterListAST enumerator_4042 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4042.hasCurrentObject ()) {
    switch (enumerator_4042.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 99)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 103)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_4042.current_mSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105)) ;
    enumerator_4042.gotoNextObject () ;
  }
  GALGAS_modeMap var_procedureModeMap ;
  GALGAS_procedureSignature var_procSignature ;
  GALGAS_bool joker_4435 ; // Joker input parameter
  GALGAS_bool joker_4511 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 109)), joker_4435, var_procedureModeMap, var_procSignature, joker_4511, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 108)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addEdge (constinArgument_inRoutineNameForInvocationGraph, GALGAS_lstring::constructor_new (GALGAS_string ("proc ").add_operation (var_procMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)), object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 116)) ;
  }
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 121)) ;
  GALGAS_procCallEffectiveParameterListIR var_procCallEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 122)) ;
  cEnumerator_procedureSignature enumerator_4887 (var_procSignature, kEnumeration_up) ;
  cEnumerator_procEffectiveParameterListAST enumerator_4918 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4887.hasCurrentObject () && enumerator_4918.hasCurrentObject ()) {
    switch (enumerator_4918.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_5761 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_4918.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5761->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_isCopiable ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_registerBitSliceAccessMap joker_5165 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_parameterAccess, var_isCopiable, joker_5165, var_canBeUsedAsInputParameter, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)) ;
        }
        const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 135)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 136)) ;
        }
        const enumGalgasBool test_2 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 138)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used as input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 139)) ;
        }
        const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 141)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (extractedValue_name.reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 142)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 142))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 142)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4918.current_mEffectiveParameterKind (HERE), enumerator_4918.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 145)), enumerator_4918.current_mSelector (HERE), var_type, GALGAS_operandIR::constructor_llvmLocalObject (function_mangledNameForLocalVariable (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_6691 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_4918.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_6691->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_6691->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
        GALGAS_operandIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, enumerator_4887.current_mType (HERE), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 147)) ;
        {
        routine_checkAssignmentCompatibility (var_expressionType, enumerator_4887.current_mType (HERE), extractedValue_endOfExp, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 161)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4918.current_mEffectiveParameterKind (HERE), enumerator_4918.current_mSelector (HERE), enumerator_4887.current_mType (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 166)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 167)), enumerator_4918.current_mSelector (HERE), enumerator_4887.current_mType (HERE), var_expressionResult  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_7389 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_4918.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7389->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_bool joker_6885_2 ; // Joker input parameter
        GALGAS_registerBitSliceAccessMap joker_6885_1 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_parameterAccess, joker_6885_2, joker_6885_1, var_canBeUsedAsInputParameter, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 169)) ;
        }
        const enumGalgasBool test_6 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 177)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("this variable cannot be used as output/input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 178)) ;
        }
        const enumGalgasBool test_8 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 180)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_location location_9 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 181)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4918.current_mEffectiveParameterKind (HERE), enumerator_4918.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 183)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 184)), enumerator_4918.current_mSelector (HERE), var_type, GALGAS_operandIR::constructor_llvmLocalObject (function_mangledNameForLocalVariable (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 184))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 184))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 184)) ;
      }
      break ;
    }
    enumerator_4887.gotoNextObject () ;
    enumerator_4918.gotoNextObject () ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_procedureModeMap.reader_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 190)), object->mAttribute_mProcRoutineName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 188)) ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 193)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 193)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mProcRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this proc requires ").add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 194)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194)).add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 195)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 195))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194)) ;
  }else if (kBoolFalse == test_10) {
    cEnumerator_procedureSignature enumerator_7808 (var_procSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_7837 (var_parameterList, kEnumeration_up) ;
    while (enumerator_7808.hasCurrentObject () && enumerator_7837.hasCurrentObject ()) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_7808.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 198)).objectCompare (enumerator_7837.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 198)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_7837.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_7837.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 199)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 199)).add_operation (enumerator_7808.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 199)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_7808.current_mFormalArgumentPassingMode (HERE), enumerator_7808.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_7837.current_mEffectiveParameterPassingMode (HERE), enumerator_7837.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 203)) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_location location_15 (enumerator_7837.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_15, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 205)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 205))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 205)) ;
      }
      enumerator_7808.gotoNextObject () ;
      enumerator_7837.gotoNextObject () ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (object->mAttribute_mProcRoutineName.mAttribute_string, var_procCallEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 210))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 210)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                               categoryMethod_procCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionAST_analyze (defineCategoryMethod_procCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@procCallInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioCode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (";--- call ").add_operation (function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 249)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 249))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 249)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  call void @").add_operation (function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 250)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 250))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 250)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_10169 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_10169.hasCurrentObject ()) {
    switch (enumerator_10169.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioCode.dotAssign_operation (categoryReader_llvmType (enumerator_10169.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)).add_operation (categoryReader_string (enumerator_10169.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioCode.dotAssign_operation (categoryReader_llvmType (enumerator_10169.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256)).add_operation (categoryReader_string (enumerator_10169.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioCode.dotAssign_operation (categoryReader_llvmType (enumerator_10169.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 258)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 258)).add_operation (categoryReader_string (enumerator_10169.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 258))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 258)) ;
      }
      break ;
    }
    if (enumerator_10169.hasNextObject ()) {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 261)) ;
    }
    enumerator_10169.gotoNextObject () ;
  }
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (")\n")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 263)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                           categoryMethod_procCallInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_llvmInstructionCode (defineCategoryMethod_procCallInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@procCallInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mProcedureSet.addAssign_operation (object->mAttribute_mProcName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 269)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                               categoryMethod_procCallInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_enterAccessibleEntities (defineCategoryMethod_procCallInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@whileInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 73)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_operandIR var_testValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 77)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_testInstructionGenerationList, var_testExpressionType, var_testValueName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 74)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90))  COMMA_SOURCE_FILE ("instruction-while.galgas", 90)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_testValueName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 92)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-while.galgas", 93)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 96)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
  }
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 98)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 113)), var_testInstructionGenerationList, var_testValueName, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-while.galgas", 112))  COMMA_SOURCE_FILE ("instruction-while.galgas", 112)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                               categoryMethod_whileInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_analyze (defineCategoryMethod_whileInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@whileInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioCode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_stringset & ioArgument_ioIntrinsicsDeclarationSet,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (";--- while (").add_operation (categoryReader_string (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138))  COMMA_SOURCE_FILE ("instruction-while.galgas", 138)) ;
  GALGAS_string var_labelTest = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)) ;
  GALGAS_string var_labelLoop = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 142)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 142))  COMMA_SOURCE_FILE ("instruction-while.galgas", 142)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelTest.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143))  COMMA_SOURCE_FILE ("instruction-while.galgas", 143)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br i1 ").add_operation (categoryReader_string (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (var_labelLoop, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145))  COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelLoop.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146))  COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mInstructionGenerationList, ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148))  COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149))  COMMA_SOURCE_FILE ("instruction-while.galgas", 149)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                           categoryMethod_whileInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineCategoryMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@whileInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                               categoryMethod_whileInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_enterAccessibleEntities (defineCategoryMethod_whileInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@commentIR enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_commentIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                              GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_commentIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_commentIR.mSlotID,
                                               categoryMethod_commentIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_commentIR_enterAccessibleEntities (defineCategoryMethod_commentIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@commentIR llvmInstructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_commentIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                          GALGAS_string & ioArgument_ioCode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_commentIR * object = (const cPtr_commentIR *) inObject ;
  macroValidSharedObject (object, cPtr_commentIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (";--- ").add_operation (object->mAttribute_mComment, inCompiler COMMA_SOURCE_FILE ("intermediate-comment.galgas", 24)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment.galgas", 24))  COMMA_SOURCE_FILE ("intermediate-comment.galgas", 24)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_commentIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_commentIR.mSlotID,
                                           categoryMethod_commentIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_commentIR_llvmInstructionCode (defineCategoryMethod_commentIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@allocaConstantIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_allocaConstantIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioCode,
                                                                 const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                 GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_allocaConstantIR * object = (const cPtr_allocaConstantIR *) inObject ;
  macroValidSharedObject (object, cPtr_allocaConstantIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mVariableType, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 23)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  %").add_operation (function_mangledNameForLocalVariable (object->mAttribute_mLocalVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24))  COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_allocaConstantIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_allocaConstantIR.mSlotID,
                                           categoryMethod_allocaConstantIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_allocaConstantIR_llvmInstructionCode (defineCategoryMethod_allocaConstantIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@allocaConstantIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_allocaConstantIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                     GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_allocaConstantIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_allocaConstantIR.mSlotID,
                                               categoryMethod_allocaConstantIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_allocaConstantIR_enterAccessibleEntities (defineCategoryMethod_allocaConstantIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@binaryOperationIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                      GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                               categoryMethod_binaryOperationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterAccessibleEntities (defineCategoryMethod_binaryOperationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@binaryOperationIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioCode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_stringset & ioArgument_ioIntrinsicsDeclarationSet,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = (const cPtr_binaryOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 103)) ;
  switch (object->mAttribute_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      const GALGAS_binaryOperationIR temp_0 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_0.ptr (), GALGAS_string ("uadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      const GALGAS_binaryOperationIR temp_1 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_1.ptr (), GALGAS_string ("sadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      const GALGAS_binaryOperationIR temp_2 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_2.ptr (), GALGAS_string ("usub"), GALGAS_uint ((uint32_t) 11U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      const GALGAS_binaryOperationIR temp_3 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_3.ptr (), GALGAS_string ("ssub"), GALGAS_uint ((uint32_t) 11U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      const GALGAS_binaryOperationIR temp_4 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_4.ptr (), GALGAS_string ("umul"), GALGAS_uint ((uint32_t) 12U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 152)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      const GALGAS_binaryOperationIR temp_5 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_5.ptr (), GALGAS_string ("smul"), GALGAS_uint ((uint32_t) 12U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 160)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      const GALGAS_binaryOperationIR temp_6 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_6.ptr (), GALGAS_string ("udiv"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 168)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      const GALGAS_binaryOperationIR temp_7 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_7.ptr (), GALGAS_string ("sdiv"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 176)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      const GALGAS_binaryOperationIR temp_8 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_8.ptr (), GALGAS_string ("urem"), GALGAS_uint ((uint32_t) 14U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 184)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      const GALGAS_binaryOperationIR temp_9 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_9.ptr (), GALGAS_string ("srem"), GALGAS_uint ((uint32_t) 14U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 192)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                           categoryMethod_binaryOperationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_llvmInstructionCode (defineCategoryMethod_binaryOperationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@loadRegisterIR llvmInstructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadRegisterIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                               GALGAS_string & ioArgument_ioCode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mRegisterType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (object->mAttribute_mRegisterAddress.reader_string (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (object->mAttribute_mRegisterAddress.reader_hexString (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29))  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadRegisterIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                           categoryMethod_loadRegisterIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_llvmInstructionCode (defineCategoryMethod_loadRegisterIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@loadRegisterIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadRegisterIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 35)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadRegisterIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                               categoryMethod_loadRegisterIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_enterAccessibleEntities (defineCategoryMethod_loadRegisterIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@loadGlobalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioCode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mVariableType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 27)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioCode.dotAssign_operation (GALGAS_string ("volatile ")  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)) ;
  }
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)).add_operation (function_mangledNameForGlobalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadGlobalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                           categoryMethod_loadGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_llvmInstructionCode (defineCategoryMethod_loadGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@loadGlobalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mVariableName  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 38)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadGlobalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                               categoryMethod_loadGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_enterAccessibleEntities (defineCategoryMethod_loadGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@loadLocalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioCode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadLocalVariableIR * object = (const cPtr_loadLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadLocalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mVariableType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)) ;
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)).add_operation (function_mangledNameForLocalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadLocalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                           categoryMethod_loadLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_llvmInstructionCode (defineCategoryMethod_loadLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@loadLocalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                        GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadLocalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                               categoryMethod_loadLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_enterAccessibleEntities (defineCategoryMethod_loadLocalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@storeVolatileIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeVolatileIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioCode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  store volatile ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (categoryReader_string (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (object->mAttribute_mAddress.reader_string (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (object->mAttribute_mAddress.reader_hexString (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29))  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeVolatileIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                           categoryMethod_storeVolatileIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_llvmInstructionCode (defineCategoryMethod_storeVolatileIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@storeVolatileIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeVolatileIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 35)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeVolatileIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                               categoryMethod_storeVolatileIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_enterAccessibleEntities (defineCategoryMethod_storeVolatileIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@storeGlobalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioCode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 27)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  store ")  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioCode.dotAssign_operation (GALGAS_string ("volatile ")  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 30)) ;
  }
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (categoryReader_string (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (function_mangledNameForGlobalVariable (object->mAttribute_mGlobalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32))  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeGlobalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                           categoryMethod_storeGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_llvmInstructionCode (defineCategoryMethod_storeGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@storeGlobalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVarName  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 38)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeGlobalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                               categoryMethod_storeGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_enterAccessibleEntities (defineCategoryMethod_storeGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@storeLocalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioCode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeLocalVariableIR * object = (const cPtr_storeLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeLocalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 25)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  store ")  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)) ;
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (categoryReader_string (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (function_mangledNameForLocalVariable (object->mAttribute_mLocalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27))  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeLocalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                           categoryMethod_storeLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_llvmInstructionCode (defineCategoryMethod_storeLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@storeLocalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeLocalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                               categoryMethod_storeLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_enterAccessibleEntities (defineCategoryMethod_storeLocalVariableIR_enterAccessibleEntities, NULL) ;

