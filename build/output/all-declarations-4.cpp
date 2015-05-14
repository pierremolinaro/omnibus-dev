#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalStringInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                           const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
                                                                           GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                           GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_string var_literalStringName ;
  const enumGalgasBool test_0 = ioArgument_ioGlobalLiteralStringMap.reader_hasKey (object->mAttribute_mLiteralString.mAttribute_string COMMA_SOURCE_FILE ("expression-literal-string.galgas", 50)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGlobalLiteralStringMap.method_searchKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)) ;
  }else if (kBoolFalse == test_0) {
    var_literalStringName = function_literalStringPrefix (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)).add_operation (ioArgument_ioGlobalLiteralStringMap.reader_count (SOURCE_FILE ("expression-literal-string.galgas", 53)).reader_string (SOURCE_FILE ("expression-literal-string.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)) ;
    {
    ioArgument_ioGlobalLiteralStringMap.modifier_insertKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 54)) ;
    }
  }
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)).reader_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)) ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalString (object->mAttribute_mLiteralString.mAttribute_string, var_literalStringName  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                         categoryMethod_literalStringInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpression (defineCategoryMethod_literalStringInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@varInExpressionAST addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mSourceVarName COMMA_SOURCE_FILE ("expression-var.galgas", 30)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                            categoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@varInExpressionAST analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 const GALGAS_stringset constinArgument_inModeSet,
                                                                 const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                 GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
                                                                 GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                 GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_sourceVarType ;
  GALGAS_stringset var_varModeSet ;
  GALGAS_string var_varAccess ;
  GALGAS_variableKindIR var_variable ;
  {
  GALGAS_bool joker_2760 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadAccess (object->mAttribute_mSourceVarName, var_sourceVarType, var_varModeSet, var_varAccess, var_variable, joker_2760, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 51)) ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_varModeSet, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 60)) ;
  }
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_sourceVarType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 66)) ;
  outArgument_outResultValueName = var_variable ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                         categoryMethod_varInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeExpression (defineCategoryMethod_varInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@functionCallInExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                             const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                             GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                                            categoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@functionCallInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                          GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                          GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallInExpressionAST * object = (const cPtr_functionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallInExpressionAST) ;
  GALGAS_modeMap var_functionModeSet ;
  GALGAS_funcSignature var_formalParameterList ;
  constinArgument_inContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionVarName, var_functionModeSet, var_formalParameterList, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 66)) ;
  {
  routine_checkMode (constinArgument_inModeSet, var_functionModeSet.reader_keySet (SOURCE_FILE ("expression-func-call.galgas", 75)), object->mAttribute_mFunctionVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 73)) ;
  }
  GALGAS_variableListIR var_variableList = GALGAS_variableListIR::constructor_emptyList (SOURCE_FILE ("expression-func-call.galgas", 79)) ;
  GALGAS_string var_s = function_mangledNameForFunction (object->mAttribute_mFunctionVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 80)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 80)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 81)).objectCompare (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 81)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this function declares ").add_operation (var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 82)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 82)).add_operation (GALGAS_string (" formal parameters, the call names "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 82)).add_operation (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 83)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 83)).add_operation (GALGAS_string (" effective arguments"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 83))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 82)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_funcSignature enumerator_3740 (var_formalParameterList, kEnumeration_up) ;
    cEnumerator_functionCallEffectiveParameterList enumerator_3766 (object->mAttribute_mParameterList, kEnumeration_up) ;
    while (enumerator_3740.hasCurrentObject () && enumerator_3766.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_3766.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (enumerator_3740.current (HERE).mAttribute_mFormalSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s = GALGAS_string ("!") ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_3740.current (HERE).mAttribute_mFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_s.dotAssign_operation (enumerator_3740.current (HERE).mAttribute_mFormalSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 90))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 90)) ;
        }
        GALGAS_location location_4 (enumerator_3766.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("required selector: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 92))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 92)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_argumentExpressionType ;
      GALGAS_variableKindIR var_resultValueName ;
      callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_3766.current (HERE).mAttribute_mExpression.ptr (), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("expression-func-call.galgas", 95)), enumerator_3740.current (HERE).mAttribute_mArgumentType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_argumentExpressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 94)) ;
      var_variableList.addAssign_operation (var_resultValueName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 107)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 108)).objectCompare (enumerator_3740.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 108)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (enumerator_3766.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("the actual parameter has the ").add_operation (var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 109)).add_operation (GALGAS_string (", but the formal argument has the "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 109)).add_operation (enumerator_3740.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 110)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 110))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 109)) ;
      }
      if (enumerator_3740.hasNextObject () && enumerator_3766.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 113)) ;
      }
      enumerator_3740.gotoNextObject () ;
      enumerator_3766.gotoNextObject () ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 116)) ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaryIndex, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 118)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (outArgument_outExpressionType, object->mAttribute_mFunctionVarName.mAttribute_string, outArgument_outResultValueName, var_variableList  COMMA_SOURCE_FILE ("expression-func-call.galgas", 120))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 120)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                         categoryMethod_functionCallInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_analyzeExpression (defineCategoryMethod_functionCallInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category reader '@functionCallIR instructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_functionCallIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)) ;
  result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTempConstantTarget, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 141)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 141))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 141)) ;
  result_outCode.dotAssign_operation (function_mangledNameForFunction (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 142)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 142))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 142)) ;
  cEnumerator_variableListIR enumerator_5890 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_5890.hasCurrentObject ()) {
    result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_5890.current_mVar (HERE), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 144))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 144)) ;
    if (enumerator_5890.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 145)) ;
    }
    enumerator_5890.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 147)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_functionCallIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                       categoryReader_functionCallIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_functionCallIR_instructionCode (defineCategoryReader_functionCallIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@functionCallIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mFunctionSet.addAssign_operation (object->mAttribute_mFunctionName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 153)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTempConstantTarget, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 154)) ;
  cEnumerator_variableListIR enumerator_6367 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_6367.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_6367.current_mVar (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 156)) ;
    enumerator_6367.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                               categoryMethod_functionCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallIR_enterAccessibleEntities (defineCategoryMethod_functionCallIR_enterAccessibleEntities, NULL) ;

