#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-9.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  {
  const GALGAS_syncDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mSyncToolName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 59)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_2767 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_2767.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2767.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncToolName, enumerator_2767.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 63)) ;
      }
    }
    const enumGalgasBool test_2 = enumerator_2767.current_mIsPublic (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_2767.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 66)), GALGAS_string ("a sync tool property cannot be public (should be private)"), fixItArray3  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
    }
    switch (enumerator_2767.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_3161 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_2767.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3161->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mSyncToolName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 71)) ;
      }
      break ;
    }
    enumerator_2767.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_3244 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_3244.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_3317 (enumerator_3244.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_3317.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_3317.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 77)) ;
      }
      enumerator_3317.gotoNextObject () ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_3244.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_3244.current_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 80)) ;
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_3244.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 82)) ;
    enumerator_3244.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 85)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 86)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                               extensionMethod_syncDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("synctype.").add_operation (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 92)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                           extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@syncDeclarationAST locationForErrorSignaling'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_syncDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outLocation = object->mProperty_mSyncToolName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                  extensionGetter_syncDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncDeclarationAST_locationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@syncDeclarationAST enterInContext'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                               GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                               GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               GALGAS_globalVariableIRList & ioArgument_ioGlobalVariableIRList,
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  GALGAS_propertyList var_propertyList_5438 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 118)) ;
  GALGAS_propertyMap var_propertyMap_5470 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 119)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_5518 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-sync-declaration.galgas", 120)) ;
  GALGAS_constructorSignature var_constructorSignature_5568 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 121)) ;
  GALGAS_string var_constructorKey_5598 = GALGAS_string ("(") ;
  cEnumerator_structurePropertyListAST enumerator_5648 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_5648.hasCurrentObject ()) {
    GALGAS_bool joker_5907 = GALGAS_bool::constructor_default (SOURCE_FILE ("type-sync-declaration.galgas", 133)) ;
    extensionMethod_enterPropertyInContext (enumerator_5648.current (HERE), object->mProperty_mSyncToolName, ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_propertyList_5438, var_propertyMap_5470, var_sortedOperandIRList_5518, var_constructorSignature_5568, var_constructorKey_5598, joker_5907, ioArgument_ioGlobalVariableIRList, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 124)) ;
    enumerator_5648.gotoNextObject () ;
  }
  var_constructorKey_5598.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 137)) ;
  GALGAS_constructorMap var_constructorMap_6066 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 139)) ;
  {
  var_constructorMap_6066.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_5598, object->mProperty_mSyncToolName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 141)), var_constructorSignature_5568, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_5518  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 140)) ;
  }
  GALGAS_routineMapCTXT var_routineMapCTXT_6347 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 146)) ;
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 149)), var_routineMapCTXT_6347, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 147)) ;
  extensionMethod_enterSystemRoutineInContext (object->mProperty_mSystemRoutineListAST, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 158)), var_routineMapCTXT_6347, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 156)) ;
  GALGAS_guardMapCTXT var_guardMap_7027 = GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 165)) ;
  extensionMethod_enterGuardsInContext (object->mProperty_mGuardListAST, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 168)), ioArgument_ioContext, var_guardMap_7027, ioArgument_ioDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 166)) ;
  GALGAS_PLMType var_structureType_7317 = GALGAS_PLMType::constructor_new (var_propertyMap_5470, var_routineMapCTXT_6347, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 177)), var_constructorMap_6066, var_guardMap_7027, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas", 180)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 181)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 182)), GALGAS_typeKind::constructor_syncTool (SOURCE_FILE ("type-sync-declaration.galgas", 183)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 184))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 174)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mSyncToolName, var_structureType_7317, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-sync-declaration.galgas", 189)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 186)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (extensionGetter_llvmTypeName (var_structureType_7317, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 194)), var_propertyList_5438  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 193))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 193)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                       extensionMethod_syncDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInContext (defineExtensionMethod_syncDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_integerDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                  extensionGetter_integerDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_integerDeclarationAST_locationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_1434 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_1434, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_1434, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                               extensionMethod_integerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 37)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                           extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'minValueForInteger'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint function_minValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 46)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) COMMA_SOURCE_FILE ("type-integer.galgas", 48)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_minValueForInteger (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_minValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'maxValueForInteger'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint function_maxValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)).left_shift_operation (constinArgument_inBitCount COMMA_SOURCE_FILE ("type-integer.galgas", 56)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 56)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_maxValueForInteger (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_maxValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'byteSwappedMethodName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_byteSwappedMethodName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("byteSwapped") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_byteSwappedMethodName = false ;
static GALGAS_string gOnceFunctionResult_byteSwappedMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_byteSwappedMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_byteSwappedMethodName) {
    gOnceFunctionResult_byteSwappedMethodName = onceFunction_byteSwappedMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_byteSwappedMethodName = true ;
  }
  return gOnceFunctionResult_byteSwappedMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_byteSwappedMethodName (void) {
  gOnceFunctionResult_byteSwappedMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_byteSwappedMethodName (NULL,
                                                                   releaseOnceFunctionResult_byteSwappedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_byteSwappedMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_byteSwappedMethodName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_byteSwappedMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_byteSwappedMethodName ("byteSwappedMethodName",
                                                                       functionWithGenericHeader_byteSwappedMethodName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_byteSwappedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'bitReversedMethodName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_bitReversedMethodName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bitReversed") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_bitReversedMethodName = false ;
static GALGAS_string gOnceFunctionResult_bitReversedMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_bitReversedMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_bitReversedMethodName) {
    gOnceFunctionResult_bitReversedMethodName = onceFunction_bitReversedMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_bitReversedMethodName = true ;
  }
  return gOnceFunctionResult_bitReversedMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_bitReversedMethodName (void) {
  gOnceFunctionResult_bitReversedMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_bitReversedMethodName (NULL,
                                                                   releaseOnceFunctionResult_bitReversedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_bitReversedMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_bitReversedMethodName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_bitReversedMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_bitReversedMethodName ("bitReversedMethodName",
                                                                       functionWithGenericHeader_bitReversedMethodName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_bitReversedMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Once function 'countLeadingZerosMethodName'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_countLeadingZerosMethodName (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("leadingZeroCount") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_countLeadingZerosMethodName = false ;
static GALGAS_string gOnceFunctionResult_countLeadingZerosMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_countLeadingZerosMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_countLeadingZerosMethodName) {
    gOnceFunctionResult_countLeadingZerosMethodName = onceFunction_countLeadingZerosMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_countLeadingZerosMethodName = true ;
  }
  return gOnceFunctionResult_countLeadingZerosMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_countLeadingZerosMethodName (void) {
  gOnceFunctionResult_countLeadingZerosMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_countLeadingZerosMethodName (NULL,
                                                                         releaseOnceFunctionResult_countLeadingZerosMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_countLeadingZerosMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_countLeadingZerosMethodName (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_countLeadingZerosMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_countLeadingZerosMethodName ("countLeadingZerosMethodName",
                                                                             functionWithGenericHeader_countLeadingZerosMethodName,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_countLeadingZerosMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Once function 'countTrainingZerosMethodName'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_countTrainingZerosMethodName (C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("trainingZeroCount") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_countTrainingZerosMethodName = false ;
static GALGAS_string gOnceFunctionResult_countTrainingZerosMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_countTrainingZerosMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_countTrainingZerosMethodName) {
    gOnceFunctionResult_countTrainingZerosMethodName = onceFunction_countTrainingZerosMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_countTrainingZerosMethodName = true ;
  }
  return gOnceFunctionResult_countTrainingZerosMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_countTrainingZerosMethodName (void) {
  gOnceFunctionResult_countTrainingZerosMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_countTrainingZerosMethodName (NULL,
                                                                          releaseOnceFunctionResult_countTrainingZerosMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_countTrainingZerosMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_countTrainingZerosMethodName (C_Compiler * inCompiler,
                                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  return function_countTrainingZerosMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_countTrainingZerosMethodName ("countTrainingZerosMethodName",
                                                                              functionWithGenericHeader_countTrainingZerosMethodName,
                                                                              & kTypeDescriptor_GALGAS_string,
                                                                              0,
                                                                              functionArgs_countTrainingZerosMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'setBitCountMethodName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_setBitCountMethodName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("setBitCount") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_setBitCountMethodName = false ;
static GALGAS_string gOnceFunctionResult_setBitCountMethodName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_setBitCountMethodName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_setBitCountMethodName) {
    gOnceFunctionResult_setBitCountMethodName = onceFunction_setBitCountMethodName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_setBitCountMethodName = true ;
  }
  return gOnceFunctionResult_setBitCountMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_setBitCountMethodName (void) {
  gOnceFunctionResult_setBitCountMethodName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_setBitCountMethodName (NULL,
                                                                   releaseOnceFunctionResult_setBitCountMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_setBitCountMethodName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_setBitCountMethodName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_setBitCountMethodName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_setBitCountMethodName ("setBitCountMethodName",
                                                                       functionWithGenericHeader_setBitCountMethodName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_setBitCountMethodName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@integerDeclarationAST enterInContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                  GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                  GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                  GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                  GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                  GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_4875 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 108)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 108)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_4995 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_4875, var_selfTypeProxy_4995 COMMA_SOURCE_FILE ("type-integer.galgas", 109)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeProxy_5106 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 110)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 110))  COMMA_SOURCE_FILE ("type-integer.galgas", 110)), var_boolTypeProxy_5106 COMMA_SOURCE_FILE ("type-integer.galgas", 110)) ;
  }
  GALGAS_bigint var_min_5174 = function_minValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 112)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 112)) ;
  GALGAS_bigint var_max_5229 = function_maxValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 113)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 113)) ;
  GALGAS_string var_llvmTypeName_5347 = GALGAS_string ("i").add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 115)) ;
  GALGAS_routineMapCTXT var_routineMap_5390 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 116)) ;
  GALGAS_propertyMap var_propertyMap_5422 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 117)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 118)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_routineLLVMName_5740 ;
    {
    extensionSetter_addFunctionWithoutArgument (var_routineMap_5390, var_integerTypeName_4875.getter_string (SOURCE_FILE ("type-integer.galgas", 120)), function_byteSwappedMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 121)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 121)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 122)), var_selfTypeProxy_4995, var_routineLLVMName_5740, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 119)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5740, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5347, GALGAS_string ("bswap")  COMMA_SOURCE_FILE ("type-integer.galgas", 126))  COMMA_SOURCE_FILE ("type-integer.galgas", 126)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mSize.objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 134)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_lstring var_routineLLVMName_6228 ;
    {
    extensionSetter_addFunctionWithoutArgument (var_routineMap_5390, var_integerTypeName_4875.getter_string (SOURCE_FILE ("type-integer.galgas", 136)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 137)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 137)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 138)), var_boolTypeProxy_5106, var_routineLLVMName_6228, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 135)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_uint_31_ToBoolFunctionIR::constructor_new (var_routineLLVMName_6228, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5347  COMMA_SOURCE_FILE ("type-integer.galgas", 142))  COMMA_SOURCE_FILE ("type-integer.galgas", 142)) ;
  }
  GALGAS_lstring var_routineLLVMName_6625 ;
  {
  extensionSetter_addFunctionWithoutArgument (var_routineMap_5390, var_integerTypeName_4875.getter_string (SOURCE_FILE ("type-integer.galgas", 150)), function_bitReversedMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 151)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 151)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 152)), var_selfTypeProxy_4995, var_routineLLVMName_6625, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 149)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_6625, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5347, GALGAS_string ("bitreverse")  COMMA_SOURCE_FILE ("type-integer.galgas", 156))  COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
  {
  extensionSetter_addFunctionWithoutArgument (var_routineMap_5390, var_integerTypeName_4875.getter_string (SOURCE_FILE ("type-integer.galgas", 164)), function_countLeadingZerosMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 165)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 165)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 166)), var_selfTypeProxy_4995, var_routineLLVMName_6625, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 163)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_6625, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5347, GALGAS_string ("ctlz")  COMMA_SOURCE_FILE ("type-integer.galgas", 170))  COMMA_SOURCE_FILE ("type-integer.galgas", 170)) ;
  {
  extensionSetter_addFunctionWithoutArgument (var_routineMap_5390, var_integerTypeName_4875.getter_string (SOURCE_FILE ("type-integer.galgas", 178)), function_countTrainingZerosMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 179)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 179)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 180)), var_selfTypeProxy_4995, var_routineLLVMName_6625, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 177)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_6625, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5347, GALGAS_string ("cttz")  COMMA_SOURCE_FILE ("type-integer.galgas", 184))  COMMA_SOURCE_FILE ("type-integer.galgas", 184)) ;
  {
  extensionSetter_addFunctionWithoutArgument (var_routineMap_5390, var_integerTypeName_4875.getter_string (SOURCE_FILE ("type-integer.galgas", 192)), function_setBitCountMethodName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 193)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 193)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 194)), var_selfTypeProxy_4995, var_routineLLVMName_6625, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_6625, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_5347, GALGAS_string ("ctpop")  COMMA_SOURCE_FILE ("type-integer.galgas", 198))  COMMA_SOURCE_FILE ("type-integer.galgas", 198)) ;
  GALGAS_classConstantMap var_classConstantMap_8066 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 206)) ;
  {
  var_classConstantMap_8066.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 207)), var_min_5174, var_integerTypeName_4875, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 207)) ;
  }
  {
  var_classConstantMap_8066.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 208)), var_max_5229, var_integerTypeName_4875, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 208)) ;
  }
  GALGAS_constructorMap var_constructorMap_8305 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 210)) ;
  {
  var_constructorMap_8305.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 211)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 211)), GALGAS_constructorValue::constructor_simple (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("type-integer.galgas", 211))  COMMA_SOURCE_FILE ("type-integer.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 211)) ;
  }
  GALGAS_PLMType var_integerType_8459 = GALGAS_PLMType::constructor_new (var_propertyMap_5422, var_routineMap_5390, var_classConstantMap_8066, var_constructorMap_8305, GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 218)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-integer.galgas", 219)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-integer.galgas", 220)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-integer.galgas", 220)) COMMA_SOURCE_FILE ("type-integer.galgas", 220)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-integer.galgas", 220)) COMMA_SOURCE_FILE ("type-integer.galgas", 220)).operator_or (GALGAS_PLMTypeAttributes::constructor_comparable (SOURCE_FILE ("type-integer.galgas", 220)) COMMA_SOURCE_FILE ("type-integer.galgas", 220)), var_integerTypeName_4875.getter_string (SOURCE_FILE ("type-integer.galgas", 221)), GALGAS_typeKind::constructor_integer (var_min_5174, var_max_5229, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 222)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 222)), var_integerTypeName_4875.getter_string (SOURCE_FILE ("type-integer.galgas", 223))  COMMA_SOURCE_FILE ("type-integer.galgas", 213)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_4875, var_integerType_8459, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-integer.galgas", 228)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 225)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_4875, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 232)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_4875, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 238)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_4875, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 244)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                       extensionMethod_integerDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInContext (defineExtensionMethod_integerDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_integer_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_10112 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 260)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 260)) ;
  GALGAS_PLMType var_booleanType_10212 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 261)) ;
  GALGAS_lstring var_intIntOp_10284 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 263)), constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 263)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_10284, var_booleanType_10212, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 267))  COMMA_SOURCE_FILE ("type-integer.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 264)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_10284, var_booleanType_10212, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 272))  COMMA_SOURCE_FILE ("type-integer.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 277)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 277)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_10284, var_booleanType_10212, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 282)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 282)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_10284, var_booleanType_10212, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 279)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 287)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 287)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_10284, var_booleanType_10212, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 284)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 292)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 292)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_10284, var_booleanType_10212, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 289)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 295)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 299))  COMMA_SOURCE_FILE ("type-integer.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 296)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 304))  COMMA_SOURCE_FILE ("type-integer.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 301)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 309))  COMMA_SOURCE_FILE ("type-integer.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 306)) ;
    }
    {
    ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 311)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 317)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 325)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 325)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 330))  COMMA_SOURCE_FILE ("type-integer.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 327)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 335)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 335)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 332)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 340))  COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 345)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 345)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 342)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 350))  COMMA_SOURCE_FILE ("type-integer.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 347)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 355)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 355)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 352)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 360)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 360)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 357)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 365)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 365)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 362)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 370)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 370)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 367)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 376))  COMMA_SOURCE_FILE ("type-integer.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 381)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 381)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_10284, var_selfType_10112, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@infixObjectObjectOperatorDescription generateInfixOperatorCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                            const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                            const GALGAS_location constinArgument_inOperatorLocation,
                                                                                            const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                            const GALGAS_PLMType constinArgument_inResultType,
                                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  GALGAS_bool test_0 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 401)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 401)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left_14848 ;
    GALGAS_PLMType joker_14822_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_14822_1, var_left_14848, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)) ;
    GALGAS_bigint var_right_14913 ;
    GALGAS_PLMType joker_14886_1 ; // Joker input parameter
    constinArgument_inRightOperand.method_literalInteger (joker_14886_1, var_right_14913, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue_14934 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_14848, var_right_14913, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_14934  COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 407)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 411)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription.mSlotID,
                                                  extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_integer_5F_literal_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_15879 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 430)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 430)) ;
  GALGAS_PLMType var_booleanType_15979 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 431)) ;
  GALGAS_lstring var_intLiteralOp_16055 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_booleanType_15979, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 437))  COMMA_SOURCE_FILE ("type-integer.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_booleanType_15979, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 442))  COMMA_SOURCE_FILE ("type-integer.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 439)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 447)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 447)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_booleanType_15979, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 444)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 452)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 452)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_booleanType_15979, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 449)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 457)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 457)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_booleanType_15979, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 454)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 462)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 462)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_booleanType_15979, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 459)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 465)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 469))  COMMA_SOURCE_FILE ("type-integer.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 466)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 474))  COMMA_SOURCE_FILE ("type-integer.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 471)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 479))  COMMA_SOURCE_FILE ("type-integer.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 476)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 486)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 486)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 483)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 491))  COMMA_SOURCE_FILE ("type-integer.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 488)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 496)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 496)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 493)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 501))  COMMA_SOURCE_FILE ("type-integer.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 498)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 506)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 506)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 503)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 511))  COMMA_SOURCE_FILE ("type-integer.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 508)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 516)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 516)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 513)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 521)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 521)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 518)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 526)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 526)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 523)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 531)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 531)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 528)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 537))  COMMA_SOURCE_FILE ("type-integer.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 534)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 542)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 542)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_16055, var_selfType_15879, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 539)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@integerObject_literal_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_PLMType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_20475 ;
  GALGAS_PLMType joker_20441_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_20441_1, var_literalValue_20475, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 563)) ;
  GALGAS_bigint var_min_20534 ;
  GALGAS_bigint var_max_20555 ;
  GALGAS_bool joker_20557_2 ; // Joker input parameter
  GALGAS_uint joker_20557_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 564)).getter_kind (HERE).method_integer (var_min_20534, var_max_20555, joker_20557_2, joker_20557_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 564)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_20475.objectCompare (var_min_20534)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_20534.getter_string (SOURCE_FILE ("type-integer.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 566)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 566)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 566)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_20475.objectCompare (var_max_20555)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_20555.getter_string (SOURCE_FILE ("type-integer.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 568)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 568)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 568)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 570)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 573)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 571)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator.mSlotID,
                                                  extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_literal_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_21657 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 592)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 592)) ;
  GALGAS_lstring var_intLiteralOp_21789 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 594)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 594)) ;
  GALGAS_PLMType var_booleanType_21896 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 595)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_booleanType_21896, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 599))  COMMA_SOURCE_FILE ("type-integer.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 596)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_booleanType_21896, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 604))  COMMA_SOURCE_FILE ("type-integer.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 601)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 609)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 609)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_booleanType_21896, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 606)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 614)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 614)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_booleanType_21896, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 611)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 619)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 619)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_booleanType_21896, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 616)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 624)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 624)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_booleanType_21896, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 621)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 627)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 631))  COMMA_SOURCE_FILE ("type-integer.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 628)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 636))  COMMA_SOURCE_FILE ("type-integer.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 633)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 641))  COMMA_SOURCE_FILE ("type-integer.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 638)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 648)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 648)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 645)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 653))  COMMA_SOURCE_FILE ("type-integer.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 650)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 658)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 658)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 655)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 663))  COMMA_SOURCE_FILE ("type-integer.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 660)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 668)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 668)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 665)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 673))  COMMA_SOURCE_FILE ("type-integer.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 670)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 678)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 678)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 675)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 683)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 683)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 680)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 688)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 688)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 685)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 693)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 693)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 690)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 699))  COMMA_SOURCE_FILE ("type-integer.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 696)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 704)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 704)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_21789, var_selfType_21657, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 701)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@literal_integerObject_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_PLMType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_26227 ;
  GALGAS_PLMType joker_26193_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_26193_1, var_literalValue_26227, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 725)) ;
  GALGAS_bigint var_min_26287 ;
  GALGAS_bigint var_max_26308 ;
  GALGAS_bool joker_26310_2 ; // Joker input parameter
  GALGAS_uint joker_26310_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 726)).getter_kind (HERE).method_integer (var_min_26287, var_max_26308, joker_26310_2, joker_26310_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 726)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_26227.objectCompare (var_min_26287)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_26287.getter_string (SOURCE_FILE ("type-integer.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 728)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 728)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 728)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_26227.objectCompare (var_max_26308)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_26308.getter_string (SOURCE_FILE ("type-integer.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 730)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 730)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 730)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 732)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 735)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 733)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator.mSlotID,
                                                  extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateLLVMCodeForIntegerType'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateLLVMCodeForIntegerType (GALGAS_string & ioArgument_ioLLVMcode,
                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                             const GALGAS_uint constinArgument_inSize,
                                             const GALGAS_bool constinArgument_inIsSigned,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_llvmTypeName_27406 = GALGAS_string ("i").add_operation (constinArgument_inSize.getter_string (SOURCE_FILE ("type-integer.galgas", 754)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 754)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("int") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("uint") ;
  }
  GALGAS_string var_llvmBaseTypeName_27444 = GALGAS_string ("$").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 755)).add_operation (constinArgument_inSize.getter_string (SOURCE_FILE ("type-integer.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 755)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("GENERATED FUNCTIONS FOR ").add_operation (var_llvmBaseTypeName_27444, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 756)).add_operation (GALGAS_string (" TYPE"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 756)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 756)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign.").add_operation (var_llvmBaseTypeName_27444, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)).add_operation (var_llvmBaseTypeName_27444, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 801)).add_operation (GALGAS_string ("* %outTarget, "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 801)).add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 801)).add_operation (GALGAS_string ("* %inSource) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 803)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 803)).add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 803)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 803)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 804)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy using load/store\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 809)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 809)).add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 809)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 809)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 810)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 810)).add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 810)).add_operation (GALGAS_string ("* %outTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy using copy function\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 814)).add_operation (GALGAS_string ("* %outTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 814)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_27406, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 815)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add nsw nuw i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 817)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 818)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 819)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 820)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@uint1ToBoolFunctionIR llvmCodeGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uint_31_ToBoolFunctionIR * object = (const cPtr_uint_31_ToBoolFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_uint_31_ToBoolFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 838)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 838)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 838)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 838)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 838)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 839)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 839)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 839)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 840)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 840)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 840)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 840)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 840)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 %value\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 841)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 842)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_uint_31_ToBoolFunctionIR.mSlotID,
                                           extensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration (defineExtensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerBuiltinFunctionIR * object = (const cPtr_integerBuiltinFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerBuiltinFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 861)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 861)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 861)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 861)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 862)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 862)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 862)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 863)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 863)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 863)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 863)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 863)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 864)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 864)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 864)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 864)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 864)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 864)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 865)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 865)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 865)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 866)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 866)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 866)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 867)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (object->mProperty_mLLVMTypeName.add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 869)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 869)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 869)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 869)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 869)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 869)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 869))  COMMA_SOURCE_FILE ("type-integer.galgas", 868)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_integerBuiltinFunctionIR.mSlotID,
                                           extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerBuiltinFunctionIR_llvmCodeGeneration (defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@literalIntegerDeclarationAST locationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_literalIntegerDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalIntegerDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                                  extensionGetter_literalIntegerDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalIntegerDeclarationAST_locationForErrorSignaling (defineExtensionGetter_literalIntegerDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@literalIntegerDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclarationAST * object = (const cPtr_literalIntegerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclarationAST) ;
  GALGAS_lstring var_staticIntegerTypeName_1182 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 21)) ;
  {
  const GALGAS_literalIntegerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName_1182, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName_1182, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 23)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 23)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 23)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                               extensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@literalIntegerDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                                           extensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@literalIntegerDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntegerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                         GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                         GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                         GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                         GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_2770 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 48)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 48)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_2770, function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 52)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-literal-integer.galgas", 53)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 50)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 57)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalIntegerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                       extensionMethod_literalIntegerDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_enterInContext (defineExtensionMethod_literalIntegerDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterLiteralIntegerOperators (GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_literalIntegerTypeName_3294 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 67)) ;
  GALGAS_lstring var_intIntOp_3367 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_3294.getter_string (HERE), var_literalIntegerTypeName_3294.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 69)) ;
  GALGAS_PLMType var_selfType_3481 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_3294, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 70)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 70)) ;
  GALGAS_PLMType var_booleanType_3617 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3367, var_booleanType_3617, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 76))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 73)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3367, var_booleanType_3617, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 81))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 78)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3367, var_booleanType_3617, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 86))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3367, var_booleanType_3617, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 91))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 88)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3367, var_booleanType_3617, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 96))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 93)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3367, var_booleanType_3617, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 101))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 98)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 107))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 112))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 117))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (var_literalIntegerTypeName_3294, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 119)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (var_literalIntegerTypeName_3294, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 123)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 130))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 127)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 135))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 132)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 140))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 145))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 142)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 150))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 147)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 155))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 152)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 160))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 157)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 165))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 162)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 170))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 167)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 175))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 172)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 181))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 178)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3367, var_selfType_3481, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 186))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 183)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@literal_literal_integerInfixOperation generateInfixOperatorCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                   const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                   const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_PLMType constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_7780 ;
  GALGAS_PLMType joker_7749_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_7749_1, var_leftValue_7780, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 208)) ;
  GALGAS_bigint var_rightValue_7848 ;
  GALGAS_PLMType joker_7816_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_7816_1, var_rightValue_7848, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 209)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_7862 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_7780, var_rightValue_7848, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 210)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_7862  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 211)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                  extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@literalStringDeclarationAST locationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_literalStringDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-string.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                  extensionGetter_literalStringDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_locationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  GALGAS_lstring var_literalStringTypeName_1179 = function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 21)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1179, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1179, GALGAS_string ("$uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                               extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                           extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@literalStringDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalStringDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                        GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                        GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                        GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 50)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 50)), function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 51)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-static-string.galgas", 52)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalStringDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                       extensionMethod_literalStringDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInContext (defineExtensionMethod_literalStringDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'generateStaticStringTypeLLVMCode'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateStaticStringTypeLLVMCode (GALGAS_string & ioArgument_ioLLVMcode,
                                               const GALGAS_string constinArgument_inLLVMTypeName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("GENERATED FUNCTIONS FOR $staticString TYPE"), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 62)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @plm.assign.").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 63)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 63)).add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 63)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)).add_operation (GALGAS_string ("* %target, "), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)).add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)).add_operation (GALGAS_string ("*%source) {\n"), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 64)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)).add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)).add_operation (GALGAS_string ("* %source\n"), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 65)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 66)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 66)).add_operation (constinArgument_inLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 66)).add_operation (GALGAS_string ("* %target\n"), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 66)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 67)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 68)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@typeOpaqueDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mOpaqueTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 58)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), object->mProperty_mOpaqueTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 60)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                               extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@typeOpaqueDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("opaque ").add_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                           extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@typeOpaqueDeclarationAST locationForErrorSignaling'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  result_outLocation = object->mProperty_mOpaqueTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                  extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@typeOpaqueDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeOpaqueDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                     const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                     GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  GALGAS_PLMTypeAttributes var_opaqueTypeAttributes_4382 = GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 91)) ;
  cEnumerator_lstringlist enumerator_4426 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4426.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4426.current_mValue (HERE).getter_string (HERE).objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_opaqueTypeAttributes_4382.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 94)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4426.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 95)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 95)) ;
      }else if (kBoolFalse == test_1) {
        var_opaqueTypeAttributes_4382 = var_opaqueTypeAttributes_4382.operator_or (GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 97)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 97)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4426.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 99)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_opaqueTypeAttributes_4382.getter_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 100)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_4426.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 101)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 101)) ;
        }else if (kBoolFalse == test_4) {
          var_opaqueTypeAttributes_4382 = var_opaqueTypeAttributes_4382.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4426.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 106)), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
      }
    }
    enumerator_4426.gotoNextObject () ;
  }
  GALGAS_objectIR var_sizeExpressionIR_5354 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSizeExpression, object->mProperty_mSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 117)), var_sizeExpressionIR_5354, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  const enumGalgasBool test_7 = var_sizeExpressionIR_5354.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).boolEnum () ;
  if (kBoolTrue == test_7) {
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not a literal integer"), fixItArray8  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
  }else if (kBoolFalse == test_7) {
    GALGAS_constructorMap var_constructorMap_5535 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
    const enumGalgasBool test_9 = var_opaqueTypeAttributes_4382.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 124)).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      var_constructorMap_5535.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
      }
    }
    GALGAS_bigint var_bitSize_5732 ;
    GALGAS_PLMType joker_5711_1 ; // Joker input parameter
    var_sizeExpressionIR_5354.method_literalInteger (joker_5711_1, var_bitSize_5732, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 127)) ;
    GALGAS_PLMType var_opaqueType_5752 = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 129)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 131)), var_constructorMap_5535, GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 133)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 134)), var_opaqueTypeAttributes_4382, object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 136)), GALGAS_typeKind::constructor_opaque (var_bitSize_5732  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 137)), object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 138))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, var_opaqueType_5752, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-opaque-declaration.galgas", 143)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                       extensionMethod_typeOpaqueDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInContext (defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension getter '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  result_outRepresentation = function_registerGroupNameFromPLMname (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 264)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 264)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                           extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@controlRegisterGroupDeclarationAST locationForErrorSignaling'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  result_result = object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 270)).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 270)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                  extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_lstring var_nodeName_10529 = function_registerGroupNameFromPLMname (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 276)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_10529, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 278)) ;
  }
  cEnumerator_controlRegisterDeclarationList enumerator_10721 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_10721.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_10529, enumerator_10721.current (HERE).getter_mRegisterTypeName (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 282)) ;
    }
    GALGAS_stringlist var_split_10917 = enumerator_10721.current (HERE).getter_mRegisterTypeName (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("$uint") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 284)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_split_10917.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 285)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = var_split_10917.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 285)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 285)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_n_11080 = var_split_10917.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 286)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 286)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_n_11080.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_lstring var_bitSizeTypeName_11179 = GALGAS_lstring::constructor_new (GALGAS_string ("$uint").add_operation (var_n_11080.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 288)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 288)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 288)), enumerator_10721.current (HERE).getter_mRegisterTypeName (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 288))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 288)) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_nodeName_10529, var_bitSizeTypeName_11179 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 289)) ;
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_11422 (enumerator_10721.current (HERE).getter_mRegisterBitSliceList (HERE), kENUMERATION_UP) ;
    while (enumerator_11422.hasCurrentObject ()) {
      switch (enumerator_11422.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_11632 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_11422.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_11632->mAssociatedValue1 ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsSupOrEqual, extractedValue_count.getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)), extractedValue_count.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)) ;
            }
          }
        }
        break ;
      }
      enumerator_11422.gotoNextObject () ;
    }
    GALGAS_lstring var_rootNode_11706 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 303)), var_nodeName_10529.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 303)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_10529, var_rootNode_11706 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 304)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_11919 (enumerator_10721.current (HERE).getter_mRegisterArrayList (HERE), kENUMERATION_UP) ;
    while (enumerator_11919.hasCurrentObject ()) {
      switch (enumerator_11919.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_12236 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_11919.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_arraySize = extractPtr_12236->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_12236->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_10529, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 310)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_10529, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 311)) ;
        }
        break ;
      }
      enumerator_11919.gotoNextObject () ;
    }
    enumerator_10721.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                               extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'controlRegisterType'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_controlRegisterType (const GALGAS_lstring constinArgument_inRegisterTypeName,
                                  GALGAS_semanticContext & ioArgument_ioContext,
                                  GALGAS_PLMType & outArgument_outRegisterType,
                                  GALGAS_uint & outArgument_outRegisterBitCount,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  GALGAS_uint joker_14069_2 ; // Joker input parameter
  GALGAS_bool joker_14069_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (constinArgument_inRegisterTypeName, outArgument_outRegisterType, joker_14069_2, joker_14069_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 360)) ;
  switch (outArgument_outRegisterType.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_14170 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_14170->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 365)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 365)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 367)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 367)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 369)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 369)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 371)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 371)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 373)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 373)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 375)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 375)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 377)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 377)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 379)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 379)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 381)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 381)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 383)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 383)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'buildControlRegisterSliceMap'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildControlRegisterSliceMap (const GALGAS_controlRegisterBitSliceList constinArgument_inRegisterBitSliceList,
                                           const GALGAS_location constinArgument_inEndOfBitSliceLocation,
                                           GALGAS_semanticContext & /* ioArgument_ioContext */,
                                           GALGAS_PLMType & ioArgument_ioRegisterType,
                                           const GALGAS_uint constinArgument_inRegisterBitCount,
                                           GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                           GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                           GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 400)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 401)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 403)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount_16144 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterBitSliceList enumerator_16187 (constinArgument_inRegisterBitSliceList, kENUMERATION_DOWN) ;
    while (enumerator_16187.hasCurrentObject ()) {
      switch (enumerator_16187.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_16382 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_16187.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_16382->mAssociatedValue0 ;
          var_shiftCount_16144 = var_shiftCount_16144.add_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 408)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_16903 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_16187.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_16903->mAssociatedValue0 ;
          const GALGAS_lbigint extractedValue_count = extractPtr_16903->mAssociatedValue1 ;
          GALGAS_uint var_bitCount_16456 = extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_16456, extractedValue_name.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 412)) ;
          {
          outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_16144, var_bitCount_16456, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
          }
          GALGAS_bigint var_mask_16692 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)).left_shift_operation (var_bitCount_16456 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)).left_shift_operation (var_shiftCount_16144 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
          {
          outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 422)), var_mask_16692, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 420)) ;
          }
          var_shiftCount_16144 = var_shiftCount_16144.add_operation (var_bitCount_16456, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 426)) ;
        }
        break ;
      }
      enumerator_16187.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_16144)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_16144.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 432)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 432)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 432)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 432)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 431)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                                               GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                               GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                               GALGAS_controlRegisterUserAccesMapAST & ioArgument_ioControlRegisterUserAccesMapAST,
                                                                               GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_controlRegisterMap var_regMap_22189 = GALGAS_controlRegisterMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 563)) ;
  cEnumerator_controlRegisterDeclarationList enumerator_22218 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_22218.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_22218.current (HERE), ioArgument_ioContext, var_regMap_22189, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 565)) ;
    enumerator_22218.gotoNextObject () ;
  }
  cEnumerator_registerGroupListAST enumerator_22391 (object->mProperty_mRegisterGroupList, kENUMERATION_UP) ;
  while (enumerator_22391.hasCurrentObject ()) {
    GALGAS_controlRegisterMap var_registerMap_22430 = var_regMap_22189 ;
    cEnumerator_controlRegisterMap enumerator_22501 (var_regMap_22189, kENUMERATION_UP) ;
    while (enumerator_22501.hasCurrentObject ()) {
      GALGAS_string var_key_22518 = GALGAS_string ("#").add_operation (enumerator_22391.current (HERE).getter_mRegisterGroupName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 575)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 575)).add_operation (enumerator_22501.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 575)) ;
      const enumGalgasBool test_0 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_22518 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 576)).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        var_registerMap_22430.setter_setMUserAccessForKey (GALGAS_bool (true), enumerator_22501.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 577)) ;
        }
        {
        ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_22518.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 578)) ;
        }
      }
      enumerator_22501.gotoNextObject () ;
    }
    switch (enumerator_22391.current (HERE).getter_mControlRegisterGroupKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterGroupKindAST::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_single * extractPtr_23159 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) (enumerator_22391.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_baseAddress = extractPtr_23159->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_22892 = GALGAS_registerGroupKind::constructor_single (extractedValue_baseAddress.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 584))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 584)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_22391.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_22892, var_registerMap_22430, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 585)) ;
        }
        {
        extensionSetter_insertRegisterGroup (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_22391.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_22892, var_registerMap_22430, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 586)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_groupArray:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * extractPtr_23845 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) (enumerator_22391.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_size = extractPtr_23845->mAssociatedValue0 ;
        const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_23845->mAssociatedValue1 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_size.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 588)).objectCompare (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 588)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_size.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 589)), GALGAS_string ("the group size is ").add_operation (extractedValue_size.getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 589)).add_operation (GALGAS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 589)).add_operation (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 589)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 589)).add_operation (GALGAS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 589)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 589)) ;
        }
        GALGAS_registerGroupKind var_groupKind_23415 = GALGAS_registerGroupKind::constructor_arrayGroup (extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 591)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_22391.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_23415, var_registerMap_22430, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 592)) ;
        }
        {
        extensionSetter_insertRegisterGroup (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_22391.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_23415, var_registerMap_22430, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 593)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (enumerator_22391.current (HERE).getter_mRegisterGroupName (HERE), extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 594))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 594)) ;
      }
      break ;
    }
    enumerator_22391.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                       extensionMethod_controlRegisterGroupDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInContext (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedControlRegisterArrayGroupDeclaration * object = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (object->mProperty_mGroupName, object->mProperty_mBaseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 618)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration.mSlotID,
                                         extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterGroupMap constinArgument_inControlRegisterGroupMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_byAddressFilePath_27123 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)) ;
  GALGAS_string var_byNameFilePath_27212 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 680)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_controlRegisterByAddress var_controlRegisterByAddress_27401 = GALGAS_controlRegisterByAddress::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 682)) ;
    GALGAS_controlRegisterByName var_controlRegisterByName_27455 = GALGAS_controlRegisterByName::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 683)) ;
    GALGAS_uint var_controlRegisterCount_27491 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterGroupMap enumerator_27542 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
    while (enumerator_27542.hasCurrentObject ()) {
      switch (enumerator_27542.current_mGroupKind (HERE).enumValue ()) {
      case GALGAS_registerGroupKind::kNotBuilt:
        break ;
      case GALGAS_registerGroupKind::kEnum_single:
        {
          const cEnumAssociatedValues_registerGroupKind_single * extractPtr_27857 = (const cEnumAssociatedValues_registerGroupKind_single *) (enumerator_27542.current_mGroupKind (HERE).unsafePointer ()) ;
          const GALGAS_bigint extractedValue_groupBaseAddress = extractPtr_27857->mAssociatedValue0 ;
          {
          routine_buildControlRegisterMaps (enumerator_27542.current_mControlRegisterMap (HERE), extractedValue_groupBaseAddress, enumerator_27542.current_lkey (HERE).getter_string (HERE), var_controlRegisterByAddress_27401, var_controlRegisterByName_27455, var_controlRegisterCount_27491, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 688)) ;
          }
        }
        break ;
      case GALGAS_registerGroupKind::kEnum_arrayGroup:
        {
          const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_28247 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (enumerator_27542.current_mGroupKind (HERE).unsafePointer ()) ;
          const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_28247->mAssociatedValue0 ;
          cEnumerator_lbigintlist enumerator_27950 (extractedValue_baseAddresses, kENUMERATION_UP) ;
          GALGAS_uint index_27922 ((uint32_t) 0) ;
          while (enumerator_27950.hasCurrentObject ()) {
            {
            routine_buildControlRegisterMaps (enumerator_27542.current_mControlRegisterMap (HERE), enumerator_27950.current_mValue (HERE).getter_bigint (HERE), enumerator_27542.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 701)).add_operation (index_27922.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 701)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 701)), var_controlRegisterByAddress_27401, var_controlRegisterByName_27455, var_controlRegisterCount_27491, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 698)) ;
            }
            enumerator_27950.gotoNextObject () ;
            index_27922.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 697)) ;
          }
        }
        break ;
      }
      enumerator_27542.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_28288 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 710)), var_controlRegisterCount_27491, var_controlRegisterByAddress_27401 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 709))) ;
    GALGAS_bool joker_28535 ; // Joker input parameter
    var_typeDumpString_28288.method_writeToFileWhenDifferentContents (var_byAddressFilePath_27123, joker_28535, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 714)) ;
    var_typeDumpString_28288 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 716)), var_controlRegisterCount_27491, var_controlRegisterByName_27455 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 715))) ;
    GALGAS_bool joker_28794 ; // Joker input parameter
    var_typeDumpString_28288.method_writeToFileWhenDifferentContents (var_byNameFilePath_27212, joker_28794, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 720)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byAddressFilePath_27123, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 722)) ;
    }
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byNameFilePath_27212, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 723)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'buildControlRegisterMaps'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildControlRegisterMaps (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                       const GALGAS_bigint constinArgument_inGroupBaseAddress,
                                       const GALGAS_string constinArgument_inGroupName,
                                       GALGAS_controlRegisterByAddress & ioArgument_ioControlRegisterByAddress,
                                       GALGAS_controlRegisterByName & ioArgument_ioControlRegisterByName,
                                       GALGAS_uint & ioArgument_ioControlRegisterCount,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterMap enumerator_29363 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
  while (enumerator_29363.hasCurrentObject ()) {
    GALGAS_bigint var_registerAddress_29390 = constinArgument_inGroupBaseAddress.add_operation (enumerator_29363.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 738)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_29363.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 740)) ;
      GALGAS_string var_registerName_29545 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 741)).add_operation (enumerator_29363.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 741)) ;
      GALGAS_string var_s_29588 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_29545, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 742)).add_operation (GALGAS_string ("</td><td class=\"type\">$"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 743)).add_operation (enumerator_29363.current_mType (HERE).getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 744)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 744)).add_operation (var_registerAddress_29390.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 744)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_29363.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 746)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_s_29588.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 747)).add_operation (function_fieldIndexColumns (enumerator_29363.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 748)).add_operation (GALGAS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 748)).add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 748)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 747)) ;
        cEnumerator_controlRegisterFieldList enumerator_30078 (enumerator_29363.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
        while (enumerator_30078.hasCurrentObject ()) {
          var_s_29588.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_30078.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 751)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 751)).add_operation (enumerator_30078.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 751)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 751)) ;
          enumerator_30078.gotoNextObject () ;
        }
        var_s_29588.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 753)) ;
      }
      var_s_29588.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 755)) ;
      ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_29390, var_s_29588  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 756)) ;
      ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_29390, var_s_29588, var_registerName_29545  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_29363.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 759)) ;
      cEnumerator_uintlist enumerator_30526 (function_arrayIndexListFor (enumerator_29363.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 760)), kENUMERATION_UP) ;
      while (enumerator_30526.hasCurrentObject ()) {
        GALGAS_bigint var_address_30549 = var_registerAddress_29390.add_operation (enumerator_30526.current_mValue (HERE).multiply_operation (enumerator_29363.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 761)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 761)) ;
        GALGAS_string var_registerName_30625 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)).add_operation (enumerator_29363.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)).add_operation (enumerator_30526.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
        GALGAS_string var_s_30700 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_30625, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)).add_operation (GALGAS_string ("</td><td class=\"type\">$"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 764)).add_operation (enumerator_29363.current_mType (HERE).getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 765)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 765)).add_operation (var_address_30549.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 765)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 766)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_29363.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 768)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_s_30700.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 769)).add_operation (function_fieldIndexColumns (enumerator_29363.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)).add_operation (GALGAS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 769)) ;
          cEnumerator_controlRegisterFieldList enumerator_31189 (enumerator_29363.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
          while (enumerator_31189.hasCurrentObject ()) {
            var_s_30700.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_31189.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 772)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 772)).add_operation (enumerator_31189.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 772)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 772)) ;
            enumerator_31189.gotoNextObject () ;
          }
          var_s_30700.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 774)) ;
        }
        var_s_30700.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 776)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_29390, var_s_30700  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 777)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_29390, var_s_30700, var_registerName_30625  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 778)) ;
        enumerator_30526.gotoNextObject () ;
      }
    }
    enumerator_29363.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByName'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (C_Compiler * /* inCompiler */,
                                                                                    const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                    const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                    const GALGAS_controlRegisterByName & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by name</title>\n"
    "<style type=\"text/css\">body {\n"
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
    "table.fields {\n"
    "\xC2""\xA0""\xC2""\xA0""border-collapse: collapse ;\n"
    "  border-spacing: 1px 1px;\n"
    "}\n"
    "\n"
    "td.fields {\n"
    "  border: 1px solid #333333 ;\n"
    "  text-align: center ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "td.address {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.name {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.type {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
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
    "<h1>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by name</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByNameDump.html.galgasTemplate", 78)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">Address</td><td class=\"result_ti"
    "tle\">Value</td></tr>\n" ;
  GALGAS_uint index_1537_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME.isValid ()) {
    cEnumerator_controlRegisterByName enumerator_1537 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME, kENUMERATION_UP) ;
    while (enumerator_1537.hasCurrentObject ()) {
      result << enumerator_1537.current_mHTML (HERE).stringValue () ;
      index_1537_.increment () ;
      enumerator_1537.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByAddress'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                       const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                       const GALGAS_controlRegisterByAddress & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by address</title>\n"
    "<style type=\"text/css\">body {\n"
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
    "table.fields {\n"
    "\xC2""\xA0""\xC2""\xA0""border-collapse: collapse ;\n"
    "  border-spacing: 1px 1px;\n"
    "}\n"
    "\n"
    "td.fields {\n"
    "  border: 1px solid #333333 ;\n"
    "  text-align: center ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "td.address {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.name {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.type {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
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
    "<h1>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by address</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByAddressDump.html.galgasTemplate", 78)).stringValue () ;
  result << " defined control registers, sorted by address.</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">Address</td><td class=\"result_ti"
    "tle\">Value</td></tr>\n" ;
  GALGAS_uint index_1549_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS.isValid ()) {
    cEnumerator_controlRegisterByAddress enumerator_1549 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS, kENUMERATION_UP) ;
    while (enumerator_1549.hasCurrentObject ()) {
      result << enumerator_1549.current_mHTML (HERE).stringValue () ;
      index_1549_.increment () ;
      enumerator_1549.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_32372 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804))), kENUMERATION_DOWN) ;
  while (enumerator_32372.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_32372.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 805)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)) ;
    enumerator_32372.gotoNextObject () ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_fieldIndexColumns (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_fieldIndexColumns (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'arrayIndexListFor'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uintlist function_arrayIndexListFor (const GALGAS_uint & constinArgument_inSize,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist result_result ; // Returned variable
  result_result = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 812)) ;
  cEnumerator_range enumerator_32657 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813))), kENUMERATION_UP) ;
  while (enumerator_32657.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_32657.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)) ;
    enumerator_32657.gotoNextObject () ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_arrayIndexListFor (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_arrayIndexListFor (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@globalConstantDeclarationAST locationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_globalConstantDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  result_outLocation = object->mProperty_mConstantName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_globalConstantDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                  extensionGetter_globalConstantDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_locationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@globalConstantDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  {
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 67)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, object->mProperty_mConstantTypeName COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 73)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                               extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@globalConstantDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("global.constant.").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 79)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                           extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@globalConstantDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_globalConstantDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                         GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                         GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                         GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                         GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  GALGAS_bool var_displayValue_4562 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_4606 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4606.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_4606.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("display"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_4606.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 101)), GALGAS_string ("attribute should be @display"), fixItArray1  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 101)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = var_displayValue_4562.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_4606.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 103)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 103)) ;
      }else if (kBoolFalse == test_2) {
        var_displayValue_4562 = GALGAS_bool (true) ;
      }
    }
    enumerator_4606.gotoNextObject () ;
  }
  GALGAS_objectIR var_expressionResult_5123 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSourceExpression, object->mProperty_mConstantName.getter_location (HERE), object->mProperty_mConstantTypeName, var_expressionResult_5123, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 109)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_expressionResult_5123, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 118)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mConstantName, var_expressionResult_5123, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 119)) ;
  }
  const enumGalgasBool test_4 = var_displayValue_4562.boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->printMessage (GALGAS_string ("Global constant '").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)).add_operation (GALGAS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)).add_operation (extensionGetter_llvmValue (var_expressionResult_5123, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_globalConstantDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                       extensionMethod_globalConstantDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInContext (defineExtensionMethod_globalConstantDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_6079 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 135)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_6226 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 137)) ;
    cEnumerator_globalConstantMap enumerator_6265 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_6265.hasCurrentObject ()) {
      var_firstLetterSet_6226.addAssign_operation (enumerator_6265.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 139)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 139))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 139)) ;
      enumerator_6265.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_6373 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_6407 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_6453 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_6453.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_6407.objectCompare (enumerator_6453.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_6407 = enumerator_6453.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)) ;
        var_tableOfTypeString_6373.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6407.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 146)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)).add_operation (var_currentFirstLetter_6407.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)) ;
      }
      var_tableOfTypeString_6373.plusAssign_operation(function_linkForGlobalConstant (enumerator_6453.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 148)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 148)) ;
      enumerator_6453.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_6849 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 151)), inArgument_inGlobalConstantMap, var_firstLetterSet_6226, var_tableOfTypeString_6373 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 150))) ;
    GALGAS_bool joker_7093 ; // Joker input parameter
    var_typeDumpString_6849.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_6079, joker_7093, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 156)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_6079, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 158)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_constantDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_constantDumpGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
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
    "<h1>Global Constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_GLOBAL_5F_CONSTANT_5F_MAP.getter_count (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined global constants, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1005_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1005 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1005.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1005.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_1005.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1005.hasNextObject ()) {
        result << " - " ;
      }
      index_1005_.increment () ;
      enumerator_1005.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_title\">V"
    "alue</td></tr>\n" ;
  GALGAS_uint index_1375_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1375 (in_GLOBAL_5F_CONSTANT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1375.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1375.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1375.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td><td>$" ;
      result << extensionGetter_plmTypeDescriptionName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1375_.increment () ;
      enumerator_1375.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_linkForGlobalConstant (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForGlobalConstant (operand0,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@syncToolInstanceDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mSyncInstanceName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 46)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncInstanceName, object->mProperty_mSyncTypeName COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 48)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mSyncInstanceName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 50)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                               extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@syncToolInstanceDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (object->mProperty_mSyncInstanceName.getter_string (SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                                           extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@syncToolInstanceDeclarationAST locationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  result_outLocation = object->mProperty_mSyncInstanceName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                                  extensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (defineExtensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@syncToolInstanceDeclarationAST enterInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncToolInstanceDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                                           GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                           GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                           GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                           GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  GALGAS_PLMType var_optionalSyncType_4370 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_optionalSyncType_4370 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 94)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint joker_4528_2 ; // Joker input parameter
    GALGAS_bool joker_4528_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mSyncTypeName, var_optionalSyncType_4370, joker_4528_2, joker_4528_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 96)) ;
  }
  GALGAS_objectIR var_expressionResult_4820 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSourceExpression, object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 103)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 104)), var_expressionResult_4820, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 99)) ;
  }
  GALGAS_objectIR var_result_4882 = function_checkAssignmentCompatibility (var_expressionResult_4820, var_optionalSyncType_4370, object->mProperty_mSyncInstanceName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 108)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_4882, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 117)), var_result_4882, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 115)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_type (var_result_4882, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)).getter_kind (HERE).getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 122)), GALGAS_string ("the type is not a synchronization tool type"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 122)) ;
  }
  {
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_4882, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 125)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedSyncInstance::constructor_new (object->mProperty_mSyncInstanceName, var_result_4882  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 127))  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 127)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                       extensionMethod_syncToolInstanceDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInContext (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@decoratedSyncInstance semanticAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedSyncInstance_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedSyncInstance * object = (const cPtr_decoratedSyncInstance *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedSyncInstance) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (object->mProperty_mSyncInstanceName, object->mProperty_mExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 146)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedSyncInstance_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedSyncInstance.mSlotID,
                                         extensionMethod_decoratedSyncInstance_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedSyncInstance_semanticAnalysis (defineExtensionMethod_decoratedSyncInstance_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@implementedDriverAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_implementedDriverAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  {
  const GALGAS_implementedDriverAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mDriverName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 216)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 217)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 217)) ;
  }
  cEnumerator_lstringlist enumerator_7566 (object->mProperty_mDriverDependanceList, kENUMERATION_UP) ;
  while (enumerator_7566.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, enumerator_7566.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 219)) ;
    }
    enumerator_7566.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                               extensionMethod_implementedDriverAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_implementedDriverAST_enterInPrecedenceGraph (defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@implementedDriverAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  result_outRepresentation = GALGAS_string ("driver ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 226)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                                           extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_implementedDriverAST_keyRepresentationForErrorSignaling (defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension getter '@implementedDriverAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_implementedDriverAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  result_outLocation = object->mProperty_mDriverName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_implementedDriverAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                                  extensionGetter_implementedDriverAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_implementedDriverAST_locationForErrorSignaling (defineExtensionGetter_implementedDriverAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'typeNameForTypeMapForDriver'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_typeNameForTypeMapForDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 240)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 240)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_typeNameForTypeMapForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_typeNameForTypeMapForDriver (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_typeNameForTypeMapForDriver (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_typeNameForTypeMapForDriver ("typeNameForTypeMapForDriver",
                                                                             functionWithGenericHeader_typeNameForTypeMapForDriver,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             1,
                                                                             functionArgs_typeNameForTypeMapForDriver) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'plmTypeSpecificNameForDriver'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_plmTypeSpecificNameForDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("Driver ").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 246)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 246)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_plmTypeSpecificNameForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_plmTypeSpecificNameForDriver (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_plmTypeSpecificNameForDriver (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_plmTypeSpecificNameForDriver ("plmTypeSpecificNameForDriver",
                                                                              functionWithGenericHeader_plmTypeSpecificNameForDriver,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_plmTypeSpecificNameForDriver) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'llvmDriverNameFromName'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmDriverNameFromName (const GALGAS_lstring & constinArgument_inDriverName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver$").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 252)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 252)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmDriverNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmDriverNameFromName (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmDriverNameFromName (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmDriverNameFromName ("llvmDriverNameFromName",
                                                                        functionWithGenericHeader_llvmDriverNameFromName,
                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                        1,
                                                                        functionArgs_llvmDriverNameFromName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Function 'llvmBootRoutineNameFromDriver'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmBootRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("boot.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 258)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 258)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmBootRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmBootRoutineNameFromDriver (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmBootRoutineNameFromDriver (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmBootRoutineNameFromDriver ("llvmBootRoutineNameFromDriver",
                                                                               functionWithGenericHeader_llvmBootRoutineNameFromDriver,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               1,
                                                                               functionArgs_llvmBootRoutineNameFromDriver) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'llvmStartupRoutineNameFromDriver'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmStartupRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("startup.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 264)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 264)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmStartupRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmStartupRoutineNameFromDriver (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmStartupRoutineNameFromDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmStartupRoutineNameFromDriver ("llvmStartupRoutineNameFromDriver",
                                                                                  functionWithGenericHeader_llvmStartupRoutineNameFromDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmStartupRoutineNameFromDriver) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'retainRequiredDrivers'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_retainRequiredDrivers (GALGAS_ast & ioArgument_ioAST,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist var_driverWithNoDependenceList_10833 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 289)) ;
  cEnumerator_driverDeclarationListAST enumerator_10893 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_10893.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_10893.current_mDriver (HERE).getter_mDriverDependanceList (HERE).getter_length (SOURCE_FILE ("declaration-driver.galgas", 291)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_driverWithNoDependenceList_10833.addAssign_operation (enumerator_10893.current_mDriver (HERE).getter_mDriverName (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 292)) ;
    }
    enumerator_10893.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_driverWithNoDependenceList_10833.getter_length (SOURCE_FILE ("declaration-driver.galgas", 295)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_lstringlist enumerator_11135 (var_driverWithNoDependenceList_10833, kENUMERATION_UP) ;
    while (enumerator_11135.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_11135.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-driver.galgas", 297)), GALGAS_string ("almost one driver can have no dependence"), fixItArray2  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297)) ;
      enumerator_11135.gotoNextObject () ;
    }
  }
  GALGAS_instanciedDriverMap var_instanciedDriverMap_11296 = GALGAS_instanciedDriverMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 301)) ;
  cEnumerator_driverInstanciationListAST enumerator_11357 (ioArgument_ioAST.getter_mRequiredDriverListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_11357.hasCurrentObject ()) {
    GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_11428 = GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 303)) ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_11472 (enumerator_11357.current_mDriverInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_11472.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_11428.setter_insertKey (enumerator_11472.current_mSelector (HERE), enumerator_11472.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 305)) ;
      }
      enumerator_11472.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_11296.setter_insertKey (enumerator_11357.current_mDriverName (HERE), var_driverInstanciationArgumentMap_11428, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 307)) ;
    }
    enumerator_11357.gotoNextObject () ;
  }
  GALGAS_stringset var_validDriverNames_11749 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 310)) ;
  cEnumerator_driverDeclarationListAST enumerator_11864 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_11864.hasCurrentObject ()) {
    var_validDriverNames_11749.addAssign_operation (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 312)) ;
    GALGAS_bool var_driverIsInstancied_11950 = var_instanciedDriverMap_11296.getter_hasKey (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 313)) ;
    GALGAS_structurePropertyListAST var_driverPropertyListAST_12113 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 315)) ;
    const enumGalgasBool test_3 = var_driverIsInstancied_11950.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_12247 ;
      var_instanciedDriverMap_11296.method_searchKey (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), var_driverInstanciationArgumentMap_12247, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 317)) ;
      GALGAS_stringset var_validArgumentSet_12342 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 319)) ;
      cEnumerator_driverPropertyListAST enumerator_12489 (enumerator_11864.current_mDriver (HERE).getter_mDriverPropertyListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_12489.hasCurrentObject ()) {
        GALGAS_expressionAST var_initExpression_12530 ;
        switch (enumerator_12489.current_mOptionalExpression (HERE).enumValue ()) {
        case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
          {
            var_driverInstanciationArgumentMap_12247.method_searchKey (enumerator_12489.current_mPropertyName (HERE), var_initExpression_12530, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 324)) ;
            var_validArgumentSet_12342.addAssign_operation (enumerator_12489.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 325)) ;
          }
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_12808 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_12489.current_mOptionalExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_expression = extractPtr_12808->mAssociatedValue0 ;
            var_initExpression_12530 = extractedValue_expression ;
          }
          break ;
        }
        var_driverPropertyListAST_12113.addAssign_operation (enumerator_12489.current_mPropertyName (HERE), enumerator_12489.current_mPropertyAttributeList (HERE), enumerator_12489.current_mIsConstant (HERE), GALGAS_bool (false), enumerator_12489.current_mTypeName (HERE), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_12530  COMMA_SOURCE_FILE ("declaration-driver.galgas", 335)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 329)) ;
        enumerator_12489.gotoNextObject () ;
      }
      cEnumerator_stringset enumerator_13239 (var_driverInstanciationArgumentMap_12247.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 339)).substract_operation (var_validArgumentSet_12342, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 339)), kENUMERATION_UP) ;
      while (enumerator_13239.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_12247.getter_locationForKey (enumerator_13239.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)), GALGAS_string ("invalid selector"), fixItArray4  COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)) ;
        enumerator_13239.gotoNextObject () ;
      }
    }
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (function_typeNameForTypeMapForDriver (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 345)), function_plmTypeSpecificNameForDriver (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 346)), function_llvmDriverNameFromName (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 347)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 348)), GALGAS_bool (false), var_driverPropertyListAST_12113, enumerator_11864.current_mDriver (HERE).getter_mDriverFunctionDeclarationListAST (HERE), enumerator_11864.current_mDriver (HERE).getter_mDriverSystemRoutineListAST (HERE), enumerator_11864.current_mDriver (HERE).getter_mDriverGuardListAST (HERE), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 344))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 344)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_implementedDriverAST::constructor_new (enumerator_11864.current_mDriver (HERE).getter_mDriverName (HERE), enumerator_11864.current_mDriver (HERE).getter_mDriverDependanceList (HERE), var_driverIsInstancied_11950, enumerator_11864.current_mDriver (HERE).getter_mBootLocation (HERE), enumerator_11864.current_mDriver (HERE).getter_mBootInstructionList (HERE), enumerator_11864.current_mDriver (HERE).getter_mBootEndLocation (HERE), enumerator_11864.current_mDriver (HERE).getter_mStartupLocation (HERE), enumerator_11864.current_mDriver (HERE).getter_mStartupInstructionList (HERE), enumerator_11864.current_mDriver (HERE).getter_mStartupEndLocation (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 356))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 356)) ;
    enumerator_11864.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST = GALGAS_driverDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 368)) ;
  cEnumerator_stringset enumerator_14479 (var_instanciedDriverMap_11296.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 370)).substract_operation (var_validDriverNames_11749, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 370)), kENUMERATION_UP) ;
  while (enumerator_14479.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_11296.getter_locationForKey (enumerator_14479.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 371)), GALGAS_string ("undefined driver"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 371)) ;
    enumerator_14479.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@implementedDriverAST enterInContext'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_implementedDriverAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                 GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                 GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  GALGAS_PLMType var_driverType_15784 ;
  GALGAS_uint joker_15790_2 ; // Joker input parameter
  GALGAS_bool joker_15790_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 392)), var_driverType_15784, joker_15790_2, joker_15790_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 391)) ;
  {
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mDriverName, object->mProperty_mIsInstancied, var_driverType_15784, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 396)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedRequiredDriver::constructor_new (object->mProperty_mDriverName  COMMA_SOURCE_FILE ("declaration-driver.galgas", 398))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 398)) ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 401)), GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-driver.galgas", 402)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 404)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 407)), function_llvmBootRoutineNameFromDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 408)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 409)), GALGAS_bool (true), object->mProperty_mBootInstructionList, object->mProperty_mBootEndLocation, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), object->mProperty_mBootLocation  COMMA_SOURCE_FILE ("declaration-driver.galgas", 413))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 400)) ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 416)), GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-driver.galgas", 417)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 419)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 422)), function_llvmStartupRoutineNameFromDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 423)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 424)), GALGAS_bool (true), object->mProperty_mStartupInstructionList, object->mProperty_mStartupEndLocation, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), object->mProperty_mStartupLocation  COMMA_SOURCE_FILE ("declaration-driver.galgas", 428))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 415)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_implementedDriverAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                       extensionMethod_implementedDriverAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_implementedDriverAST_enterInContext (defineExtensionMethod_implementedDriverAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@decoratedRequiredDriver semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedRequiredDriver_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedRequiredDriver * object = (const cPtr_decoratedRequiredDriver *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedRequiredDriver) ;
  GALGAS_PLMType var_driverType_17937 ;
  GALGAS_uint joker_17943_2 ; // Joker input parameter
  GALGAS_bool joker_17943_1 ; // Joker input parameter
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 447)), var_driverType_17937, joker_17943_2, joker_17943_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 446)) ;
  GALGAS_constructorMap var_constructorMap_17970 = var_driverType_17937.getter_constructorMap (HERE) ;
  GALGAS_constructorValue var_constructorValue_18087 ;
  GALGAS_constructorSignature joker_18064 ; // Joker input parameter
  var_constructorMap_17970.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), object->mProperty_mDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)), joker_18064, var_constructorValue_18087, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_18159 ;
  var_constructorValue_18087.method_structure (var_sortedOperandList_18159, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)) ;
  GALGAS_operandIRList var_initialValueList_18194 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 454)) ;
  cEnumerator_sortedOperandIRList enumerator_18243 (var_sortedOperandList_18159, kENUMERATION_UP) ;
  while (enumerator_18243.hasCurrentObject ()) {
    var_initialValueList_18194.addAssign_operation (enumerator_18243.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 456)) ;
    enumerator_18243.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (object->mProperty_mDriverName, var_driverType_17937, var_initialValueList_18194  COMMA_SOURCE_FILE ("declaration-driver.galgas", 458)) ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (object->mProperty_mDriverName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 463)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedRequiredDriver.mSlotID,
                                         extensionMethod_decoratedRequiredDriver_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedRequiredDriver_semanticAnalysis (defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Overriding extension method '@staticListAST enterExtension'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticListAST_enterExtension (const cPtr_abstractDeclarationAST * inObject,
                                                          GALGAS_extendStaticArrayDeclarationDictAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                          GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  const enumGalgasBool test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (object->mProperty_mStaticListName.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 170)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_staticListValueListAST var_elements_6454 ;
    {
    ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (object->mProperty_mStaticListName.getter_string (HERE), var_elements_6454, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 171)) ;
    }
    outArgument_outNewDeclaration = GALGAS_staticListAST::constructor_new (object->mProperty_mStaticListName, object->mProperty_mPropertyList, object->mProperty_mValueList.add_operation (var_elements_6454, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 175))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 172)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_staticListAST temp_1 = object ;
    outArgument_outNewDeclaration = temp_1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticListAST_enterExtension (void) {
  enterExtensionMethod_enterExtension (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterExtension) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticListAST_enterExtension (defineExtensionMethod_staticListAST_enterExtension, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@staticListAST enterInPrecedenceGraph'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticListAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  {
  const GALGAS_staticListAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 188)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_7222 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_7222.hasCurrentObject ()) {
    switch (enumerator_7222.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_7351 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_7222.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_7351->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, extractedValue_propertyTypeName COMMA_SOURCE_FILE ("declaration-static-list.galgas", 193)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7662 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_7222.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_7662->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_7662->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentListAST enumerator_7491 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_7491.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7491.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 196)) ;
          }
          enumerator_7491.gotoNextObject () ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, extractedValue_returnType COMMA_SOURCE_FILE ("declaration-static-list.galgas", 199)) ;
          }
        }
      }
      break ;
    }
    enumerator_7222.gotoNextObject () ;
  }
  cEnumerator_staticListValueListAST enumerator_7767 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_7767.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_7799 (enumerator_7767.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_7799.hasCurrentObject ()) {
      switch (enumerator_7799.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_7946 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7799.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7946->mAssociatedValue0 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), object->mProperty_mStaticListName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 208)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_8140 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7799.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_8140->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_8070 (extractedValue_formalArgs, kENUMERATION_UP) ;
          while (enumerator_8070.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_8070.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 211)) ;
            }
            enumerator_8070.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7799.gotoNextObject () ;
    }
    enumerator_7767.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticListAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                               extensionMethod_staticListAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticListAST_enterInPrecedenceGraph (defineExtensionMethod_staticListAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension getter '@staticListAST locationForErrorSignaling'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_staticListAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  result_result = object->mProperty_mStaticListName.getter_location (HERE) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticListAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                  extensionGetter_staticListAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticListAST_locationForErrorSignaling (defineExtensionGetter_staticListAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@staticListAST keyRepresentationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_staticListAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 227)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                           extensionGetter_staticListAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticListAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Function 'plmNameForStaticListType'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_plmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 237)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 237))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 237)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_plmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_plmNameForStaticListType (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_plmNameForStaticListType (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_plmNameForStaticListType ("plmNameForStaticListType",
                                                                          functionWithGenericHeader_plmNameForStaticListType,
                                                                          & kTypeDescriptor_GALGAS_lstring,
                                                                          1,
                                                                          functionArgs_plmNameForStaticListType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'llvmNameForStaticListType'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 243)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 243))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 243)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListType (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForStaticListType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListType ("llvmNameForStaticListType",
                                                                           functionWithGenericHeader_llvmNameForStaticListType,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           1,
                                                                           functionArgs_llvmNameForStaticListType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'plmNameForStaticListElementType'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_plmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 249)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 249))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 249)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_plmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_plmNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_plmNameForStaticListElementType (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_plmNameForStaticListElementType ("plmNameForStaticListElementType",
                                                                                 functionWithGenericHeader_plmNameForStaticListElementType,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_plmNameForStaticListElementType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'llvmNameForStaticListElementType'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 255)), constinArgument_inStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 255)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForStaticListElementType (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListElementType ("llvmNameForStaticListElementType",
                                                                                  functionWithGenericHeader_llvmNameForStaticListElementType,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmNameForStaticListElementType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Overriding extension method '@staticListAST enterInContext'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticListAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                          const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                          GALGAS_semanticContext & ioArgument_ioContext,
                                                          GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                          GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                          GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                          GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_routineMapCTXT var_routineMap_11588 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 288)) ;
  GALGAS_propertyList var_propertyList_11622 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 289)) ;
  GALGAS_propertyMap var_propertyMap_11654 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 290)) ;
  GALGAS_stringset var_propertyNameSet_11688 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 291)) ;
  GALGAS_lstring var_plmElementTypeName_11718 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_11869 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_plmElementTypeName_11718, var_elementTypeProxy_11869 COMMA_SOURCE_FILE ("declaration-static-list.galgas", 293)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_12008 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  GALGAS_uint index_11971 ((uint32_t) 0) ;
  while (enumerator_12008.hasCurrentObject ()) {
    switch (enumerator_12008.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_12572 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_12008.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_12572->mAssociatedValue0 ;
        GALGAS_PLMType var_propertyType_12115 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 298)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 298)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_11688.getter_hasKey (enumerator_12008.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 299)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 299)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_12008.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 300)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 300)) ;
        }else if (kBoolFalse == test_0) {
          var_propertyNameSet_11688.addAssign_operation (enumerator_12008.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 302))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 302)) ;
          var_propertyList_11622.addAssign_operation (enumerator_12008.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 303)), var_propertyType_12115  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 303)) ;
          {
          var_propertyMap_11654.setter_insertKey (enumerator_12008.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_indexed (var_propertyType_12115, index_11971  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 304)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_14377 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_12008.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_14377->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_14377->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_14377->mAssociatedValue2 ;
        GALGAS_lstring var_routineLLVMName_12723 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 313)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 313)), enumerator_12008.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 312)) ;
        GALGAS_routineTypedSignature var_signature_12960 ;
        {
        routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_12960, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 318)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 320)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 322)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_13009 = temp_2 ;
        GALGAS_PLMType var_propertyType_13223 = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 326)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 327)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 328)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 329)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 330)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 331)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 332)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_function (extractedValue_mode, var_signature_12960, var_returnTypeProxy_13009  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 334)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 325)) ;
        var_propertyList_11622.addAssign_operation (enumerator_12008.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 342)), var_propertyType_13223  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 342)) ;
        GALGAS_lstring var_routineMangledName_13759 = GALGAS_lstring::constructor_new (enumerator_12008.current_mPropertyName (HERE).getter_string (HERE).add_operation (extensionGetter_routineSignature (extractedValue_formalArgs, enumerator_12008.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 345)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 345)), enumerator_12008.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 346))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 344)) ;
        {
        GALGAS_routineLLVMNameDict temp_4 = GALGAS_routineLLVMNameDict::constructor_emptyDict (SOURCE_FILE ("declaration-static-list.galgas", 353)) ;
        temp_4.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 353)), var_routineLLVMName_12723.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 353)) ;
        var_routineMap_11588.setter_insertKey (var_routineMangledName_13759, GALGAS_bool (true), var_signature_12960, var_returnTypeProxy_13009, temp_4, GALGAS_bool (false), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 348)) ;
        }
        ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticListIndirectRoutineIR::constructor_new (var_routineLLVMName_12723, GALGAS_bool (true), GALGAS_bool (true), var_elementTypeProxy_11869, var_signature_12960, var_returnTypeProxy_13009, index_11971  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 358))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 358)) ;
      }
      break ;
    }
    enumerator_12008.gotoNextObject () ;
    index_11971.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 295)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_11622, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 369)) ;
  }
  GALGAS_PLMType var_elementType_14582 = GALGAS_PLMType::constructor_new (var_propertyMap_11654, var_routineMap_11588, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 374)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 375)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 376)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 377)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 378)), function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 379)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 379)), GALGAS_typeKind::constructor_structure (var_propertyList_11622  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 380)), function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 381)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 381))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 371)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmElementTypeName_11718, var_elementType_14582, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 386)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 383)) ;
  }
  GALGAS_stringlist var_stringValueList_15250 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 390)) ;
  cEnumerator_staticListValueListAST enumerator_15287 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_15287.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_propertyList_11622.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 392)).objectCompare (enumerator_15287.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 392)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 393)), var_propertyList_11622.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 394)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 394)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 394)).add_operation (enumerator_15287.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 395)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 394)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 395)), fixItArray6  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)) ;
    }else if (kBoolFalse == test_5) {
      GALGAS_string var_staticValue_15518 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementAST enumerator_15564 (enumerator_15287.current_mElement (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_15598 (var_propertyList_11622, kENUMERATION_UP) ;
      while (enumerator_15564.hasCurrentObject () && enumerator_15598.hasCurrentObject ()) {
        switch (enumerator_15564.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_16254 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_15564.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_exp = extractPtr_16254->mAssociatedValue0 ;
            const enumGalgasBool test_7 = enumerator_15598.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 401)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_15564.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 402)) ;
            }else if (kBoolFalse == test_7) {
              GALGAS_objectIR var_expressionResult_16098 ;
              {
              routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_exp, enumerator_15564.current_mEndOfExpression (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 409)), var_expressionResult_16098, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 404)) ;
              }
              var_staticValue_15518.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_15598.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 413)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 413)).add_operation (extensionGetter_llvmName (var_expressionResult_16098, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 413)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_18484 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_15564.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_functionName = extractPtr_18484->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_18484->mAssociatedValue1 ;
            const enumGalgasBool test_9 = enumerator_15598.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 416)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 416)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_15564.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray10  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 417)) ;
            }else if (kBoolFalse == test_9) {
              GALGAS_mode var_mode_16554 ;
              GALGAS_routineTypedSignature var_functionSignature_16601 ;
              GALGAS_unifiedTypeMap_2D_proxy var_functionReturnTypeProxy_16660 ;
              enumerator_15598.current_mType (HERE).getter_kind (HERE).method_function (var_mode_16554, var_functionSignature_16601, var_functionReturnTypeProxy_16660, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 419)) ;
              GALGAS_lstring var_argumentSignature_16708 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 424)) ;
              GALGAS_lstring var_functionMangledName_16790 = GALGAS_lstring::constructor_new (extractedValue_functionName.getter_string (HERE).add_operation (var_argumentSignature_16708.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 425))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)) ;
              GALGAS_bool var_candidateIsPublic_16986 ;
              GALGAS_routineTypedSignature var_candidateSignature_17024 ;
              GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnTypeProxy_17068 ;
              GALGAS_routineLLVMNameDict var_implementedModeDictionary_17141 ;
              GALGAS_bool var_implementedIsExported_17189 ;
              GALGAS_mode var_candidateMode_17229 ;
              ioArgument_ioContext.getter_mRoutineMap (HERE).method_searchKey (var_functionMangledName_16790, var_candidateIsPublic_16986, var_candidateSignature_17024, var_candidateReturnTypeProxy_17068, var_implementedModeDictionary_17141, var_implementedIsExported_17189, var_candidateMode_17229, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 426)) ;
              GALGAS_string var_routineLLVMName_17301 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_17141, var_mode_16554, extractedValue_functionName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 436)) ;
              GALGAS_bool test_11 = GALGAS_bool (kIsEqual, var_functionReturnTypeProxy_16660.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 437)))) ;
              if (kBoolTrue == test_11.boolEnum ()) {
                test_11 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_17068.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 437)))) ;
              }
              const enumGalgasBool test_12 = test_11.boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 438)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnTypeProxy_17068.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)), fixItArray13  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)) ;
              }else if (kBoolFalse == test_12) {
                GALGAS_bool test_14 = GALGAS_bool (kIsNotEqual, var_functionReturnTypeProxy_16660.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 439)))) ;
                if (kBoolTrue == test_14.boolEnum ()) {
                  test_14 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_17068.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 439)))) ;
                }
                const enumGalgasBool test_15 = test_14.boolEnum () ;
                if (kBoolTrue == test_15) {
                  TC_Array <C_FixItDescription> fixItArray16 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 440)), GALGAS_string ("this function should return no object"), fixItArray16  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 440)) ;
                }
              }
              const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_functionSignature_16601.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 442)).objectCompare (var_candidateSignature_17024.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 442)))).boolEnum () ;
              if (kBoolTrue == test_17) {
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 443)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_17024.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 444)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 444)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 444)).add_operation (var_functionSignature_16601.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 445)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 444)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), fixItArray18  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 443)) ;
              }else if (kBoolFalse == test_17) {
                cEnumerator_routineTypedSignature enumerator_18104 (var_functionSignature_16601, kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_18137 (var_candidateSignature_17024, kENUMERATION_UP) ;
                while (enumerator_18104.hasCurrentObject () && enumerator_18137.hasCurrentObject ()) {
                  const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_18104.current (HERE).getter_mTypeProxy (HERE).objectCompare (enumerator_18137.current (HERE).getter_mTypeProxy (HERE))).boolEnum () ;
                  if (kBoolTrue == test_19) {
                    TC_Array <C_FixItDescription> fixItArray20 ;
                    inCompiler->emitSemanticError (enumerator_18137.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 449)), GALGAS_string ("argument type should be $").add_operation (enumerator_18104.current (HERE).getter_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)), fixItArray20  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)) ;
                  }
                  enumerator_18104.gotoNextObject () ;
                  enumerator_18137.gotoNextObject () ;
                }
              }
              var_staticValue_15518.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_15598.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 453)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 453)).add_operation (var_routineLLVMName_17301.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 453)) ;
            }
          }
          break ;
        }
        if (enumerator_15564.hasNextObject () && enumerator_15598.hasNextObject ()) {
          var_staticValue_15518.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 457)) ;
        }
        enumerator_15564.gotoNextObject () ;
        enumerator_15598.gotoNextObject () ;
      }
      var_staticValue_15518.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 459)) ;
      var_stringValueList_15250.addAssign_operation (var_staticValue_15518  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)) ;
    }
    enumerator_15287.gotoNextObject () ;
  }
  {
  ioArgument_ioStaticListValueMap.setter_insertKey (object->mProperty_mStaticListName, var_stringValueList_15250, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)) ;
  }
  GALGAS_propertyMap var_listTypePropertyMap_18824 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 465)) ;
  {
  var_listTypePropertyMap_18824.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 469)), object->mProperty_mValueList.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 469)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 469))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 469))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 466)) ;
  }
  GALGAS_PLMType var_arrayType_19171 = GALGAS_PLMType::constructor_new (var_listTypePropertyMap_18824, GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 474)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 475)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 476)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 477)), GALGAS_subscript::constructor_staticSubscript (var_elementType_14582, var_stringValueList_15250.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 478)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 478))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 478)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 479)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("declaration-static-list.galgas", 479)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 479)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("declaration-static-list.galgas", 479)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 479)), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 480)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 480)), GALGAS_typeKind::constructor_arrayType (var_elementType_14582, var_stringValueList_15250.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 481)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 481))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 481)), function_llvmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 482)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 482))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 485)), var_arrayType_19171, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 487)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 484)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_staticListType_19965 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 491)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19965.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 494)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 494))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 492)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19965.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 498)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 498))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 496)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStaticList::constructor_new (object->mProperty_mStaticListName, object->mProperty_mValueList  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 501))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 501)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (extensionGetter_llvmTypeName (var_elementType_14582, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 504)), var_propertyList_11622  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 503))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 503)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (extensionGetter_llvmTypeName (var_arrayType_19171, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 508)), var_elementType_14582, var_stringValueList_15250.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 510)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 510))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 507))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 507)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticListAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticListAST_enterInContext (defineExtensionMethod_staticListAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@decoratedStaticList semanticAnalysis'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedStaticList_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedStaticList * object = (const cPtr_decoratedStaticList *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedStaticList) ;
  GALGAS_stringset var_invokedFunctionSet_22096 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 539)) ;
  cEnumerator_staticListValueListAST enumerator_22133 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_22133.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_22174 (enumerator_22133.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_22174.hasCurrentObject ()) {
      switch (enumerator_22174.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_22250 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_22174.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_22250->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_22551 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_22174.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_22551->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_22551->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_22400 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 546)) ;
          var_invokedFunctionSet_22096.addAssign_operation (var_routineMangledName_22400.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 551))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 551)) ;
        }
        break ;
      }
      enumerator_22174.gotoNextObject () ;
    }
    enumerator_22133.gotoNextObject () ;
  }
  {
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_22096, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 555)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_22096, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 556)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedStaticList_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedStaticList.mSlotID,
                                         extensionMethod_decoratedStaticList_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedStaticList_semanticAnalysis (defineExtensionMethod_decoratedStaticList_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@staticListIndirectRoutineIR enterAccessibleEntities'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticListIndirectRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * /* inObject */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInvokedRoutineSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticListIndirectRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_staticListIndirectRoutineIR.mSlotID,
                                                extensionMethod_staticListIndirectRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticListIndirectRoutineIR_enterAccessibleEntities (defineExtensionMethod_staticListIndirectRoutineIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@staticListIndirectRoutineIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListIndirectRoutineIR * object = (const cPtr_staticListIndirectRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticListIndirectRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (object->mProperty_mRoutineMangledName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 614)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 614)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 615)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 616)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)) ;
  GALGAS_string var_receiverLLVMTypeName_25415 = extensionGetter_llvmTypeName (object->mProperty_mStaticListElementType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 622)) ;
  GALGAS_bool var_first_25474 = GALGAS_bool (true) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_25415.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_25415.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)) ;
    var_first_25474 = GALGAS_bool (false) ;
  }
  cEnumerator_routineTypedSignature enumerator_25654 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_25654.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_first_25474.boolEnum () ;
    if (kBoolTrue == test_2) {
      var_first_25474 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)) ;
    }
    switch (enumerator_25654.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_25654.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)).add_operation (enumerator_25654.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_25654.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)).add_operation (enumerator_25654.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_25654.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 640)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 640)).add_operation (enumerator_25654.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 640)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 640)) ;
      }
      break ;
    }
    enumerator_25654.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 643)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 643)) ;
  GALGAS_string var_llvmFunctionTypeName_26309 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 646)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    var_llvmFunctionTypeName_26309 = GALGAS_string ("void") ;
  }else if (kBoolFalse == test_3) {
    var_llvmFunctionTypeName_26309 = extensionGetter_llvmTypeName (object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 649)) ;
  }
  var_llvmFunctionTypeName_26309.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 651)) ;
  var_first_25474 = GALGAS_bool (true) ;
  cEnumerator_routineTypedSignature enumerator_26548 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_26548.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_first_25474.boolEnum () ;
    if (kBoolTrue == test_4) {
      var_first_25474 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_4) {
      var_llvmFunctionTypeName_26309.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)) ;
    }
    switch (enumerator_26548.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_llvmFunctionTypeName_26309.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_26548.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 661)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 661)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        var_llvmFunctionTypeName_26309.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_26548.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 663)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 663)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        var_llvmFunctionTypeName_26309.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_26548.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)) ;
      }
      break ;
    }
    enumerator_26548.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_26309.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 668)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_25415, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 670)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 670)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_receiverLLVMTypeName_25415, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)).add_operation (GALGAS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)).add_operation (object->mProperty_mPropertyIndex.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_26309, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 672)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 672)).add_operation (var_llvmFunctionTypeName_26309, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 672)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 672)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 672)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 673)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 674)) ;
  }else if (kBoolFalse == test_5) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 676)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 676)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 678)) ;
  var_first_25474 = GALGAS_bool (true) ;
  cEnumerator_routineTypedSignature enumerator_27510 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_27510.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_first_25474.boolEnum () ;
    if (kBoolTrue == test_6) {
      var_first_25474 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_6) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 684)) ;
    }
    switch (enumerator_27510.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27510.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 688)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 688)).add_operation (enumerator_27510.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 688)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 688)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27510.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 690)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 690)).add_operation (enumerator_27510.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 690)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 690)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27510.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 692)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 692)).add_operation (enumerator_27510.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 692)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 692)) ;
      }
      break ;
    }
    enumerator_27510.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 695)) ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 697)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 698)) ;
  }else if (kBoolFalse == test_7) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 700)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 700)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 700)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 702)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_staticListIndirectRoutineIR.mSlotID,
                                           extensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticListIndirectRoutineIR_llvmCodeGeneration (defineExtensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@decoratedTaskListDeclaration semanticAnalysis'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedTaskListDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedTaskListDeclaration * object = (const cPtr_decoratedTaskListDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedTaskListDeclaration) ;
  cEnumerator_decoratedTaskList enumerator_16633 (object->mProperty_mTaskList, kENUMERATION_UP) ;
  GALGAS_uint index_16615 ((uint32_t) 0) ;
  while (enumerator_16633.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_16633.current (HERE), constinArgument_inContext, index_16615, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 444)) ;
    enumerator_16633.gotoNextObject () ;
    index_16615.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 443)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedTaskListDeclaration.mSlotID,
                                         extensionMethod_decoratedTaskListDeclaration_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedTaskListDeclaration_semanticAnalysis (defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'analyzeOrderedTaskRoutines'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeOrderedTaskRoutines (const GALGAS_taskSetupListAST constinArgument_inTaskRoutineLISTAST,
                                         GALGAS_stringlist & outArgument_outSetupOrderedList,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetupOrderedList.drop () ; // Release 'out' argument
  outArgument_outSetupOrderedList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 459)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 460)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_numberOfEntriesWithoutAnyPrecedence_17250 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_taskSetupListAST enumerator_17308 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
    while (enumerator_17308.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_17308.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 464)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_numberOfEntriesWithoutAnyPrecedence_17250.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_17250.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 465)) ;
      }
      enumerator_17308.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_numberOfEntriesWithoutAnyPrecedence_17250.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_taskSetupListAST enumerator_17556 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
      while (enumerator_17556.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_17556.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 470)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 470)) ;
        enumerator_17556.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_numberOfEntriesWithoutAnyPrecedence_17250.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_taskSetupListAST enumerator_17752 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
        while (enumerator_17752.hasCurrentObject ()) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_17752.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 474)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_17752.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 475)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 475)) ;
          }
          enumerator_17752.gotoNextObject () ;
        }
      }
    }
    GALGAS_taskSetupListAST var_taskSetupListAST_17984 = constinArgument_inTaskRoutineLISTAST ;
    GALGAS_stringset var_precedenceSet_18036 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 481)) ;
    GALGAS_bool var_continue_18058 = GALGAS_bool (true) ;
    if (constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 483)).isValid ()) {
      uint32_t variant_18074 = constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 483)).uintValue () ;
      bool loop_18074 = true ;
      while (loop_18074) {
        GALGAS_bool test_7 = var_continue_18058 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = GALGAS_bool (kIsStrictSup, var_taskSetupListAST_17984.getter_length (SOURCE_FILE ("task-declaration.galgas", 483)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        }
        loop_18074 = test_7.isValid () ;
        if (loop_18074) {
          loop_18074 = test_7.boolValue () ;
        }
        if (loop_18074 && (0 == variant_18074)) {
          loop_18074 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 483)) ;
        }
        if (loop_18074) {
          variant_18074 -- ;
          var_continue_18058 = GALGAS_bool (false) ;
          GALGAS_uint var_idx_18196 = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_taskSetupListAST enumerator_18285 (var_taskSetupListAST_17984, kENUMERATION_UP) ;
          while (enumerator_18285.hasCurrentObject ()) {
            GALGAS_bool var_allPrecedenceDefined_18321 = GALGAS_bool (true) ;
            cEnumerator_lstringlist enumerator_18375 (enumerator_18285.current_mDependanceList (HERE), kENUMERATION_UP) ;
            bool bool_8 = var_allPrecedenceDefined_18321.isValidAndTrue () ;
            if (enumerator_18375.hasCurrentObject () && bool_8) {
              while (enumerator_18375.hasCurrentObject () && bool_8) {
                var_allPrecedenceDefined_18321 = var_precedenceSet_18036.getter_hasKey (enumerator_18375.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 489)) ;
                enumerator_18375.gotoNextObject () ;
                if (enumerator_18375.hasCurrentObject ()) {
                  bool_8 = var_allPrecedenceDefined_18321.isValidAndTrue () ;
                }
              }
            }
            const enumGalgasBool test_9 = var_allPrecedenceDefined_18321.boolEnum () ;
            if (kBoolTrue == test_9) {
              outArgument_outSetupOrderedList.addAssign_operation (enumerator_18285.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 492)) ;
              var_precedenceSet_18036.addAssign_operation (enumerator_18285.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 493)) ;
              var_continue_18058 = GALGAS_bool (true) ;
              {
              GALGAS_lstring joker_18691_4 ; // Joker input parameter
              GALGAS_lstringlist joker_18691_3 ; // Joker input parameter
              GALGAS_instructionListAST joker_18691_2 ; // Joker input parameter
              GALGAS_location joker_18691_1 ; // Joker input parameter
              var_taskSetupListAST_17984.setter_removeAtIndex (joker_18691_4, joker_18691_3, joker_18691_2, joker_18691_1, var_idx_18196, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 495)) ;
              }
            }else if (kBoolFalse == test_9) {
              var_idx_18196 = var_idx_18196.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)) ;
            }
            enumerator_18285.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_taskSetupListAST enumerator_18844 (var_taskSetupListAST_17984, kENUMERATION_UP) ;
    while (enumerator_18844.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (enumerator_18844.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 503)), GALGAS_string ("this routine is out of execution order"), fixItArray10  COMMA_SOURCE_FILE ("task-declaration.galgas", 503)) ;
      enumerator_18844.gotoNextObject () ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@taskActivateFunctionIR llvmCodeGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_taskActivateFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_taskActivateFunctionIR * object = (const cPtr_taskActivateFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_taskActivateFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 735)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 735)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 735)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 735)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%").add_operation (object->mProperty_mAssemblerTaskName, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 736)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 736)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 736)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 736)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 736)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 736)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (object->mProperty_mActivateServiceInvocationName, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 737)).add_operation (GALGAS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 737)).add_operation (object->mProperty_mTaskIndex.getter_string (SOURCE_FILE ("task-declaration.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 737)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 737)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 737)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 738)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 739)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 740)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 740)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 741)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_taskActivateFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_taskActivateFunctionIR.mSlotID,
                                           extensionMethod_taskActivateFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_taskActivateFunctionIR_llvmCodeGeneration (defineExtensionMethod_taskActivateFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'systemUserMangledNameFromAST'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_systemUserMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                      const GALGAS_routineKind & constinArgument_inKind,
                                                      const GALGAS_lstring & constinArgument_inGuardName,
                                                      const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_5453 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_5453 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_5453 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_5453 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_5453 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_5453.plusAssign_operation(GALGAS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 188)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_5453.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 190)) ;
  }
  var_s_5453.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 192)) ;
  var_s_5453.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 193)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5853 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5853.hasCurrentObject ()) {
    var_s_5453.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5853.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 195)).add_operation (enumerator_5853.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 195)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 195)) ;
    enumerator_5853.gotoNextObject () ;
  }
  var_s_5453.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 197)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_5453, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 198)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_systemUserMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_systemUserMangledNameFromAST (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand3 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_systemUserMangledNameFromAST (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_systemUserMangledNameFromAST ("systemUserMangledNameFromAST",
                                                                              functionWithGenericHeader_systemUserMangledNameFromAST,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              4,
                                                                              functionArgs_systemUserMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Function 'systemImplementationMangledNameFromAST'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_systemImplementationMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                                const GALGAS_routineKind & constinArgument_inKind,
                                                                const GALGAS_lstring & constinArgument_inGuardName,
                                                                const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_6468 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_6468 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_6468 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_6468 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_6468 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_6468.plusAssign_operation(GALGAS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 219)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_6468.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 221)) ;
  }
  var_s_6468.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 223)) ;
  var_s_6468.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 224)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6878 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_6878.hasCurrentObject ()) {
    var_s_6468.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_6878.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 226)).add_operation (enumerator_6878.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 226)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 226)) ;
    enumerator_6878.gotoNextObject () ;
  }
  var_s_6468.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 228)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_6468, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 229)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_systemImplementationMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_systemImplementationMangledNameFromAST (C_Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand3 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_systemImplementationMangledNameFromAST (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_systemImplementationMangledNameFromAST ("systemImplementationMangledNameFromAST",
                                                                                        functionWithGenericHeader_systemImplementationMangledNameFromAST,
                                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                                        4,
                                                                                        functionArgs_systemImplementationMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'llvmFunctionPrototype'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmFunctionPrototype (const GALGAS_string & constinArgument_inReturnTypeLLVMName,
                                              const GALGAS_string & constinArgument_inFunctionName,
                                              const GALGAS_PLMType & constinArgument_inReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & constinArgument_inFormalArgumentListForGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inReturnTypeLLVMName ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)) ;
  GALGAS_bool var_first_12685 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 375)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)) ;
    var_first_12685 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_12862 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_12862.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_first_12685.boolEnum () ;
    if (kBoolTrue == test_1) {
      var_first_12685 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 383)) ;
    }
    switch (enumerator_12862.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_12862.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)).add_operation (enumerator_12862.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_12862.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)).add_operation (function_llvmNameForLocalVariable (enumerator_12862.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_12862.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)).add_operation (function_llvmNameForLocalVariable (enumerator_12862.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)) ;
      }
      break ;
    }
    enumerator_12862.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 394)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListIR,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmFunctionPrototype (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_PLMType operand2 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListIR operand3 = GALGAS_routineFormalArgumentListIR::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                         inCompiler
                                                                                                         COMMA_THERE) ;
  return function_llvmFunctionPrototype (operand0,
                                         operand1,
                                         operand2,
                                         operand3,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmFunctionPrototype ("llvmFunctionPrototype",
                                                                       functionWithGenericHeader_llvmFunctionPrototype,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       4,
                                                                       functionArgs_llvmFunctionPrototype) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'generateSectionDispatcher'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateSectionDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inTargetName,
                                        const GALGAS_targetParameters constinArgument_inTargetParameters,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS_sectionIRlist constinArgument_inSectionIRlist,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_sectionIRlist enumerator_13767 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_13740 ((uint32_t) 0) ;
  while (enumerator_13767.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_13767.current (HERE).getter_invocationFromAnyMode (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_13830 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 410)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromAnyMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 408)) ;
      var_s_13830 = var_s_13830.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_13767.current (HERE).getter_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
      var_s_13830 = var_s_13830.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_13767.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 413)) ;
      var_s_13830 = var_s_13830.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_13740.getter_string (SOURCE_FILE ("declaration-svc.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 414)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_13830, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_s_14310 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 419)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromUserMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 417)) ;
      var_s_14310 = var_s_14310.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_13767.current (HERE).getter_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 421)) ;
      var_s_14310 = var_s_14310.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_13767.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)) ;
      var_s_14310 = var_s_14310.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_13740.getter_string (SOURCE_FILE ("declaration-svc.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 423)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_14310, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 424)) ;
    }
    enumerator_13767.gotoNextObject () ;
    index_13740.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 406)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 429)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 427)) ;
  cEnumerator_sectionIRlist enumerator_15021 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_14945 ((uint32_t) 0) ;
  while (enumerator_15021.hasCurrentObject ()) {
    GALGAS_string var_s_15040 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 434)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 432)) ;
    var_s_15040 = var_s_15040.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15021.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 436)) ;
    var_s_15040 = var_s_15040.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15021.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 437)) ;
    var_s_15040 = var_s_15040.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_14945.getter_string (SOURCE_FILE ("declaration-svc.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 438)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15040, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 439)) ;
    enumerator_15021.gotoNextObject () ;
    index_14945.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 431)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 441)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 444)).add_operation (constinArgument_inTargetParameters.getter_mSectionHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 442)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 446)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Routine 'generatePrimitiveAndServiceDispatcher'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generatePrimitiveAndServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                                    const GALGAS_string constinArgument_inTargetName,
                                                    GALGAS_string & ioArgument_ioAssemblerCode,
                                                    const GALGAS_primitiveAndServiceIRlist constinArgument_inServiceList,
                                                    const GALGAS_targetParameters constinArgument_inTargetParameters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 462)).add_operation (constinArgument_inTargetParameters.getter_mServiceHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_16366 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_16341 ((uint32_t) 0) ;
  while (enumerator_16366.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_16366.current (HERE).getter_mHasReturnValue (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_16423 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 469)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryWithReturnValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 467)) ;
      var_s_16423 = var_s_16423.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_16366.current (HERE).getter_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
      var_s_16423 = var_s_16423.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_16341.getter_string (SOURCE_FILE ("declaration-svc.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 472)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16423, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_s_16768 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 477)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryNoReturnedValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
      var_s_16768 = var_s_16768.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_16366.current (HERE).getter_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 479)) ;
      var_s_16768 = var_s_16768.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_16341.getter_string (SOURCE_FILE ("declaration-svc.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 480)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16768, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)) ;
    }
    enumerator_16366.gotoNextObject () ;
    index_16341.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 465)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 486)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 484)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_17292 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_17267 ((uint32_t) 0) ;
  while (enumerator_17292.hasCurrentObject ()) {
    GALGAS_string var_s_17311 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 491)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 489)) ;
    var_s_17311 = var_s_17311.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_17292.current (HERE).getter_mImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 493)) ;
    var_s_17311 = var_s_17311.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_17267.getter_string (SOURCE_FILE ("declaration-svc.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 494)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_17311, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 495)) ;
    enumerator_17292.gotoNextObject () ;
    index_17267.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 488)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 497)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@systemUserRoutineIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_systemUserRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mMangledImplementationName  COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_systemUserRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                                extensionMethod_systemUserRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_systemUserRoutineIR_enterAccessibleEntities (defineExtensionMethod_systemUserRoutineIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@systemUserRoutineIR svcDeclarationGeneration'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_systemUserRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                          GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                          GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  GALGAS_string var_userMangledName_18868 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 528)) ;
  GALGAS_string var_implementationMangledName_18948 = object->mProperty_mMangledImplementationName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 529)) ;
  const enumGalgasBool test_0 = object->mProperty_mIsSection.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioSectionList.addAssign_operation (var_userMangledName_18868, var_implementationMangledName_18948, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 531)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_18868, var_implementationMangledName_18948, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 533)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_systemUserRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                                 extensionMethod_systemUserRoutineIR_svcDeclarationGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_systemUserRoutineIR_svcDeclarationGeneration (defineExtensionMethod_systemUserRoutineIR_svcDeclarationGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@systemUserRoutineIR llvmCodeGeneration'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_systemUserRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (object->mProperty_mRoutineMangledName.getter_string (SOURCE_FILE ("declaration-svc.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 544)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 545)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 546)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 547)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 549)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 551)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 551)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 551)) ;
  GALGAS_bool var_first_19822 = GALGAS_bool (true) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 553)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mProperty_mReceiverTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 554)).add_operation (GALGAS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 554)) ;
    var_first_19822 = GALGAS_bool (false) ;
  }
  cEnumerator_routineTypedSignature enumerator_19998 (object->mProperty_mFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_19998.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_first_19822.boolEnum () ;
    if (kBoolTrue == test_2) {
      var_first_19822 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 561)) ;
    }
    switch (enumerator_19998.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19998.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 565)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19998.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 567)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 567)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19998.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 569)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 569)) ;
      }
      break ;
    }
    enumerator_19998.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_systemUserRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                           extensionMethod_systemUserRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_systemUserRoutineIR_llvmCodeGeneration (defineExtensionMethod_systemUserRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredFunctionDeclarationListAST enumerator_2521 (constinArgument_inAST.getter_mRequiredFunctionListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2521.hasCurrentObject ()) {
    GALGAS_lstring var_requiredFunctionSignature_2558 = extensionGetter_routineSignature (enumerator_2521.current (HERE).getter_mFormalArgumentList (HERE), enumerator_2521.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 70)) ;
    GALGAS_string var_requiredFunctionMangledName_2676 = enumerator_2521.current (HERE).getter_mName (HERE).getter_string (HERE).add_operation (var_requiredFunctionSignature_2558.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 71)) ;
    const enumGalgasBool test_0 = constinArgument_inContext.getter_mRoutineMap (HERE).getter_hasKey (var_requiredFunctionMangledName_2676 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 72)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2521.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 73)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 73)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_bool var_implementedPublic_3010 ;
      GALGAS_routineTypedSignature var_implementedSignature_3044 ;
      GALGAS_unifiedTypeMap_2D_proxy var_implementedReturnTypeProxy_3084 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_3158 ;
      GALGAS_bool var_implementedIsExported_3193 ;
      GALGAS_mode var_implementedMode_3222 ;
      constinArgument_inContext.getter_mRoutineMap (HERE).method_searchKey (var_requiredFunctionMangledName_2676.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 76)), var_implementedPublic_3010, var_implementedSignature_3044, var_implementedReturnTypeProxy_3084, var_implementedModeDictionary_3158, var_implementedIsExported_3193, var_implementedMode_3222, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GALGAS_location var_errorLocation_3254 = constinArgument_inContext.getter_mRoutineMap (HERE).getter_locationForKey (var_requiredFunctionMangledName_2676, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
      GALGAS_routineTypedSignature var_requiredTypedSignature_3466 ;
      {
      routine_routineTypedSignature_32_ (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_2521.current (HERE).getter_mFormalArgumentList (HERE), var_requiredTypedSignature_3466, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 86)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_typedString (var_requiredTypedSignature_3466, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 87)).objectCompare (extensionGetter_typedString (var_implementedSignature_3044, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 87)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_errorLocation_3254, GALGAS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3466, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 89)).add_operation (GALGAS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 89)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)) ;
      }
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_implementedReturnTypeProxy_3084.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-required-proc.galgas", 92)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_errorLocation_3254, GALGAS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 93)) ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_implementedMode_3222.objectCompare (enumerator_2521.current (HERE).getter_mExecutionMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_errorLocation_3254, GALGAS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2521.current (HERE).getter_mExecutionMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)) ;
      }
      const enumGalgasBool test_8 = var_implementedPublic_3010.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 108)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_errorLocation_3254, GALGAS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)) ;
      }
      GALGAS_bool test_10 = enumerator_2521.current (HERE).getter_mIsExported (HERE) ;
      if (kBoolTrue == test_10.boolEnum ()) {
        test_10 = var_implementedIsExported_3193.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 112)) ;
      }
      const enumGalgasBool test_11 = test_10.boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        appendFixItActions (fixItArray12, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 115))) ;
        inCompiler->emitSemanticError (var_errorLocation_3254, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 114)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 114)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 113)) ;
      }else if (kBoolFalse == test_11) {
        GALGAS_bool test_13 = var_implementedIsExported_3193 ;
        if (kBoolTrue == test_13.boolEnum ()) {
          test_13 = enumerator_2521.current (HERE).getter_mIsExported (HERE).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 116)) ;
        }
        const enumGalgasBool test_14 = test_13.boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (var_errorLocation_3254, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 118)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 118)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 117)) ;
        }
      }
    }
    enumerator_2521.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@externRoutineIR llvmCodeGeneration'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_externRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineIR * object = (const cPtr_externRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (object->mProperty_mRoutineMangledName.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 175)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 176)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 177)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 178)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 180)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 182)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 182)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_7119 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7119.hasCurrentObject ()) {
    switch (enumerator_7119.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7119.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)).add_operation (enumerator_7119.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7119.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)).add_operation (function_llvmNameForLocalVariable (enumerator_7119.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_7119.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)).add_operation (function_llvmNameForLocalVariable (enumerator_7119.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)) ;
      }
      break ;
    }
    if (enumerator_7119.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 194)) ;
    }
    enumerator_7119.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)).add_operation (GALGAS_string ("; declared by extern PLM function declaration\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_externRoutineIR.mSlotID,
                                           extensionMethod_externRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externRoutineIR_llvmCodeGeneration (defineExtensionMethod_externRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@decoratedISRDeclarations semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedISRDeclarations_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedISRDeclarations * object = (const cPtr_decoratedISRDeclarations *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedISRDeclarations) ;
  cEnumerator_isrDeclarationListAST enumerator_3886 (object->mProperty_mISRDeclarationList, kENUMERATION_UP) ;
  while (enumerator_3886.hasCurrentObject ()) {
    GALGAS_PLMType var_selfType_4012 ;
    GALGAS_uint joker_4014_2 ; // Joker input parameter
    GALGAS_bool joker_4014_1 ; // Joker input parameter
    constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (enumerator_3886.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), var_selfType_4012, joker_4014_2, joker_4014_1, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)) ;
    GALGAS_interruptionPanicCode joker_4104 ; // Joker input parameter
    constinArgument_inContext.getter_mAvailableInterruptMap (HERE).method_searchKey (enumerator_3886.current (HERE).getter_mISRName (HERE), joker_4104, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 98)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (enumerator_3886.current (HERE).getter_mISRName (HERE), var_selfType_4012, enumerator_3886.current (HERE).getter_mDriverName (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 102)), enumerator_3886.current (HERE).getter_mMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 99)) ;
    }
    enumerator_3886.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedISRDeclarations_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedISRDeclarations.mSlotID,
                                         extensionMethod_decoratedISRDeclarations_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedISRDeclarations_semanticAnalysis (defineExtensionMethod_decoratedISRDeclarations_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'guardUserLLVMName'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_guardUserLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                           const GALGAS_lstring & constinArgument_inGuardName,
                                           const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_3629 = GALGAS_string ("guard.user.") ;
  var_s_3629.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)) ;
  var_s_3629.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 95)) ;
  var_s_3629.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 96)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_3814 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_3814.hasCurrentObject ()) {
    var_s_3629.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3814.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 98)).add_operation (enumerator_3814.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 98)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 98)) ;
    enumerator_3814.gotoNextObject () ;
  }
  var_s_3629.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 100)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_3629, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 101)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_guardUserLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_guardUserLLVMName (C_Compiler * inCompiler,
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
  return function_guardUserLLVMName (operand0,
                                     operand1,
                                     operand2,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_guardUserLLVMName ("guardUserLLVMName",
                                                                   functionWithGenericHeader_guardUserLLVMName,
                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                   3,
                                                                   functionArgs_guardUserLLVMName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'guardImplementationLLVMName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_guardImplementationLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                     const GALGAS_lstring & constinArgument_inGuardName,
                                                     const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_4347 = GALGAS_string ("guard.implementation.") ;
  var_s_4347.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 111)) ;
  var_s_4347.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 112)) ;
  var_s_4347.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 113)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_4542 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4542.hasCurrentObject ()) {
    var_s_4347.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4542.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 115)).add_operation (enumerator_4542.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 115)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 115)) ;
    enumerator_4542.gotoNextObject () ;
  }
  var_s_4347.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 117)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_4347, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 118)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_guardImplementationLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_guardImplementationLLVMName (C_Compiler * inCompiler,
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
  return function_guardImplementationLLVMName (operand0,
                                               operand1,
                                               operand2,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_guardImplementationLLVMName ("guardImplementationLLVMName",
                                                                             functionWithGenericHeader_guardImplementationLLVMName,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             3,
                                                                             functionArgs_guardImplementationLLVMName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@decoratedGuardDeclaration semanticAnalysis'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedGuardDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                        GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedGuardDeclaration * object = (const cPtr_decoratedGuardDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedGuardDeclaration) ;
  GALGAS_PLMType var_receiverType_8041 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mReceiverTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 205)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 205)) ;
  GALGAS_bool var_warnIfUnused_8156 = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_8204 (object->mProperty_mGuardAttributeList, kENUMERATION_UP) ;
  while (enumerator_8204.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_8204.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 209)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_warnIfUnused_8156.operator_not (SOURCE_FILE ("declaration-guard.galgas", 210)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_8204.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 211)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)), fixItArray2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)) ;
      }
      var_warnIfUnused_8156 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_8204.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 215)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 215)), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 215)) ;
    }
    enumerator_8204.gotoNextObject () ;
  }
  GALGAS_universalValuedObjectMap var_universalMap_8584 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_8584, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 220)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_8584, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 221)) ;
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_8736 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 222)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_8795 ;
  GALGAS_allocaList var_allocaList_8820 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 224)) ;
  GALGAS_instructionListIR var_instructionGenerationList_8872 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 225)) ;
  switch (object->mProperty_mGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_8974 = GALGAS_lstring::constructor_new (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 229)), object->mProperty_mGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 229)) ;
      GALGAS_PLMType var_resultType_9124 ;
      GALGAS_uint joker_9126_2 ; // Joker input parameter
      GALGAS_bool joker_9126_1 ; // Joker input parameter
      constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 230)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 230)), var_resultType_9124, joker_9126_2, joker_9126_1, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 230)) ;
      var_allocaList_8820.addAssign_operation (function_llvmNameForLocalVariable (var_resultVarName_8974.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 231)), var_resultType_9124, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 231)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_8584, var_resultVarName_8974, var_resultType_9124, var_resultVarName_8974, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 236)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 232)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, object->mProperty_mGuardFormalArgumentList, var_universalMap_8584, var_formalArguments_8736, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 240)) ;
      }
      var_convenienceGuardGenerationIR_8795 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 247)) ;
      extensionMethod_analyzeRoutineInstructionList (object->mProperty_mGuardInstructionList, var_receiverType_8041, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 251)), constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 253)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_8584, var_allocaList_8820, var_instructionGenerationList_8872, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 249)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_11142 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (object->mProperty_mGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_11142->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, object->mProperty_mGuardFormalArgumentList, var_universalMap_8584, var_formalArguments_8736, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), var_receiverType_8041, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 272)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 274)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_8584, var_convenienceGuardGenerationIR_8795, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 270)) ;
      extensionMethod_analyzeRoutineInstructionList (object->mProperty_mGuardInstructionList, var_receiverType_8041, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 283)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 285)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_8584, var_allocaList_8820, var_instructionGenerationList_8872, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 281)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_8584, var_instructionGenerationList_8872, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 294)) ;
  {
  extensionSetter_closeBranch (var_universalMap_8584, object->mProperty_mEndOfGuardDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 295)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_8584, object->mProperty_mEndOfGuardDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 296)) ;
  }
  GALGAS_lstring var_guardUserLLVMName_11407 = function_guardUserLLVMName (var_receiverType_8041.getter_llvmBaseTypeName (HERE), object->mProperty_mGuardName, object->mProperty_mGuardFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 298)) ;
  GALGAS_lstring var_guardImplementationLLVMName_11548 = function_guardImplementationLLVMName (var_receiverType_8041.getter_llvmBaseTypeName (HERE), object->mProperty_mGuardName, object->mProperty_mGuardFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 303)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardUserRoutineIR::constructor_new (var_guardUserLLVMName_11407, GALGAS_bool (false), var_warnIfUnused_8156, var_guardImplementationLLVMName_11548.getter_string (SOURCE_FILE ("declaration-guard.galgas", 313)), var_formalArguments_8736, var_receiverType_8041, var_convenienceGuardGenerationIR_8795  COMMA_SOURCE_FILE ("declaration-guard.galgas", 309))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 309)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardImplementationRoutineIR::constructor_new (var_guardImplementationLLVMName_11548, GALGAS_bool (false), var_warnIfUnused_8156, var_formalArguments_8736, var_receiverType_8041, var_convenienceGuardGenerationIR_8795, var_allocaList_8820, var_instructionGenerationList_8872  COMMA_SOURCE_FILE ("declaration-guard.galgas", 318))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 318)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedGuardDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedGuardDeclaration.mSlotID,
                                         extensionMethod_decoratedGuardDeclaration_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedGuardDeclaration_semanticAnalysis (defineExtensionMethod_decoratedGuardDeclaration_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                                    const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                                    const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                    const GALGAS_mode /* constinArgument_inMode */,
                                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                                    GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                                    GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mSandAloneRoutineName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 356)), GALGAS_string ("NOT HANDLED YET"), fixItArray0  COMMA_SOURCE_FILE ("declaration-guard.galgas", 356)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                         extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@procedureCallInstructionAST baseGuardAnalyze'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_procedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                          GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_14404 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 371)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_14465 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 372)) ;
  GALGAS_objectIR var_currentObject_14596 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 376)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("declaration-guard.galgas", 377)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 377)) ;
      var_currentObject_14596.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_currentObject_14596 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 379))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 379)) ;
    }
  }else if (kBoolFalse == test_0) {
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, object->mProperty_mIdentifier, constinArgument_inMode, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObject_14596, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 382)) ;
  }
  GALGAS_location var_currentErrorLocation_15049 = object->mProperty_mIdentifier.getter_location (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_15115 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_15169 ;
  {
  var_accessList_15115.setter_popLast (var_lastAccess_15169, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 392)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_15225 (var_accessList_15115, kENUMERATION_UP) ;
  while (enumerator_15225.hasCurrentObject ()) {
    GALGAS_PLMType var_currentType_15248 = extensionGetter_type (var_currentObject_14596, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 395)) ;
    switch (enumerator_15225.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_16137 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_15225.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_16137->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_15368 = var_currentType_15248.getter_propertyMap (HERE) ;
        GALGAS_propertyAccessKind var_propertyAccess_15460 ;
        GALGAS_bool joker_15439 ; // Joker input parameter
        var_propertyMap_15368.method_searchKey (extractedValue_propertyName, joker_15439, var_propertyAccess_15460, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 399)) ;
        switch (var_propertyAccess_15460.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 402)), GALGAS_string ("a constant property not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 402)) ;
            var_currentObject_14596.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_singleton:
          {
            const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_15685 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_15460.unsafePointer ()) ;
            const GALGAS_objectIR extractedValue_object = extractPtr_15685->mAssociatedValue0 ;
            var_currentObject_14596 = extractedValue_object ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_16127 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_15460.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_16127->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_16127->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_15813 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_15813, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 406)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_14465, var_currentType_15248, extensionGetter_llvmName (var_currentObject_14596, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 409)), var_property_5F_llvmName_15813, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 407)) ;
            }
            var_currentObject_14596 = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_15813  COMMA_SOURCE_FILE ("declaration-guard.galgas", 414)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_16246 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_15225.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_16246->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 417)) ;
        var_currentObject_14596.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_15225.gotoNextObject () ;
  }
  switch (var_lastAccess_15169.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17763 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_15169.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_17763->mAssociatedValue0 ;
      GALGAS_PLMType var_currentType_16364 = extensionGetter_type (var_currentObject_14596, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 423)) ;
      GALGAS_lstring var_guardMangledName_16512 = extensionGetter_mangledName (object->mProperty_mArguments, extractedValue_methodName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 425)) ;
      GALGAS_routineTypedSignature var_formalSignature_16629 ;
      GALGAS_lstring var_guardRoutineImplentationLLVMName_16670 ;
      GALGAS_bool joker_16607 ; // Joker input parameter
      GALGAS_lstring joker_16631 ; // Joker input parameter
      var_currentType_16364.getter_guardMap (HERE).method_searchKey (var_guardMangledName_16512, joker_16607, var_formalSignature_16629, joker_16631, var_guardRoutineImplentationLLVMName_16670, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 426)) ;
      GALGAS_procCallEffectiveParameterListIR temp_5 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 430)) ;
      temp_5.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 429)), GALGAS_objectIR::constructor_reference (var_currentType_16364, extensionGetter_llvmName (var_currentObject_14596, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 430))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 430))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 430)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_16773 = temp_5 ;
      {
      routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_16629, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_14404, var_baseGuardInstructionGenerationList_14465, var_effectiveParameterListIR_16773, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
      }
      outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_14404, var_baseGuardInstructionGenerationList_14465, var_guardRoutineImplentationLLVMName_16670.getter_string (HERE), var_effectiveParameterListIR_16773  COMMA_SOURCE_FILE ("declaration-guard.galgas", 449)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_17905 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_15169.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_17905->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray6  COMMA_SOURCE_FILE ("declaration-guard.galgas", 456)) ;
      outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_procedureCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                         extensionMethod_procedureCallInstructionAST_baseGuardAnalyze) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_procedureCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_procedureCallInstructionAST_baseGuardAnalyze, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@guardUserRoutineIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardUserRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardUserRoutineIR * object = (const cPtr_guardUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardUserRoutineIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mMangledImplementationGuardName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 487)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardUserRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_guardUserRoutineIR.mSlotID,
                                                extensionMethod_guardUserRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardUserRoutineIR_enterAccessibleEntities (defineExtensionMethod_guardUserRoutineIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@guardUserRoutineIR svcDeclarationGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardUserRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                         GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardUserRoutineIR * object = (const cPtr_guardUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardUserRoutineIR) ;
  GALGAS_string var_userMangledName_19632 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 497)) ;
  GALGAS_string var_implementationMangledName_19712 = object->mProperty_mMangledImplementationGuardName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 498)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_19632, var_implementationMangledName_19712, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 501)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_19632, var_implementationMangledName_19712, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 503)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardUserRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_guardUserRoutineIR.mSlotID,
                                                 extensionMethod_guardUserRoutineIR_svcDeclarationGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardUserRoutineIR_svcDeclarationGeneration (defineExtensionMethod_guardUserRoutineIR_svcDeclarationGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@guardUserRoutineIR llvmCodeGeneration'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardUserRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                   GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardUserRoutineIR * object = (const cPtr_guardUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardUserRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (object->mProperty_mRoutineMangledName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 517)) ;
  GALGAS_string var_prototype_20437 = function_llvmFunctionPrototype (GALGAS_string ("i1"), object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 520)), object->mProperty_mReceiverType, object->mProperty_mFormalArgumentListForGeneration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 518)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_20437, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 524)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 524)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardUserRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_guardUserRoutineIR.mSlotID,
                                           extensionMethod_guardUserRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardUserRoutineIR_llvmCodeGeneration (defineExtensionMethod_guardUserRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@guardImplementationRoutineIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardImplementationRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardImplementationRoutineIR * object = (const cPtr_guardImplementationRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardImplementationRoutineIR) ;
  GALGAS_string var_guardRoutineName_21360 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 544)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_guardRoutineName_21360, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 545)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_21360, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 546)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 547)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = extensionGetter_llvmTypeName (object->mProperty_mReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 550)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_21544 = temp_0 ;
  GALGAS_bool var_first_21647 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_21544.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_21544.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 554)) ;
    var_first_21647 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_21827 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21827.hasCurrentObject ()) {
    const enumGalgasBool test_3 = var_first_21647.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_first_21647 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 561)) ;
    }
    switch (enumerator_21827.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21827.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (enumerator_21827.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21827.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)).add_operation (function_llvmNameForLocalVariable (enumerator_21827.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21827.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)).add_operation (function_llvmNameForLocalVariable (enumerator_21827.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 569)) ;
      }
      break ;
    }
    enumerator_21827.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 572)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 572)) ;
  GALGAS_allocaList var_allocaList_22426 = object->mProperty_mAllocaList ;
  cEnumerator_routineFormalArgumentListIR enumerator_22522 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22522.hasCurrentObject ()) {
    switch (enumerator_22522.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_22426.addAssign_operation (function_llvmNameForLocalVariable (enumerator_22522.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)), enumerator_22522.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 579)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22522.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_22426, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 584)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_22842 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22842.hasCurrentObject ()) {
    switch (enumerator_22842.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_22912 = extensionGetter_llvmTypeName (enumerator_22842.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_22912, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)).add_operation (enumerator_22842.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)).add_operation (var_llvmType_22912, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)).add_operation (function_llvmNameForLocalVariable (enumerator_22842.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 591)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22842.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_23216 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 596)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_23302 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 597)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      GALGAS_string var_accepted_5F_label_23482 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)).add_operation (GALGAS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)) ;
      GALGAS_string var_rejected_5F_label_23552 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)).add_operation (GALGAS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)) ;
      extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_23302, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (var_accepted_5F_llvmName_23216, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_23302, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (var_accepted_5F_label_23482, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (var_rejected_5F_label_23552, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_label_23482.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_rejected_5F_label_23552.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 610)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_25504 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (object->mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_baseGuardAllocaList = extractPtr_25504->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_25504->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_25504->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_baseGuardEffectiveParameterList = extractPtr_25504->mAssociatedValue3 ;
      extensionMethod_generateAllocaList (extractedValue_baseGuardAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 613)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_baseGuardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 615)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 616)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_24654 (extractedValue_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_24654.hasCurrentObject ()) {
        switch (enumerator_24654.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24654.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)).add_operation (extensionGetter_llvmName (enumerator_24654.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24654.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)).add_operation (extensionGetter_llvmName (enumerator_24654.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24654.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 624)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 624)).add_operation (extensionGetter_llvmName (enumerator_24654.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 624)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 624)) ;
          }
          break ;
        }
        if (enumerator_24654.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 627)) ;
        }
        enumerator_24654.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)) ;
      extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 632)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 633)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 634)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 638)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 639)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardImplementationRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_guardImplementationRoutineIR.mSlotID,
                                           extensionMethod_guardImplementationRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardImplementationRoutineIR_llvmCodeGeneration (defineExtensionMethod_guardImplementationRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@guardImplementationRoutineIR enterAccessibleEntities'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_guardImplementationRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                  GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardImplementationRoutineIR * object = (const cPtr_guardImplementationRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardImplementationRoutineIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_26375 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (object->mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_26375->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardImplementationMangledName = extractPtr_26375->mAssociatedValue2 ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_baseGuardImplementationMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 652)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 653)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_guardImplementationRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_guardImplementationRoutineIR.mSlotID,
                                                extensionMethod_guardImplementationRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_guardImplementationRoutineIR_enterAccessibleEntities (defineExtensionMethod_guardImplementationRoutineIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'routineTypedSignature'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_routineTypedSignature (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                    const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                    GALGAS_routineTypedSignature & outArgument_outSignature,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 148)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5790 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5790.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5881 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5790.current_mFormalArgumentTypeName (HERE), var_typeProxy_5881 COMMA_SOURCE_FILE ("formal-arguments.galgas", 150)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_5790.current_mFormalArgumentPassingMode (HERE), enumerator_5790.current_mSelector (HERE), var_typeProxy_5881, enumerator_5790.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 151)) ;
    enumerator_5790.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'routineTypedSignature2'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_routineTypedSignature_32_ (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                        const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                        GALGAS_routineTypedSignature & outArgument_outSignature,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 161)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6436 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_6436.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_6457 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (inArgument_inTypeMap, enumerator_6436.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 163)) ;
    outArgument_outSignature.addAssign_operation (enumerator_6436.current_mFormalArgumentPassingMode (HERE), enumerator_6436.current_mSelector (HERE), var_typeProxy_6457, enumerator_6436.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 164)) ;
    enumerator_6436.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'enterFormalArguments'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterFormalArguments (const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentsAST,
                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListIR & ioArgument_ioFormalArguments,
                                   const GALGAS_bool constinArgument_inUnusedWarning,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentListAST enumerator_9041 (constinArgument_inFormalArgumentsAST, kENUMERATION_UP) ;
  while (enumerator_9041.hasCurrentObject ()) {
    GALGAS_PLMType var_typeProxy_9062 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_9041.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 222)).getter_type (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 222)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_9041.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9062, enumerator_9041.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 223)) ;
    switch (enumerator_9041.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        const enumGalgasBool test_0 = constinArgument_inUnusedWarning.boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9041.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9062, enumerator_9041.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 227)) ;
          }
        }else if (kBoolFalse == test_0) {
          {
          extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9041.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9062, enumerator_9041.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 229)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        const enumGalgasBool test_1 = constinArgument_inUnusedWarning.boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9041.current_mFormalArgumentName (HERE), var_typeProxy_9062, enumerator_9041.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas", 233)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 233)) ;
          }
        }else if (kBoolFalse == test_1) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9041.current_mFormalArgumentName (HERE), var_typeProxy_9062, enumerator_9041.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("formal-arguments.galgas", 235)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 235)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9041.current_mFormalArgumentName (HERE), var_typeProxy_9062, enumerator_9041.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("formal-arguments.galgas", 238)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 238)) ;
        }
      }
      break ;
    }
    enumerator_9041.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@regularRoutineIR enterAccessibleEntities'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_regularRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                      GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_regularRoutineIR * object = (const cPtr_regularRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_regularRoutineIR) ;
  cEnumerator_instructionListIR enumerator_5894 (object->mProperty_mInstructionGenerationList, kENUMERATION_UP) ;
  while (enumerator_5894.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_5894.current (HERE).getter_mInstructionGeneration (HERE).ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 154)) ;
    enumerator_5894.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_regularRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_regularRoutineIR.mSlotID,
                                                extensionMethod_regularRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_regularRoutineIR_enterAccessibleEntities (defineExtensionMethod_regularRoutineIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@regularRoutineIR llvmCodeGeneration'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_regularRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_regularRoutineIR * object = (const cPtr_regularRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_regularRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (object->mProperty_mRoutineMangledName.getter_string (SOURCE_FILE ("regular-routine-analysis.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 169)) ;
  const enumGalgasBool test_0 = object->mProperty_mExportedFunction.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 170)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 171)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 174)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 174)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 175)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmTypeName (object->mProperty_mReceiverType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 177)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_6625 = temp_1 ;
  GALGAS_bool var_first_6726 = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_6625.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_6625.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 181)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 181)) ;
    var_first_6726 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_6906 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_6906.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_first_6726.boolEnum () ;
    if (kBoolTrue == test_4) {
      var_first_6726 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 188)) ;
    }
    switch (enumerator_6906.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_6906.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 192)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 192)).add_operation (enumerator_6906.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 192)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_6906.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 194)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 194)).add_operation (function_llvmNameForLocalVariable (enumerator_6906.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 194)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_6906.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 196)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 196)).add_operation (function_llvmNameForLocalVariable (enumerator_6906.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 196)) ;
      }
      break ;
    }
    enumerator_6906.gotoNextObject () ;
  }
  GALGAS_bool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 199)) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = object->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = var_first_6726.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 201)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 203)).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 203)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 205)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 205)) ;
  GALGAS_allocaList var_allocaList_7763 = object->mProperty_mAllocaList ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 208)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    var_allocaList_7763.addAssign_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 209)), object->mProperty_mReturnType, GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 209)) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_7998 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7998.hasCurrentObject ()) {
    switch (enumerator_7998.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_7763.addAssign_operation (function_llvmNameForLocalVariable (enumerator_7998.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 215)), enumerator_7998.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 215)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_7998.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_7763, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 219)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_8408 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8408.hasCurrentObject ()) {
    switch (enumerator_8408.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Input argument '").add_operation (enumerator_8408.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
        GALGAS_string var_llvmType_8558 = extensionGetter_llvmTypeName (enumerator_8408.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_8558, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)).add_operation (enumerator_8408.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)).add_operation (var_llvmType_8558, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)).add_operation (function_llvmNameForLocalVariable (enumerator_8408.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)) ;
        extensionMethod_generateRetain (enumerator_8408.current_mFormalArgumentType (HERE), enumerator_8408.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 229)) ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 230)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          extensionMethod_generateInsulate (enumerator_8408.current_mFormalArgumentType (HERE), enumerator_8408.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 231)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 234)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8408.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
          extensionMethod_generateInsulate (enumerator_8408.current_mFormalArgumentType (HERE), enumerator_8408.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 236)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
      }
      break ;
    }
    enumerator_8408.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 242)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 243)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_9635 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9635.hasCurrentObject ()) {
    switch (enumerator_9635.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Release input argument '").add_operation (enumerator_9635.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)) ;
        extensionMethod_generateRelease (enumerator_9635.current_mFormalArgumentType (HERE), enumerator_9635.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 250)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 252)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_9635.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
          extensionMethod_generateInsulate (enumerator_9635.current_mFormalArgumentType (HERE), enumerator_9635.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 254)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 257)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate output argument '").add_operation (enumerator_9635.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)) ;
          extensionMethod_generateInsulate (enumerator_9635.current_mFormalArgumentType (HERE), enumerator_9635.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 259)) ;
        }
      }
      break ;
    }
    enumerator_9635.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 264)) ;
  const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, object->mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 265)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 266)) ;
  }else if (kBoolFalse == test_13) {
    GALGAS_string var_resultVarLLVMName_10547 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (var_resultVarLLVMName_10547, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mReturnType, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 270)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 270)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 272)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_regularRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_regularRoutineIR.mSlotID,
                                           extensionMethod_regularRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_regularRoutineIR_llvmCodeGeneration (defineExtensionMethod_regularRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Function 'checkModeAndReturnsRoutineLLVMName'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_checkModeAndReturnsRoutineLLVMName (const GALGAS_routineLLVMNameDict & constinArgument_inCalledRoutineDictionary,
                                                           const GALGAS_mode & constinArgument_inCallerRoutineMode,
                                                           const GALGAS_lstring & constinArgument_inRoutineName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inCalledRoutineDictionary.getter_hasKey (constinArgument_inCallerRoutineMode COMMA_SOURCE_FILE ("logical-modes.galgas", 183)).boolEnum () ;
  if (kBoolTrue == test_0) {
    constinArgument_inCalledRoutineDictionary.method_searchKey (constinArgument_inCallerRoutineMode, result_result, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 184)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_m_8406 = GALGAS_string ("the '").add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("logical-modes.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 186)).add_operation (GALGAS_string ("' routine cannot be invoked from '"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 186)).add_operation (extensionGetter_string (constinArgument_inCallerRoutineMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 186)).add_operation (GALGAS_string ("' mode, but only from:"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 186)) ;
    cEnumerator_routineLLVMNameDict enumerator_8565 (constinArgument_inCalledRoutineDictionary, kENUMERATION_UP) ;
    while (enumerator_8565.hasCurrentObject ()) {
      var_m_8406.plusAssign_operation(GALGAS_string ("\n"
        "  - '").add_operation (extensionGetter_string (enumerator_8565.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 188)).add_operation (GALGAS_string ("' mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 188)) ;
      enumerator_8565.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("logical-modes.galgas", 190)), var_m_8406, fixItArray1  COMMA_SOURCE_FILE ("logical-modes.galgas", 190)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_checkModeAndReturnsRoutineLLVMName [4] = {
  & kTypeDescriptor_GALGAS_routineLLVMNameDict,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_routineLLVMNameDict operand0 = GALGAS_routineLLVMNameDict::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_mode operand1 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_checkModeAndReturnsRoutineLLVMName (operand0,
                                                      operand1,
                                                      operand2,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_checkModeAndReturnsRoutineLLVMName ("checkModeAndReturnsRoutineLLVMName",
                                                                                    functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    3,
                                                                                    functionArgs_checkModeAndReturnsRoutineLLVMName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromAST'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_routineMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                   const GALGAS_lstring & constinArgument_inRoutineName,
                                                   const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_583 = GALGAS_string ("func.") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_583.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 18)) ;
  }
  var_s_583.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 20)) ;
  var_s_583.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 21)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_799 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_799.hasCurrentObject ()) {
    var_s_583.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_799.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (enumerator_799.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 23)) ;
    enumerator_799.gotoNextObject () ;
  }
  var_s_583.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 25)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_583, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 26)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromCall'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_routineMangledNameFromCall (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                                    const GALGAS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1300 = GALGAS_string ("func.") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_1300.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 37)) ;
  }
  var_s_1300.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 39)) ;
  var_s_1300.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 40)) ;
  cEnumerator_effectiveArgumentListAST enumerator_1481 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_1481.hasCurrentObject ()) {
    var_s_1300.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_1481.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (enumerator_1481.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 42)) ;
    enumerator_1481.gotoNextObject () ;
  }
  var_s_1300.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_1300, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 45)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildOrderedDeclarationList (const GALGAS_ast constinArgument_inAST,
                                          const GALGAS_string constinArgument_inSourceFile,
                                          const GALGAS_location constinArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_1950 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  cEnumerator_declarationListAST enumerator_2002 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2002.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) enumerator_2002.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
    enumerator_2002.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandaloneFunctionDeclarationListAST (HERE), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternFunctionListAST (HERE), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 42)) ;
  GALGAS_uint var_addintegerTypeCount_2500 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_stringlist enumerator_2555 (var_precedenceGraph_1950.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 45)), kENUMERATION_UP) ;
  while (enumerator_2555.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2572 = enumerator_2555.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2572.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2572.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2572.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2767 = var_split_2572.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
        GALGAS_integerDeclarationAST var_declaration_2842 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_2767  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_2842.ptr (), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)) ;
        var_addintegerTypeCount_2500.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2572.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_3040 = var_split_2572.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)) ;
          GALGAS_integerDeclarationAST var_declaration_3115 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_3040  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 55)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_3115.ptr (), var_precedenceGraph_1950, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 56)) ;
          var_addintegerTypeCount_2500.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 57)) ;
        }
      }
    }
    enumerator_2555.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 62)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_printPasses.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->printMessage (GALGAS_string ("    Added ").add_operation (var_addintegerTypeCount_2500.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 63)).add_operation (GALGAS_string (" integer types\n"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 63))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 63)) ;
  }
  GALGAS_bool test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_6.boolEnum ()) {
    test_6 = GALGAS_bool (gOption_plm_5F_options_emitDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_7 = test_6.boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_string var_s_3662 = var_precedenceGraph_1950.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 67)) ;
    GALGAS_string var_filePath_3708 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 68)) ;
    GALGAS_bool joker_3806 ; // Joker input parameter
    var_s_3662.method_writeToFileWhenDifferentContents (var_filePath_3708, joker_3806, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 69)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 72)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1950.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 73)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    cEnumerator_lstringlist enumerator_4028 (var_precedenceGraph_1950.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 74)), kENUMERATION_UP) ;
    while (enumerator_4028.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (enumerator_4028.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 75)), enumerator_4028.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 75)), fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 75)) ;
      enumerator_4028.gotoNextObject () ;
    }
    var_precedenceGraph_1950.getter_keyList (SOURCE_FILE ("ordered-declaration-list.galgas", 77)).log (""  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4313 ;
    GALGAS_lstringlist joker_4246 ; // Joker input parameter
    GALGAS_lstringlist joker_4321 ; // Joker input parameter
    var_precedenceGraph_1950.method_topologicalSort (outArgument_outDeclarationListAST, joker_4246, var_unsortedSemanticDeclarationListAST_4313, joker_4321, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)) ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4313.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 85)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_string var_s_4400 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4313.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 87)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)) ;
      cEnumerator_declarationListAST enumerator_4615 (var_unsortedSemanticDeclarationListAST_4313, kENUMERATION_UP) ;
      while (enumerator_4615.hasCurrentObject ()) {
        var_s_4400.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4615.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 90)) ;
        enumerator_4615.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4400, fixItArray11  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 92)) ;
      cEnumerator_declarationListAST enumerator_4787 (var_unsortedSemanticDeclarationListAST_4313, kENUMERATION_UP) ;
      while (enumerator_4787.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4787.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 94)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4787.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 94)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 94)), fixItArray12  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 94)) ;
        enumerator_4787.gotoNextObject () ;
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildSemanticContext (const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                   GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   GALGAS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                   GALGAS_decoratedRegularRoutineList & outArgument_outDecoratedRoutineList,
                                   GALGAS_routineListIR & outArgument_outRoutineListIR,
                                   GALGAS_globalVariableIRList & outArgument_outGlobalVariableIRList,
                                   GALGAS_userLLVMTypeDefinitionListIR & outArgument_outUserLLVMTypeDefinitionListIR,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outDecoratedRoutineList.drop () ; // Release 'out' argument
  outArgument_outRoutineListIR.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableIRList.drop () ; // Release 'out' argument
  outArgument_outUserLLVMTypeDefinitionListIR.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 184)) ;
  outArgument_outDecoratedDeclarationList = GALGAS_declarationDecorationList::constructor_emptyList (SOURCE_FILE ("context.galgas", 185)) ;
  outArgument_outDecoratedRoutineList = GALGAS_decoratedRegularRoutineList::constructor_emptyList (SOURCE_FILE ("context.galgas", 186)) ;
  outArgument_outRoutineListIR = GALGAS_routineListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 187)) ;
  outArgument_outUserLLVMTypeDefinitionListIR = GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 188)) ;
  cEnumerator_requiredFunctionDeclarationListAST enumerator_7709 (constinArgument_inAST.getter_mRequiredFunctionListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7709.hasCurrentObject ()) {
    GALGAS_lstring var_procedureMangledName_7741 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_7709.current (HERE).getter_mName (HERE), enumerator_7709.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 191)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.addAssign_operation (var_procedureMangledName_7741.getter_string (HERE)  COMMA_SOURCE_FILE ("context.galgas", 196)) ;
    enumerator_7709.gotoNextObject () ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 199)) ;
  GALGAS_routineMapCTXT var_routineMapCTXT_8191 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("context.galgas", 204)) ;
  extensionMethod_enterSystemRoutineInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 206)), GALGAS_string::makeEmptyString (), var_routineMapCTXT_8191, outArgument_outSemanticContext, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 205)) ;
  outArgument_outSemanticContext.mProperty_mRoutineMap = var_routineMapCTXT_8191 ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternFunctionListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 214)) ;
  extensionMethod_enterStandaloneFunctionsInContext (constinArgument_inAST.getter_mStandaloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedRoutineList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 217)) ;
  outArgument_outGlobalVariableIRList = GALGAS_globalVariableIRList::constructor_emptySortedList (SOURCE_FILE ("context.galgas", 222)) ;
  GALGAS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_8882 = constinArgument_inAST.getter_mControlRegisterUserAccesMapAST (HERE) ;
  cEnumerator_declarationListAST enumerator_8971 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8971.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_8971.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandaloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, outArgument_outGlobalVariableIRList, var_controlRegisterUserAccesMapAST_8882, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 225)) ;
    enumerator_8971.gotoNextObject () ;
  }
  cEnumerator_controlRegisterUserAccesMapAST enumerator_9585 (var_controlRegisterUserAccesMapAST_8882, kENUMERATION_UP) ;
  while (enumerator_9585.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (enumerator_9585.current_lkey (HERE).getter_location (SOURCE_FILE ("context.galgas", 240)), GALGAS_string ("this control register is not defined"), fixItArray0  COMMA_SOURCE_FILE ("context.galgas", 240)) ;
    enumerator_9585.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 243)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), outArgument_outSemanticContext.getter_mRoutineMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 248)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterGroupMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 254)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outGlobalVariableIRList, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 259)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_combineTypeNamesForInfixOperator (const GALGAS_string & constinArgument_inLeftTypeName,
                                                          const GALGAS_string & constinArgument_inRightTypeName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 273)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 273)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 273)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 273)).getter_nowhere (SOURCE_FILE ("context.galgas", 273)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_combineTypeNamesForInfixOperator [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_combineTypeNamesForInfixOperator ("combineTypeNamesForInfixOperator",
                                                                                  functionWithGenericHeader_combineTypeNamesForInfixOperator,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_combineTypeNamesForInfixOperator) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'staticIntegerType'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType function_staticIntegerType (C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 106)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 107)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 108)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 109)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 110)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 111)), GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 112)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 112)) COMMA_SOURCE_FILE ("types.galgas", 112)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 113)), GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("types.galgas", 114)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 115))  COMMA_SOURCE_FILE ("types.galgas", 105)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_staticIntegerType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_staticIntegerType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_staticIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_staticIntegerType ("staticIntegerType",
                                                                   functionWithGenericHeader_staticIntegerType,
                                                                   & kTypeDescriptor_GALGAS_PLMType,
                                                                   0,
                                                                   functionArgs_staticIntegerType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'literalStringType'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType function_literalStringType (C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 123)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 124)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 125)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 126)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 127)), GALGAS_subscript::constructor_literalString (SOURCE_FILE ("types.galgas", 128)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 129)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 129)) COMMA_SOURCE_FILE ("types.galgas", 129)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 129)) COMMA_SOURCE_FILE ("types.galgas", 129)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 130)), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("types.galgas", 131)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 132))  COMMA_SOURCE_FILE ("types.galgas", 122)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_literalStringType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_literalStringType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_PLMType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 Function 'voidType'                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType function_voidType (C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 140)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 141)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 142)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 143)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 144)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 145)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 146)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_void (SOURCE_FILE ("types.galgas", 148)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 139)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_voidType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_voidType (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_PLMType,
                                                          0,
                                                          functionArgs_voidType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildTypeMapHTMLFile (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                   const GALGAS_routineMapCTXT constinArgument_inRoutineMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_15950 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 421)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_16067 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 423)) ;
    cEnumerator_unifiedTypeMap enumerator_16096 (constinArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_16096.hasCurrentObject ()) {
      var_firstLetterSet_16067.addAssign_operation (enumerator_16096.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 425)).getter_string (SOURCE_FILE ("types.galgas", 425))  COMMA_SOURCE_FILE ("types.galgas", 425)) ;
      enumerator_16096.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_16204 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_16238 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_16274 (constinArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_16274.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_16238.objectCompare (enumerator_16274.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 430)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_16238 = enumerator_16274.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 431)) ;
        var_tableOfTypeString_16204.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_16238.getter_uint (SOURCE_FILE ("types.galgas", 432)).getter_string (SOURCE_FILE ("types.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 432)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 432)).add_operation (var_currentFirstLetter_16238.getter_string (SOURCE_FILE ("types.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 432)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 432)) ;
      }
      var_tableOfTypeString_16204.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_16274.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 434)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 434)) ;
      enumerator_16274.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_16667 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 437)), constinArgument_inTypeMap, var_firstLetterSet_16067, var_tableOfTypeString_16204, constinArgument_inRoutineMap COMMA_SOURCE_FILE ("types.galgas", 436))) ;
    GALGAS_bool joker_16917 ; // Joker input parameter
    var_typeDumpString_16667.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_15950, joker_16917, inCompiler COMMA_SOURCE_FILE ("types.galgas", 443)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_15950, inCompiler COMMA_SOURCE_FILE ("types.galgas", 445)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Filewrapper template 'typeDumpGenerationTemplate dump'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                   const GALGAS_string & in_PROJECT_5F_NAME,
                                                                   const GALGAS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                   const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                   const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING,
                                                                   const GALGAS_routineMapCTXT & in_STANDALONE_5F_ROUTINE_5F_MAP
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
    "</p>\n" ;
  GALGAS_uint index_1163_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1163 (in_GLOBAL_5F_TYPE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1163.hasCurrentObject ()) {
      result << "\n"
        "<h2>\n"
        "  <a name=\"" ;
      result << enumerator_1163.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1163.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a>\n"
        "</h2>\n"
        "<p>\n"
        "Kind: " ;
      result << extensionGetter_descriptionForHTMLFile (enumerator_1163.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).stringValue () ;
      result << "<br>\n"
        "Description: " ;
      result << enumerator_1163.current_type (HERE).getter_plmTypeDescriptionName (SOURCE_FILE ("typeDump.html.galgasTemplate", 69)).stringValue () ;
      result << "<br>\n"
        "LLVM Base Name: " ;
      result << enumerator_1163.current_type (HERE).getter_llvmBaseTypeName (SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).stringValue () ;
      result << "<br>\n"
        "LLVM Name: " ;
      result << extensionGetter_llvmTypeName (enumerator_1163.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).stringValue () ;
      result << "\n"
        "</p>\n"
        "  " ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_1163.current_type (HERE).getter_routineMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "    <table class=\"result\">\n"
          "      <tr>\n"
          "        <td class=\"result_title\">Routine Name</td>\n"
          "        <td class=\"result_title\">Visibility</td>\n"
          "        <td class=\"result_title\">Typed signature</td>\n"
          "        <td class=\"result_title\">Routine LLVM Name, by mode</td>\n"
          "      </tr>\n"
          "    " ;
        GALGAS_uint index_1762_ (0) ;
        if (enumerator_1163.current_type (HERE).getter_routineMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 81)).isValid ()) {
          cEnumerator_routineMapCTXT enumerator_1762 (enumerator_1163.current_type (HERE).getter_routineMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 81)), kENUMERATION_UP) ;
          while (enumerator_1762.hasCurrentObject ()) {
            result << "\n"
              "      <tr class=\"result_line\">\n"
              "        <td>" ;
            result << enumerator_1762.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            const enumGalgasBool test_1 = enumerator_1762.current_mIsPublic (HERE).boolEnum () ;
            if (kBoolTrue == test_1) {
              result << GALGAS_string ("public").stringValue () ;
            }else if (kBoolFalse == test_1) {
              result << GALGAS_string ("private").stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            result << extensionGetter_typedString (enumerator_1762.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 85)).stringValue () ;
            const enumGalgasBool test_2 = enumerator_1762.current_mReturnTypeProxy (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 85)).boolEnum () ;
            if (kBoolTrue == test_2) {
            }else if (kBoolFalse == test_2) {
              result << " -> " ;
              result << enumerator_1762.current_mReturnTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 85)).stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            GALGAS_uint index_2109_ (0) ;
            if (enumerator_1762.current_mModeDictionary (HERE).isValid ()) {
              cEnumerator_routineLLVMNameDict enumerator_2109 (enumerator_1762.current_mModeDictionary (HERE), kENUMERATION_UP) ;
              while (enumerator_2109.hasCurrentObject ()) {
                result << extensionGetter_string (enumerator_2109.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 86)).stringValue () ;
                result << " : " ;
                result << enumerator_2109.current_mRoutineLLVMName (HERE).stringValue () ;
                if (enumerator_2109.hasNextObject ()) {
                  result << "<br>" ;
                }
                index_2109_.increment () ;
                enumerator_2109.gotoNextObject () ;
              }
            }
            result << "</td>\n"
              "      </tr>\n"
              "    " ;
            index_1762_.increment () ;
            enumerator_1762.gotoNextObject () ;
          }
        }
        result << "\n"
          "    </table>\n"
          "    <br>\n"
          "  " ;
      }else if (kBoolFalse == test_0) {
      }
      result << "\n"
        "  " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_1163.current_type (HERE).getter_guardMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "\n"
          "    <table class=\"result\">\n"
          "      <tr>\n"
          "        <td class=\"result_title\">Guard Name</td>\n"
          "        <td class=\"result_title\">Visibility</td>\n"
          "        <td class=\"result_title\">Typed signature</td>\n"
          "        <td class=\"result_title\">User routine LLVM Name</td>\n"
          "        <td class=\"result_title\">Implementation routine LLVM Name</td>\n"
          "      </tr>\n"
          "    " ;
        GALGAS_uint index_2651_ (0) ;
        if (enumerator_1163.current_type (HERE).getter_guardMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 101)).isValid ()) {
          cEnumerator_guardMapCTXT enumerator_2651 (enumerator_1163.current_type (HERE).getter_guardMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 101)), kENUMERATION_UP) ;
          while (enumerator_2651.hasCurrentObject ()) {
            result << "\n"
              "      <tr class=\"result_line\">\n"
              "        <td>" ;
            result << enumerator_2651.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            const enumGalgasBool test_4 = enumerator_2651.current_mIsPublic (HERE).boolEnum () ;
            if (kBoolTrue == test_4) {
              result << GALGAS_string ("public").stringValue () ;
            }else if (kBoolFalse == test_4) {
              result << GALGAS_string ("private").stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            result << extensionGetter_typedString (enumerator_2651.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 105)).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            result << enumerator_2651.current_mUserRoutineLLVMName (HERE).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            result << enumerator_2651.current_mImplementationRoutineLLVMName (HERE).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 107)).stringValue () ;
            result << "</td>\n"
              "      </tr>\n"
              "    " ;
            index_2651_.increment () ;
            enumerator_2651.gotoNextObject () ;
          }
        }
        result << "\n"
          "    </table>\n"
          "    <br>\n"
          "  " ;
      }else if (kBoolFalse == test_3) {
      }
      result << "\n" ;
      index_1163_.increment () ;
      enumerator_1163.gotoNextObject () ;
    }
  }
  result << "\n"
    "<p>\n"
    "<h2>\n"
    "  Standalone routines\n"
    "</h2>\n"
    "  <table class=\"result\">\n"
    "    <tr>\n"
    "      <td class=\"result_title\">Standalone routine Name</td>\n"
    "      <td class=\"result_title\">Visibility</td>\n"
    "      <td class=\"result_title\">Typed signature</td>\n"
    "      <td class=\"result_title\">Routine LLVM Name, by mode</td>\n"
    "    </tr>\n"
    "  " ;
  GALGAS_uint index_3377_ (0) ;
  if (in_STANDALONE_5F_ROUTINE_5F_MAP.isValid ()) {
    cEnumerator_routineMapCTXT enumerator_3377 (in_STANDALONE_5F_ROUTINE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3377.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_3377.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "      <td>" ;
      const enumGalgasBool test_5 = enumerator_3377.current_mIsPublic (HERE).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << GALGAS_string ("public").stringValue () ;
      }else if (kBoolFalse == test_5) {
        result << GALGAS_string ("private").stringValue () ;
      }
      result << "</td>\n"
        "      <td>" ;
      result << extensionGetter_typedString (enumerator_3377.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 129)).stringValue () ;
      const enumGalgasBool test_6 = enumerator_3377.current_mReturnTypeProxy (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 129)).boolEnum () ;
      if (kBoolTrue == test_6) {
      }else if (kBoolFalse == test_6) {
        result << " -> " ;
        result << enumerator_3377.current_mReturnTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 129)).stringValue () ;
      }
      result << "</td>\n"
        "      <td>" ;
      GALGAS_uint index_3714_ (0) ;
      if (enumerator_3377.current_mModeDictionary (HERE).isValid ()) {
        cEnumerator_routineLLVMNameDict enumerator_3714 (enumerator_3377.current_mModeDictionary (HERE), kENUMERATION_UP) ;
        while (enumerator_3714.hasCurrentObject ()) {
          result << extensionGetter_string (enumerator_3714.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 130)).stringValue () ;
          result << " : " ;
          result << enumerator_3714.current_mRoutineLLVMName (HERE).stringValue () ;
          if (enumerator_3714.hasNextObject ()) {
            result << "<br>" ;
          }
          index_3714_.increment () ;
          enumerator_3714.gotoNextObject () ;
        }
      }
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_3377_.increment () ;
      enumerator_3377.gotoNextObject () ;
    }
  }
  result << "\n"
    "  </table>\n"
    "</p>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'linkForHTMLTypeMap'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_linkForHTMLTypeMap (const GALGAS_string & constinArgument_inTypeName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 465)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 465)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 465)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 465)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'declareLLVMTypes'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_declareLLVMTypes (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                               const GALGAS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                               const GALGAS_uint constinArgument_inPointerSize,
                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                               GALGAS_string & ioArgument_ioLLVMcode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("User Defined Types"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 480)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%ptrtype = type i8* ; Generic pointer type for dynamic objects\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 481)) ;
  cEnumerator_userLLVMTypeDefinitionListIR enumerator_18534 (constinArgument_inUserLLVMTypeDefinitionListIR, kENUMERATION_UP) ;
  while (enumerator_18534.hasCurrentObject ()) {
    callExtensionMethod_generateLLVMType ((const cPtr_userLLVMTypeDefinitionIR *) enumerator_18534.current_mType (HERE).ptr (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("types.galgas", 483)) ;
    enumerator_18534.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 485)) ;
  cEnumerator_unifiedTypeMap enumerator_18682 (constinArgument_inTypeMap, kENUMERATION_UP) ;
  while (enumerator_18682.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_18682.current_generate (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      switch (enumerator_18682.current_type (HERE).getter_kind (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_void:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          {
          routine_generateBoolTypeLLVMCode (ioArgument_ioLLVMcode, inCompiler  COMMA_SOURCE_FILE ("types.galgas", 492)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          {
          routine_generateLLVMcodeForEnumeration (ioArgument_ioLLVMcode, enumerator_18682.current_type (HERE), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 494)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_19119 = (const cEnumAssociatedValues_typeKind_integer *) (enumerator_18682.current_type (HERE).getter_kind (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_unsigned = extractPtr_19119->mAssociatedValue2 ;
          const GALGAS_uint extractedValue_size = extractPtr_19119->mAssociatedValue3 ;
          {
          routine_generateLLVMCodeForIntegerType (ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, extractedValue_size, extractedValue_unsigned.operator_not (SOURCE_FILE ("types.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 499)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          {
          routine_generateLLVMcodeForStructure (ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, enumerator_18682.current_type (HERE), constinArgument_inPointerSize, inCompiler  COMMA_SOURCE_FILE ("types.galgas", 506)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_syncTool:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          {
          routine_generateStaticStringTypeLLVMCode (ioArgument_ioLLVMcode, extensionGetter_llvmTypeName (enumerator_18682.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 514)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_arrayType:
        {
          const cEnumAssociatedValues_typeKind_arrayType * extractPtr_19648 = (const cEnumAssociatedValues_typeKind_arrayType *) (enumerator_18682.current_type (HERE).getter_kind (HERE).unsafePointer ()) ;
          const GALGAS_bigint extractedValue_arraySize = extractPtr_19648->mAssociatedValue1 ;
          {
          routine_generateLLVMCodeForStaticArrayType (ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, enumerator_18682.current_type (HERE), extractedValue_arraySize, inCompiler  COMMA_SOURCE_FILE ("types.galgas", 518)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_dynamicArrayType:
        {
          {
          routine_generateLLVMcodeForDynamicArray (ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, enumerator_18682.current_type (HERE), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 525)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_function:
        {
        }
        break ;
      }
    }
    enumerator_18682.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR function_checkAssignmentCompatibility (const GALGAS_objectIR & constinArgument_inSourceValue,
                                                       const GALGAS_PLMType & constinArgument_inOptionalTargetAnnotationType,
                                                       const GALGAS_location & constinArgument_inErrorLocation,
                                                       const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_result ; // Returned variable
  GALGAS_PLMType var_sourceType_876 = extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetAnnotationType.getter_plmTypeDescriptionName (HERE).objectCompare (var_sourceType_876.getter_plmTypeDescriptionName (HERE))).boolEnum () ;
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
        GALGAS_bigint var_value_1265 ;
        GALGAS_PLMType joker_1246_1 ; // Joker input parameter
        constinArgument_inSourceValue.method_literalInteger (joker_1246_1, var_value_1265, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
        GALGAS_bigint var_minTarget_1334 ;
        GALGAS_bigint var_maxTarget_1353 ;
        GALGAS_bool joker_1355_2 ; // Joker input parameter
        GALGAS_uint joker_1355_1 ; // Joker input parameter
        constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).method_integer (var_minTarget_1334, var_maxTarget_1353, joker_1355_2, joker_1355_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value_1265.objectCompare (var_minTarget_1334)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget_1353.objectCompare (var_value_1265)) ;
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
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (constinArgument_inOptionalTargetAnnotationType.getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (extensionGetter_plmTypeDescriptionName (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_8 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_8) {
    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, extensionGetter_plmTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the $").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), fixItArray10  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)) ;
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [5] = {
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_objectIR,
                                                                              4,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'getNewTempValue'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_getNewTempValue (const GALGAS_PLMType constinArgument_inType,
                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                              GALGAS_objectIR & outArgument_outTempVariable,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 71)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 72)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3402 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3402, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 74)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmValue (constinArgument_inType, var_llvmName_3402  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 75)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'getNewTempReference'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_getNewTempReference (const GALGAS_PLMType constinArgument_inType,
                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                  GALGAS_objectIR & outArgument_outTempVariable,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 86)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 87)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3842 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3842, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 89)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_reference (constinArgument_inType, var_llvmName_3842  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 90)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_semanticAnalysis (const GALGAS_string /* constinArgument_inSourceFile */,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                               const GALGAS_declarationDecorationList constinArgument_inDecoratedDeclarationList,
                               const GALGAS_decoratedRegularRoutineList constinArgument_inDecoratedRoutineList,
                               const GALGAS_routineListIR constinArgument_inRoutineListIR,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticEntityMap constinArgument_inStaticEntityMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 108)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mRoutineListIR = constinArgument_inRoutineListIR ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticEntityMap = constinArgument_inStaticEntityMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5038 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 114)) ;
  cEnumerator_declarationDecorationList enumerator_5099 (constinArgument_inDecoratedDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5099.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDecoratedDeclaration *) enumerator_5099.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_5038, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 116)) ;
    enumerator_5099.gotoNextObject () ;
  }
  extensionMethod_routineSemanticAnalysis (constinArgument_inDecoratedRoutineList, constinArgument_inSemanticContext, var_temporaries_5038, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 122)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternFunctionListAST (HERE), constinArgument_inSemanticContext, var_temporaries_5038, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 127)) ;
  {
  routine_appendPanicRoutines (constinArgument_inSourceFileAbsolutePathSet, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 133)) ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 138)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension method '@panicAST enterInPrecedenceGraph'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_panicAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("loop") ;
  }
  GALGAS_lstring var_nodeName_2549 = GALGAS_lstring::constructor_new (GALGAS_string ("panic ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 59)) ;
  {
  const GALGAS_panicAST temp_2 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2549, temp_2, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 63)) ;
  }
  GALGAS_lstring var_configNode_2727 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 64)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 64)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2549, var_configNode_2727 COMMA_SOURCE_FILE ("panic.galgas", 65)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_panicAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                               extensionMethod_panicAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_panicAST_enterInPrecedenceGraph (defineExtensionMethod_panicAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@panicAST keyRepresentationForErrorSignaling'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_panicAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("loop") ;
  }
  result_outRepresentation = GALGAS_string ("panic ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_panicAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                                           extensionGetter_panicAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_panicAST_keyRepresentationForErrorSignaling (defineExtensionGetter_panicAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension getter '@panicAST locationForErrorSignaling'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_panicAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  result_outLocation = object->mProperty_mPriority.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_panicAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                                  extensionGetter_panicAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_panicAST_locationForErrorSignaling (defineExtensionGetter_panicAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'panicRoutineNameForLocationFile'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_panicRoutineNameForLocationFile (const GALGAS_location & constinArgument_inLocation,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inLocation.getter_isNowhere (SOURCE_FILE ("panic.galgas", 85)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("raise.panic.nofile") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("raise.panic.file.").add_operation (constinArgument_inLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)).getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 88)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForLocationFile [2] = {
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_panicRoutineNameForLocationFile (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_panicRoutineNameForLocationFile (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForLocationFile ("panicRoutineNameForLocationFile",
                                                                                 functionWithGenericHeader_panicRoutineNameForLocationFile,
                                                                                 & kTypeDescriptor_GALGAS_string,
                                                                                 1,
                                                                                 functionArgs_panicRoutineNameForLocationFile) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'panicRoutineNameForFilePath'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_panicRoutineNameForFilePath (const GALGAS_string & constinArgument_inFilePath,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inFilePath.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("raise.panic.nofile") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("raise.panic.file.").add_operation (constinArgument_inFilePath.getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 98)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 98)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForFilePath [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_panicRoutineNameForFilePath (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_panicRoutineNameForFilePath (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForFilePath ("panicRoutineNameForFilePath",
                                                                             functionWithGenericHeader_panicRoutineNameForFilePath,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_panicRoutineNameForFilePath) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Overriding extension method '@panicAST enterInContext'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_panicAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                     const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                     GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                     GALGAS_globalVariableIRList & /* ioArgument_ioGlobalVariableIRList */,
                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  const enumGalgasBool test_0 = object->mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 128)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 128)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 130)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 130)) ;
    }
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedPanicRoutine::constructor_new (object->mProperty_mIsSetup, object->mProperty_mPriority  COMMA_SOURCE_FILE ("panic.galgas", 133))  COMMA_SOURCE_FILE ("panic.galgas", 133)) ;
  GALGAS_routineFormalArgumentListAST var_arguments_6489 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("panic.galgas", 138)) ;
  var_arguments_6489.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("panic.galgas", 140)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 141)), ioArgument_ioContext.getter_mPanicLineType (HERE).getter_llvmBaseTypeName (SOURCE_FILE ("panic.galgas", 142)).getter_nowhere (SOURCE_FILE ("panic.galgas", 142)), GALGAS_string ("LINE").getter_nowhere (SOURCE_FILE ("panic.galgas", 143))  COMMA_SOURCE_FILE ("panic.galgas", 139)) ;
  var_arguments_6489.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("panic.galgas", 145)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 146)), ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_llvmBaseTypeName (SOURCE_FILE ("panic.galgas", 147)).getter_nowhere (SOURCE_FILE ("panic.galgas", 147)), GALGAS_string ("CODE").getter_nowhere (SOURCE_FILE ("panic.galgas", 148))  COMMA_SOURCE_FILE ("panic.galgas", 144)) ;
  var_arguments_6489.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("panic.galgas", 150)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 151)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 152)).getter_nowhere (SOURCE_FILE ("panic.galgas", 152)), GALGAS_string ("FILE").getter_nowhere (SOURCE_FILE ("panic.galgas", 153))  COMMA_SOURCE_FILE ("panic.galgas", 149)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("loop") ;
  }
  GALGAS_lstring var_routineMangledName_6877 = GALGAS_lstring::constructor_new (GALGAS_string ("panic.").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 155)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 155)).add_operation (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 155)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 154)) ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 159)), GALGAS_mode::constructor_panicMode (SOURCE_FILE ("panic.galgas", 160)), GALGAS_bool (false), GALGAS_routineKind::constructor_function (SOURCE_FILE ("panic.galgas", 162)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("panic.galgas", 165)), var_routineMangledName_6877, var_arguments_6489, GALGAS_bool (false), object->mProperty_mPanicInstructionList, object->mProperty_mEndOfPanicInstructions, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 171))  COMMA_SOURCE_FILE ("panic.galgas", 158)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_panicAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                       extensionMethod_panicAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_panicAST_enterInContext (defineExtensionMethod_panicAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'appendPanicRoutines'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_appendPanicRoutines (const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_universalModePanicRoutineIR::constructor_new (GALGAS_string ("section.user.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 183)), GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("panic.galgas", 182))  COMMA_SOURCE_FILE ("panic.galgas", 182)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_sectionModePanicRoutineIR::constructor_new (GALGAS_string ("section.implementation.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 189)), GALGAS_bool (false), GALGAS_bool (false), ioArgument_ioIntermediateCodeStruct.getter_mPanicSetupListIR (HERE), ioArgument_ioIntermediateCodeStruct.getter_mPanicLoopListIR (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 188))  COMMA_SOURCE_FILE ("panic.galgas", 188)) ;
  cEnumerator_stringset enumerator_8542 (constinArgument_inSourceFileAbsolutePathSet, kENUMERATION_UP) ;
  while (enumerator_8542.hasCurrentObject ()) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_fileSpecificPanicRoutineIR::constructor_new (function_panicRoutineNameForFilePath (enumerator_8542.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 198)).getter_nowhere (SOURCE_FILE ("panic.galgas", 198)), GALGAS_bool (false), GALGAS_bool (false), enumerator_8542.current_key (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 197))  COMMA_SOURCE_FILE ("panic.galgas", 197)) ;
    enumerator_8542.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_fileSpecificPanicRoutineIR::constructor_new (function_panicRoutineNameForFilePath (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 205)).getter_nowhere (SOURCE_FILE ("panic.galgas", 205)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("panic.galgas", 204))  COMMA_SOURCE_FILE ("panic.galgas", 204)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Once function 'panicModeName'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_panicModeName (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("panic") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GALGAS_string gOnceFunctionResult_panicModeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_panicModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_panicModeName (NULL,
                                                           releaseOnceFunctionResult_panicModeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_panicModeName (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@decoratedPanicRoutine semanticAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedPanicRoutine_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedPanicRoutine * object = (const cPtr_decoratedPanicRoutine *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedPanicRoutine) ;
  const enumGalgasBool test_0 = object->mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 236)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 236)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupListIR.addAssign_operation (object->mProperty_mPriority.getter_bigint (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 237)) ;
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 239)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 239)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopListIR.addAssign_operation (object->mProperty_mPriority.getter_bigint (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 240)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedPanicRoutine_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedPanicRoutine.mSlotID,
                                         extensionMethod_decoratedPanicRoutine_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedPanicRoutine_semanticAnalysis (defineExtensionMethod_decoratedPanicRoutine_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'generatePanicCode'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generatePanicCode (GALGAS_string & ioArgument_ioLLVMcode,
                                const GALGAS_generationContext constinArgument_inGenerationContext,
                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_emptyStringIndex_11242 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, GALGAS_string::makeEmptyString (), var_emptyStringIndex_11242, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @panic.isr (").add_operation (extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)).add_operation (GALGAS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_11242, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 267)).add_operation (GALGAS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 268)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 271)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 272)) ;
}


