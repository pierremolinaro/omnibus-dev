#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@incDecInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                         const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_variableCName ;
  GALGAS_variableKindIR var_variable ;
  {
  GALGAS_bool joker_3804_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3804_2 ; // Joker input parameter
  GALGAS_bool joker_3804_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mVarName, var_type, var_accessIsAllowed, var_variableCName, var_variable, joker_3804_3, joker_3804_2, joker_3804_1, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 89)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 97)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inContext.mAttribute_mTypeNameSetForIncDec.reader_hasKey (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102)).add_operation (GALGAS_string (" type does not handle incrementation/decrementation operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102)) ;
  }
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  switch (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 106)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_4 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 108)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_5 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 110)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_6 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 112)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_4471 = (const cEnumAssociatedValues_typeKind_integer *) (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 106)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_kMin = extractPtr_4471->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_kMax = extractPtr_4471->mAssociatedValue1 ;
      var_min = extractedValue_kMin ;
      var_max = extractedValue_kMax ;
    }
    break ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
    }
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      const enumGalgasBool test_7 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 121)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 121)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)) ;
      }
    }
    break ;
  }
  GALGAS_string var_comment = categoryReader_mangledName (var_variable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126)) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
    {
      var_comment.dotAssign_operation (GALGAS_string ("++")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      var_comment.dotAssign_operation (GALGAS_string ("--")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 131)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
    {
      var_comment.dotAssign_operation (GALGAS_string ("&++")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 133)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
      var_comment.dotAssign_operation (GALGAS_string ("&--")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
    }
    break ;
  }
  {
  categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, var_comment, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 137)) ;
  }
  GALGAS_operandIR var_variableValue ;
  categoryMethod_loadFromMemory (var_variable, var_type, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 139)) ;
  GALGAS_operandIR var_resultValue ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaries, var_resultValue, inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 146)) ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
    {
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultValue, var_type, var_variableValue, GALGAS_string ("add"), GALGAS_operandIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 149)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultValue, var_type, var_variableValue, GALGAS_string ("sub"), GALGAS_operandIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 162))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
    {
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultValue, var_type, var_variableValue, GALGAS_string ("add"), GALGAS_operandIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultValue, var_type, var_variableValue, GALGAS_string ("sub"), GALGAS_operandIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 178))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)) ;
      }
    }
    break ;
  }
  categoryMethod_storeInMemory (var_variable, var_resultValue, var_type, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 182)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                               categoryMethod_incDecInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_analyze (defineCategoryMethod_incDecInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModes,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 76)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 77)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_operandIR var_expressionResultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModes, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 80)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType = var_expressionType ;
  }
  {
  routine_checkAssignmentCompatibility (var_expressionType, var_targetType, object->mAttribute_mVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 98)) ;
  }
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName  COMMA_SOURCE_FILE ("instruction-var.galgas", 104)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 109)), var_targetVar, var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 111)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 112)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varDeclarationInstructionWithSimpleAssignmentIR::constructor_new (var_targetType, GALGAS_operandIR::constructor_llvmLocalObject (object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 118)), var_expressionResultValueName  COMMA_SOURCE_FILE ("instruction-var.galgas", 116))  COMMA_SOURCE_FILE ("instruction-var.galgas", 116)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionWithAssignmentAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                               categoryMethod_varInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_analyze (defineCategoryMethod_varInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@varInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                      const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset /* constinArgument_inModes */,
                                                      const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                      GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 136)) ;
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName  COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  {
  ioArgument_ioVariableMap.modifier_insertUndefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 143)), var_targetVar, var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 146)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varDeclarationIR::constructor_new (var_targetType, var_targetVar  COMMA_SOURCE_FILE ("instruction-var.galgas", 150))  COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                               categoryMethod_varInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_analyze (defineCategoryMethod_varInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@varDeclarationInstructionWithSimpleAssignmentIR llvmInstructionCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                                GALGAS_string & ioArgument_ioCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * object = (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionWithSimpleAssignmentIR) ;
  ioArgument_ioCode.dotAssign_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)).add_operation (categoryReader_string (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171))  COMMA_SOURCE_FILE ("instruction-var.galgas", 171)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_string (object->mAttribute_mSourceVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172))  COMMA_SOURCE_FILE ("instruction-var.galgas", 172)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR.mSlotID,
                                           categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode (defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@varDeclarationInstructionWithSimpleAssignmentIR enterAccessibleEntities'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                                    GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR.mSlotID,
                                               categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@varDeclarationIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioCode,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationIR * object = (const cPtr_varDeclarationIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationIR) ;
  ioArgument_ioCode.dotAssign_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 196)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 196)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 196)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 196))  COMMA_SOURCE_FILE ("instruction-var.galgas", 196)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_varDeclarationIR.mSlotID,
                                           categoryMethod_varDeclarationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationIR_llvmInstructionCode (defineCategoryMethod_varDeclarationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@varDeclarationIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationIR * object = (const cPtr_varDeclarationIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 202)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_varDeclarationIR.mSlotID,
                                               categoryMethod_varDeclarationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationIR_enterAccessibleEntities (defineCategoryMethod_varDeclarationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@letInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
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
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 77)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 78)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_operandIR var_resultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_inferredType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 81)) ;
  GALGAS_variableKindIR var_localConstant = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName  COMMA_SOURCE_FILE ("instruction-let.galgas", 96)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVarName, var_inferredType, GALGAS_bool (true), function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 101)), var_localConstant, var_inferredType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-let.galgas", 104)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 97)) ;
  }
  {
  categoryModifier_appendAlloca (ioArgument_ioInstructionGenerationList, object->mAttribute_mVarName.mAttribute_string, var_inferredType, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
  }
  categoryMethod_storeInMemory (var_localConstant, var_resultValueName, var_inferredType, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_letInstructionWithAssignmentAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                               categoryMethod_letInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_analyze (defineCategoryMethod_letInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@assignmentInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
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
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_bool joker_2609_6 ; // Joker input parameter
  GALGAS_string joker_2609_5 ; // Joker input parameter
  GALGAS_variableKindIR joker_2609_4 ; // Joker input parameter
  GALGAS_bool joker_2609_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2609_2 ; // Joker input parameter
  GALGAS_bool joker_2609_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2609_6, joker_2609_5, joker_2609_4, joker_2609_3, joker_2609_2, joker_2609_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
  }
  GALGAS_string var_comment = object->mAttribute_mTargetVarName.mAttribute_string ;
  cEnumerator_lstringlist enumerator_2709 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_2709.hasCurrentObject ()) {
    var_comment.dotAssign_operation (GALGAS_string (".").add_operation (function_mangledNameForProperty (enumerator_2709.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 65))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 65)) ;
    switch (var_targetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 66)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_0 (enumerator_2709.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 68)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_1 (enumerator_2709.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 70)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_2 (enumerator_2709.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a static string does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 72)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_3 (enumerator_2709.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("an enumeration does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 74)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        const cEnumAssociatedValues_typeKind_structure * extractPtr_3240 = (const cEnumAssociatedValues_typeKind_structure *) (var_targetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 66)).unsafePointer ()) ;
        const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_3240->mAssociatedValue0 ;
        extractedValue_propertyMap.method_searchKey (enumerator_2709.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        GALGAS_location location_4 (enumerator_2709.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an integer does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 78)) ;
      }
      break ;
    }
    enumerator_2709.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_operandIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
  var_comment.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_string (var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 96))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 96)) ;
  {
  routine_checkAssignmentCompatibility (var_expressionType, var_targetType, object->mAttribute_mTargetVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 97)) ;
  }
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_4139 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_4245_2 ; // Joker input parameter
  GALGAS_bool joker_4245_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVarName, joker_4139, var_accessIsAllowed, var_targetVar, var_targetVariableKind, var_isCopiable, joker_4245_2, joker_4245_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 103)) ;
  }
  const enumGalgasBool test_5 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 112)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location location_6 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_6, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 113)) ;
  }
  const enumGalgasBool test_7 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 115)).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_location location_8 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-assignment.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)) ;
  }
  {
  categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, var_comment, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 119)) ;
  }
  categoryMethod_storeInMemory (var_targetVariableKind, var_sourceValueName, var_targetType, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 120)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                               categoryMethod_assignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyze (defineCategoryMethod_assignmentInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@assertInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionAST_analyze (const cPtr_instructionAST * inObject,
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
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)) COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 51)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_operandIR var_expressionValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 55)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionType, var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 52)) ;
  const enumGalgasBool test_1 = var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 67)).reader_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 67)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 67)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 68)) ;
  }
  const enumGalgasBool test_2 = categoryReader_isStatic (var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 71)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 72)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mAttribute_mAssertInstructionLocation, var_instructionGenerationList, var_expressionValueName  COMMA_SOURCE_FILE ("instruction-assert.galgas", 76))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 76)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                               categoryMethod_assertInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_analyze (defineCategoryMethod_assertInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@assertInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioCode,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioCode, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 97)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("if (!").add_operation (categoryReader_string (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  raise_exception (20").add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).reader_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 100)).reader_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)).reader_string (SOURCE_FILE ("instruction-assert.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 102)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                           categoryMethod_assertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_llvmInstructionCode (defineCategoryMethod_assertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@assertInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                               categoryMethod_assertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_enterAccessibleEntities (defineCategoryMethod_assertInstructionIR_enterAccessibleEntities, NULL) ;

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
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionIR * object = (const cPtr_throwInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("raise_exception (").add_operation (categoryReader_string (object->mAttribute_mCode, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).reader_lastPathComponent (SOURCE_FILE ("instruction-throw.galgas", 95)).reader_utf_38_Representation (SOURCE_FILE ("instruction-throw.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 96)).reader_string (SOURCE_FILE ("instruction-throw.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 96)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 96))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)) ;
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
  GALGAS_bool joker_2921_6 ; // Joker input parameter
  GALGAS_string joker_2921_5 ; // Joker input parameter
  GALGAS_variableKindIR joker_2921_4 ; // Joker input parameter
  GALGAS_bool joker_2921_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2921_2 ; // Joker input parameter
  GALGAS_bool joker_2921_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2921_6, joker_2921_5, joker_2921_4, joker_2921_3, joker_2921_2, joker_2921_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 68)) ;
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
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3807 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3913_2 ; // Joker input parameter
  GALGAS_bool joker_3913_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVarName, joker_3807, var_accessIsAllowed, var_targetVar, var_targetVariableKind, var_isCopiable, joker_3913_2, joker_3913_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 94)) ;
  }
  const enumGalgasBool test_2 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 104)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap ;
  GALGAS_string var_generatedOperator ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
      var_generatedOperator = GALGAS_string ("&=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
      var_generatedOperator = GALGAS_string ("|=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
      var_generatedOperator = GALGAS_string ("^=") ;
    }
    break ;
  }
  GALGAS_unifiedTypeMap_2D_proxy joker_4603 ; // Joker input parameter
  categoryMethod_checkWith (var_operatorMap, var_targetType, var_rightExpressionType, object->mAttribute_mTargetVarName.mAttribute_location, joker_4603, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 120)) ;
  const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-operator-assign.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127)) ;
  }
  GALGAS_string var_comment ;
  GALGAS_string var_llvmOperator ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_comment = categoryReader_mangledName (var_targetVariableKind, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 134)).add_operation (GALGAS_string (" |= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 134)).add_operation (categoryReader_string (var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 134)) ;
      var_llvmOperator = GALGAS_string ("or") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_comment = categoryReader_mangledName (var_targetVariableKind, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 137)).add_operation (GALGAS_string (" &= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 137)).add_operation (categoryReader_string (var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 137)) ;
      var_llvmOperator = GALGAS_string ("and") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_comment = categoryReader_mangledName (var_targetVariableKind, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 140)).add_operation (GALGAS_string (" ^= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 140)).add_operation (categoryReader_string (var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 140)) ;
      var_llvmOperator = GALGAS_string ("xor") ;
    }
    break ;
  }
  {
  categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, var_comment, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 143)) ;
  }
  GALGAS_operandIR var_variableValueName ;
  categoryMethod_loadFromMemory (var_targetVariableKind, var_targetType, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 144)) ;
  GALGAS_operandIR var_newResultingValue ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaries, var_newResultingValue, inCompiler  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 150)) ;
  }
  {
  categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResultingValue, var_targetType, var_variableValueName, var_llvmOperator, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 151)) ;
  }
  categoryMethod_storeInMemory (var_targetVariableKind, var_newResultingValue, var_targetType, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)) ;
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
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (";--- if (").add_operation (categoryReader_string (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 192)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 192))  COMMA_SOURCE_FILE ("instruction-if.galgas", 192)) ;
  GALGAS_string var_labelTrue = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 193)).reader_string (SOURCE_FILE ("instruction-if.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 193)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 193)) ;
  GALGAS_string var_labelFalse = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 194)).reader_string (SOURCE_FILE ("instruction-if.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 194)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 194)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)).reader_string (SOURCE_FILE ("instruction-if.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br i1 ").add_operation (categoryReader_string (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).add_operation (var_labelTrue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).add_operation (var_labelFalse, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196))  COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelTrue.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198))  COMMA_SOURCE_FILE ("instruction-if.galgas", 198)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioCode, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200))  COMMA_SOURCE_FILE ("instruction-if.galgas", 200)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelFalse.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202))  COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioCode, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204))  COMMA_SOURCE_FILE ("instruction-if.galgas", 204)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206))  COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
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
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_5660 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_4918.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5660->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_isCopiable ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_registerBitSliceAccessMap joker_5200 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_variableAccess, var_parameterAccess, var_isCopiable, joker_5200, var_canBeUsedAsInputParameter, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)) ;
        }
        const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 136)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 137)) ;
        }
        const enumGalgasBool test_2 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used as input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 140)) ;
        }
        const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 142)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (extractedValue_name.reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4918.current_mEffectiveParameterKind (HERE), enumerator_4918.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_6675 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_4918.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_6675->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_6675->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
        GALGAS_operandIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, enumerator_4887.current_mType (HERE), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
        {
        routine_checkAssignmentCompatibility (var_expressionType, enumerator_4887.current_mType (HERE), extractedValue_endOfExp, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 162)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4918.current_mEffectiveParameterKind (HERE), enumerator_4918.current_mSelector (HERE), enumerator_4887.current_mType (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 168)), enumerator_4918.current_mSelector (HERE), enumerator_4887.current_mType (HERE), var_expressionResult  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_7266 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_4918.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7266->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_bool joker_6904_2 ; // Joker input parameter
        GALGAS_registerBitSliceAccessMap joker_6904_1 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_variableAccess, var_parameterAccess, joker_6904_2, joker_6904_1, var_canBeUsedAsInputParameter, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 170)) ;
        }
        const enumGalgasBool test_6 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 179)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("this variable cannot be used as output/input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 180)) ;
        }
        const enumGalgasBool test_8 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 182)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_location location_9 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 183)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4918.current_mEffectiveParameterKind (HERE), enumerator_4918.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 185)) ;
      }
      break ;
    }
    enumerator_4887.gotoNextObject () ;
    enumerator_4918.gotoNextObject () ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_procedureModeMap.reader_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 192)), object->mAttribute_mProcRoutineName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 190)) ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 195)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 195)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mProcRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this proc requires ").add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 196)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 197)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 197))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)) ;
  }else if (kBoolFalse == test_10) {
    cEnumerator_procedureSignature enumerator_7776 (var_procSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_7805 (var_parameterList, kEnumeration_up) ;
    while (enumerator_7776.hasCurrentObject () && enumerator_7805.hasCurrentObject ()) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_7776.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)).objectCompare (enumerator_7805.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_7805.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_7805.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)).add_operation (enumerator_7776.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_7776.current_mFormalArgumentPassingMode (HERE), enumerator_7776.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 204)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_7805.current_mEffectiveParameterPassingMode (HERE), enumerator_7805.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 205)) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_location location_15 (enumerator_7805.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_15, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207)) ;
      }
      enumerator_7776.gotoNextObject () ;
      enumerator_7805.gotoNextObject () ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (object->mAttribute_mProcRoutineName.mAttribute_string, var_procCallEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 212))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 212)) ;
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
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (";--- ").add_operation (function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  call void @").add_operation (function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 248)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 248))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 248)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_10028 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_10028.hasCurrentObject ()) {
    switch (enumerator_10028.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioCode.dotAssign_operation (categoryReader_llvmType (enumerator_10028.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252)).add_operation (categoryReader_string (enumerator_10028.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioCode.dotAssign_operation (categoryReader_llvmType (enumerator_10028.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)).add_operation (categoryReader_string (enumerator_10028.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioCode.dotAssign_operation (categoryReader_llvmType (enumerator_10028.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256)).add_operation (categoryReader_string (enumerator_10028.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256)) ;
      }
      break ;
    }
    if (enumerator_10028.hasNextObject ()) {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 259)) ;
    }
    enumerator_10028.gotoNextObject () ;
  }
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (")\n")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 261)) ;
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
  ioArgument_ioAccessibleEntities.mAttribute_mProcedureSet.addAssign_operation (object->mAttribute_mProcName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 267)) ;
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
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (";--- while (").add_operation (categoryReader_string (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 134)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 134))  COMMA_SOURCE_FILE ("instruction-while.galgas", 134)) ;
  GALGAS_string var_labelTest = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 135)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 135)) ;
  GALGAS_string var_labelLoop = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 136)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 136)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138))  COMMA_SOURCE_FILE ("instruction-while.galgas", 138)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelTest.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139))  COMMA_SOURCE_FILE ("instruction-while.galgas", 139)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioCode, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br i1 ").add_operation (categoryReader_string (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)).add_operation (var_labelLoop, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)).add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141))  COMMA_SOURCE_FILE ("instruction-while.galgas", 141)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelLoop.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 142))  COMMA_SOURCE_FILE ("instruction-while.galgas", 142)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mInstructionGenerationList, ioArgument_ioCode, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144))  COMMA_SOURCE_FILE ("instruction-while.galgas", 144)) ;
  ioArgument_ioCode.dotAssign_operation (var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145))  COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
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
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_commentIR * object = (const cPtr_commentIR *) inObject ;
  macroValidSharedObject (object, cPtr_commentIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (";--- ").add_operation (object->mAttribute_mComment, inCompiler COMMA_SOURCE_FILE ("intermediate-comment.galgas", 20)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment.galgas", 20))  COMMA_SOURCE_FILE ("intermediate-comment.galgas", 20)) ;
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
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_allocaConstantIR * object = (const cPtr_allocaConstantIR *) inObject ;
  macroValidSharedObject (object, cPtr_allocaConstantIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mVariableType, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 19)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  %").add_operation (function_mangledNameForLocalVariable (object->mAttribute_mLocalVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 20)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 20)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 20)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 20))  COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 20)) ;
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
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = (const cPtr_binaryOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 30)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)).add_operation (object->mAttribute_mOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 31)) ;
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
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mRegisterType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 23)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (object->mAttribute_mRegisterAddress.reader_string (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (object->mAttribute_mRegisterAddress.reader_hexString (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25))  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)) ;
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
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 31)) ;
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
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mVariableType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 23)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 24))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 24)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioCode.dotAssign_operation (GALGAS_string ("volatile ")  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)) ;
  }
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)).add_operation (function_mangledNameForGlobalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)) ;
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
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mVariableName  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 34)) ;
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
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadLocalVariableIR * object = (const cPtr_loadLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadLocalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mVariableType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 21)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 22)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 22))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 22)) ;
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)).add_operation (function_mangledNameForLocalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)) ;
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
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 23)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  store volatile ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 24)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 24)).add_operation (categoryReader_string (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 24)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 24)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 24)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 24)).add_operation (object->mAttribute_mAddress.reader_string (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25)).add_operation (object->mAttribute_mAddress.reader_hexString (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25))  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 24)) ;
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
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 31)) ;
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
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 23)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  store ")  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 24)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioCode.dotAssign_operation (GALGAS_string ("volatile ")  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 26)) ;
  }
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)).add_operation (categoryReader_string (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)).add_operation (function_mangledNameForGlobalVariable (object->mAttribute_mGlobalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28))  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)) ;
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
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVarName  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 34)) ;
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
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeLocalVariableIR * object = (const cPtr_storeLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeLocalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmType (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 21)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  store ")  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 22)) ;
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23)).add_operation (categoryReader_string (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23)).add_operation (function_mangledNameForLocalVariable (object->mAttribute_mLocalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23))  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 23)) ;
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

