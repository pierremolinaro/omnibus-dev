#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'guardSemanticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_guardSemanticAnalysis (const GALGAS_PLMType constinArgument_inSelfType,
                                    const GALGAS_lstring constinArgument_inRoutineName,
                                    const GALGAS_routineFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                    const GALGAS_guardKind constinArgument_inGuardKind,
                                    const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                    const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                    const GALGAS_bool constinArgument_inWarnIfUnused,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 169)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (extensionGetter_key (constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 169)) ;
  }
  GALGAS_lstring var_guardMangledName_6127 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 168)) ;
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_guardMangledName_6127.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 174)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 174)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_guardMangledName_6127, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
    }
  }
  GALGAS_unifiedSymbolMapEx var_variableMap_6714 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6774 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 183)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 185)), var_variableMap_6714, var_universalMap_6774, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_6836 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 189)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_6895 ;
  GALGAS_allocaList var_allocaList_6920 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 191)) ;
  GALGAS_instructionListIR var_instructionGenerationList_6972 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  switch (constinArgument_inGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_7075 = GALGAS_lstring::constructor_new (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
      GALGAS_PLMType var_resultType_7157 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)) ;
      var_allocaList_6920.addAssign_operation (var_resultVarName_7075.getter_string (HERE), extensionGetter_llvmTypeName (var_resultType_7157, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
      {
      var_universalMap_6774.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_7334 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6774.ptr () ;
      callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7334, var_resultVarName_7075, GALGAS_objectIR::constructor_localVariableReference (var_resultType_7157, var_resultVarName_7075  COMMA_SOURCE_FILE ("declaration-guard.galgas", 201)), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 202)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 199)) ;
      }
      {
      var_variableMap_6714.setter_insertOutputFormalArgument (var_resultVarName_7075, var_resultType_7157, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_resultType_7157, var_resultVarName_7075  COMMA_SOURCE_FILE ("declaration-guard.galgas", 209)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 205)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6714, var_universalMap_6774, var_formalArguments_6836, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 214)) ;
      }
      var_convenienceGuardGenerationIR_6895 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 221)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6127, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 229)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6714, var_universalMap_6774, var_allocaList_6920, var_instructionGenerationList_6972, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 223)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_9820 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_9820->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6714, var_universalMap_6774, var_formalArguments_6836, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 239)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, var_guardMangledName_6127, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 251)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6714, var_universalMap_6774, var_convenienceGuardGenerationIR_6895, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 247)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6127, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 265)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6714, var_universalMap_6774, var_allocaList_6920, var_instructionGenerationList_6972, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 259)) ;
    }
    break ;
  }
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6774.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 276)) ;
  var_variableMap_6714.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 277)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR.setter_insertKey (var_guardMangledName_6127, var_formalArguments_6836, constinArgument_inSelfType, var_convenienceGuardGenerationIR_6895, var_allocaList_6920, var_instructionGenerationList_6972, constinArgument_inWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 280)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@simpleCallInstructionAST baseGuardAnalyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                       const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       const GALGAS_mode /* constinArgument_inMode */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       GALGAS_unifiedSymbolMapEx & /* ioArgument_ioVariableMap */,
                                                                       GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                       GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_simpleCallInstructionAST * object = (const cPtr_simpleCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_simpleCallInstructionAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mSandAloneRoutineName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 317)), GALGAS_string ("NOT HANDLED YET"), fixItArray0  COMMA_SOURCE_FILE ("declaration-guard.galgas", 317)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_simpleCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_simpleCallInstructionAST.mSlotID,
                                         extensionMethod_simpleCallInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_simpleCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_simpleCallInstructionAST_baseGuardAnalyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@complexCallInstructionAST baseGuardAnalyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                        const GALGAS_PLMType constinArgument_inSelfType,
                                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                                        const GALGAS_mode constinArgument_inMode,
                                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                        GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                        GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallInstructionAST * object = (const cPtr_complexCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_12403 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 333)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_12464 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 334)) ;
  GALGAS_objectIR var_currentObject_13029 ;
  GALGAS_string var_globalVariableReceiverName_13100 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("declaration-guard.galgas", 337)), GALGAS_bool (false), GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 342)), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12403, var_baseGuardInstructionGenerationList_12464, var_currentObject_13029, var_globalVariableReceiverName_13100, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 335)) ;
  const enumGalgasBool test_0 = var_currentObject_13029.getter_isPossibleFunction (SOURCE_FILE ("declaration-guard.galgas", 353)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 353)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-guard.galgas", 354)), GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 354)) ;
    outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_objectIR var_receiver_13324 ;
    GALGAS_lstring var_functionName_13355 ;
    var_currentObject_13029.method_possibleFunction (var_receiver_13324, var_functionName_13355, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 356)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14023 ;
    GALGAS_calleeKindIR var_routineKind_14079 ;
    GALGAS_lstring var_functionMangledName_14138 ;
    GALGAS_lstring var_functionNameForGeneration_14216 ;
    GALGAS_PLMType var_returnedType_14260 ;
    {
    routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, GALGAS_bool (false), GALGAS_bool (true), var_receiver_13324, var_functionName_13355, object->mProperty_mArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12403, var_baseGuardInstructionGenerationList_12464, var_effectiveParameterListIR_14023, var_routineKind_14079, var_functionMangledName_14138, var_functionNameForGeneration_14216, var_returnedType_14260, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 357)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedType_14260.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 379)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_13355.getter_location (SOURCE_FILE ("declaration-guard.galgas", 380)), GALGAS_string ("<< internal guard error >>"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 380)) ;
    }
    outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_12403, var_baseGuardInstructionGenerationList_12464, var_functionMangledName_14138.getter_string (HERE), var_effectiveParameterListIR_14023  COMMA_SOURCE_FILE ("declaration-guard.galgas", 383)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_complexCallInstructionAST.mSlotID,
                                         extensionMethod_complexCallInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_complexCallInstructionAST_baseGuardAnalyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@convertExpressionAST solveEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                GALGAS_expressionSE & outArgument_outExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_expressionSE var_expression_1529 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_1529, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 29)) ;
  outArgument_outExpression = GALGAS_convertExpressionSE::constructor_new (var_expression_1529, object->mProperty_mTypeName, object->mProperty_mEndOfExpression  COMMA_SOURCE_FILE ("expression-convert.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                      extensionMethod_convertExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_solveEntities (defineExtensionMethod_convertExpressionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 70)) ;
  GALGAS_lstring var_typeName_3171 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 71)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3171 COMMA_SOURCE_FILE ("expression-convert.galgas", 72)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 80)) ;
  GALGAS_lstring var_typeName_3815 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 81)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3815 COMMA_SOURCE_FILE ("expression-convert.galgas", 82)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@convertExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_5562 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5562, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
  GALGAS_objectIR var_expressionResult_5723 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5562, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 123)), var_expressionResult_5723, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 127)).operator_not (SOURCE_FILE ("expression-convert.galgas", 127)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 128)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 128)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 128)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 128)) ;
  }
  GALGAS_PLMType var_resultType_5928 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 131)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 131)) ;
  const enumGalgasBool test_2 = var_resultType_5928.getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 133)).operator_not (SOURCE_FILE ("expression-convert.galgas", 133)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 134)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 134)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_type (var_expressionResult_5723, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 135)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 135)).operator_not (SOURCE_FILE ("expression-convert.galgas", 135)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 136)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_6323 ;
      GALGAS_bigint var_maxSource_6342 ;
      GALGAS_bool joker_6344_3 ; // Joker input parameter
      GALGAS_uint joker_6344_2 ; // Joker input parameter
      GALGAS_string joker_6344_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_5723, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 138)).method_integer (var_minSource_6323, var_maxSource_6342, joker_6344_3, joker_6344_2, joker_6344_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 138)) ;
      GALGAS_bigint var_minTarget_6390 ;
      GALGAS_bigint var_maxTarget_6409 ;
      GALGAS_bool joker_6411_3 ; // Joker input parameter
      GALGAS_uint joker_6411_2 ; // Joker input parameter
      GALGAS_string joker_6411_1 ; // Joker input parameter
      var_resultType_5928.method_integer (var_minTarget_6390, var_maxTarget_6409, joker_6411_3, joker_6411_2, joker_6411_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 139)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_6390.objectCompare (var_minSource_6323)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_6409.objectCompare (var_maxSource_6342)) ;
      }
      GALGAS_bool var_alwaysPossible_6437 = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible_6437.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 142)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-convert.galgas", 142)) ;
      }
      {
      routine_getNewTempVariable (var_resultType_5928, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 144)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_5723  COMMA_SOURCE_FILE ("expression-convert.galgas", 146))  COMMA_SOURCE_FILE ("expression-convert.galgas", 146)) ;
      }else if (kBoolFalse == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_5723, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 151))  COMMA_SOURCE_FILE ("expression-convert.galgas", 151)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                          extensionMethod_convertExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_analyzeExpression (defineExtensionMethod_convertExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@convertInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                                extensionMethod_convertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_enterAccessibleEntities (defineExtensionMethod_convertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@convertInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  GALGAS_uint var_staticStringIndex_8378 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 188)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 188)), var_staticStringIndex_8378, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  }
  GALGAS_string var_lbl_8392 = object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)) ;
  GALGAS_string var_convertMinOkLabel_8453 = GALGAS_string ("min.").add_operation (var_lbl_8392, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  GALGAS_string var_convertMaxOkLabel_8500 = GALGAS_string ("max.").add_operation (var_lbl_8392, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 193)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  GALGAS_string var_convertFailLabel_8546 = GALGAS_string ("fail.").add_operation (var_lbl_8392, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  GALGAS_string var_compareMinVar_8583 = GALGAS_string ("cmp.").add_operation (var_lbl_8392, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
  GALGAS_string var_compareMaxVar_8631 = GALGAS_string ("cmp.").add_operation (var_lbl_8392, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)) ;
  GALGAS_bigint var_minTarget_8704 ;
  GALGAS_bigint var_maxTarget_8723 ;
  GALGAS_bool joker_8725_3 ; // Joker input parameter
  GALGAS_uint joker_8725_2 ; // Joker input parameter
  GALGAS_string joker_8725_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 197)).method_integer (var_minTarget_8704, var_maxTarget_8723, joker_8725_3, joker_8725_2, joker_8725_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 197)) ;
  GALGAS_bigint var_minSource_8774 ;
  GALGAS_bool var_operandIsUnsigned_8813 ;
  GALGAS_bigint joker_8780 ; // Joker input parameter
  GALGAS_uint joker_8815_2 ; // Joker input parameter
  GALGAS_string joker_8815_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 198)).method_integer (var_minSource_8774, joker_8780, var_operandIsUnsigned_8813, joker_8815_2, joker_8815_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 198)) ;
  GALGAS_string var_operandType_8836 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_8704.objectCompare (var_minSource_8774)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_8583, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 201)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 201)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned_8813.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 202)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_8836, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (var_minTarget_8704.getter_string (SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 203)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_8583, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 204)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 204)).add_operation (var_convertMinOkLabel_8453, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 204)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 204)).add_operation (var_convertFailLabel_8546, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 204)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 204)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_8453.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 205)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_8631, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 207)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 207)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_8813.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_8836, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)).add_operation (var_maxTarget_8723.getter_string (SOURCE_FILE ("expression-convert.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_8631, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).add_operation (var_convertMaxOkLabel_8500, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).add_operation (var_convertFailLabel_8546, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_8546.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_8378.getter_string (SOURCE_FILE ("expression-convert.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 212)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).getter_string (SOURCE_FILE ("expression-convert.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 214)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 214)).getter_string (SOURCE_FILE ("expression-convert.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 214)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 214)).add_operation (object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 214)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 214)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 215)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_8500.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)).add_operation (var_operandType_8836, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 217)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                            extensionMethod_convertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_llvmInstructionCode (defineExtensionMethod_convertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@extendExpressionAST solveEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                               GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                               const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                               const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                               GALGAS_expressionSE & outArgument_outExpression,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_expressionSE var_expression_1525 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_1525, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 29)) ;
  outArgument_outExpression = GALGAS_extendExpressionSE::constructor_new (var_expression_1525, object->mProperty_mTypeName, object->mProperty_mEndOfExpression  COMMA_SOURCE_FILE ("expression-extend.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                      extensionMethod_extendExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_solveEntities (defineExtensionMethod_extendExpressionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 71)) ;
  GALGAS_lstring var_typeName_3166 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 72)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3166 COMMA_SOURCE_FILE ("expression-extend.galgas", 73)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 81)) ;
  GALGAS_lstring var_typeName_3809 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 82)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3809 COMMA_SOURCE_FILE ("expression-extend.galgas", 83)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@extendExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_5555 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5555, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 107)) ;
  GALGAS_objectIR var_expressionResult_5716 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5555, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 124)), var_expressionResult_5716, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 121)) ;
  }
  GALGAS_PLMType var_resultType_5757 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 128)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 128)) ;
  const enumGalgasBool test_0 = var_resultType_5757.getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 130)).operator_not (SOURCE_FILE ("expression-extend.galgas", 130)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 131)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-extend.galgas", 131)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (var_expressionResult_5716, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 132)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 132)).operator_not (SOURCE_FILE ("expression-extend.galgas", 132)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 133)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned_6178 ;
      GALGAS_uint var_sourceSize_6203 ;
      GALGAS_bigint joker_6139 ; // Joker input parameter
      GALGAS_bigint joker_6146 ; // Joker input parameter
      GALGAS_string joker_6205_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_5716, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 135)).method_integer (joker_6139, joker_6146, var_sourceIsUnsigned_6178, var_sourceSize_6203, joker_6205_1, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 135)) ;
      GALGAS_bool var_targetIsUnsigned_6277 ;
      GALGAS_uint var_targetSize_6302 ;
      GALGAS_bigint joker_6238 ; // Joker input parameter
      GALGAS_bigint joker_6245 ; // Joker input parameter
      GALGAS_string joker_6304_1 ; // Joker input parameter
      var_resultType_5757.method_integer (joker_6238, joker_6245, var_targetIsUnsigned_6277, var_targetSize_6302, joker_6304_1, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 136)) ;
      GALGAS_bool test_4 = var_sourceIsUnsigned_6178 ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_targetIsUnsigned_6277 ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sourceSize_6203.objectCompare (var_targetSize_6302)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 139)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 139)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_sourceSize_6203.objectCompare (var_targetSize_6302)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 141)), GALGAS_string ("same size: useless extend operation"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 141)) ;
          }
        }
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_10 = var_sourceIsUnsigned_6178 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          test_10 = var_targetIsUnsigned_6277.operator_not (SOURCE_FILE ("expression-extend.galgas", 143)) ;
        }
        const enumGalgasBool test_11 = test_10.boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_6203.objectCompare (var_targetSize_6302)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 145)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray13  COMMA_SOURCE_FILE ("expression-extend.galgas", 145)) ;
          }
        }else if (kBoolFalse == test_11) {
          GALGAS_bool test_14 = var_sourceIsUnsigned_6178.operator_not (SOURCE_FILE ("expression-extend.galgas", 147)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = var_targetIsUnsigned_6277 ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 148)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray16  COMMA_SOURCE_FILE ("expression-extend.galgas", 148)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_sourceSize_6203.objectCompare (var_targetSize_6302)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 151)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 151)) ;
            }else if (kBoolFalse == test_17) {
              const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_sourceSize_6203.objectCompare (var_targetSize_6302)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 153)), GALGAS_string ("same size: useless extend operation"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 153)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType_5757, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 156)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 156)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_5716, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 157)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                          extensionMethod_extendExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_analyzeExpression (defineExtensionMethod_extendExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@truncateExpressionAST solveEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                 GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                 const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                 const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                 GALGAS_expressionSE & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_expressionSE var_expression_1531 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_1531, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 29)) ;
  outArgument_outExpression = GALGAS_truncateExpressionSE::constructor_new (var_expression_1531, object->mProperty_mTypeName, object->mProperty_mEndOfExpression  COMMA_SOURCE_FILE ("expression-truncate.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                      extensionMethod_truncateExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_solveEntities (defineExtensionMethod_truncateExpressionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inConstantName,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 71)) ;
  GALGAS_lstring var_typeName_3180 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 72)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3180 COMMA_SOURCE_FILE ("expression-truncate.galgas", 73)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 81)) ;
  GALGAS_lstring var_typeName_3825 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 82)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3825 COMMA_SOURCE_FILE ("expression-truncate.galgas", 83)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@truncateExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_5567 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-truncate.galgas", 111)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5567, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)) ;
  GALGAS_objectIR var_expressionResult_5728 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5567, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 124)), var_expressionResult_5728, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 121)) ;
  }
  GALGAS_PLMType var_resultType_5769 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)) ;
  const enumGalgasBool test_0 = var_resultType_5769.getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 130)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 130)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 131)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-truncate.galgas", 131)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (var_expressionResult_5728, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 132)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 132)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 132)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 133)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource_6164 ;
      GALGAS_bigint var_maxSource_6183 ;
      GALGAS_uint var_expSize_6217 ;
      GALGAS_bool joker_6194 ; // Joker input parameter
      GALGAS_string joker_6219_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_5728, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 135)).method_integer (var_minSource_6164, var_maxSource_6183, joker_6194, var_expSize_6217, joker_6219_1, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 135)) ;
      GALGAS_bigint var_minTarget_6265 ;
      GALGAS_bigint var_maxTarget_6284 ;
      GALGAS_uint var_resultSize_6321 ;
      GALGAS_bool joker_6295 ; // Joker input parameter
      GALGAS_string joker_6323_1 ; // Joker input parameter
      var_resultType_5769.method_integer (var_minTarget_6265, var_maxTarget_6284, joker_6295, var_resultSize_6321, joker_6323_1, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 136)) ;
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_minTarget_6265.objectCompare (var_minSource_6164)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_6284.objectCompare (var_maxSource_6183)) ;
      }
      GALGAS_bool var_alwaysPossible_6349 = test_4 ;
      const enumGalgasBool test_5 = var_alwaysPossible_6349.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 139)), GALGAS_string ("useless explicit conversion"), fixItArray6  COMMA_SOURCE_FILE ("expression-truncate.galgas", 139)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, var_resultSize_6321.objectCompare (var_expSize_6217)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        routine_getNewTempVariable (var_resultType_5769, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 142)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_5728  COMMA_SOURCE_FILE ("expression-truncate.galgas", 143))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 143)) ;
      }else if (kBoolFalse == test_7) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_5728, var_resultType_5769, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 148)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                          extensionMethod_truncateExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_analyzeExpression (defineExtensionMethod_truncateExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@truncateInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                           GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                                extensionMethod_truncateInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_enterAccessibleEntities (defineExtensionMethod_truncateInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@truncateInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateInstructionIR * object = (const cPtr_truncateInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncateInstructionIR) ;
  GALGAS_string var_operandType_8031 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 179)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 180)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 180)).add_operation (var_operandType_8031, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 180)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 180)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 180)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 180)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 181)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                            extensionMethod_truncateInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_llvmInstructionCode (defineExtensionMethod_truncateInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@constructorCallAST solveEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCallAST_solveEntities (const cPtr_expressionAST * inObject,
                                                              GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                              const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                              const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                              GALGAS_expressionSE & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  GALGAS_functionCallEffectiveParameterListSE var_parameterList_1907 = GALGAS_functionCallEffectiveParameterListSE::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 43)) ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_1961 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_1961.hasCurrentObject ()) {
    GALGAS_expressionSE var_expression_2135 ;
    callExtensionMethod_solveEntities ((const cPtr_expressionAST *) enumerator_1961.current_mExpression (HERE).ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_2135, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 45)) ;
    var_parameterList_1907.addAssign_operation (enumerator_1961.current_mSelector (HERE), var_expression_2135  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 51)) ;
    enumerator_1961.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_constructorCallSE::constructor_new (object->mProperty_mTypeName, var_parameterList_1907, object->mProperty_mErrorLocation  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCallAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                      extensionMethod_constructorCallAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCallAST_solveEntities (defineExtensionMethod_constructorCallAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@constructorCallAST addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inConstantName,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  GALGAS_lstring var_typeName_3620 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName_3620 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 88)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                                             extensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCallAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@constructorCallAST noteExpressionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  GALGAS_lstring var_typeName_4214 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 96)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_4214 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 97)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                                             extensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@constructorCallAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCallAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  GALGAS_PLMType var_resultType_5372 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType_5372 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType_5372 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 123)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 123)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_5372.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-constructor-call.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorValue var_initValue_5725 ;
    constinArgument_inContext.getter_mConstructorMap (HERE).method_searchKey (extensionGetter_key (var_resultType_5372, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 128)), var_initValue_5725, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
    switch (var_initValue_5725.enumValue ()) {
    case GALGAS_constructorValue::kNotBuilt:
      break ;
    case GALGAS_constructorValue::kEnum_zero:
      {
        outArgument_outResult = GALGAS_objectIR::constructor_zero (var_resultType_5372  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 131)) ;
      }
      break ;
    case GALGAS_constructorValue::kEnum_simple:
      {
        const cEnumAssociatedValues_constructorValue_simple * extractPtr_6074 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_5725.unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_6074->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (extensionGetter_key (var_resultType_5372, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_5372, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 136)) ;
        }
      }
      break ;
    case GALGAS_constructorValue::kEnum_structure:
      {
        const cEnumAssociatedValues_constructorValue_structure * extractPtr_7935 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_5725.unsafePointer ()) ;
        const GALGAS_constructorSignature extractedValue_constructorSignature = extractPtr_7935->mAssociatedValue0 ;
        const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_7935->mAssociatedValue1 ;
        GALGAS_sortedOperandIRList var_sortedOperandIRList_6166 = extractedValue_sortedOperandList ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 140)).objectCompare (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 140)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 142)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 141)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 141)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 141)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 141)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 143)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 143)), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 141)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          cEnumerator_constructorSignature enumerator_6573 (extractedValue_constructorSignature, kENUMERATION_UP) ;
          cEnumerator_functionCallEffectiveParameterListAST enumerator_6606 (object->mProperty_mParameterList, kENUMERATION_UP) ;
          while (enumerator_6573.hasCurrentObject () && enumerator_6606.hasCurrentObject ()) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_6606.current_mSelector (HERE).getter_string (HERE).objectCompare (enumerator_6573.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_6606.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 148)), GALGAS_string ("the selector should be '!").add_operation (enumerator_6573.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 148)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 148)), fixItArray10  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 148)) ;
            }
            GALGAS_objectIR var_expressionResult_7353 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6606.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, enumerator_6573.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7353, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 150)) ;
            GALGAS_objectIR var_result_7386 = function_checkAssignmentCompatibility (var_expressionResult_7353, enumerator_6573.current_mType (HERE), enumerator_6606.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 164)) ;
            var_sortedOperandIRList_6166.addAssign_operation (var_result_7386, enumerator_6573.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
            enumerator_6573.gotoNextObject () ;
            enumerator_6606.gotoNextObject () ;
          }
          GALGAS_operandIRList var_initialValueList_7721 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 172)) ;
          cEnumerator_sortedOperandIRList enumerator_7778 (var_sortedOperandIRList_6166, kENUMERATION_UP) ;
          while (enumerator_7778.hasCurrentObject ()) {
            var_initialValueList_7721.addAssign_operation (enumerator_7778.current_mOperand (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 174)) ;
            enumerator_7778.gotoNextObject () ;
          }
          outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureConstant (var_resultType_5372, var_initialValueList_7721  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 176)) ;
        }
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCallAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                          extensionMethod_constructorCallAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCallAST_analyzeExpression (defineExtensionMethod_constructorCallAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@typedConstantCallAST solveEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCallAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                                const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                                const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                                GALGAS_expressionSE & outArgument_outExpression,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  outArgument_outExpression = GALGAS_typedConstantCallSE::constructor_new (object->mProperty_mOptionalTypeName, object->mProperty_mConstructorName  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCallAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                      extensionMethod_typedConstantCallAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCallAST_solveEntities (defineExtensionMethod_typedConstantCallAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@typedConstantCallAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 62)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 62)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                                             extensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@typedConstantCallAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 72)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 72)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                                             extensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typedConstantCallAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCallAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                    const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                    const GALGAS_bool /* constinArgument_inGuard */,
                                                                    const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                    const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                    GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                    GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                    GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  GALGAS_PLMType var_inferredResultType_4799 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_4799 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_4799 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 99)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 99)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_4799.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-typed-constant.galgas", 101)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 102)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 102)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constantMap var_classConstantMap_5135 = extensionGetter_classConstantMap (var_inferredResultType_4799, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 104)) ;
    GALGAS_bigint var_value_5244 ;
    GALGAS_lstring var_classTypeName_5263 ;
    var_classConstantMap_5135.method_searchKey (object->mProperty_mConstructorName, var_value_5244, var_classTypeName_5263, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 105)) ;
    GALGAS_PLMType var_resultType_5283 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_classTypeName_5263, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 106)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 106)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_5283, var_value_5244  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 107)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCallAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                          extensionMethod_typedConstantCallAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCallAST_analyzeExpression (defineExtensionMethod_typedConstantCallAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@ifExpressionAST solveEntities'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                           GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                           const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                           const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                           GALGAS_expressionSE & outArgument_outExpression,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_expressionSE var_ifExpression_1781 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_ifExpression_1781, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 35)) ;
  GALGAS_expressionSE var_thenExpression_1953 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_thenExpression_1953, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 41)) ;
  GALGAS_expressionSE var_elseExpression_2125 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_elseExpression_2125, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 47)) ;
  outArgument_outExpression = GALGAS_ifExpressionSE::constructor_new (var_ifExpression_1781, object->mProperty_mIfExpressionEndLocation, var_thenExpression_1953, object->mProperty_mThenExpressionEndLocation, var_elseExpression_2125, object->mProperty_mElseExpressionEndLocation  COMMA_SOURCE_FILE ("expression-if.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                      extensionMethod_ifExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_solveEntities (defineExtensionMethod_ifExpressionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@ifExpressionAST addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 103)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 104)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@ifExpressionAST noteExpressionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 114)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@ifExpressionAST analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_objectIR var_ifExpressionResultPossibleReference_6491 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResultPossibleReference_6491, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 137)) ;
  GALGAS_objectIR var_ifExpressionResult_6672 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResultPossibleReference_6491, object->mProperty_mIfExpressionEndLocation, var_ifExpressionResult_6672, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 151)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_type (var_ifExpressionResult_6672, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 158)).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 158)).operator_not (SOURCE_FILE ("expression-if.galgas", 158)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 159)) ;
  }
  GALGAS_objectIR var_thenExpressionPossibleReferenceResult_7372 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionPossibleReferenceResult_7372, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)) ;
  GALGAS_objectIR var_thenExpressionTempResult_7562 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionPossibleReferenceResult_7372, object->mProperty_mThenExpressionEndLocation, var_thenExpressionTempResult_7562, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 176)) ;
  }
  GALGAS_objectIR var_thenExpressionResult_7595 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_7562, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
  GALGAS_objectIR var_elseExpressionPossibleReferenceResult_8311 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionPossibleReferenceResult_8311, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 189)) ;
  GALGAS_objectIR var_elseExpressionTempResult_8501 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionPossibleReferenceResult_8311, object->mProperty_mThenExpressionEndLocation, var_elseExpressionTempResult_8501, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 203)) ;
  }
  GALGAS_objectIR var_elseExpressionResult_8534 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_8501, extensionGetter_type (var_thenExpressionResult_7595, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 211)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 209)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_6672, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 216)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_8901 ;
    GALGAS_PLMType joker_8882_1 ; // Joker input parameter
    var_ifExpressionResult_6672.method_literalInteger (joker_8882_1, var_value_8901, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 217)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_8901.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 218)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_7595 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_8534 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (extensionGetter_type (var_elseExpressionResult_8534, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 220)), object->mProperty_mIfExpressionEndLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 220)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_6672, var_thenExpressionResult_7595, var_elseExpressionResult_8534, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 221)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                          extensionMethod_ifExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeExpression (defineExtensionMethod_ifExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@infixOperatorExpressionAST solveEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                      GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                      const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                      const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                      GALGAS_expressionSE & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_expressionSE var_leftExpression_2417 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_leftExpression_2417, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 66)) ;
  GALGAS_expressionSE var_rightExpression_2591 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_rightExpression_2591, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 72)) ;
  outArgument_outExpression = GALGAS_infixOperatorExpressionSE::constructor_new (var_leftExpression_2417, object->mProperty_mOperatorLocation, object->mProperty_mOp, var_rightExpression_2591  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                      extensionMethod_infixOperatorExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_solveEntities (defineExtensionMethod_infixOperatorExpressionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST solveEntities'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                                       const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                                       const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                                       GALGAS_expressionSE & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_expressionSE var_leftExpression_3562 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_leftExpression_3562, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 97)) ;
  GALGAS_expressionSE var_rightExpression_3736 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_rightExpression_3736, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 103)) ;
  outArgument_outExpression = GALGAS_booleanShortCircuitAndOperatorExpressionSE::constructor_new (var_leftExpression_3562, object->mProperty_mOperatorLocation, var_rightExpression_3736  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 109)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                      extensionMethod_booleanShortCircuitAndOperatorExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_solveEntities (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@infixOperatorExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 120)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 121)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 130)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 131)) ;
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
//           Overriding extension method '@infixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 139)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 140)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 146)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 147)) ;
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
//                     Overriding extension method '@infixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_objectIR var_leftOperandPossibleReference_8517 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperandPossibleReference_8517, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 194)) ;
  GALGAS_objectIR var_leftOperand_8676 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_8517, object->mProperty_mOperatorLocation, var_leftOperand_8676, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 208)) ;
  }
  GALGAS_objectIR var_rightOperandPossibleReference_9208 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_8676, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 219)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperandPossibleReference_9208, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 215)) ;
  GALGAS_objectIR var_rightOperand_9369 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_9208, object->mProperty_mOperatorLocation, var_rightOperand_9369, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 229)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap_9431 = function_getInfixOperatorMap (object->mProperty_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 236)) ;
  GALGAS_PLMType var_resultType_9738 ;
  GALGAS_infixOperatorDescription var_binaryOperator_9791 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_9431, extensionGetter_type (var_leftOperand_8676, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 239)), extensionGetter_type (var_rightOperand_9369, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 240)), object->mProperty_mOperatorLocation, var_resultType_9738, var_binaryOperator_9791, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 238)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_9791.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_8676, object->mProperty_mOperatorLocation, var_rightOperand_9369, var_resultType_9738, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 246)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                          extensionMethod_infixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression, NULL) ;

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
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 288)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 289)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 289)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 289)) ;
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
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 299)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 300)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 300)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 300)) ;
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
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 310)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 311)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 311)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 311)) ;
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
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 321)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 322)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 322)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 322)) ;
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
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 332)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 333)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 333)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 333)) ;
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
  GALGAS_instructionListIR var_leftInstructionGenerationList_14244 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 366)) ;
  GALGAS_objectIR var_leftOperandPossibleReference_14731 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_14244, var_leftOperandPossibleReference_14731, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 367)) ;
  GALGAS_objectIR var_leftOperand_14890 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_14731, object->mProperty_mOperatorLocation, var_leftOperand_14890, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 381)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_14978 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 388)) ;
  GALGAS_objectIR var_rightOperandPossibleReference_15466 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_14890, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 393)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_14978, var_rightOperandPossibleReference_15466, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 389)) ;
  GALGAS_objectIR var_rightOperand_15627 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_15466, object->mProperty_mOperatorLocation, var_rightOperand_15627, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 403)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_leftOperand_14890, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 410)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 410)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 411)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_rightOperand_15627, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 414)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 414)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 415)) ;
  }
  GALGAS_bool test_4 = var_leftOperandPossibleReference_14731.getter_isLiteralInteger (SOURCE_FILE ("expression-infix-operators.galgas", 418)) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = var_rightOperandPossibleReference_15466.getter_isLiteralInteger (SOURCE_FILE ("expression-infix-operators.galgas", 418)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bigint var_leftStaticValue_16165 ;
    GALGAS_PLMType joker_16129 ; // Joker input parameter
    var_leftOperandPossibleReference_14731.method_literalInteger (joker_16129, var_leftStaticValue_16165, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 419)) ;
    GALGAS_bigint var_rightStaticValue_16260 ;
    GALGAS_PLMType joker_16223 ; // Joker input parameter
    var_rightOperandPossibleReference_15466.method_literalInteger (joker_16223, var_rightStaticValue_16260, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 420)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_type (var_leftOperand_14890, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 421)), var_leftStaticValue_16165.operator_and (var_rightStaticValue_16260 COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 421))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 421)) ;
  }else if (kBoolFalse == test_5) {
    {
    routine_getNewTempVariable (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 424)), object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 424)) ;
    }
    {
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_14890, var_leftInstructionGenerationList_14244, var_rightOperand_15627, var_rightInstructionGenerationList_14978, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 426)) ;
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
//                      Overriding extension method '@prefixOperatorExpressionAST solveEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                       GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                       const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                       const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                       GALGAS_expressionSE & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_expressionSE var_expression_1777 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_1777, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 38)) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionSE::constructor_new (object->mProperty_mOperatorLocation, object->mProperty_mOp, var_expression_1777  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                      extensionMethod_prefixOperatorExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_solveEntities (defineExtensionMethod_prefixOperatorExpressionAST_solveEntities, NULL) ;

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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 55)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 63)) ;
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
  GALGAS_objectIR var_expressionResultPossibleReference_4555 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4555, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 85)) ;
  GALGAS_objectIR var_expressionResult_4724 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4555, object->mProperty_mOperatorLocation, var_expressionResult_4724, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 99)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_4820 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_4858 ;
  GALGAS_objectIR var_leftOperand_4882 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_4820 = constinArgument_inContext.getter_mUnsignedComplementOperatorMap (HERE) ;
      var_binaryOperator_4858 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 112)) ;
      switch (extensionGetter_type (var_expressionResult_4724, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113)).enumValue ()) {
      case GALGAS_PLMType::kNotBuilt:
        break ;
      case GALGAS_PLMType::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)) ;
          var_leftOperand_4882.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)) ;
          var_leftOperand_4882.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_boolean:
      case GALGAS_PLMType::kEnum_void:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 119)) ;
          var_leftOperand_4882.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
          var_leftOperand_4882.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 123)) ;
          var_leftOperand_4882.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 125)) ;
          var_leftOperand_4882.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 127)) ;
          var_leftOperand_4882.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 129)) ;
          var_leftOperand_4882.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_staticInteger:
        {
          const enumGalgasBool test_8 = constinArgument_inOptionalTargetType.getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 131)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_bigint var_minTarget_5905 ;
            GALGAS_bigint var_maxTarget_5924 ;
            GALGAS_bool joker_5926_3 ; // Joker input parameter
            GALGAS_uint joker_5926_2 ; // Joker input parameter
            GALGAS_string joker_5926_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.method_integer (var_minTarget_5905, var_maxTarget_5924, joker_5926_3, joker_5926_2, joker_5926_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 132)) ;
            const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_minTarget_5905.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 133)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 134)) ;
              var_leftOperand_4882.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_9) {
              var_leftOperand_4882 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 136)), var_maxTarget_5924  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 136)) ;
            }
          }else if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray11  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)) ;
            var_leftOperand_4882.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_PLMType::kEnum_integer:
        {
          const cEnumAssociatedValues_PLMType_integer * extractPtr_6456 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_4724, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_6456->mAssociatedValue3 ;
          var_leftOperand_4882 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 142)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_4820 = constinArgument_inContext.getter_mNotOperatorMap (HERE) ;
      var_binaryOperator_4858 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 146)) ;
      var_leftOperand_4882 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 147)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_4820 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      var_binaryOperator_4858 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 150)) ;
      var_leftOperand_4882 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 151)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 151))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 151)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_4820 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 154)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 156)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 156)), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 155)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_binaryOperator_4858 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 159)) ;
        var_leftOperand_4882 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 160)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160)) ;
      }else if (kBoolFalse == test_14) {
        var_binaryOperator_4858 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 162)) ;
        var_leftOperand_4882 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 163)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_4820.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_key (var_expressionResult_4724, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 167)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 167)) ;
  GALGAS_PLMType var_resultType_7453 = extensionGetter_type (var_expressionResult_4724, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 168)) ;
  const enumGalgasBool test_15 = var_expressionResult_4724.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 170)).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_bigint var_value_7596 ;
    GALGAS_PLMType joker_7569_1 ; // Joker input parameter
    var_expressionResult_4724.method_literalInteger (joker_7569_1, var_value_7596, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)) ;
    GALGAS_bigint var_result_7616 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_7616 = var_value_7596.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 175)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_16 = constinArgument_inOptionalTargetType.getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 177)).boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_bigint var_minTarget_7811 ;
          GALGAS_bigint var_maxTarget_7830 ;
          GALGAS_bool joker_7832_3 ; // Joker input parameter
          GALGAS_uint joker_7832_2 ; // Joker input parameter
          GALGAS_string joker_7832_1 ; // Joker input parameter
          constinArgument_inOptionalTargetType.method_integer (var_minTarget_7811, var_maxTarget_7830, joker_7832_3, joker_7832_2, joker_7832_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 178)) ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictInf, var_minTarget_7811.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 179)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray18  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 180)) ;
            var_result_7616.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_17) {
            var_result_7616 = var_value_7596.operator_xor (var_maxTarget_7830 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 182)) ;
          }
        }else if (kBoolFalse == test_16) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray19  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 185)) ;
          var_result_7616.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_7616 = var_value_7596.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 188)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_7616 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 190)).operator_xor (var_value_7596 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 190)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_7453, var_result_7616  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 192)) ;
  }else if (kBoolFalse == test_15) {
    {
    routine_getNewTempVariable (var_resultType_7453, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 195)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 199)), object->mProperty_mOperatorLocation, var_leftOperand_4882, var_binaryOperator_4858, var_expressionResult_4724, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 197)) ;
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
//                     Overriding extension method '@literalIntegerInExpressionAST solveEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                         GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                                         const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                                         const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                                         GALGAS_expressionSE & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outExpression = GALGAS_literalIntegerInExpressionSE::constructor_new (object->mProperty_mLiteralInteger  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                      extensionMethod_literalIntegerInExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_solveEntities (defineExtensionMethod_literalIntegerInExpressionAST_solveEntities, NULL) ;

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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 53)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 53)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 53)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 61)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 61)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 61)) ;
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
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-literal-integer.galgas", 82)), object->mProperty_mLiteralInteger.getter_bigint (HERE)  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 82)) ;
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
//                      Overriding extension method '@literalStringInExpressionAST solveEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                        GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                                        const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                                        const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                                        GALGAS_expressionSE & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  outArgument_outExpression = GALGAS_literalStringInExpressionSE::constructor_new (object->mProperty_mLiteralString  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                      extensionMethod_literalStringInExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_solveEntities (defineExtensionMethod_literalStringInExpressionAST_solveEntities, NULL) ;

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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)), constinArgument_inConstantName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 61)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 61)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 61)) ;
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
  GALGAS_PLMType var_type_4537 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 82)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 82)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 82)) ;
  GALGAS_uint var_staticStringIndex_4734 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_4734, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 83)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (var_type_4537, object->mProperty_mLiteralString.getter_string (HERE).getter_length (SOURCE_FILE ("expression-literal-string.galgas", 84)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 84)), var_staticStringIndex_4734  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 84)) ;
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
//                     Overriding extension method '@literalBooleanInExpressionAST solveEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                         GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                                         const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                                         const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                                         GALGAS_expressionSE & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionSE::constructor_new (object->mProperty_mValue  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                      extensionMethod_literalBooleanInExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_solveEntities (defineExtensionMethod_literalBooleanInExpressionAST_solveEntities, NULL) ;

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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 60)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 60)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 60)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 68)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 68)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 68)) ;
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
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 89)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 89)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-true-false.galgas", 89)), temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 89)) ;
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
//                     Overriding extension method '@registerConstantExpressionAST solveEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                         GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                         const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                         const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                         GALGAS_expressionSE & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_registerIntegerFieldListSE var_fieldValues_1966 = GALGAS_registerIntegerFieldListSE::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 45)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_1996 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_1996.hasCurrentObject ()) {
    GALGAS_expressionSE var_expression_2168 ;
    callExtensionMethod_solveEntities ((const cPtr_expressionAST *) enumerator_1996.current_mExpression (HERE).ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_2168, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 47)) ;
    var_fieldValues_1966.addAssign_operation (enumerator_1996.current_mFieldName (HERE), var_expression_2168, enumerator_1996.current_mExpressionLocation (HERE)  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 53)) ;
    enumerator_1996.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_registerConstantExpressionSE::constructor_new (object->mProperty_mRegisterName, object->mProperty_mMaskFieldNames, var_fieldValues_1966  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                      extensionMethod_registerConstantExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_solveEntities (defineExtensionMethod_registerConstantExpressionAST_solveEntities, NULL) ;

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
  cEnumerator_registerIntegerFieldListAST enumerator_4664 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_4664.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_4664.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 109)) ;
    enumerator_4664.gotoNextObject () ;
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
  GALGAS_PLMType var_registerType_5876 ;
  GALGAS_sliceMap var_registerBitSliceMap_5936 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_5987 ;
  GALGAS_bigint var_registerAddress_6027 ;
  GALGAS_uint var_registerBitCount_6060 ;
  GALGAS_uint var_powerOfTwoForArraySize_6099 ;
  GALGAS_uint var_elementArraySize_6132 ;
  GALGAS_bool joker_5882 ; // Joker input parameter
  GALGAS_bool joker_5889 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_6033 ; // Joker input parameter
  constinArgument_inContext.getter_mControlRegisterMap (HERE).method_searchKey (object->mProperty_mRegisterName, var_registerType_5876, joker_5882, joker_5889, var_registerBitSliceMap_5936, var_registerFieldMap_5987, var_registerAddress_6027, joker_6033, var_registerBitCount_6060, var_powerOfTwoForArraySize_6099, var_elementArraySize_6132, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 132)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_6244 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 146)) ;
  cEnumerator_lstringlist enumerator_6286 (object->mProperty_mMaskFieldNames, kENUMERATION_UP) ;
  while (enumerator_6286.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_6369 ;
    GALGAS_uint var_fieldBitCount_6400 ;
    var_registerFieldMap_5987.method_searchKey (enumerator_6286.current_mValue (HERE), var_fieldBitIndex_6369, var_fieldBitCount_6400, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 148)) ;
    GALGAS_bigint var_mask_6419 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)).left_shift_operation (var_fieldBitCount_6400 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
    var_accumulatedFieldStaticValues_6244 = var_accumulatedFieldStaticValues_6244.operator_or (var_mask_6419.left_shift_operation (var_fieldBitIndex_6369 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 154)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 154)) ;
    enumerator_6286.gotoNextObject () ;
  }
  GALGAS_operandList var_operandList_6643 = GALGAS_operandList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 157)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_6712 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_6712.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_6795 ;
    GALGAS_uint var_fieldBitCount_6826 ;
    var_registerFieldMap_5987.method_searchKey (enumerator_6712.current_mFieldName (HERE), var_fieldBitIndex_6795, var_fieldBitCount_6826, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
    GALGAS_objectIR var_expressionResultPossibleReference_7349 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6712.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-cst-registre.galgas", 169)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_7349, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 165)) ;
    GALGAS_objectIR var_expressionResult_7526 ;
    {
    extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_7349, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 182)), var_expressionResult_7526, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 179)) ;
    }
    switch (extensionGetter_type (var_expressionResult_7526, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)).enumValue ()) {
    case GALGAS_PLMType::kNotBuilt:
      break ;
    case GALGAS_PLMType::kEnum_arrayType:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray0  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 188)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_opaque:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 190)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_enumeration:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 192)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_structure:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 194)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_boolean:
    case GALGAS_PLMType::kEnum_void:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 196)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_literalString:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 198)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_pointer:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 200)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 202)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_staticInteger:
      {
        GALGAS_bigint var_value_8569 ;
        GALGAS_PLMType joker_8542_1 ; // Joker input parameter
        var_expressionResult_7526.method_literalInteger (joker_8542_1, var_value_8569, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 204)) ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_value_8569.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 205)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 206)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_value_8569.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 207)).left_shift_operation (var_fieldBitCount_6826 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 207)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            var_accumulatedFieldStaticValues_6244 = var_accumulatedFieldStaticValues_6244.operator_or (var_value_8569.left_shift_operation (var_fieldBitIndex_6795 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 208)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 208)) ;
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)).left_shift_operation (var_fieldBitCount_6826 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)) ;
          }
        }
      }
      break ;
    case GALGAS_PLMType::kEnum_integer:
      {
        const cEnumAssociatedValues_PLMType_integer * extractPtr_10817 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_7526, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_min = extractPtr_10817->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_max = extractPtr_10817->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_10817->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_expressionBitCount = extractPtr_10817->mAssociatedValue3 ;
        const enumGalgasBool test_12 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 213)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)) ;
        }else if (kBoolFalse == test_12) {
          GALGAS_bool test_14 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_6826)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 216)) ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_6712.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_6826.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)), fixItArray16  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 217)) ;
          }
          GALGAS_bool test_17 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_6826)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)) ;
          }
          GALGAS_bool test_18 = test_17 ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 221)) ;
          }
          const enumGalgasBool test_19 = test_18.boolEnum () ;
          if (kBoolTrue == test_19) {
            {
            extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_7526, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).left_shift_operation (var_fieldBitCount_6826 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)), function_panicCodeForRegisterFieldOvf (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 225)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 225)), enumerator_6712.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 222)) ;
            }
          }
          GALGAS_objectIR var_partialResult_9916 = var_expressionResult_7526 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_6060)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_objectIR var_extendedResult_10089 ;
            {
            routine_getNewTempVariable (var_registerType_5876, enumerator_6712.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_extendedResult_10089, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 232)) ;
            }
            {
            extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_10089, var_partialResult_9916, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 233)) ;
            }
            var_partialResult_9916 = var_extendedResult_10089 ;
          }else if (kBoolFalse == test_20) {
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_6060)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_objectIR var_truncatedResult_10375 ;
              {
              routine_getNewTempVariable (var_registerType_5876, enumerator_6712.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_truncatedResult_10375, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)) ;
              }
              {
              extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_10375, var_partialResult_9916, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)) ;
              }
              var_partialResult_9916 = var_truncatedResult_10375 ;
            }
          }
          GALGAS_objectIR var_shiftedResult_10643 ;
          {
          routine_getNewTempVariable (var_registerType_5876, enumerator_6712.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_shiftedResult_10643, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 241)) ;
          }
          {
          extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_10643, var_partialResult_9916, var_fieldBitIndex_6795, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 242)) ;
          }
          var_operandList_6643.addAssign_operation (var_shiftedResult_10643  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 244)) ;
        }
      }
      break ;
    }
    enumerator_6712.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_5876, var_accumulatedFieldStaticValues_6244  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 249)) ;
  cEnumerator_operandList enumerator_11012 (var_operandList_6643, kENUMERATION_UP) ;
  while (enumerator_11012.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_11099 ;
    {
    routine_getNewTempVariable (var_registerType_5876, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 251)), ioArgument_ioTemporaries, var_newResult_11099, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 251)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_11099, extensionGetter_type (var_newResult_11099, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 254)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 255)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 257)), enumerator_11012.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 252)) ;
    }
    outArgument_outResult = var_newResult_11099 ;
    enumerator_11012.gotoNextObject () ;
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
//                         Overriding extension method '@primaryInExpressionAST solveEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                  GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                  const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                  const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                  GALGAS_expressionSE & outArgument_outExpression,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_primaryInExpressionAccessListSE var_accessList_4869 = GALGAS_primaryInExpressionAccessListSE::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 121)) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_4898 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_4898.hasCurrentObject ()) {
    switch (enumerator_4898.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_5000 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_4898.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5000->mAssociatedValue0 ;
        var_accessList_4869.addAssign_operation (GALGAS_primaryInExpressionAccessSE::constructor_property (extractedValue_name  COMMA_SOURCE_FILE ("expression-primary.galgas", 125))  COMMA_SOURCE_FILE ("expression-primary.galgas", 125)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_5298 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_4898.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexAST = extractPtr_5298->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_5298->mAssociatedValue1 ;
        GALGAS_expressionSE var_index_5216 ;
        callExtensionMethod_solveEntities ((const cPtr_expressionAST *) extractedValue_indexAST.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_index_5216, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 127)) ;
        var_accessList_4869.addAssign_operation (GALGAS_primaryInExpressionAccessSE::constructor_arrayAccess (var_index_5216, extractedValue_endOfIndex  COMMA_SOURCE_FILE ("expression-primary.galgas", 133))  COMMA_SOURCE_FILE ("expression-primary.galgas", 133)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_5466 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_4898.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_5466->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfArguments = extractPtr_5466->mAssociatedValue1 ;
        var_accessList_4869.addAssign_operation (GALGAS_primaryInExpressionAccessSE::constructor_funcCall (extractedValue_arguments, extractedValue_endOfArguments  COMMA_SOURCE_FILE ("expression-primary.galgas", 135))  COMMA_SOURCE_FILE ("expression-primary.galgas", 135)) ;
      }
      break ;
    }
    enumerator_4898.gotoNextObject () ;
  }
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inRegisterMapSE.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 141)) COMMA_SOURCE_FILE ("expression-primary.galgas", 141)).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outExpression = GALGAS_registerReadInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_4869  COMMA_SOURCE_FILE ("expression-primary.galgas", 142)) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = constinArgument_inGlobalVariableMapSE.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 143)) COMMA_SOURCE_FILE ("expression-primary.galgas", 143)).boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_outExpression = GALGAS_globalVariableAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_4869  COMMA_SOURCE_FILE ("expression-primary.galgas", 144)) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = inArgument_inGlobalConstantMap.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 145)) COMMA_SOURCE_FILE ("expression-primary.galgas", 145)).boolEnum () ;
          if (kBoolTrue == test_2) {
            outArgument_outExpression = GALGAS_globalConstantAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_4869  COMMA_SOURCE_FILE ("expression-primary.galgas", 146)) ;
          }else if (kBoolFalse == test_2) {
            outArgument_outExpression = GALGAS_localVariableAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_4869  COMMA_SOURCE_FILE ("expression-primary.galgas", 148)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_6268 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_6268->mAssociatedValue0 ;
      outArgument_outExpression = GALGAS_selfAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, extractedValue_location, var_accessList_4869  COMMA_SOURCE_FILE ("expression-primary.galgas", 151)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                      extensionMethod_primaryInExpressionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_solveEntities (defineExtensionMethod_primaryInExpressionAST_solveEntities, NULL) ;

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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mObjectName COMMA_SOURCE_FILE ("expression-primary.galgas", 257)) ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_9975 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_9975.hasCurrentObject ()) {
    switch (enumerator_9975.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_10039 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_9975.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_10039->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_10184 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_9975.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_10184->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 262)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_10734 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_9975.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_10734->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_10270 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_10270.hasCurrentObject ()) {
          switch (enumerator_10270.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_10524 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_10270.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_10524->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 269)) COMMA_SOURCE_FILE ("expression-primary.galgas", 269)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_10637 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_10270.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_10637->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 271)) ;
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
          enumerator_10270.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_9975.gotoNextObject () ;
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_11263 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_11263.hasCurrentObject ()) {
    switch (enumerator_11263.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_11327 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_11263.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_11327->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_11456 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_11263.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11456->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 289)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_11990 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_11263.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_11990->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_11542 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_11542.hasCurrentObject ()) {
          switch (enumerator_11542.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_11796 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_11542.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_11796->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 296)) COMMA_SOURCE_FILE ("expression-primary.galgas", 296)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_11893 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_11542.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_11893->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 298)) ;
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
          enumerator_11542.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_11263.gotoNextObject () ;
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
  GALGAS_internalRepresentation var_internalRepresentation_13449 ;
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 338)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 338)) ;
        var_internalRepresentation_13449.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        var_internalRepresentation_13449 = GALGAS_internalRepresentation::constructor_standAloneIdentifier (object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 340)) ;
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_14154 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_14154->mAssociatedValue0 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 343)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 344)) ;
        var_internalRepresentation_13449.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 345)).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_internalRepresentation_13449 = GALGAS_internalRepresentation::constructor_structureMember (object->mProperty_mObjectName, GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 348))  COMMA_SOURCE_FILE ("expression-primary.galgas", 346)) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 351)) ;
          var_internalRepresentation_13449.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_14207 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_14207.hasCurrentObject ()) {
    switch (enumerator_14207.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_14758 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_14207.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_14758->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (var_internalRepresentation_13449, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_15391 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_14207.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15391->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_15391->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (var_internalRepresentation_13449, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 372)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_15964 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_14207.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_15964->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_15964->mAssociatedValue1 ;
        {
        routine_handleFunctionCallInExpressionNew (var_internalRepresentation_13449, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 389)) ;
        }
      }
      break ;
    }
    enumerator_14207.gotoNextObject () ;
  }
  switch (var_internalRepresentation_13449.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_16229 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (var_internalRepresentation_13449.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_16229->mAssociatedValue0 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_16173 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_16173, extractedValue_identifier, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 409)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_17186 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (var_internalRepresentation_13449.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_17186->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_17186->mAssociatedValue1 ;
      const enumGalgasBool test_6 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 411)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 411)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_16416 ;
        GALGAS_lstring joker_16383_2 ; // Joker input parameter
        GALGAS_propertyMap joker_16383_1 ; // Joker input parameter
        GALGAS_propertyList joker_16418_3 ; // Joker input parameter
        GALGAS_uint joker_16418_2 ; // Joker input parameter
        GALGAS_string joker_16418_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 412)).method_structure (joker_16383_2, joker_16383_1, var_structureMap_16416, joker_16418_3, joker_16418_2, joker_16418_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 412)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_16433 = var_structureMap_16416 ;
        GALGAS_objectIR var_masterPropertyIR_16537 ;
        {
        var_m_16433.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_16459 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_16433.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_16459, extractedValue_propertyName, var_masterPropertyIR_16537, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 414)) ;
        }
        GALGAS_uint var_index_16607 ;
        GALGAS_PLMType joker_16578 ; // Joker input parameter
        GALGAS_lstring joker_16589 ; // Joker input parameter
        var_masterPropertyIR_16537.method_property (joker_16578, joker_16589, var_index_16607, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 415)) ;
        GALGAS_objectIR var_newObject_16628 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_16537, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 417)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 418)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 418))  COMMA_SOURCE_FILE ("expression-primary.galgas", 418)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 419)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 416)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 422)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_16628, extractedValue_currentPointer, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 426)), var_index_16607.getter_string (SOURCE_FILE ("expression-primary.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 423)) ;
        }
        outArgument_outResult = var_newObject_16628 ;
      }else if (kBoolFalse == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 431)), GALGAS_string ("this should be a structure instance"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 431)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_17274 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (var_internalRepresentation_13449.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_17274->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_17274->mAssociatedValue1 ;
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
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_21628 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_21628->mAssociatedValue0 ;
      GALGAS_objectIR var_objectIR_18248 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_18180 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_18180, extractedValue_identifier, var_objectIR_18248, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 455)) ;
      }
      switch (var_objectIR_18248.enumValue ()) {
      case GALGAS_objectIR::kNotBuilt:
        break ;
      case GALGAS_objectIR::kEnum_globalVariableReference:
        {
          const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_18582 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (var_objectIR_18248.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_18582->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_18582->mAssociatedValue1 ;
          const enumGalgasBool test_0 = extractedValue_type.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 458)).boolEnum () ;
          if (kBoolTrue == test_0) {
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_18248  COMMA_SOURCE_FILE ("expression-primary.galgas", 459)) ;
          }else if (kBoolFalse == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 461)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 461)) ;
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
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 465)), GALGAS_string ("\xC2""\xAB""selfObject\xC2""\xBB"" invalid here"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 465)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_localVariableReference:
        {
          const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_19189 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (var_objectIR_18248.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_19189->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_19189->mAssociatedValue1 ;
          const enumGalgasBool test_3 = extractedValue_type.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 467)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_objectIR var_objectIR_18816 = GALGAS_objectIR::constructor_llvmTemporaryValue (extractedValue_type, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 470)), extractedValue_plmName.getter_location (SOURCE_FILE ("expression-primary.galgas", 470))  COMMA_SOURCE_FILE ("expression-primary.galgas", 470)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 470))  COMMA_SOURCE_FILE ("expression-primary.galgas", 468)) ;
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_18816  COMMA_SOURCE_FILE ("expression-primary.galgas", 472)) ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 474)), GALGAS_string ("this should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 474)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_registerReference:
        {
          const cEnumAssociatedValues_objectIR_registerReference * extractPtr_20668 = (const cEnumAssociatedValues_objectIR_registerReference *) (var_objectIR_18248.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_20668->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmRegisterName = extractPtr_20668->mAssociatedValue1 ;
          const GALGAS_bigint extractedValue_address = extractPtr_20668->mAssociatedValue4 ;
          const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_20668->mAssociatedValue5 ;
          const GALGAS_uint extractedValue_arraySize = extractPtr_20668->mAssociatedValue6 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 483)), GALGAS_string ("register is an array, dot notation unavailable"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 483)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_5) {
            GALGAS_objectIR var_registerIR_19705 ;
            {
            routine_getNewTempVariable (extractedValue_type, extractedValue_plmRegisterName.getter_location (SOURCE_FILE ("expression-primary.galgas", 485)), ioArgument_ioTemporaries, var_registerIR_19705, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 485)) ;
            }
            {
            extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerIR_19705, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 486)) ;
            }
            GALGAS_llvmBinaryOperation var_accessOperator_19899 ;
            GALGAS_bigint var_accessRightOperand_19941 ;
            GALGAS_sliceMap var_resultSliceMap_19981 ;
            GALGAS_PLMType var_resultType_20016 ;
            extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_19899, var_accessRightOperand_19941, var_resultSliceMap_19981, var_resultType_20016, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 487)) ;
            GALGAS_objectIR var_resultObject_20051 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_20016, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 496)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 496))  COMMA_SOURCE_FILE ("expression-primary.galgas", 496)), var_resultSliceMap_19981  COMMA_SOURCE_FILE ("expression-primary.galgas", 494)) ;
            ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 499)) ;
            {
            extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_20051, extensionGetter_type (var_registerIR_19705, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 502)), constinArgument_inPropertyName.getter_location (HERE), var_registerIR_19705, var_accessOperator_19899, GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-primary.galgas", 506)), var_accessRightOperand_19941  COMMA_SOURCE_FILE ("expression-primary.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 500)) ;
            }
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_19981, var_resultObject_20051  COMMA_SOURCE_FILE ("expression-primary.galgas", 508)) ;
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_temporaryReference:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 511)), GALGAS_string ("\xC2""\xAB""temporaryReference\xC2""\xBB"" invalid here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 513)), GALGAS_string ("\xC2""\xAB""property\xC2""\xBB"" invalid here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmTemporaryValue:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 515)), GALGAS_string ("\xC2""\xAB""llvmTemporaryValue\xC2""\xBB"" invalid here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 515)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalInteger:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 517)), GALGAS_string ("\xC2""\xAB""literalInteger\xC2""\xBB"" invalid here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 517)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmStructureConstant:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 519)), GALGAS_string ("\xC2""\xAB""llvmStructureConstant\xC2""\xBB"" invalid here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 519)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 521)), GALGAS_string ("a global string constant is invalid here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 521)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_zero:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 523)), GALGAS_string ("\xC2""\xAB""zero\xC2""\xBB"" invalid here"), fixItArray13  COMMA_SOURCE_FILE ("expression-primary.galgas", 523)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_possibleFunction:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 525)), GALGAS_string ("\xC2""\xAB""possibleFunction\xC2""\xBB"" invalid here"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 525)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_22679 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_22679->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_22679->mAssociatedValue1 ;
      const enumGalgasBool test_15 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 528)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 528)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_21811 ;
        GALGAS_lstring joker_21778_2 ; // Joker input parameter
        GALGAS_propertyMap joker_21778_1 ; // Joker input parameter
        GALGAS_propertyList joker_21813_3 ; // Joker input parameter
        GALGAS_uint joker_21813_2 ; // Joker input parameter
        GALGAS_string joker_21813_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 529)).method_structure (joker_21778_2, joker_21778_1, var_structureMap_21811, joker_21813_3, joker_21813_2, joker_21813_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 529)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_21828 = var_structureMap_21811 ;
        GALGAS_objectIR var_masterPropertyIR_21938 ;
        {
        var_m_21828.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_21854 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_21828.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_21854, extractedValue_masterPropertyName, var_masterPropertyIR_21938, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 531)) ;
        }
        GALGAS_uint var_index_22008 ;
        GALGAS_PLMType joker_21979 ; // Joker input parameter
        GALGAS_lstring joker_21990 ; // Joker input parameter
        var_masterPropertyIR_21938.method_property (joker_21979, joker_21990, var_index_22008, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
        GALGAS_objectIR var_newObject_22029 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_21938, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 534)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 535)), extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 535))  COMMA_SOURCE_FILE ("expression-primary.galgas", 535)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 536)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 533)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 539)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_22029, extractedValue_currentPointer, extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 543)), var_index_22008.getter_string (SOURCE_FILE ("expression-primary.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_newObject_22029  COMMA_SOURCE_FILE ("expression-primary.galgas", 546)) ;
      }else if (kBoolFalse == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 548)), GALGAS_string ("'").add_operation (extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)).add_operation (GALGAS_string ("' should be a structure"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 548)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_23524 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_23524->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentObject = extractPtr_23524->mAssociatedValue1 ;
      GALGAS_llvmBinaryOperation var_accessOperator_22835 ;
      GALGAS_bigint var_accessRightOperand_22873 ;
      GALGAS_sliceMap var_resultSliceMap_22909 ;
      GALGAS_PLMType var_resultType_22940 ;
      extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_22835, var_accessRightOperand_22873, var_resultSliceMap_22909, var_resultType_22940, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 551)) ;
      GALGAS_objectIR var_resultObject_22967 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_22940, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 560)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 560))  COMMA_SOURCE_FILE ("expression-primary.galgas", 560)), var_resultSliceMap_22909  COMMA_SOURCE_FILE ("expression-primary.galgas", 558)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 563)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_22967, extensionGetter_type (extractedValue_currentObject, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 566)), constinArgument_inPropertyName.getter_location (HERE), extractedValue_currentObject, var_accessOperator_22835, GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-primary.galgas", 570)), var_accessRightOperand_22873  COMMA_SOURCE_FILE ("expression-primary.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 564)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_22909, var_resultObject_22967  COMMA_SOURCE_FILE ("expression-primary.galgas", 572)) ;
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
  GALGAS_objectIR var_variableIR_24416 ;
  GALGAS_location var_errorLocation_24442 ;
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_24638 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_24638->mAssociatedValue0 ;
      var_errorLocation_24442 = extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 598)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_24581 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_24581, extractedValue_identifier, var_variableIR_24416, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 599)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_25635 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25635->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_25635->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 601)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 601)).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_errorLocation_24442 = extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 602)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_24875 ;
        GALGAS_lstring joker_24842_2 ; // Joker input parameter
        GALGAS_propertyMap joker_24842_1 ; // Joker input parameter
        GALGAS_propertyList joker_24877_3 ; // Joker input parameter
        GALGAS_uint joker_24877_2 ; // Joker input parameter
        GALGAS_string joker_24877_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 603)).method_structure (joker_24842_2, joker_24842_1, var_structureMap_24875, joker_24877_3, joker_24877_2, joker_24877_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 603)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_24892 = var_structureMap_24875 ;
        GALGAS_objectIR var_masterPropertyIR_24996 ;
        {
        var_m_24892.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_24918 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_24892.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_24918, extractedValue_propertyName, var_masterPropertyIR_24996, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 605)) ;
        }
        var_variableIR_24416 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_24996, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 607)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 608)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 608))  COMMA_SOURCE_FILE ("expression-primary.galgas", 608)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 609)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 606)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 612)) ;
        GALGAS_uint var_index_25354 ;
        GALGAS_PLMType joker_25325 ; // Joker input parameter
        GALGAS_lstring joker_25336 ; // Joker input parameter
        var_masterPropertyIR_24996.method_property (joker_25325, joker_25336, var_index_25354, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 613)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_variableIR_24416, extractedValue_currentPointerIR, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 617)), var_index_25354.getter_string (SOURCE_FILE ("expression-primary.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 614)) ;
        }
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 621)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 621)) ;
        var_variableIR_24416.drop () ; // Release error dropped variable
        var_errorLocation_24442.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_25778 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_25778->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_25778->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 624)), GALGAS_string ("this object is not an array"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 624)) ;
      var_variableIR_24416.drop () ; // Release error dropped variable
      var_errorLocation_24442.drop () ; // Release error dropped variable
    }
    break ;
  }
  const enumGalgasBool test_3 = extensionGetter_type (var_variableIR_24416, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 627)).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 627)).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_24416, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 628)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 643)), var_variableIR_24416  COMMA_SOURCE_FILE ("expression-primary.galgas", 643)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = var_variableIR_24416.getter_isRegisterReference (SOURCE_FILE ("expression-primary.galgas", 644)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_sliceMap var_sliceMap_26973 ;
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_24416, var_sliceMap_26973, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 645)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_sliceMap_26973, var_variableIR_24416  COMMA_SOURCE_FILE ("expression-primary.galgas", 661)) ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_errorLocation_24442, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 663)) ;
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
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 686)) ;
  }
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_28312 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_28312->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 691)), GALGAS_string ("this is not a function"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 691)) ;
      ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_28874 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_28874->mAssociatedValue0 ;
      {
      routine_handleStandAloneFunctionCallInExpression (ioArgument_ioInternalRepresentation, extractedValue_identifier, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 695)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_29701 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_29701->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_29701->mAssociatedValue1 ;
      const enumGalgasBool test_3 = extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 712)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 712)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_objectIR var_callReturnedResult_29485 ;
        {
        routine_handleMethodCallInExpressionNew (extractedValue_propertyName, extractedValue_currentPointerIR, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, ioArgument_ioInstructionGenerationList, var_callReturnedResult_29485, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 713)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 728)), var_callReturnedResult_29485  COMMA_SOURCE_FILE ("expression-primary.galgas", 728)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 730)), GALGAS_string ("this object should be a structure"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 730)) ;
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
  GALGAS_universalPropertyAndRoutineMapForContext var_currentMap_30542 ;
  GALGAS_lstring joker_30511_2 ; // Joker input parameter
  GALGAS_propertyMap joker_30511_1 ; // Joker input parameter
  GALGAS_propertyList joker_30544_3 ; // Joker input parameter
  GALGAS_uint joker_30544_2 ; // Joker input parameter
  GALGAS_string joker_30544_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 752)).method_structure (joker_30511_2, joker_30511_1, var_currentMap_30542, joker_30544_3, joker_30544_2, joker_30544_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 752)) ;
  GALGAS_lstring var_routineMangledName_30572 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 753)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 753)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 753)), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 753)) ;
  GALGAS_lstring var_signature_30720 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 755)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_30909 ;
  GALGAS_routineDescriptor var_routineDescriptor_30951 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) var_currentMap_30542.ptr (), constinArgument_inMethodName, var_signature_30720, var_LLVMInvocationRoutineName_30909, var_routineDescriptor_30951, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 757)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_routineDescriptor_30951.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 764)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 764)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 765)), GALGAS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 765)) ;
    var_routineDescriptor_30951.drop () ; // Release error dropped variable
    outArgument_outCallReturnedResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_calleeKindIR var_calleeKind_31207 = function_checkMode (constinArgument_inMode, extensionGetter_executionMode (var_routineDescriptor_30951.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 770)), var_routineDescriptor_30951.getter_mRoutineKind (HERE), constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 768)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_31499 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 775)) ;
    switch (var_routineDescriptor_30951.getter_mRoutineCallingScheme (HERE).enumValue ()) {
    case GALGAS_routineCallingSheme::kNotBuilt:
      break ;
    case GALGAS_routineCallingSheme::kEnum_staticCall:
      {
        var_effectiveParameterListIR_31499.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 778)), constinArgument_inCurrentPointerIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 778)) ;
      }
      break ;
    case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
      {
      }
      break ;
    }
    {
    routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_routineDescriptor_30951.getter_mSignature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_31499, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 782)) ;
    }
    {
    routine_getNewTempVariable (var_routineDescriptor_30951.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 798)), var_routineMangledName_30572.getter_location (SOURCE_FILE ("expression-primary.galgas", 798)), ioArgument_ioTemporaries, outArgument_outCallReturnedResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 798)) ;
    }
    switch (var_routineDescriptor_30951.getter_mRoutineCallingScheme (HERE).enumValue ()) {
    case GALGAS_routineCallingSheme::kNotBuilt:
      break ;
    case GALGAS_routineCallingSheme::kEnum_staticCall:
      {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), outArgument_outCallReturnedResult, var_routineMangledName_30572, var_LLVMInvocationRoutineName_30909, var_calleeKind_31207, var_effectiveParameterListIR_31499  COMMA_SOURCE_FILE ("expression-primary.galgas", 803))  COMMA_SOURCE_FILE ("expression-primary.galgas", 803)) ;
        {
        ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_30572 COMMA_SOURCE_FILE ("expression-primary.galgas", 812)) ;
        }
      }
      break ;
    case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
      {
        const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall * extractPtr_33805 = (const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall *) (var_routineDescriptor_30951.getter_mRoutineCallingScheme (HERE).unsafePointer ()) ;
        const GALGAS_uint extractedValue_propertyIndex = extractPtr_33805->mAssociatedValue0 ;
        GALGAS_objectIR var_propertyReference_33076 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 815)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 816)), constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 816))  COMMA_SOURCE_FILE ("expression-primary.galgas", 816)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 817)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 814)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 820)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_propertyReference_33076, constinArgument_inCurrentPointerIR, constinArgument_inMethodName.getter_string (SOURCE_FILE ("expression-primary.galgas", 824)), extractedValue_propertyIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 825)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 821)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (var_propertyReference_33076, GALGAS_PLMType::constructor_function (var_routineDescriptor_30951  COMMA_SOURCE_FILE ("expression-primary.galgas", 830)), outArgument_outCallReturnedResult, var_effectiveParameterListIR_31499  COMMA_SOURCE_FILE ("expression-primary.galgas", 828))  COMMA_SOURCE_FILE ("expression-primary.galgas", 828)) ;
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
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 858)) ;
  }
  GALGAS_lstring var_routineMangledName_34863 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inFunctionName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 861)) ;
  GALGAS_lstring var_signature_34978 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 863)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_35175 ;
  GALGAS_routineDescriptor var_routineDescriptor_35217 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), constinArgument_inFunctionName, var_signature_34978, var_LLVMInvocationRoutineName_35175, var_routineDescriptor_35217, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 865)) ;
  GALGAS_routineKind var_routineKind_35285 = var_routineDescriptor_35217.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_35335 = extensionGetter_executionMode (var_routineKind_35285, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 873)) ;
  GALGAS_routineTypedSignature var_formalSignature_35387 = var_routineDescriptor_35217.getter_mSignature (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_routineDescriptor_35217.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 876)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 876)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inFunctionName.getter_location (SOURCE_FILE ("expression-primary.galgas", 877)), GALGAS_string ("not a function (returns no value)"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 877)) ;
    var_routineDescriptor_35217.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    GALGAS_calleeKindIR var_calleeKind_35649 = function_checkMode (constinArgument_inMode, var_calleeMode_35335, var_routineKind_35285, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 880)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_35883 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 887)) ;
    {
    routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_formalSignature_35387, constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_35883, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 888)) ;
    }
    GALGAS_objectIR var_functionResult_36588 ;
    {
    routine_getNewTempVariable (var_routineDescriptor_35217.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 904)), var_routineMangledName_34863.getter_location (SOURCE_FILE ("expression-primary.galgas", 904)), ioArgument_ioTemporaries, var_functionResult_36588, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 904)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_functionResult_36588, var_routineMangledName_34863, var_LLVMInvocationRoutineName_35175, var_calleeKind_35649, var_effectiveParameterListIR_35883  COMMA_SOURCE_FILE ("expression-primary.galgas", 906))  COMMA_SOURCE_FILE ("expression-primary.galgas", 906)) ;
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_34863 COMMA_SOURCE_FILE ("expression-primary.galgas", 915)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 917)), var_functionResult_36588  COMMA_SOURCE_FILE ("expression-primary.galgas", 917)) ;
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
  GALGAS_procEffectiveParameterList var_parameterList_38055 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 939)) ;
  cEnumerator_routineTypedSignature enumerator_38098 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_38141 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_38098.hasCurrentObject () && enumerator_38141.hasCurrentObject ()) {
    switch (enumerator_38141.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_39180 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_38141.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_39180->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_39180->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_39180->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_38098.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 944)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 946)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 946)) ;
        }
        GALGAS_PLMType var_type_38279 = temp_0 ;
        GALGAS_lstring var_varLLVMName_38466 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 948)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 948)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 948)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 948))  COMMA_SOURCE_FILE ("expression-primary.galgas", 948)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 949)) ;
        GALGAS_objectIR var_objectIR_38598 = GALGAS_objectIR::constructor_localVariableReference (var_type_38279, var_varLLVMName_38466  COMMA_SOURCE_FILE ("expression-primary.galgas", 950)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_38716 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_38716, extractedValue_name, var_objectIR_38598, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 952)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_38790 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_38790, extractedValue_name, var_objectIR_38598, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 954)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 954)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_38466.getter_string (SOURCE_FILE ("expression-primary.galgas", 956)), extensionGetter_llvmTypeName (var_type_38279, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 956))  COMMA_SOURCE_FILE ("expression-primary.galgas", 956)) ;
        var_parameterList_38055.addAssign_operation (enumerator_38141.current_mEffectiveParameterKind (HERE), enumerator_38141.current_mSelector (HERE), var_type_38279  COMMA_SOURCE_FILE ("expression-primary.galgas", 957)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 959)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_38279, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_38466.getter_string (SOURCE_FILE ("expression-primary.galgas", 960)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 960)), var_varLLVMName_38466.getter_location (SOURCE_FILE ("expression-primary.galgas", 960))  COMMA_SOURCE_FILE ("expression-primary.galgas", 960)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 960))  COMMA_SOURCE_FILE ("expression-primary.galgas", 960))  COMMA_SOURCE_FILE ("expression-primary.galgas", 958)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_39998 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_38141.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_39998->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_39290 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_39237 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_39237, extractedValue_name, var_objectIR_39290, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 962)) ;
        }
        var_parameterList_38055.addAssign_operation (enumerator_38141.current_mEffectiveParameterKind (HERE), enumerator_38141.current_mSelector (HERE), extensionGetter_type (var_objectIR_39290, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 972))  COMMA_SOURCE_FILE ("expression-primary.galgas", 972)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 974)), GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_39290, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 976)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_39290, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 977)), extensionGetter_location (var_objectIR_39290, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 978))  COMMA_SOURCE_FILE ("expression-primary.galgas", 977)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 979))  COMMA_SOURCE_FILE ("expression-primary.galgas", 975))  COMMA_SOURCE_FILE ("expression-primary.galgas", 973)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_41125 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_38141.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_41125->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_41125->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_40581 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_38098.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 986)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_40581, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 982)) ;
        GALGAS_objectIR var_expressionValue_40747 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_40581, extractedValue_endOfExp, var_expressionValue_40747, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 996)) ;
        }
        GALGAS_objectIR var_result_40774 = function_checkAssignmentCompatibility (var_expressionValue_40747, enumerator_38098.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1004)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1002)) ;
        var_parameterList_38055.addAssign_operation (enumerator_38141.current_mEffectiveParameterKind (HERE), enumerator_38141.current_mSelector (HERE), enumerator_38098.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1008))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1008)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 1009)), var_result_40774  COMMA_SOURCE_FILE ("expression-primary.galgas", 1009)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_41866 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_38141.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_41866->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_41245 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_41188 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_41188, extractedValue_name, var_objectIR_41245, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1011)) ;
        }
        var_parameterList_38055.addAssign_operation (enumerator_38141.current_mEffectiveParameterKind (HERE), enumerator_38141.current_mSelector (HERE), extensionGetter_type (var_objectIR_41245, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1018))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1018)) ;
        GALGAS_objectIR var_argumentIR_41617 = GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_41245, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1020)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_41245, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1021)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1021)), extensionGetter_location (var_objectIR_41245, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1021))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1021)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1022))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1019)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1024)), var_argumentIR_41617  COMMA_SOURCE_FILE ("expression-primary.galgas", 1024)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_43914 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_38141.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_43914->mAssociatedValue0 ;
        switch (constinArgument_inSelfType.enumValue ()) {
        case GALGAS_PLMType::kNotBuilt:
          break ;
        case GALGAS_PLMType::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1028)), GALGAS_string ("'self' is not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1028)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1030)), GALGAS_string ("a structure type is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 1030)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_arrayType:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1032)), GALGAS_string ("a structure type is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 1032)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_boolean:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1034)), GALGAS_string ("a structure type is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1034)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_staticInteger:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1036)), GALGAS_string ("a structure type is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 1036)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1038)), GALGAS_string ("a structure type is required here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 1038)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1040)), GALGAS_string ("a structure type is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 1040)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1042)), GALGAS_string ("a structure type is required here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1042)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_pointer:
          {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1044)), GALGAS_string ("a structure type is required here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 1044)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_integer:
          {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1046)), GALGAS_string ("a structure type is required here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1046)) ;
            var_parameterList_38055.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_structure:
          {
            const cEnumAssociatedValues_PLMType_structure * extractPtr_43904 = (const cEnumAssociatedValues_PLMType_structure *) (constinArgument_inSelfType.unsafePointer ()) ;
            const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_43904->mAssociatedValue2 ;
            GALGAS_universalPropertyAndRoutineMapForContext var_m_43292 = extractedValue_universalMap ;
            GALGAS_objectIR var_propertyObject_43378 ;
            {
            var_m_43292.insulate (HERE) ;
            cPtr_universalPropertyAndRoutineMapForContext * ptr_43320 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_43292.ptr () ;
            callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_43320, extractedValue_name, var_propertyObject_43378, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1049)) ;
            }
            GALGAS_uint var_idx_43431 ;
            GALGAS_PLMType joker_43414_2 ; // Joker input parameter
            GALGAS_lstring joker_43414_1 ; // Joker input parameter
            var_propertyObject_43378.method_property (joker_43414_2, joker_43414_1, var_idx_43431, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1050)) ;
            GALGAS_objectIR var_fieldObjectReference_43531 ;
            {
            routine_getNewTempVariable (extensionGetter_type (var_propertyObject_43378, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1051)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1051)), ioArgument_ioTemporaries, var_fieldObjectReference_43531, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1051)) ;
            }
            {
            extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_43531, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1055)), var_idx_43431, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1052)) ;
            }
            var_parameterList_38055.addAssign_operation (enumerator_38141.current_mEffectiveParameterKind (HERE), enumerator_38141.current_mSelector (HERE), extensionGetter_type (var_propertyObject_43378, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1058))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1058)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1060)), var_fieldObjectReference_43531  COMMA_SOURCE_FILE ("expression-primary.galgas", 1059)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_38098.gotoNextObject () ;
    enumerator_38141.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1066)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1066)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1067)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1067)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1067)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1067)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1068)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1067)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1067)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1068)), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 1067)) ;
  }else if (kBoolFalse == test_13) {
    cEnumerator_routineTypedSignature enumerator_44250 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_44279 (var_parameterList_38055, kENUMERATION_UP) ;
    while (enumerator_44250.hasCurrentObject () && enumerator_44279.hasCurrentObject ()) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_44250.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1071)).objectCompare (extensionGetter_key (enumerator_44279.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1071)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_44279.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1072)), GALGAS_string ("the actual parameter type is '").add_operation (extensionGetter_key (enumerator_44279.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1072)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1072)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1072)).add_operation (enumerator_44250.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1073)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1073)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1073)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 1072)) ;
      }
      GALGAS_string var_requiredPassingMode_44580 = extensionGetter_requiredActualPassingModeForSelector (enumerator_44250.current_mFormalArgumentPassingMode (HERE), enumerator_44250.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1075)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1075)) ;
      GALGAS_string var_testedPassingMode_44701 = extensionGetter_passingModeForActualSelector (enumerator_44279.current_mEffectiveParameterPassingMode (HERE), enumerator_44279.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1076)) ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_44580.objectCompare (var_testedPassingMode_44701)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_44279.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1078)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_44580, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1078)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1078)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 1078)) ;
      }
      enumerator_44250.gotoNextObject () ;
      enumerator_44279.gotoNextObject () ;
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
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 1108)).operator_not (SOURCE_FILE ("expression-primary.galgas", 1108)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1109)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_46357 ;
      GALGAS_objectIR joker_46324_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_46324_1, var_functionName_46357, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1111)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_46357.getter_location (SOURCE_FILE ("expression-primary.galgas", 1112)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1112)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_46528 ;
      GALGAS_lstring var_functionName_46559 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_46528, var_functionName_46559, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1114)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_47266 ;
      GALGAS_calleeKindIR var_routineKind_47315 ;
      GALGAS_lstring var_functionMangledName_47374 ;
      GALGAS_lstring var_functionNameForGeneration_47445 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_46528, var_functionName_46559, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_47266, var_routineKind_47315, var_functionMangledName_47374, var_functionNameForGeneration_47445, outArgument_outReturnedType, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1115)) ;
      }
      GALGAS_objectIR var_functionResult_47633 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_47374.getter_location (SOURCE_FILE ("expression-primary.galgas", 1138)), ioArgument_ioTemporaries, var_functionResult_47633, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1138)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_47633, var_functionMangledName_47374, var_functionNameForGeneration_47445, var_routineKind_47315, var_effectiveParameterListIR_47266  COMMA_SOURCE_FILE ("expression-primary.galgas", 1140))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1140)) ;
      ioArgument_ioObjectPtr = var_functionResult_47633 ;
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
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1178)) ;
  GALGAS_PLMType var_receiverType_49265 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1179)) ;
  GALGAS_bool var_specialCase_49378 = var_receiverType_49265.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 1181)) ;
  const enumGalgasBool test_0 = var_specialCase_49378.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_propertyMap_49503 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_49541 ;
    GALGAS_lstring joker_49459_1 ; // Joker input parameter
    GALGAS_propertyList joker_49543_3 ; // Joker input parameter
    GALGAS_uint joker_49543_2 ; // Joker input parameter
    GALGAS_string joker_49543_1 ; // Joker input parameter
    var_receiverType_49265.method_structure (joker_49459_1, var_propertyMap_49503, var_universalMap_49541, joker_49543_3, joker_49543_2, joker_49543_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1183)) ;
    const enumGalgasBool test_1 = var_propertyMap_49503.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1184)) COMMA_SOURCE_FILE ("expression-primary.galgas", 1184)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_propertyObject_49671 ;
      GALGAS_bool joker_49640 ; // Joker input parameter
      var_propertyMap_49503.method_searchKey (constinArgument_inRoutineName, joker_49640, var_propertyObject_49671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1185)) ;
      GALGAS_PLMType var_type_49718 ;
      GALGAS_lstring var_plmName_49746 ;
      GALGAS_uint var_index_49770 ;
      var_propertyObject_49671.method_property (var_type_49718, var_plmName_49746, var_index_49770, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1186)) ;
      var_specialCase_49378 = var_type_49718.getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 1187)) ;
      const enumGalgasBool test_2 = var_specialCase_49378.boolEnum () ;
      if (kBoolTrue == test_2) {
        constinArgument_inRoutineName.log ("inRoutineName"  COMMA_SOURCE_FILE ("expression-primary.galgas", 1189)) ;
      }
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_receiverType_49265.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1194)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1195)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 1195)) ;
  }
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_receiverType_49265.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1199)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string ("$").add_operation (extensionGetter_key (var_receiverType_49265, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1199)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1199)) ;
  }
  outArgument_outRoutineMangledName = function_routineMangledNameFromCall (temp_4, constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1198)) ;
  GALGAS_routineDescriptor var_routineDescriptor_50436 ;
  GALGAS_location var_outRoutineLocation_50474 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), constinArgument_inRoutineName, extensionGetter_routineSignature (constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1205)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1205)), outArgument_outRoutineNameForGeneration, var_routineDescriptor_50436, var_outRoutineLocation_50474, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1203)) ;
  GALGAS_bool var_isPublic_50493 = var_routineDescriptor_50436.getter_mIsPublic (HERE) ;
  GALGAS_routineKind var_routineKind_50541 = var_routineDescriptor_50436.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_50591 = extensionGetter_executionMode (var_routineKind_50541, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1212)) ;
  GALGAS_routineTypedSignature var_formalSignature_50678 = var_routineDescriptor_50436.getter_mSignature (HERE) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_routineDescriptor_50436.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1214)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    outArgument_outReturnedType = GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1215)) ;
  }else if (kBoolFalse == test_6) {
    outArgument_outReturnedType = var_routineDescriptor_50436.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1217)) ;
  }
  const enumGalgasBool test_7 = var_isPublic_50493.operator_not (SOURCE_FILE ("expression-primary.galgas", 1220)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_receiverType_49265.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1221)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_declarationFile_51006 = var_outRoutineLocation_50474.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1222)) ;
      GALGAS_string var_invocationFile_51059 = constinArgument_inRoutineName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1223)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_invocationFile_51059.objectCompare (var_declarationFile_51006)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1225)), GALGAS_string ("this routine is not public"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1225)) ;
      }
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 1232)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredMode, var_calleeMode_50591, var_routineKind_50541, constinArgument_inRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1234)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_50678, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1241)) ;
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
  GALGAS_procEffectiveParameterList var_parameterList_53503 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1282)) ;
  cEnumerator_routineTypedSignature enumerator_53546 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_53589 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_53546.hasCurrentObject () && enumerator_53589.hasCurrentObject ()) {
    switch (enumerator_53589.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_55079 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_53589.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_55079->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_55079->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_55079->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_53546.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1287)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1289)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1289)) ;
        }
        GALGAS_PLMType var_type_53727 = temp_0 ;
        GALGAS_lstring var_varLLVMName_53914 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1291)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1291)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1291)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1291))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1291)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1292)) ;
        GALGAS_objectIR var_objectIR_54046 = GALGAS_objectIR::constructor_localVariableReference (var_type_53727, var_varLLVMName_53914  COMMA_SOURCE_FILE ("expression-primary.galgas", 1293)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_54164 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_54164, extractedValue_name, var_objectIR_54046, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1295)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_53727, GALGAS_bool (true), var_objectIR_54046, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1296)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_54460 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_54460, extractedValue_name, var_objectIR_54046, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 1305)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1305)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_53727, GALGAS_bool (true), var_objectIR_54046, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1306)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_53914.getter_string (SOURCE_FILE ("expression-primary.galgas", 1315)), extensionGetter_llvmTypeName (var_type_53727, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1315))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1315)) ;
        var_parameterList_53503.addAssign_operation (enumerator_53589.current_mEffectiveParameterKind (HERE), enumerator_53589.current_mSelector (HERE), var_type_53727  COMMA_SOURCE_FILE ("expression-primary.galgas", 1316)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1318)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_53727, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_53914.getter_string (SOURCE_FILE ("expression-primary.galgas", 1319)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1319)), var_varLLVMName_53914.getter_location (SOURCE_FILE ("expression-primary.galgas", 1319))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1319)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1319))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1319))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1317)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_56138 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_53589.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_56138->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_55189 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_55136 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_55136, extractedValue_name, var_objectIR_55189, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1321)) ;
        }
        GALGAS_PLMType var_type_55276 ;
        GALGAS_bool var_accessIsAllowed_55323 ;
        GALGAS_bool var_isCopyable_55390 ;
        GALGAS_bool var_canBeUsedAsInputParameter_55504 ;
        {
        GALGAS_objectIR joker_55342 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_55276, var_accessIsAllowed_55323, joker_55342, var_isCopyable_55390, var_canBeUsedAsInputParameter_55504, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1322)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_55323.operator_not (SOURCE_FILE ("expression-primary.galgas", 1330)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1331)), GALGAS_string ("routine has no access right on the this variable"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 1331)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter_55504.operator_not (SOURCE_FILE ("expression-primary.galgas", 1333)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1334)), GALGAS_string ("this variable cannot be used as input parameter"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1334)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable_55390.operator_not (SOURCE_FILE ("expression-primary.galgas", 1336)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1337)), GALGAS_string ("an $").add_operation (extensionGetter_key (var_type_55276, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1337)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1337)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1337)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 1337)) ;
        }
        var_parameterList_53503.addAssign_operation (enumerator_53589.current_mEffectiveParameterKind (HERE), enumerator_53589.current_mSelector (HERE), var_type_55276  COMMA_SOURCE_FILE ("expression-primary.galgas", 1339)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1341)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_55276, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_55189, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1342)), extensionGetter_location (var_objectIR_55189, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1342))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1342)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1342))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1342))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1340)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_57265 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_53589.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_57265->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_57265->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_56721 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_53546.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1348)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_56721, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1344)) ;
        GALGAS_objectIR var_expressionValue_56887 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_56721, extractedValue_endOfExp, var_expressionValue_56887, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1358)) ;
        }
        GALGAS_objectIR var_result_56914 = function_checkAssignmentCompatibility (var_expressionValue_56887, enumerator_53546.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1366)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1364)) ;
        var_parameterList_53503.addAssign_operation (enumerator_53589.current_mEffectiveParameterKind (HERE), enumerator_53589.current_mSelector (HERE), enumerator_53546.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1370))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1370)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 1371)), var_result_56914  COMMA_SOURCE_FILE ("expression-primary.galgas", 1371)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_58149 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_53589.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_58149->mAssociatedValue0 ;
        GALGAS_PLMType var_type_57394 ;
        GALGAS_bool var_accessIsAllowed_57441 ;
        GALGAS_objectIR var_objectIR_57472 ;
        GALGAS_bool var_canBeUsedAsInputParameter_57549 ;
        {
        GALGAS_bool joker_57482_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_57394, var_accessIsAllowed_57441, var_objectIR_57472, joker_57482_1, var_canBeUsedAsInputParameter_57549, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1373)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter_57549.operator_not (SOURCE_FILE ("expression-primary.galgas", 1381)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1382)), GALGAS_string ("this variable cannot be used as output/input parameter"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1382)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed_57441.operator_not (SOURCE_FILE ("expression-primary.galgas", 1384)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1385)), GALGAS_string ("routine has no access right on the this variable"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1385)) ;
        }
        var_parameterList_53503.addAssign_operation (enumerator_53589.current_mEffectiveParameterKind (HERE), enumerator_53589.current_mSelector (HERE), var_type_57394  COMMA_SOURCE_FILE ("expression-primary.galgas", 1387)) ;
        GALGAS_objectIR var_argumentIR_57911 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_57394, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_57472, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1390)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1390)), extensionGetter_location (var_objectIR_57472, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1390))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1390)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1391))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1388)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1393)), var_argumentIR_57911  COMMA_SOURCE_FILE ("expression-primary.galgas", 1393)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_60593 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_53589.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_60593->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1395)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1396)), GALGAS_string ("'self' is not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 1396)) ;
          var_parameterList_53503.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("expression-primary.galgas", 1397)).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1398)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1398)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1398)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 1398)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("expression-primary.galgas", 1399)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1400)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1400)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 1400)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.enumValue ()) {
              case GALGAS_PLMType::kNotBuilt:
                break ;
              case GALGAS_PLMType::kEnum_opaque:
                {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1404)), GALGAS_string ("a structure type is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 1404)) ;
                  var_parameterList_53503.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_arrayType:
                {
                  TC_Array <C_FixItDescription> fixItArray20 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1406)), GALGAS_string ("a structure type is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-primary.galgas", 1406)) ;
                  var_parameterList_53503.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_boolean:
              case GALGAS_PLMType::kEnum_void:
                {
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1408)), GALGAS_string ("a structure type is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-primary.galgas", 1408)) ;
                  var_parameterList_53503.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_staticInteger:
                {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1410)), GALGAS_string ("a structure type is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-primary.galgas", 1410)) ;
                  var_parameterList_53503.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_literalString:
                {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1412)), GALGAS_string ("a structure type is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-primary.galgas", 1412)) ;
                  var_parameterList_53503.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_enumeration:
                {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1414)), GALGAS_string ("a structure type is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-primary.galgas", 1414)) ;
                  var_parameterList_53503.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_function:
                {
                  TC_Array <C_FixItDescription> fixItArray25 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1416)), GALGAS_string ("a structure type is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-primary.galgas", 1416)) ;
                  var_parameterList_53503.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_pointer:
                {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1418)), GALGAS_string ("a structure type is required here"), fixItArray26  COMMA_SOURCE_FILE ("expression-primary.galgas", 1418)) ;
                  var_parameterList_53503.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_integer:
                {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1420)), GALGAS_string ("a structure type is required here"), fixItArray27  COMMA_SOURCE_FILE ("expression-primary.galgas", 1420)) ;
                  var_parameterList_53503.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_structure:
                {
                  const cEnumAssociatedValues_PLMType_structure * extractPtr_60570 = (const cEnumAssociatedValues_PLMType_structure *) (constinArgument_inSelfType.unsafePointer ()) ;
                  const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_60570->mAssociatedValue2 ;
                  GALGAS_universalPropertyAndRoutineMapForContext var_m_59932 = extractedValue_universalMap ;
                  GALGAS_objectIR var_propertyObject_60020 ;
                  {
                  var_m_59932.insulate (HERE) ;
                  cPtr_universalPropertyAndRoutineMapForContext * ptr_59962 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_59932.ptr () ;
                  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_59962, extractedValue_name, var_propertyObject_60020, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1423)) ;
                  }
                  GALGAS_uint var_idx_60075 ;
                  GALGAS_PLMType joker_60058_2 ; // Joker input parameter
                  GALGAS_lstring joker_60058_1 ; // Joker input parameter
                  var_propertyObject_60020.method_property (joker_60058_2, joker_60058_1, var_idx_60075, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1424)) ;
                  GALGAS_objectIR var_fieldObjectReference_60177 ;
                  {
                  routine_getNewTempVariable (extensionGetter_type (var_propertyObject_60020, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1425)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1425)), ioArgument_ioTemporaries, var_fieldObjectReference_60177, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1425)) ;
                  }
                  {
                  extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_60177, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1429)), var_idx_60075, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1426)) ;
                  }
                  var_parameterList_53503.addAssign_operation (enumerator_53589.current_mEffectiveParameterKind (HERE), enumerator_53589.current_mSelector (HERE), extensionGetter_type (var_propertyObject_60020, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1432))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1432)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1434)), var_fieldObjectReference_60177  COMMA_SOURCE_FILE ("expression-primary.galgas", 1433)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_53546.gotoNextObject () ;
    enumerator_53589.gotoNextObject () ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1441)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1441)))).boolEnum () ;
  if (kBoolTrue == test_28) {
    TC_Array <C_FixItDescription> fixItArray29 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1442)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1442)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1442)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1442)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1443)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1442)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1442)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1443)), fixItArray29  COMMA_SOURCE_FILE ("expression-primary.galgas", 1442)) ;
  }else if (kBoolFalse == test_28) {
    cEnumerator_routineTypedSignature enumerator_60928 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_60957 (var_parameterList_53503, kENUMERATION_UP) ;
    while (enumerator_60928.hasCurrentObject () && enumerator_60957.hasCurrentObject ()) {
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_60928.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1446)).objectCompare (extensionGetter_key (enumerator_60957.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1446)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_60957.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1447)), GALGAS_string ("the actual parameter type is '").add_operation (extensionGetter_key (enumerator_60957.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1447)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1447)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1447)).add_operation (enumerator_60928.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1448)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1448)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1448)), fixItArray31  COMMA_SOURCE_FILE ("expression-primary.galgas", 1447)) ;
      }
      GALGAS_string var_requiredPassingMode_61258 = extensionGetter_requiredActualPassingModeForSelector (enumerator_60928.current_mFormalArgumentPassingMode (HERE), enumerator_60928.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1450)) ;
      GALGAS_string var_testedPassingMode_61379 = extensionGetter_passingModeForActualSelector (enumerator_60957.current_mEffectiveParameterPassingMode (HERE), enumerator_60957.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1451)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_61258.objectCompare (var_testedPassingMode_61379)).boolEnum () ;
      if (kBoolTrue == test_32) {
        TC_Array <C_FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_60957.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1453)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_61258, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1453)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1453)), fixItArray33  COMMA_SOURCE_FILE ("expression-primary.galgas", 1453)) ;
      }
      enumerator_60928.gotoNextObject () ;
      enumerator_60957.gotoNextObject () ;
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
//                          Overriding extension method '@checkInstructionAST solveEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_checkInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                               GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                               const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                               const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                               GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_expressionSE var_expression_2865 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_2865, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 55)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_checkInstructionSE::constructor_new (object->mProperty_mInstructionLocation, var_expression_2865  COMMA_SOURCE_FILE ("directive-check.galgas", 61))  COMMA_SOURCE_FILE ("directive-check.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_checkInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                      extensionMethod_checkInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_solveEntities (defineExtensionMethod_checkInstructionAST_solveEntities, NULL) ;

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
  GALGAS_instructionListIR var_instructionGenerationList_4138 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 83)) ;
  GALGAS_objectIR var_expressionResult_4584 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("directive-check.galgas", 88)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4138, var_expressionResult_4584, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 84)) ;
  const enumGalgasBool test_0 = extensionGetter_type (var_expressionResult_4584, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 99)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 99)).operator_not (SOURCE_FILE ("directive-check.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 100)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_4584, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 103)).operator_not (SOURCE_FILE ("directive-check.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 104)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_4967 ;
    GALGAS_PLMType joker_4944_1 ; // Joker input parameter
    var_expressionResult_4584.method_literalInteger (joker_4944_1, var_value_4967, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 106)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_4967.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 107)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 108)) ;
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
//          Overriding extension method '@varAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentInstructionAST * object = (const cPtr_varAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 55)) ;
  callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@varAssignmentInstructionAST solveEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentInstructionAST_solveEntities (const cPtr_instructionAST * /* inObject */,
                                                                       GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                                       const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                                       const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                                       GALGAS_instructionListSE & /* ioArgument_ioInstructionListSE */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_varAssignmentInstructionAST.mSlotID,
                                      extensionMethod_varAssignmentInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentInstructionAST_solveEntities (defineExtensionMethod_varAssignmentInstructionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@varAssignmentInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
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
  const cPtr_varAssignmentInstructionAST * object = (const cPtr_varAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentInstructionAST) ;
  GALGAS_objectIR var_currentObject_5252 ;
  GALGAS_string var_globalVariableReceiverName_5322 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 98)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_5252, var_globalVariableReceiverName_5322, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 96)) ;
  const enumGalgasBool test_0 = var_currentObject_5252.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 113)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 114)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 114)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
    var_currentObject_5252.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperandPossibleReference_5977 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_5252, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 121)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_5977, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117)) ;
  GALGAS_objectIR var_sourceOperand_6157 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_5977, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 134)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 134)), var_sourceOperand_6157, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 131)) ;
  }
  GALGAS_objectIR var_result_6176 = function_checkAssignmentCompatibility (var_sourceOperand_6157, extensionGetter_type (var_currentObject_5252, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 139)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 140)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 140)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 137)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_5252, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 143)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 143)), var_result_6176, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 143)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varAssignmentInstructionAST.mSlotID,
                                extensionMethod_varAssignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentInstructionAST_analyze (defineExtensionMethod_varAssignmentInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@varOperatorAssignInstructionAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignInstructionAST * object = (const cPtr_varOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 137)) ;
  callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST.mSlotID,
                                                              extensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@varOperatorAssignInstructionAST solveEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignInstructionAST_solveEntities (const cPtr_instructionAST * /* inObject */,
                                                                           GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                                           const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                                           const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                                           GALGAS_instructionListSE & /* ioArgument_ioInstructionListSE */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST.mSlotID,
                                      extensionMethod_varOperatorAssignInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignInstructionAST_solveEntities (defineExtensionMethod_varOperatorAssignInstructionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@varOperatorAssignInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
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
  const cPtr_varOperatorAssignInstructionAST * object = (const cPtr_varOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignInstructionAST) ;
  GALGAS_objectIR var_targetObject_7416 ;
  GALGAS_string var_globalVariableReceiverName_7486 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("instruction-assignment-operator.galgas", 174)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObject_7416, var_globalVariableReceiverName_7486, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 172)) ;
  const enumGalgasBool test_0 = var_targetObject_7416.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 189)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 190)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 190)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 190)) ;
    var_targetObject_7416.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourcePossibleReference_8135 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_7416, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 197)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_8135, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 193)) ;
  GALGAS_objectIR var_sourceValue_8294 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_8135, object->mProperty_mEndOfSourceExpression, var_sourceValue_8294, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 207)) ;
  }
  GALGAS_bool var_noPanicGeneration_8366 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_8429 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 215)))) ;
  GALGAS_infixOperatorMap var_operatorMap_8491 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_8491 = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_8491 = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_8491 = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_8429.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 226)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 226)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 227)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 227)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 226)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_8366.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
      var_operatorMap_8491 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_8491 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_8429.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 234)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 234)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 235)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 235)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 234)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_8366.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
      var_operatorMap_8491 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_8491 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_8429.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 242)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 242)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 243)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 243)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 242)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_8366.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
      var_operatorMap_8491 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_8491 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_8429.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 250)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 250)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 251)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 251)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 250)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_8366.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
      var_operatorMap_8491 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_8491 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_8429.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 258)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 258)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 259)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 259)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 258)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_8366.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
      var_operatorMap_8491 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_8491 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_10836 ;
  GALGAS_PLMType joker_10782 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_8491, extensionGetter_type (var_targetObject_7416, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 266)), extensionGetter_type (var_sourceValue_8294, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 267)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 268)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 268)), joker_10782, var_binaryOperator_10836, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 265)) ;
  GALGAS_objectIR var_variableValue_11019 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_7416, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 276)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 276)), var_variableValue_11019, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 273)) ;
  }
  GALGAS_objectIR var_newResultingValue_11249 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_10836.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_11019, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 283)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 283)), var_sourceValue_8294, extensionGetter_type (var_targetObject_7416, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 285)), var_newResultingValue_11249, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 279)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_7416, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 290)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 290)), var_newResultingValue_11249, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 288)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST.mSlotID,
                                extensionMethod_varOperatorAssignInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignInstructionAST_analyze (defineExtensionMethod_varOperatorAssignInstructionAST_analyze, NULL) ;

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
//                    Overriding extension method '@varInstructionWithAssignmentAST solveEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                           GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                           const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                           const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                           GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_expressionSE var_expression_4307 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_4307, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_varInstructionWithAssignmentSE::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mVarName, object->mProperty_mOptionalTypeName, var_expression_4307  COMMA_SOURCE_FILE ("instruction-var.galgas", 105))  COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionWithAssignmentAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                      extensionMethod_varInstructionWithAssignmentAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_solveEntities (defineExtensionMethod_varInstructionWithAssignmentAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@varInstructionAST solveEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                             GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                             const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                             const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                             GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_varInstructionSE::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mVarName, object->mProperty_mTypeName  COMMA_SOURCE_FILE ("instruction-var.galgas", 128))  COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                                      extensionMethod_varInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_solveEntities (defineExtensionMethod_varInstructionAST_solveEntities, NULL) ;

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
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 150)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 151)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  }
  GALGAS_PLMType var_targetType_6302 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_6944 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_6302, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_6944, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 154)) ;
  GALGAS_objectIR var_expressionResult_7094 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_6944, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 171)), var_expressionResult_7094, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 168)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_6302.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 175)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_6302 = extensionGetter_type (var_expressionResult_7094, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 176)) ;
  }
  GALGAS_objectIR var_result_7220 = function_checkAssignmentCompatibility (var_expressionResult_7094, var_targetType_6302, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 178)) ;
  GALGAS_lstring var_varName_7467 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 186)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 186)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 186))  COMMA_SOURCE_FILE ("instruction-var.galgas", 186)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 187)) ;
  GALGAS_objectIR var_objectIR_7599 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_7220, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)), var_varName_7467  COMMA_SOURCE_FILE ("instruction-var.galgas", 188)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7693 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7693, object->mProperty_mVarName, var_objectIR_7599, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 189)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 189)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertDefinedVariable (object->mProperty_mVarName, extensionGetter_type (var_result_7220, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 192)), GALGAS_bool (true), var_objectIR_7599, extensionGetter_copyable (extensionGetter_type (var_result_7220, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 195)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varName_7467.getter_string (SOURCE_FILE ("instruction-var.galgas", 199)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_7220, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 199))  COMMA_SOURCE_FILE ("instruction-var.galgas", 199)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varName_7467.getter_string (SOURCE_FILE ("instruction-var.galgas", 201)), extensionGetter_type (var_result_7220, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 202)), var_result_7220, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 200)) ;
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
  GALGAS_PLMType var_targetType_9062 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 223)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 223)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_9062, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 225)).operator_not (SOURCE_FILE ("instruction-var.galgas", 225)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 226)), GALGAS_string ("$").add_operation (extensionGetter_key (var_targetType_9062, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 226)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 226)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 226)) ;
  }
  GALGAS_lstring var_varLLVMName_9307 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 229)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 229)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 229))  COMMA_SOURCE_FILE ("instruction-var.galgas", 229)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 230)) ;
  GALGAS_objectIR var_objectIR_9439 = GALGAS_objectIR::constructor_localVariableReference (var_targetType_9062, var_varLLVMName_9307  COMMA_SOURCE_FILE ("instruction-var.galgas", 231)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_9534 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_9534, object->mProperty_mVarName, var_objectIR_9439, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 232)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 232)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUndefinedVariable (object->mProperty_mVarName, var_targetType_9062, GALGAS_bool (true), var_objectIR_9439, extensionGetter_copyable (var_targetType_9062, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 238)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 233)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_9307.getter_string (SOURCE_FILE ("instruction-var.galgas", 242)), extensionGetter_llvmTypeName (var_targetType_9062, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 242))  COMMA_SOURCE_FILE ("instruction-var.galgas", 242)) ;
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
//                    Overriding extension method '@letInstructionWithAssignmentAST solveEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionWithAssignmentAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                           GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                           const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                           const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                           GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_expressionSE var_expression_3400 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_3400, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 72)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_letInstructionWithAssignmentSE::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mConstantName, object->mProperty_mOptionalTypeName, var_expression_3400  COMMA_SOURCE_FILE ("instruction-let.galgas", 78))  COMMA_SOURCE_FILE ("instruction-let.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionWithAssignmentAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                      extensionMethod_letInstructionWithAssignmentAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_solveEntities (defineExtensionMethod_letInstructionWithAssignmentAST_solveEntities, NULL) ;

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
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-let.galgas", 105)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
  }
  GALGAS_PLMType var_targetType_4692 = temp_0 ;
  GALGAS_objectIR var_expressionResultPossibleReference_5344 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4692, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5344, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)) ;
  GALGAS_objectIR var_expressionResult_5509 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5344, object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 126)), var_expressionResult_5509, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 123)) ;
  }
  GALGAS_objectIR var_result_5556 = function_checkAssignmentCompatibility (var_expressionResult_5509, var_targetType_4692, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 130)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_5556, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 138)).operator_not (SOURCE_FILE ("instruction-let.galgas", 138)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 139)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_5556, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 139)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 139)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 139)) ;
    var_result_5556.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_varPLMName_5930 = GALGAS_lstring::constructor_new (object->mProperty_mConstantName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 142)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 142)), object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 142))  COMMA_SOURCE_FILE ("instruction-let.galgas", 142)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 143)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_5556, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 144)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 144)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (var_varPLMName_5930.getter_string (SOURCE_FILE ("instruction-let.galgas", 145)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_5556, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 145))  COMMA_SOURCE_FILE ("instruction-let.galgas", 145)) ;
    GALGAS_objectIR var_localConstant_6192 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_5556, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 146)), var_varPLMName_5930  COMMA_SOURCE_FILE ("instruction-let.galgas", 146)) ;
    {
    extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_localConstant_6192, object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 147)), var_result_5556, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 147)) ;
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6394 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6394, object->mProperty_mConstantName, var_expressionResult_5509, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 149)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertConstant (object->mProperty_mConstantName, extensionGetter_type (var_result_5556, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 152)), GALGAS_bool (true), var_expressionResult_5509, extensionGetter_copyable (extensionGetter_type (var_result_5556, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 155)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 150)) ;
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
//                           Overriding extension method '@letInstructionNOP solveEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionNOP_solveEntities (const cPtr_instructionAST * inObject,
                                                             GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                             const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                             const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                             GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionNOP * object = (const cPtr_letInstructionNOP *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionNOP) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_letInstructionSE::constructor_new (object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("instruction-nop.galgas", 42))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionNOP_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_letInstructionNOP.mSlotID,
                                      extensionMethod_letInstructionNOP_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionNOP_solveEntities (defineExtensionMethod_letInstructionNOP_solveEntities, NULL) ;

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
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 68)) ;
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
//                          Overriding extension method '@assertInstructionAST solveEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  GALGAS_expressionSE var_expression_2871 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_2871, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_assertInstructionSE::constructor_new (object->mProperty_mInstructionLocation, var_expression_2871  COMMA_SOURCE_FILE ("instruction-assert.galgas", 61))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                      extensionMethod_assertInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_solveEntities (defineExtensionMethod_assertInstructionAST_solveEntities, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 85)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 86)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 86)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 86)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4315 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 89)) ;
  GALGAS_objectIR var_expressionValue_4764 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-assert.galgas", 94)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4315, var_expressionValue_4764, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 90)) ;
  const enumGalgasBool test_2 = extensionGetter_type (var_expressionValue_4764, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 105)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 105)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 105)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 106)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_4764, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 113)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_instructionGenerationList_4315, var_expressionValue_4764  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 139)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 140)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 140)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 141)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 141)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 141)).add_operation (object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 142)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 142)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 142)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 142)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 143)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 143)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 141)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 144)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 153)) ;
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
//                          Overriding extension method '@panicInstructionAST solveEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                               GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                               const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                               const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                               GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  GALGAS_expressionSE var_codeExpression_2875 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_codeExpression_2875, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 52)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_panicInstructionSE::constructor_new (object->mProperty_mInstructionLocation, var_codeExpression_2875  COMMA_SOURCE_FILE ("instruction-panic.galgas", 58))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                      extensionMethod_panicInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicInstructionAST_solveEntities (defineExtensionMethod_panicInstructionAST_solveEntities, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 83)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_4340 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 87)) ;
  GALGAS_objectIR var_result_4808 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 92)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_4340, var_result_4808, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 88)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_4340.getter_length (SOURCE_FILE ("instruction-panic.galgas", 104)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_4808.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 105)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 105)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_4808, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 106)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 106)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_5150 ;
    GALGAS_bigint var_max_5163 ;
    GALGAS_bool joker_5165_3 ; // Joker input parameter
    GALGAS_uint joker_5165_2 ; // Joker input parameter
    GALGAS_string joker_5165_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).method_integer (var_min_5150, var_max_5163, joker_5165_3, joker_5165_2, joker_5165_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
    GALGAS_bigint var_throwValue_5221 ;
    GALGAS_PLMType joker_5197_1 ; // Joker input parameter
    var_result_4808.method_literalInteger (joker_5197_1, var_throwValue_5221, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_5221.objectCompare (var_min_5150)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_5221.objectCompare (var_max_5163)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.getter_mPanicCodeType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 112)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 112)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 113)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_throwValue_5221  COMMA_SOURCE_FILE ("instruction-panic.galgas", 114))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)) ;
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
  GALGAS_uint var_staticStringIndex_6515 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 139)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 139)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 139)), var_staticStringIndex_6515, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 138)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_6515.getter_string (SOURCE_FILE ("instruction-panic.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 142)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 142)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 143)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 143)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 143)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 143)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 144)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 144)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 144)) ;
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
//                            Overriding extension method '@ifInstructionAST solveEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                            GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                            const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                            const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                            GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_expressionSE var_testExpression_4899 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_testExpression_4899, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 117)) ;
  GALGAS_instructionListSE var_thenInstructionList_4944 = GALGAS_instructionListSE::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 123)) ;
  extensionMethod_solveEntities (object->mProperty_mThenInstructionList, inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_thenInstructionList_4944, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 124)) ;
  GALGAS_instructionListSE var_elseInstructionList_5168 = GALGAS_instructionListSE::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 130)) ;
  extensionMethod_solveEntities (object->mProperty_mElseInstructionList, inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_elseInstructionList_5168, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 131)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_ifInstructionSE::constructor_new (object->mProperty_mInstructionLocation, var_testExpression_4899, object->mProperty_mTestExpressionEndLocation, object->mProperty_mStaticIfExpression, var_thenInstructionList_4944, object->mProperty_mEndOfThenInstructionList, var_elseInstructionList_5168, object->mProperty_mEndOfElseInstructionList, object->mProperty_mEndOf_5F_if_5F_instruction  COMMA_SOURCE_FILE ("instruction-if.galgas", 137))  COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                      extensionMethod_ifInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_solveEntities (defineExtensionMethod_ifInstructionAST_solveEntities, NULL) ;

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
  GALGAS_objectIR var_testResultPossibleReference_7218 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-if.galgas", 173)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResultPossibleReference_7218, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 169)) ;
  GALGAS_objectIR var_testResult_7384 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResultPossibleReference_7218, object->mProperty_mTestExpressionEndLocation, var_testResult_7384, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 183)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testResult_7384, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 190)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 190)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testResult_7384, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 191)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 191)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 191)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_7384, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 192)).operator_not (SOURCE_FILE ("instruction-if.galgas", 192)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 193)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_7384, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 194)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 194)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 195)) ;
      }
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7906 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7906, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_8069 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 200)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_8069, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_8753 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 217)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_8753, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 218)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_9369 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_9369, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 233)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 234)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_7384, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_8069, var_elseInstructionGenerationList_8753  COMMA_SOURCE_FILE ("instruction-if.galgas", 236))  COMMA_SOURCE_FILE ("instruction-if.galgas", 236)) ;
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
  GALGAS_string var_labelTrue_10534 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 262)).getter_string (SOURCE_FILE ("instruction-if.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 262)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 262)) ;
  GALGAS_string var_labelFalse_10597 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 263)).getter_string (SOURCE_FILE ("instruction-if.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 263)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 263)) ;
  GALGAS_string var_labelEnd_10659 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 264)).getter_string (SOURCE_FILE ("instruction-if.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 264)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 265)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 265)).add_operation (var_labelTrue_10534, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 265)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 265)).add_operation (var_labelFalse_10597, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 265)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_10534.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 267)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_10659, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 269)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_10597.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 271)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 272)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_10659, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 273)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_10659.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 275)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 284)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 285)) ;
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
//                           Overriding extension method '@syncInstructionAST solveEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                              GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                              const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                              const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                              GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_syncInstructionBranchListSE var_branchList_7619 = GALGAS_syncInstructionBranchListSE::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 192)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_7648 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_7648.hasCurrentObject ()) {
    GALGAS_instructionListSE var_instructionList_7690 = GALGAS_instructionListSE::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 194)) ;
    extensionMethod_solveEntities (enumerator_7648.current_mInstructionList (HERE), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_instructionList_7690, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 195)) ;
    GALGAS_guardedCommandSE var_guardedCommand_7914 ;
    switch (enumerator_7648.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandAST_synchronization * extractPtr_8272 = (const cEnumAssociatedValues_guardedCommandAST_synchronization *) (enumerator_7648.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_8272->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_8272->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_8272->mAssociatedValue2 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterListAST = extractPtr_8272->mAssociatedValue3 ;
        var_guardedCommand_7914 = GALGAS_guardedCommandSE::constructor_synchronization (extractedValue_isWhileCommand, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterListAST  COMMA_SOURCE_FILE ("instruction-sync.galgas", 204)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_8680 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_7648.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_8680->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expressionAST = extractPtr_8680->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_8680->mAssociatedValue2 ;
        GALGAS_expressionSE var_expression_8519 ;
        callExtensionMethod_solveEntities ((const cPtr_expressionAST *) extractedValue_expressionAST.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_8519, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 211)) ;
        var_guardedCommand_7914 = GALGAS_guardedCommandSE::constructor_boolean (extractedValue_isWhileCommand, var_expression_8519, extractedValue_endOfExpression  COMMA_SOURCE_FILE ("instruction-sync.galgas", 217)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_9280 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_7648.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_9280->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expAST = extractPtr_9280->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_9280->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_9280->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_9280->mAssociatedValue4 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterListAST = extractPtr_9280->mAssociatedValue5 ;
        GALGAS_expressionSE var_expression_8974 ;
        callExtensionMethod_solveEntities ((const cPtr_expressionAST *) extractedValue_expAST.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_expression_8974, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 223)) ;
        var_guardedCommand_7914 = GALGAS_guardedCommandSE::constructor_boolAndSync (extractedValue_isWhileCommand, var_expression_8974, extractedValue_endOfExpression, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterListAST  COMMA_SOURCE_FILE ("instruction-sync.galgas", 229)) ;
      }
      break ;
    }
    var_branchList_7619.addAssign_operation (var_guardedCommand_7914, var_instructionList_7690, enumerator_7648.current_mEndOfBranch (HERE)  COMMA_SOURCE_FILE ("instruction-sync.galgas", 238)) ;
    enumerator_7648.gotoNextObject () ;
  }
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_syncInstructionSE::constructor_new (object->mProperty_mInstructionLocation, var_branchList_7619, object->mProperty_mEndOf_5F_on_5F_instruction  COMMA_SOURCE_FILE ("instruction-sync.galgas", 240))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                      extensionMethod_syncInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncInstructionAST_solveEntities (defineExtensionMethod_syncInstructionAST_solveEntities, NULL) ;

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
  GALGAS_syncInstructionBranchListIR var_onInstructionBranchListIR_10607 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 261)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_10678 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_10678.hasCurrentObject ()) {
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_10703 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_10703, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 263)) ;
    }
    {
    ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 264)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR_10832 ;
    switch (enumerator_10678.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandAST_synchronization * extractPtr_12036 = (const cEnumAssociatedValues_guardedCommandAST_synchronization *) (enumerator_10678.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_12036->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_12036->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_12036->mAssociatedValue2 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_12036->mAssociatedValue3 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_11011 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 269)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_11645 ;
        GALGAS_lstring var_guardMangledName_11701 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_11011, var_guardEffectiveParameterListIR_11645, var_guardMangledName_11701, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 270)) ;
        }
        var_guardedCommandIR_10832 = GALGAS_guardedCommandIR::constructor_synchronization (extractedValue_isWhileCommand, var_guardMangledName_11701.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_11011, var_guardEffectiveParameterListIR_11645  COMMA_SOURCE_FILE ("instruction-sync.galgas", 287)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_13090 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_10678.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_13090->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_13090->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_13090->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_12155 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 295)) ;
        GALGAS_objectIR var_sourceOperand_12657 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 300)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_12155, var_sourceOperand_12657, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 296)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_sourceOperand_12657, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 310)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 310)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 311)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_12657, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 312)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 313)) ;
          }
        }
        var_guardedCommandIR_10832 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_12155, var_sourceOperand_12657  COMMA_SOURCE_FILE ("instruction-sync.galgas", 315)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_15238 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_10678.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_15238->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_15238->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_15238->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_15238->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_15238->mAssociatedValue4 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_15238->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_13269 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 321)) ;
        GALGAS_objectIR var_boolExpressionResult_13780 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 326)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_13269, var_boolExpressionResult_13780, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 322)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_boolExpressionResult_13780, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 336)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 336)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 337)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = extensionGetter_isStatic (var_boolExpressionResult_13780, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 338)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 339)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_14098 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 341)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_14732 ;
        GALGAS_lstring var_guardMangledName_14788 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_14098, var_guardEffectiveParameterListIR_14732, var_guardMangledName_14788, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 342)) ;
        }
        var_guardedCommandIR_10832 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_13269, var_boolExpressionResult_13780, var_guardMangledName_14788.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_14098, var_guardEffectiveParameterListIR_14732  COMMA_SOURCE_FILE ("instruction-sync.galgas", 359)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_15325 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 370)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_10678.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_10678.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_15325, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 371)) ;
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_15956 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_15956, enumerator_10678.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 386)) ;
    }
    {
    ioArgument_ioVariableMap.setter_closeOverride (enumerator_10678.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 387)) ;
    }
    var_onInstructionBranchListIR_10607.addAssign_operation (var_guardedCommandIR_10832, var_branchInstructionGenerationList_15325  COMMA_SOURCE_FILE ("instruction-sync.galgas", 389)) ;
    enumerator_10678.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_onInstructionBranchListIR_10607  COMMA_SOURCE_FILE ("instruction-sync.galgas", 394))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 394)) ;
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
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 416)) ;
  GALGAS_PLMType var_receiverType_17289 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_type_17416 ;
    GALGAS_objectIR var_objectIR_17455 ;
    {
    GALGAS_bool joker_17424_1 ; // Joker input parameter
    GALGAS_bool joker_17463_2 ; // Joker input parameter
    GALGAS_bool joker_17463_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForMethodCall (constinArgument_inReceiverName, var_type_17416, joker_17424_1, var_objectIR_17455, joker_17463_2, joker_17463_1, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 419)) ;
    }
    var_receiverType_17289 = var_type_17416 ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 427)), var_objectIR_17455  COMMA_SOURCE_FILE ("instruction-sync.galgas", 427)) ;
  }else if (kBoolFalse == test_0) {
    var_receiverType_17289 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 429)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("$").add_operation (extensionGetter_key (var_receiverType_17289, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 432)) ;
  }
  outArgument_outGuardMangledName = function_routineMangledNameFromCall (temp_1, constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 431)) ;
  GALGAS_bool var_isPublic_17860 ;
  GALGAS_routineTypedSignature var_formalSignature_17908 ;
  constinArgument_inContext.getter_mGuardMapForContext (HERE).method_searchKey (outArgument_outGuardMangledName, var_isPublic_17860, var_formalSignature_17908, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 436)) ;
  const enumGalgasBool test_3 = var_isPublic_17860.operator_not (SOURCE_FILE ("instruction-sync.galgas", 442)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_declarationFile_18056 = constinArgument_inContext.getter_mGuardMapForContext (HERE).getter_locationForKey (outArgument_outGuardMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)) ;
      GALGAS_string var_invocationFile_18165 = constinArgument_inGuardName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 445)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_invocationFile_18165.objectCompare (var_declarationFile_18056)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 447)), GALGAS_string ("this guard is not public"), fixItArray6  COMMA_SOURCE_FILE ("instruction-sync.galgas", 447)) ;
      }
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 450)), GALGAS_string ("this guard is not public"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)) ;
  }
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature_17908, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), outArgument_outGuardMangledName, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)) ;
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
  GALGAS_string var_startLabel_21422 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_21422, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)) ;
  GALGAS_string var_startLabelName_21586 = var_startLabel_21422.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_21586.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)) ;
  GALGAS_string var_exitLabelName_21670 = var_startLabel_21422.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)) ;
  GALGAS_string var_selectLabelName_21715 = var_startLabel_21422.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)) ;
  GALGAS_string var_errorLabelName_21761 = var_startLabel_21422.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)) ;
  GALGAS_string var_currentStartBranchLabel_21815 = var_startLabelName_21586 ;
  cEnumerator_syncInstructionBranchListIR enumerator_21875 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_21838 ((uint32_t) 0) ;
  while (enumerator_21875.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_21910 = GALGAS_string ("%").add_operation (var_startLabel_21422, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)).add_operation (index_21838.getter_string (SOURCE_FILE ("instruction-sync.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)) ;
    GALGAS_bool var_isWhileGuardedCommand_21980 ;
    switch (enumerator_21875.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_22914 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_21875.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_22914->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_22914->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_22914->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_22914->mAssociatedValue4 ;
        var_isWhileGuardedCommand_21980 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 538)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_21910, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_22465 (extractedValue_effectiveParameterListIR, kENUMERATION_UP) ;
        while (enumerator_22465.hasCurrentObject ()) {
          switch (enumerator_22465.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22465.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)).add_operation (extensionGetter_llvmName (enumerator_22465.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22465.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)).add_operation (extensionGetter_llvmName (enumerator_22465.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22465.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)).add_operation (extensionGetter_llvmName (enumerator_22465.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)) ;
            }
            break ;
          }
          if (enumerator_22465.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 551)) ;
          }
          enumerator_22465.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_23732 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_21875.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_23732->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_23732->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_23732->mAssociatedValue2 ;
        var_isWhileGuardedCommand_21980 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)) ;
        GALGAS_string var_acceptedLabelName_23182 = var_startLabel_21422.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)).add_operation (index_21838.getter_string (SOURCE_FILE ("instruction-sync.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)) ;
        GALGAS_string var_rejectedLabelName_23245 = var_startLabel_21422.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 558)).add_operation (index_21838.getter_string (SOURCE_FILE ("instruction-sync.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 558)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 558)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)).add_operation (var_acceptedLabelName_23182, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)).add_operation (var_rejectedLabelName_23245, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_23182.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 560)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 561)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_23245, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 562)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 562)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_23245.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 563)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_21910, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_25463 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_21875.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_25463->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_25463->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_25463->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25463->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_25463->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_25463->mAssociatedValue6 ;
        var_isWhileGuardedCommand_21980 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 567)) ;
        GALGAS_string var_testOkLabelName_24039 = var_startLabel_21422.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 568)).add_operation (index_21838.getter_string (SOURCE_FILE ("instruction-sync.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 568)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 568)) ;
        GALGAS_string var_testExitLabelName_24110 = var_startLabel_21422.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 569)).add_operation (index_21838.getter_string (SOURCE_FILE ("instruction-sync.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 569)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 569)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)).add_operation (var_testOkLabelName_24039, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)).add_operation (var_testExitLabelName_24110, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 570)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_24039.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 571)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)) ;
        GALGAS_string var_guardAcceptationLabelName_24465 = var_startLabel_21422.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)).add_operation (index_21838.getter_string (SOURCE_FILE ("instruction-sync.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_24465, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 574)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 574)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 574)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 575)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_24691 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_24691.hasCurrentObject ()) {
          switch (enumerator_24691.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24691.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 579)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 579)).add_operation (extensionGetter_llvmName (enumerator_24691.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 579)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24691.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 581)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 581)).add_operation (extensionGetter_llvmName (enumerator_24691.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 581)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24691.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 583)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 583)).add_operation (extensionGetter_llvmName (enumerator_24691.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 583)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 583)) ;
            }
            break ;
          }
          if (enumerator_24691.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 586)) ;
          }
          enumerator_24691.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 588)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_24110, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 589)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 589)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_24110.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 590)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_21910, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 591)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 591)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 591)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_24465, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 592)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 592)).add_operation (var_testOkLabelName_24039, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 592)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 592)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_21815, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 593)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 593)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 593)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_25497 = var_startLabel_21422.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 595)).add_operation (index_21838.getter_string (SOURCE_FILE ("instruction-sync.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 595)) ;
    GALGAS_string var_rejectedLabelName_25557 = var_startLabel_21422.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 596)).add_operation (index_21838.getter_string (SOURCE_FILE ("instruction-sync.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 596)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_21910, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)).add_operation (var_acceptedLabelName_25497, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)).add_operation (var_rejectedLabelName_25557, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_25497.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)) ;
    extensionMethod_instructionListLLVMCode (enumerator_21875.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 599)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_21980.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_21586 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_21670 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 600)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 600)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_25557.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 601)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 601)) ;
    var_currentStartBranchLabel_21815 = var_rejectedLabelName_25557 ;
    enumerator_21875.gotoNextObject () ;
    index_21838.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 532)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_21715, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 604)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 604)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 604)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 604)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_21715, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)).add_operation (var_startLabelName_21586, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)).add_operation (var_errorLabelName_21761, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_21761.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_21670, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 608)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 608)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 608)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_26749 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 611)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 611)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 611)), var_staticStringIndex_26749, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 610)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_26749.getter_string (SOURCE_FILE ("instruction-sync.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 614)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 614)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 614)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 615)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 615)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 615)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 615)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 617)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_21670.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 619)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 619)) ;
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
  GALGAS_uint var_branchCount_27402 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 628)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_27402)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_27402 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_27587 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_27587.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_27587.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 633)) ;
    switch (enumerator_27587.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_28141 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_27587.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_28141->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_28141->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_28141->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 636)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 637)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 639)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_28308 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_27587.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_28308->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 642)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_28843 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_27587.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_28843->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_28843->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_28843->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_28843->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 644)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 645)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 646)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 648)) ;
        }
      }
      break ;
    }
    enumerator_27587.gotoNextObject () ;
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
//                          Overriding extension method '@whileInstructionAST solveEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                               GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                               const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                               const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                               GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_expressionSE var_whileExpression_3493 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_whileExpression_3493, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)) ;
  GALGAS_instructionListSE var_while_5F_instructionList_3540 = GALGAS_instructionListSE::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 77)) ;
  extensionMethod_solveEntities (object->mProperty_mWhileInstructionList, inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_while_5F_instructionList_3540, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 78)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_whileInstructionSE::constructor_new (object->mProperty_mInstructionLocation, var_whileExpression_3493, object->mProperty_mEndOf_5F_test_5F_expression, var_while_5F_instructionList_3540, object->mProperty_mEndOf_5F_while_5F_instruction  COMMA_SOURCE_FILE ("instruction-while.galgas", 84))  COMMA_SOURCE_FILE ("instruction-while.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                      extensionMethod_whileInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_solveEntities (defineExtensionMethod_whileInstructionAST_solveEntities, NULL) ;

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
  GALGAS_instructionListIR var_testInstructionGenerationList_5078 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 112)) ;
  GALGAS_objectIR var_testValuePossibleReference_5549 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-while.galgas", 117)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_5078, var_testValuePossibleReference_5549, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 113)) ;
  GALGAS_objectIR var_testValue_5709 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testValuePossibleReference_5549, object->mProperty_mEndOf_5F_test_5F_expression, var_testValue_5709, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 127)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testValue_5709, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 134)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 134)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_5709, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 135)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 135)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 135)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_5709, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 136)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 137)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_6084 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 140)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6109 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6109, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 142)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_6084, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6791 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6791, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 162)), var_testInstructionGenerationList_5078, var_testValue_5709, var_instructionGenerationList_6084  COMMA_SOURCE_FILE ("instruction-while.galgas", 161))  COMMA_SOURCE_FILE ("instruction-while.galgas", 161)) ;
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
  GALGAS_string var_labelTest_7977 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 187)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 187)) ;
  GALGAS_string var_labelLoop_8028 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 188)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 188)) ;
  GALGAS_string var_labelEnd_8078 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 189)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 189)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_7977, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 190)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_7977.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 191)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_m_5F_while_5F_Expression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 193)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 193)).add_operation (var_labelLoop_8028, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 193)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 193)).add_operation (var_labelEnd_8078, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 193)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_8028.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 194)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 195)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_7977, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 196)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 196)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8078.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 197)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 206)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 207)) ;
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
//                           Overriding extension method '@forInstructionAST solveEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                             GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                             const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                             const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                             GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_expressionSE var_whileExpression_4381 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_whileExpression_4381, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
  GALGAS_instructionListSE var_doInstructionList_4424 = GALGAS_instructionListSE::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  extensionMethod_solveEntities (object->mProperty_mDoInstructionList, inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_doInstructionList_4424, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_forInstructionSE::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mVarName, object->mProperty_mIteratedObject, var_whileExpression_4381, object->mProperty_mEndOf_5F_whileExpression, object->mProperty_mStaticWhileExpression, var_doInstructionList_4424, object->mProperty_mEndOf_5F_for_5F_instruction  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                      extensionMethod_forInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_solveEntities (defineExtensionMethod_forInstructionAST_solveEntities, NULL) ;

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
  GALGAS_objectIR var_iteratedObjectPointer_6067 ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5981 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5981, object->mProperty_mIteratedObject, var_iteratedObjectPointer_6067, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 145)) ;
  }
  {
  GALGAS_PLMType joker_6139_2 ; // Joker input parameter
  GALGAS_bool joker_6139_1 ; // Joker input parameter
  GALGAS_objectIR joker_6156 ; // Joker input parameter
  GALGAS_bool joker_6201_2 ; // Joker input parameter
  GALGAS_bool joker_6201_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mIteratedObject, joker_6139_2, joker_6139_1, joker_6156, joker_6201_2, joker_6201_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 146)) ;
  }
  GALGAS_PLMType var_iteratedTypeKind_6245 = extensionGetter_type (var_iteratedObjectPointer_6067, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  GALGAS_PLMType var_iteratedElementType_6439 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_6245.objectCompare (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 157)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_iteratedElementType_6439 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_iteratedTypeKind_6245.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_6677 ; // Joker input parameter
      GALGAS_bigint joker_6713_4 ; // Joker input parameter
      GALGAS_constantMap joker_6713_3 ; // Joker input parameter
      GALGAS_uint joker_6713_2 ; // Joker input parameter
      GALGAS_string joker_6713_1 ; // Joker input parameter
      var_iteratedTypeKind_6245.method_arrayType (joker_6677, var_iteratedElementType_6439, joker_6713_4, joker_6713_3, joker_6713_2, joker_6713_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 162)), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)) ;
      var_iteratedElementType_6439.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_enumeratedVarLLVMName_6844 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 165))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_6844.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 167)), extensionGetter_llvmTypeName (var_iteratedElementType_6439, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7088 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7088, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)) ;
  }
  GALGAS_objectIR var_objectIR_7178 = GALGAS_objectIR::constructor_localVariableReference (var_iteratedElementType_6439, var_enumeratedVarLLVMName_6844  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7292 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7292, object->mProperty_mVarName, var_objectIR_7178, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_iteratedElementType_6439, GALGAS_bool (true), var_objectIR_7178, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 173)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_7630 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 182)) ;
  GALGAS_objectIR var_whileExpressionResult_8095 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-for-in-do.galgas", 187)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_7630, var_whileExpressionResult_8095, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 183)) ;
  const enumGalgasBool test_3 = extensionGetter_type (var_whileExpressionResult_8095, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 198)).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 198)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 198)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 199)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bool test_5 = object->mProperty_mStaticWhileExpression ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_isStatic (var_whileExpressionResult_8095, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 200)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 200)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 201)) ;
    }else if (kBoolFalse == test_6) {
      GALGAS_bool test_8 = extensionGetter_isStatic (var_whileExpressionResult_8095, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 202)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 202)) ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 203)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 203)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 203)) ;
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_8676 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 206)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_for_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_8676, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 207)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_9290 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_9290, object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 222)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 223)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_6245.objectCompare (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 225)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_enumeratedVarLLVMName_6844.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 227)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_6067, var_whileExpression_5F_GenerationList_7630, var_whileExpressionResult_8095, var_doInstructionList_5F_GenerationList_8676  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 226))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 226)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = var_iteratedTypeKind_6245.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 234)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_PLMType var_elementType_9841 ;
      GALGAS_bigint var_size_9856 ;
      GALGAS_lstring joker_9811 ; // Joker input parameter
      GALGAS_constantMap joker_9858_3 ; // Joker input parameter
      GALGAS_uint joker_9858_2 ; // Joker input parameter
      GALGAS_string joker_9858_1 ; // Joker input parameter
      var_iteratedTypeKind_6245.method_arrayType (joker_9811, var_elementType_9841, var_size_9856, joker_9858_3, joker_9858_2, joker_9858_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 235)) ;
      GALGAS_stringset var_invokedFunctionSet_9895 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 236)) ;
      const enumGalgasBool test_13 = ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 237)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_9895, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 238)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_enumeratedVarLLVMName_6844.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 241)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_6067, var_whileExpression_5F_GenerationList_7630, var_whileExpressionResult_8095, var_doInstructionList_5F_GenerationList_8676, var_elementType_9841, var_size_9856.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 248)), var_invokedFunctionSet_9895  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240)) ;
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
  GALGAS_string var_elementTypeLLVMName_12500 = extensionGetter_llvmTypeName (object->mProperty_mElementType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
  GALGAS_string var_listTypeLLVMName_12553 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (var_elementTypeLLVMName_12500, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)) ;
  GALGAS_string var_locationIndex_12628 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 309)) ;
  GALGAS_string var_startLabel_12704 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)) ;
  GALGAS_string var_testLabel_12757 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  GALGAS_string var_whileLabel_12810 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  GALGAS_string var_nextLabel_12863 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)) ;
  GALGAS_string var_loopVar_12913 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  GALGAS_string var_loopLabel_12959 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  GALGAS_string var_endLabel_13010 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 317)) ;
  GALGAS_string var_indexVar_13063 = GALGAS_string ("for.index.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
  GALGAS_string var_ptrVar_13108 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)) ;
  GALGAS_string var_currentValue_13157 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_12628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 321)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_12704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_12704.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_13108, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)).add_operation (var_listTypeLLVMName_12553, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_12553, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 331)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_12757, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 333)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_12757.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_13108, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (var_elementTypeLLVMName_12500, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (var_ptrVar_13108, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (var_startLabel_12704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (var_ptrVar_13108, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)).add_operation (var_nextLabel_12863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_13063, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).add_operation (var_startLabel_12704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).add_operation (var_indexVar_13063, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).add_operation (var_nextLabel_12863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_12913, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).add_operation (var_indexVar_13063, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_12913, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)).add_operation (var_whileLabel_12810, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)).add_operation (var_endLabel_13010, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_12810.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 348)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (var_loopLabel_12959, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (var_endLabel_13010, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_12959.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_13157, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (var_elementTypeLLVMName_12500, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_12500.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_ptrVar_13108, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_12500, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (var_currentValue_13157, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (var_elementTypeLLVMName_12500, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_12863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_12863.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_13108, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)).add_operation (var_elementTypeLLVMName_12500, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_12500.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_ptrVar_13108, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_13063, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 369)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 369)).add_operation (var_indexVar_13063, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 369)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 369)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_12757, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_13010.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)) ;
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 384)) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mIteratedObjectName.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 385))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)) ;
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
  GALGAS_string var_startLabel_16954 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)) ;
  GALGAS_string var_testLabel_17019 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)) ;
  GALGAS_string var_loopLabel_17083 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)) ;
  GALGAS_string var_whileLabel_17148 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)) ;
  GALGAS_string var_nextLabel_17213 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 412)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 412)) ;
  GALGAS_string var_endLabel_17276 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)) ;
  GALGAS_string var_ptrVar_17337 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)) ;
  GALGAS_string var_currentVar_17398 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_16954, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_16954.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 420)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_17337, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)).add_operation (GALGAS_string (".start = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_17019, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 422)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 422)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_17019.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_17337, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 426)).add_operation (GALGAS_string (" = phi i8* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 426)).add_operation (var_ptrVar_17337, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 426)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 426)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_16954.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)).add_operation (var_ptrVar_17337, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)).add_operation (var_nextLabel_17213, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_17398, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 428)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 428)).add_operation (var_ptrVar_17337, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 428)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 428)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_17398, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 429)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 429)).add_operation (var_currentVar_17398, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 429)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 429)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_17398, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)).add_operation (var_endLabel_17276, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)).add_operation (var_whileLabel_17148, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_17148.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 433)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 435)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 436)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 436)).add_operation (var_loopLabel_17083, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 436)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 436)).add_operation (var_endLabel_17276, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 436)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 436)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_17083.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 439)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_17398, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 441)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 441)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 441)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 442)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 442)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 444)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_17213, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 445)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 445)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 445)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_17213.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 447)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_17337, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 448)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 448)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_17337, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 449)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 449)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_17019, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 450)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 450)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_17276.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 453)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 462)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 463)) ;
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
//                    Overriding extension method '@forLowerUpperBoundInstructionAST solveEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                            GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                            const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                            const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                            GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_expressionSE var_lowerBoundExpression_4431 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_lowerBoundExpression_4431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)) ;
  GALGAS_expressionSE var_upperBoundExpression_4614 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_upperBoundExpression_4614, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
  GALGAS_instructionListSE var_do_5F_instructionList_4658 = GALGAS_instructionListSE::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
  extensionMethod_solveEntities (object->mProperty_mDoInstructionList, inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_do_5F_instructionList_4658, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_forLowerUpperBoundInstructionSE::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mVarName, object->mProperty_mTypeName, var_lowerBoundExpression_4431, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, var_upperBoundExpression_4614, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, var_do_5F_instructionList_4658, object->mProperty_mEndOf_5F_do_5F_instruction  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 117))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                      extensionMethod_forLowerUpperBoundInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_solveEntities (defineExtensionMethod_forLowerUpperBoundInstructionAST_solveEntities, NULL) ;

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
  GALGAS_PLMType var_type_6294 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)) ;
  switch (var_type_6294.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_boolean:
  case GALGAS_PLMType::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 152)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 152)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 157)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 157)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 159)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 159)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 163)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 163)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 165)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 165)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 167)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 167)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      const cEnumAssociatedValues_PLMType_integer * extractPtr_11014 = (const cEnumAssociatedValues_PLMType_integer *) (var_type_6294.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_11014->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_11014->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_11014->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_11014->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResultPossibleReference_7699 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_6294, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResultPossibleReference_7699, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)) ;
      GALGAS_objectIR var_lowerBoundExpressionResult_7922 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResultPossibleReference_7699, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, var_lowerBoundExpressionResult_7922, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 184)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResultPossibleReference_8439 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_6294, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResultPossibleReference_8439, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 190)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_8662 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResultPossibleReference_8439, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, var_upperBoundExpressionResult_8662, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 204)) ;
      }
      GALGAS_objectIR var_lowerBound_8719 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_7922, var_type_6294, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 211)) ;
      GALGAS_objectIR var_upperBound_8943 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_8662, var_type_6294, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_9177 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_9177, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)) ;
      }
      {
      ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)) ;
      }
      GALGAS_lstring var_enumeratedVarLLVMName_9321 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_9321.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)), extensionGetter_llvmTypeName (var_type_6294, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_objectIR var_objectIR_9556 = GALGAS_objectIR::constructor_localVariableReference (var_type_6294, var_enumeratedVarLLVMName_9321  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_9658 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_9658, object->mProperty_mVarName, var_objectIR_9556, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_type_6294, GALGAS_bool (true), var_objectIR_9556, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_10020 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_10020, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_10658 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_10658, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)) ;
      }
      {
      ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName_9321.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 263)), var_type_6294, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_8719, var_upperBound_8943, var_instructionGenerationList_10020  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 262))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 262)) ;
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

