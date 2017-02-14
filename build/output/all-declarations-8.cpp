#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                     const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                     GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                     GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                         extensionMethod_enumerationDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_semanticAnalysis (defineExtensionMethod_enumerationDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@structureDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_structureDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outLocation = object->mProperty_mStructureName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                 extensionGetter_structureDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_location (defineExtensionGetter_structureDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@structureDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & ioArgument_ioExtensionDeclarationListAST,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  const GALGAS_structureDeclaration temp_0 = object ;
  GALGAS_structureDeclaration var_newDeclaration_4322 = temp_0 ;
  GALGAS_extensionDeclarationListAST var_currentExtensionDeclarationListAST_4370 = ioArgument_ioExtensionDeclarationListAST ;
  ioArgument_ioExtensionDeclarationListAST = GALGAS_extensionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 123)) ;
  cEnumerator_extensionDeclarationListAST enumerator_4527 (var_currentExtensionDeclarationListAST_4370, kENUMERATION_UP) ;
  while (enumerator_4527.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mStructureName.getter_string (HERE).objectCompare (enumerator_4527.current_mTypeName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_newDeclaration_4322 = GALGAS_structureDeclaration::constructor_new (var_newDeclaration_4322.getter_mStructureName (SOURCE_FILE ("type-structure-declaration.galgas", 127)), var_newDeclaration_4322.getter_mAttributeListAST (SOURCE_FILE ("type-structure-declaration.galgas", 128)), var_newDeclaration_4322.getter_mStructureFieldListAST (SOURCE_FILE ("type-structure-declaration.galgas", 129)).add_operation (enumerator_4527.current_mPropertyList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 129)), var_newDeclaration_4322.getter_mFunctionDeclarationListAST (SOURCE_FILE ("type-structure-declaration.galgas", 130)).add_operation (enumerator_4527.current_mProcedureDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 130)), var_newDeclaration_4322.getter_mSystemRoutineListAST (SOURCE_FILE ("type-structure-declaration.galgas", 131)).add_operation (enumerator_4527.current_mSVCListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 131)), var_newDeclaration_4322.getter_mGuardListAST (SOURCE_FILE ("type-structure-declaration.galgas", 132)).add_operation (enumerator_4527.current_mGuardListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 132))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 126)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioExtensionDeclarationListAST.addAssign_operation (enumerator_4527.current_mTypeName (HERE), enumerator_4527.current_mProcedureDeclarationListAST (HERE), enumerator_4527.current_mPropertyList (HERE), enumerator_4527.current_mSVCListAST (HERE), enumerator_4527.current_mGuardListAST (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 135)) ;
    }
    enumerator_4527.gotoNextObject () ;
  }
  outArgument_outNewDeclaration = var_newDeclaration_4322 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                     extensionMethod_structureDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_addExtension (defineExtensionMethod_structureDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structureDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_lstring var_structureTypeName_5583 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 146)) ;
  {
  const GALGAS_structureDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_structureTypeName_5583, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 148)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_5810 (object->mProperty_mStructureFieldListAST, kENUMERATION_UP) ;
  while (enumerator_5810.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_5810.current_mFieldTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_5871 = function_llvmRegularTypeMangledNameFromName (enumerator_5810.current_mFieldTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 152)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_structureTypeName_5583, var_typeName_5871 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 153)) ;
      }
    }
    switch (enumerator_5810.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structureVarInit::kNotBuilt:
      break ;
    case GALGAS_structureVarInit::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structureVarInit::kEnum_expression:
      {
        const cEnumAssociatedValues_structureVarInit_expression * extractPtr_6166 = (const cEnumAssociatedValues_structureVarInit_expression *) (enumerator_5810.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_6166->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), var_structureTypeName_5583, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 158)) ;
      }
      break ;
    }
    enumerator_5810.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_6250 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_6250.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentList enumerator_6323 (enumerator_6250.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_6323.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_6345 = function_llvmRegularTypeMangledNameFromName (enumerator_6323.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 164)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6345 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 165)) ;
      }
      enumerator_6323.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_6250.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 167)) ;
    enumerator_6250.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 170)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                               extensionMethod_structureDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInPrecedenceGraph (defineExtensionMethod_structureDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@structureDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structureDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outRepresentation = GALGAS_string ("struct $").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                                           extensionGetter_structureDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@structureDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalPropertyAndRoutineMapForContext_8786 = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 224)) ;
  GALGAS_propertyList var_propertyList_8826 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 225)) ;
  GALGAS_propertyMap var_propertyMap_8858 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 226)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_8906 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 227)) ;
  GALGAS_constructorSignature var_constructorSignature_8956 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 228)) ;
  GALGAS_bool var_canBeCopied_8979 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_9021 (object->mProperty_mStructureFieldListAST, kENUMERATION_UP) ;
  GALGAS_uint index_8992 ((uint32_t) 0) ;
  while (enumerator_9021.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_9021.current_mFieldTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 233)) ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), enumerator_9021.current_mFieldTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 234)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_optionalPropertyType_9109 = temp_0 ;
    GALGAS_instructionListIR var_initInstructionGenerationList_9303 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 237)) ;
    GALGAS_allocaList var_allocaList_9335 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 238)) ;
    GALGAS_semanticTemporariesStruct var_temporaries_9383 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 239)) ;
    switch (enumerator_9021.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structureVarInit::kNotBuilt:
      break ;
    case GALGAS_structureVarInit::kEnum_expression:
      {
        const cEnumAssociatedValues_structureVarInit_expression * extractPtr_11155 = (const cEnumAssociatedValues_structureVarInit_expression *) (enumerator_9021.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_11155->mAssociatedValue0 ;
        GALGAS_staticStringMap joker_9809 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 250)) ;
        GALGAS_universalPropertyAndRoutineMapForContext joker_9833 = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
        GALGAS_objectIR var_expressionIR_9963 ;
        callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 243)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mStructureName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 245)), object->mProperty_mStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 245)), var_optionalPropertyType_9109, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-structure-declaration.galgas", 248)), var_temporaries_9383, joker_9809, joker_9833, var_allocaList_9335, var_initInstructionGenerationList_9303, var_expressionIR_9963, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 242)) ;
        GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_initInstructionGenerationList_9303.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 256)).add_operation (var_allocaList_9335.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 256)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = extensionGetter_isStatic (var_expressionIR_9963, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 256)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 256)) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_9021.current_mFieldName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 257)), GALGAS_string ("initialization expression cannot be computed statically"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 257)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_actualPropertyType_10227 ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_9109.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-structure-declaration.galgas", 260)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_actualPropertyType_10227 = var_optionalPropertyType_9109 ;
        }else if (kBoolFalse == test_5) {
          var_actualPropertyType_10227 = extensionGetter_type (var_expressionIR_9963, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 263)) ;
        }
        const enumGalgasBool test_6 = extensionGetter_instanciable (var_actualPropertyType_10227.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 265)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 265)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_9021.current_mFieldName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 266)), GALGAS_string ("$").add_operation (var_actualPropertyType_10227.getter_key (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)) ;
        }
        const enumGalgasBool test_8 = extensionGetter_copyable (var_actualPropertyType_10227, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 268)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 268)).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_canBeCopied_8979 = GALGAS_bool (false) ;
        }
        var_propertyList_8826.addAssign_operation (enumerator_9021.current_mFieldName (HERE).getter_string (HERE), var_actualPropertyType_10227  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 271)) ;
        {
        var_propertyMap_8858.setter_insertKey (enumerator_9021.current_mFieldName (HERE), enumerator_9021.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_actualPropertyType_10227, enumerator_9021.current_mFieldName (HERE), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 272)) ;
        }
        {
        var_universalPropertyAndRoutineMapForContext_8786.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_10910 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8786.ptr () ;
        callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_10910, enumerator_9021.current_mFieldName (HERE), enumerator_9021.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_actualPropertyType_10227, enumerator_9021.current_mFieldName (HERE), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
        var_sortedOperandIRList_8906.addAssign_operation (extensionGetter_withType (var_expressionIR_9963, var_actualPropertyType_10227, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GALGAS_structureVarInit::kEnum_noExpression:
      {
        const enumGalgasBool test_9 = extensionGetter_instanciable (var_optionalPropertyType_9109.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 284)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_9021.current_mFieldName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 285)), GALGAS_string ("$").add_operation (var_optionalPropertyType_9109.getter_key (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 285)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 285)), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 285)) ;
        }
        var_propertyList_8826.addAssign_operation (enumerator_9021.current_mFieldName (HERE).getter_string (HERE), var_optionalPropertyType_9109  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 287)) ;
        {
        var_propertyMap_8858.setter_insertKey (enumerator_9021.current_mFieldName (HERE), enumerator_9021.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_optionalPropertyType_9109, enumerator_9021.current_mFieldName (HERE), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
        }
        {
        var_universalPropertyAndRoutineMapForContext_8786.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_11620 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8786.ptr () ;
        callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_11620, enumerator_9021.current_mFieldName (HERE), enumerator_9021.current_mIsPublic (HERE), GALGAS_objectIR::constructor_property (var_optionalPropertyType_9109, enumerator_9021.current_mFieldName (HERE), index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 293)) ;
        }
        var_constructorSignature_8956.addAssign_operation (enumerator_9021.current_mFieldName (HERE).getter_string (HERE), var_optionalPropertyType_9109, index_8992  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 298)) ;
      }
      break ;
    }
    enumerator_9021.gotoNextObject () ;
    index_8992.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 230)) ;
  }
  {
  ioArgument_ioContext.mProperty_mConstructorMap.setter_insertKey (object->mProperty_mStructureName, GALGAS_constructorValue::constructor_structure (var_constructorSignature_8956, var_sortedOperandIRList_8906  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 302)) ;
  }
  GALGAS_uint var_flags_12147 = function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 307)) ;
  cEnumerator_lstringlist enumerator_12200 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_12200.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_12200.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_flags_12147.operator_and (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 310)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 310)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_12200.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 311)), GALGAS_string ("duplicated attribute"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 311)) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_14 = var_canBeCopied_8979.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 312)).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (object->mProperty_mStructureName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 313)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray15  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 313)) ;
        }else if (kBoolFalse == test_14) {
          var_flags_12147 = var_flags_12147.operator_or (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 315)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 315)) ;
        }
      }
    }else if (kBoolFalse == test_11) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (enumerator_12200.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 318)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 318)) ;
    }
    enumerator_12200.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_12719 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_12719.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_12771 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 324)) ;
    cEnumerator_lstringlist enumerator_12829 (enumerator_12719.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12829.hasCurrentObject ()) {
      var_attributeSet_12771.addAssign_operation (enumerator_12829.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 326)) ;
      enumerator_12829.gotoNextObject () ;
    }
    GALGAS_lstring var_signature_12922 = extensionGetter_routineSignature (enumerator_12719.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_12719.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 329)) ;
    GALGAS_routineTypedSignature var_typedSignature_13105 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12719.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_typedSignature_13105, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 330)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_13241 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_12719.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnType_13241 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 332)) ;
    }
    GALGAS_lstring var_invocationName_13297 = function_routineMangledNameFromAST (GALGAS_string ("$").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 335)), enumerator_12719.current (HERE).getter_mFunctionName (HERE), enumerator_12719.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 334)) ;
    GALGAS_routineDescriptor var_functionDescriptor_13490 = GALGAS_routineDescriptor::constructor_new (enumerator_12719.current (HERE).getter_mPublicFunction (HERE), var_attributeSet_12771.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 342)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 342)), GALGAS_routineKind::constructor_function (enumerator_12719.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 343)), var_typedSignature_13105, var_returnType_13241, var_attributeSet_12771.getter_hasKey (function_accessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 346)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 346)), var_attributeSet_12771.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 347)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 347)), GALGAS_routineCallingSheme::constructor_staticCall (SOURCE_FILE ("type-structure-declaration.galgas", 348))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)) ;
    {
    var_universalPropertyAndRoutineMapForContext_8786.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_13869 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8786.ptr () ;
    callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_13869, enumerator_12719.current (HERE).getter_mFunctionName (HERE), var_signature_12922, var_invocationName_13297, var_functionDescriptor_13490, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 351)) ;
    }
    enumerator_12719.gotoNextObject () ;
  }
  cEnumerator_systemRoutineDeclarationListAST enumerator_14028 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_14028.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_14080 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 360)) ;
    cEnumerator_lstringlist enumerator_14128 (enumerator_14028.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14128.hasCurrentObject ()) {
      var_attributeSet_14080.addAssign_operation (enumerator_14128.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 362)) ;
      enumerator_14128.gotoNextObject () ;
    }
    GALGAS_lstring var_signature_14221 = extensionGetter_routineSignature (enumerator_14028.current (HERE).getter_mFormalArgumentList (HERE), enumerator_14028.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 365)) ;
    GALGAS_routineTypedSignature var_typedSignature_14397 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_14028.current (HERE).getter_mFormalArgumentList (HERE), var_typedSignature_14397, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 366)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnType_14523 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_14028.current (HERE).getter_mReturnTypeName (HERE), var_returnType_14523 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 368)) ;
    }
    GALGAS_lstring var_invocationName_14579 = function_routineMangledNameFromAST (GALGAS_string ("$").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 371)), enumerator_14028.current (HERE).getter_mName (HERE), enumerator_14028.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 370)) ;
    GALGAS_routineDescriptor var_descriptor_14744 = GALGAS_routineDescriptor::constructor_new (enumerator_14028.current (HERE).getter_mPublic (HERE), var_attributeSet_14080.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)), enumerator_14028.current (HERE).getter_mRoutineKind (HERE), var_typedSignature_14397, var_returnType_14523, var_attributeSet_14080.getter_hasKey (function_accessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 382)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 382)), var_attributeSet_14080.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 383)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 383)), GALGAS_routineCallingSheme::constructor_staticCall (SOURCE_FILE ("type-structure-declaration.galgas", 384))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 376)) ;
    {
    var_universalPropertyAndRoutineMapForContext_8786.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_15091 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalPropertyAndRoutineMapForContext_8786.ptr () ;
    callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_15091, enumerator_14028.current (HERE).getter_mName (HERE), var_signature_14221, var_invocationName_14579, var_descriptor_14744, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 387)) ;
    }
    enumerator_14028.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mStructureName, GALGAS_typeKind::constructor_structure (object->mProperty_mStructureName, var_propertyMap_8858, var_universalPropertyAndRoutineMapForContext_8786, var_propertyList_8826, var_flags_12147  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 395)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                       extensionMethod_structureDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInContext (defineExtensionMethod_structureDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structureDeclaration enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * inObject,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  extensionMethod_enterFunctionInContext (object->mProperty_mFunctionDeclarationListAST, function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 415)).getter_string (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 414)) ;
  extensionMethod_enterInContext (object->mProperty_mSystemRoutineListAST, function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 419)).getter_string (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 418)) ;
  extensionMethod_enterInContext (object->mProperty_mGuardListAST, function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)).getter_string (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                               extensionMethod_structureDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterRoutinesInContext (defineExtensionMethod_structureDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_structureType_16959 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mStructureName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 437)) ;
  const GALGAS_structureDeclaration temp_0 = object ;
  callExtensionMethod_functionSemanticAnalysis ((const cPtr_structureDeclaration *) temp_0.ptr (), var_structureType_16959, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 439)) ;
  extensionMethod_systemRoutineSemanticAnalysis (object->mProperty_mSystemRoutineListAST, var_structureType_16959, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)) ;
  extensionMethod_guardSemanticAnalysis (object->mProperty_mGuardListAST, var_structureType_16959, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                         extensionMethod_structureDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_semanticAnalysis (defineExtensionMethod_structureDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@typeAliasDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeAliasDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outLocation = object->mProperty_mNewTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeAliasDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                 extensionGetter_typeAliasDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeAliasDeclaration_location (defineExtensionGetter_typeAliasDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@typeAliasDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                     extensionMethod_typeAliasDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_addExtension (defineExtensionMethod_typeAliasDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeAliasDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_lstring var_newTypeName_2625 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 54)) ;
  GALGAS_lstring var_aliasedTypeName_2700 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 55)) ;
  {
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2625, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2625, var_aliasedTypeName_2700 COMMA_SOURCE_FILE ("type-alias.galgas", 57)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                               extensionMethod_typeAliasDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterInPrecedenceGraph (defineExtensionMethod_typeAliasDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@typeAliasDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outRepresentation = GALGAS_string ("typealias $").add_operation (object->mProperty_mNewTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 63)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                                           extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeAliasDeclaration enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                               extensionMethod_typeAliasDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterRoutinesInContext (defineExtensionMethod_typeAliasDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typeAliasDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_typeKind var_kind_4304 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAliasedTypeName, var_kind_4304, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 86)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mNewTypeName, var_kind_4304, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 88)) ;
  }
  GALGAS_lstring var_newNewInfixKey_4442 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 90)) ;
  GALGAS_lstring var_aliasAliasInfixKey_4546 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 91)) ;
  GALGAS_lstring var_newLiteralIntegerInfixKey_4665 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 92)) ;
  GALGAS_lstring var_aliasLiteralIntegerInfixKey_4783 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 93)) ;
  GALGAS_lstring var_literalIntegerNewInfixKey_4903 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 94)), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 94)) ;
  GALGAS_lstring var_literalIntegerAliasInfixKey_5020 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 95)), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 95)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_newTypeProxy_5126 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mNewTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 96)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_oldTypeProxy_5215 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 97)) ;
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 98)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mNonEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 109)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictInfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 120)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mInfEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 131)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictSupOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 142)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSupEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 153)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAndOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 164)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mOrOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 175)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mXorOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 186)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mBooleanXorOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 197)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 208)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 219)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 230)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 241)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 252)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 263)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 274)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 285)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 296)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 307)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mLeftShiftOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 318)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mRightShiftOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 329)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 340)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mNotOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 341)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 342)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                       extensionMethod_typeAliasDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterInContext (defineExtensionMethod_typeAliasDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterAliasPrefixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasPrefixOperator (GALGAS_prefixOperatorMap & ioArgument_ioInfixOperatorMap,
                                       const GALGAS_lstring constinArgument_inNewTypeName,
                                       const GALGAS_lstring constinArgument_inAliasedTypeName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedTypeName.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 352)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 353)) ;
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 357)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'enterAliasInfixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasInfixOperator (GALGAS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                      const GALGAS_lstring constinArgument_inNewNewInfixKey,
                                      const GALGAS_lstring constinArgument_inAliasedAliasedInfixKey,
                                      const GALGAS_lstring constinArgument_inNewLiteralIntegerInfixKey,
                                      const GALGAS_lstring constinArgument_inAliasedLiteralIntegerInfixKey,
                                      const GALGAS_lstring constinArgument_inLiteralIntegerNewInfixKey,
                                      const GALGAS_lstring constinArgument_inLiteralIntegerAliasInfixKey,
                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inNewTypeProxy,
                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOldTypeProxy,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedAliasedInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 377)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_12890 ;
    GALGAS_infixOperatorDescription var_operation_12937 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedAliasedInfixKey, var_resultType_12890, var_operation_12937, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 378)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_12890.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_resultType_12890 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewNewInfixKey, var_resultType_12890, var_operation_12937, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 386)) ;
    }
  }
  const enumGalgasBool test_2 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedLiteralIntegerInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 392)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_13324 ;
    GALGAS_infixOperatorDescription var_operation_13371 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedLiteralIntegerInfixKey, var_resultType_13324, var_operation_13371, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 393)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_resultType_13324.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_resultType_13324 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewLiteralIntegerInfixKey, var_resultType_13324, var_operation_13371, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 401)) ;
    }
  }
  const enumGalgasBool test_4 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inLiteralIntegerAliasInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 407)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_13765 ;
    GALGAS_infixOperatorDescription var_operation_13812 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inLiteralIntegerAliasInfixKey, var_resultType_13765, var_operation_13812, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 408)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_resultType_13765.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_resultType_13765 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inLiteralIntegerNewInfixKey, var_resultType_13765, var_operation_13812, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 416)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typeAliasDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                   const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                         extensionMethod_typeAliasDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_semanticAnalysis (defineExtensionMethod_typeAliasDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@integerDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_integerDeclaration_location (const cPtr_abstractDeclaration * /* inObject */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                 extensionGetter_integerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_location (defineExtensionGetter_integerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@integerDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                             GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                             GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                     extensionMethod_integerDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_addExtension (defineExtensionMethod_integerDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@integerDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName_1957 = function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 40)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 40)) ;
  {
  const GALGAS_integerDeclaration temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_1957, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_1957, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)) COMMA_SOURCE_FILE ("type-integer.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                               extensionMethod_integerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInPrecedenceGraph (defineExtensionMethod_integerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@integerDeclaration keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)).getter_string (SOURCE_FILE ("type-integer.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                                           extensionGetter_integerDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@integerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName_3218 = callExtensionGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 61)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 61)) ;
  GALGAS_bigint var_min_3281 ;
  GALGAS_bigint var_max_3295 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_min_3281 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 66)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 66)) COMMA_SOURCE_FILE ("type-integer.galgas", 66)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 66)) ;
    var_max_3295 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 67)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) COMMA_SOURCE_FILE ("type-integer.galgas", 67)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) ;
  }else if (kBoolFalse == test_1) {
    var_min_3281 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 69)) ;
    var_max_3295 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)).left_shift_operation (object->mProperty_mSize COMMA_SOURCE_FILE ("type-integer.galgas", 70)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 70)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3218, GALGAS_typeKind::constructor_integer (var_min_3281, var_max_3295, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 75)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 73)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_3218, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_3218, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_3218, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 90)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                       extensionMethod_integerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInContext (defineExtensionMethod_integerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@integerDeclaration enterRoutinesInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                               extensionMethod_integerDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterRoutinesInContext (defineExtensionMethod_integerDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@integerDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                         extensionMethod_integerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_semanticAnalysis (defineExtensionMethod_integerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_5783 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 128)) ;
  GALGAS_lstring var_intIntOp_5904 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 130)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 134))  COMMA_SOURCE_FILE ("type-integer.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 139))  COMMA_SOURCE_FILE ("type-integer.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 136)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 144)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 144)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 141)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 149)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 149)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 146)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 154)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 154)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 151)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 159)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 159)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 162)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 166))  COMMA_SOURCE_FILE ("type-integer.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 163)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 171))  COMMA_SOURCE_FILE ("type-integer.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 168)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 176))  COMMA_SOURCE_FILE ("type-integer.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 173)) ;
    }
    {
    ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 178)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 185)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 194)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 194)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 199))  COMMA_SOURCE_FILE ("type-integer.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 196)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 204)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 204)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 201)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 209))  COMMA_SOURCE_FILE ("type-integer.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 206)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 214)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 214)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 211)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 219))  COMMA_SOURCE_FILE ("type-integer.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 216)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 224)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 224)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 221)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 229)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 229)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 226)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 234)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 234)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 239)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 239)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 236)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 245))  COMMA_SOURCE_FILE ("type-integer.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 250)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 250)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@infixObjectObjectOperatorDescription generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                            const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                            const GALGAS_location constinArgument_inOperatorLocation,
                                                                                            const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  GALGAS_bool test_0 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 270)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 270)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left_10680 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_10654_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_10654_1, var_left_10680, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 271)) ;
    GALGAS_bigint var_right_10745 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_10718_1 ; // Joker input parameter
    constinArgument_inRightOperand.method_literalInteger (joker_10718_1, var_right_10745, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue_10766 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_10680, var_right_10745, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_10766  COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempVariable (constinArgument_inResultType, constinArgument_inOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 280)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription.mSlotID,
                                                  extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_literal_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_11924 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 301)) ;
  GALGAS_lstring var_intLiteralOp_12049 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 303)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 307))  COMMA_SOURCE_FILE ("type-integer.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 304)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 312))  COMMA_SOURCE_FILE ("type-integer.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 309)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 317)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 317)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 314)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 322)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 322)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 319)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 327)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 327)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 332)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 332)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 335)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 339))  COMMA_SOURCE_FILE ("type-integer.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 336)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 344))  COMMA_SOURCE_FILE ("type-integer.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 349))  COMMA_SOURCE_FILE ("type-integer.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 346)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 356)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 356)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 353)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 361))  COMMA_SOURCE_FILE ("type-integer.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 358)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 366)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 366)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 371))  COMMA_SOURCE_FILE ("type-integer.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 368)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 376)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 376)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 381))  COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 386)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 386)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 383)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 391)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 391)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 388)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 396)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 396)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 393)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 401)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 401)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 398)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 407))  COMMA_SOURCE_FILE ("type-integer.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 412)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 412)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@integerObject_literal_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_16623 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_16589_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_16589_1, var_literalValue_16623, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)) ;
  GALGAS_bigint var_min_16677 ;
  GALGAS_bigint var_max_16698 ;
  GALGAS_bool joker_16700_2 ; // Joker input parameter
  GALGAS_uint joker_16700_1 ; // Joker input parameter
  extensionGetter_kind (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)).method_integer (var_min_16677, var_max_16698, joker_16700_2, joker_16700_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_16623.objectCompare (var_min_16677)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_16677.getter_string (SOURCE_FILE ("type-integer.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 436)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 436)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 436)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_16623.objectCompare (var_max_16698)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_16698.getter_string (SOURCE_FILE ("type-integer.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 438)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, constinArgument_inOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 440)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 443)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 441)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator.mSlotID,
                                                  extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_literal_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_18013 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 464)) ;
  GALGAS_lstring var_intLiteralOp_18138 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 466)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 466)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 470))  COMMA_SOURCE_FILE ("type-integer.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 467)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 475))  COMMA_SOURCE_FILE ("type-integer.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 472)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 480)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 480)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 477)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 485)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 485)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 482)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 490)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 490)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 487)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 495)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 495)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 492)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 498)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 502))  COMMA_SOURCE_FILE ("type-integer.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 499)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 507))  COMMA_SOURCE_FILE ("type-integer.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 504)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 512))  COMMA_SOURCE_FILE ("type-integer.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 509)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 519)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 519)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 516)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 524))  COMMA_SOURCE_FILE ("type-integer.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 521)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 526)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 534))  COMMA_SOURCE_FILE ("type-integer.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 531)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 539)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 539)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 536)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 544))  COMMA_SOURCE_FILE ("type-integer.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 541)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 549)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 549)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 546)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 554)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 554)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 551)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 559)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 559)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 556)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 564)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 564)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 561)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 570))  COMMA_SOURCE_FILE ("type-integer.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 567)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 575)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 575)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 572)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@literal_integerObject_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_22720 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_22686_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_22686_1, var_literalValue_22720, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 597)) ;
  GALGAS_bigint var_min_22775 ;
  GALGAS_bigint var_max_22796 ;
  GALGAS_bool joker_22798_2 ; // Joker input parameter
  GALGAS_uint joker_22798_1 ; // Joker input parameter
  extensionGetter_kind (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 598)).method_integer (var_min_22775, var_max_22796, joker_22798_2, joker_22798_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 598)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_22720.objectCompare (var_min_22775)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_22775.getter_string (SOURCE_FILE ("type-integer.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 600)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_22720.objectCompare (var_max_22796)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_22796.getter_string (SOURCE_FILE ("type-integer.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 602)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, constinArgument_inOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 604)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 607)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 605)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator.mSlotID,
                                                  extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@literalIntegerDeclaration location'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalIntegerDeclaration_location (const cPtr_abstractDeclaration * /* inObject */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 11)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalIntegerDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                 extensionGetter_literalIntegerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_location (defineExtensionGetter_literalIntegerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@literalIntegerDeclaration addExtension'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                    GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                    GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclaration * object = (const cPtr_literalIntegerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclaration) ;
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                     extensionMethod_literalIntegerDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_addExtension (defineExtensionMethod_literalIntegerDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerDeclaration enterInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclaration * object = (const cPtr_literalIntegerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclaration) ;
  GALGAS_lstring var_staticIntegerTypeName_1717 = function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)) ;
  {
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName_1717, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName_1717, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                               extensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInPrecedenceGraph (defineExtensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@literalIntegerDeclaration keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * /* inObject */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 40)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                                           extensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerDeclaration enterRoutinesInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                              const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                              GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                               extensionMethod_literalIntegerDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterRoutinesInContext (defineExtensionMethod_literalIntegerDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@literalIntegerDeclaration enterInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_enterInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_3347 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 62)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 62)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3347, GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("type-literal-integer.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 64)) ;
  }
  {
  routine_enterLiteralIntegerOperators (var_integerTypeName_3347, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 69)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                       extensionMethod_literalIntegerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInContext (defineExtensionMethod_literalIntegerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterLiteralIntegerOperators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                           GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_intIntOp_3901 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 82)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_4010 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)) ;
  ioArgument_ioContext.mProperty_mLiteralIntegerType = var_selfTypeProxy_4010 ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 89))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 86)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 94))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 91)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 99))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 96)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 104))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 114))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 111)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 120))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 117)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 125))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 122)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 130))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 127)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 132)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 145))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 142)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 150))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 147)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 155))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 152)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 160))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 157)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 165))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 162)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 170))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 167)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 175))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 172)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 180))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 177)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 185))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 182)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 190))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 187)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 196))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 193)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 201))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 198)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@literalIntegerDeclaration semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                        const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                        GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                        GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                         extensionMethod_literalIntegerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_semanticAnalysis (defineExtensionMethod_literalIntegerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@literal_literal_integerInfixOperation generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                   const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                   const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_9540 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_9509_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_9509_1, var_leftValue_9540, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 255)) ;
  GALGAS_bigint var_rightValue_9608 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_9576_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_9576_1, var_rightValue_9608, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 256)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_9622 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_9540, var_rightValue_9608, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 257)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_9622  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 258)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                  extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@literalStringDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalStringDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outLocation = object->mProperty_mLiteralStringTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalStringDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                 extensionGetter_literalStringDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclaration_location (defineExtensionGetter_literalStringDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@literalStringDeclaration addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                   GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                   GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  const GALGAS_literalStringDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                     extensionMethod_literalStringDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_addExtension (defineExtensionMethod_literalStringDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalStringDeclaration enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  GALGAS_lstring var_literalStringTypeName_1770 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mLiteralStringTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 33)) ;
  {
  const GALGAS_literalStringDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1770, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 34)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1770, function_llvmRegularTypeMangledNameFromName (GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                               extensionMethod_literalStringDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterInPrecedenceGraph (defineExtensionMethod_literalStringDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@literalStringDeclaration keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mProperty_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 41)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                                           extensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalStringDeclaration enterRoutinesInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                             const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                               extensionMethod_literalStringDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterRoutinesInContext (defineExtensionMethod_literalStringDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@literalStringDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                     const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mLiteralStringTypeName, GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("type-static-string.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                       extensionMethod_literalStringDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterInContext (defineExtensionMethod_literalStringDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@literalStringDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                         extensionMethod_literalStringDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_semanticAnalysis (defineExtensionMethod_literalStringDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@opaqueTypeDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_opaqueTypeDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  result_outLocation = object->mProperty_mOpaqueTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_opaqueTypeDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                 extensionGetter_opaqueTypeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_opaqueTypeDeclaration_location (defineExtensionGetter_opaqueTypeDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@opaqueTypeDeclaration addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  const GALGAS_opaqueTypeDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                     extensionMethod_opaqueTypeDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_addExtension (defineExtensionMethod_opaqueTypeDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@opaqueTypeDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  GALGAS_lstring var_typeName_2940 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOpaqueTypeName, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 64)) ;
  {
  const GALGAS_opaqueTypeDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_2940, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 65)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2940, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_typeName_2940, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                               extensionMethod_opaqueTypeDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_enterInPrecedenceGraph (defineExtensionMethod_opaqueTypeDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@opaqueTypeDeclaration keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  result_outRepresentation = GALGAS_string ("opaqueType $").add_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 73)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                                           extensionGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@opaqueTypeDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  GALGAS_uint var_flags_4214 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_4254 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4254.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4254.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("instantiable"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_flags_4214.operator_and (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 90)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4254.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 91)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 91)) ;
      }else if (kBoolFalse == test_1) {
        var_flags_4214 = var_flags_4214.operator_or (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4254.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_flags_4214.operator_and (function_copyableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_4254.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 97)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 97)) ;
        }else if (kBoolFalse == test_4) {
          var_flags_4214 = var_flags_4214.operator_or (function_copyableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 99)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 99)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4254.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 102)), GALGAS_string ("only @copyable and @instantiable attributes are allowed here"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 102)) ;
      }
    }
    enumerator_4254.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_4853 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
  GALGAS_allocaList var_allocaList_4883 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 107)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_4929 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-opaque-declaration.galgas", 108)) ;
  GALGAS_unifiedSymbolMap var_variableMap_5027 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_5087 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_variableMap_5027, var_universalMap_5087, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 109)) ;
  }
  GALGAS_staticStringMap joker_5392 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 122)) ;
  GALGAS_objectIR var_sizeExpressionIR_5545 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-opaque-declaration.galgas", 115)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mOpaqueTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)), object->mProperty_mOpaqueTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-opaque-declaration.galgas", 118)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-opaque-declaration.galgas", 120)), var_temporaries_4929, joker_5392, var_universalMap_5087, var_allocaList_4883, var_initInstructionGenerationList_4853, var_sizeExpressionIR_5545, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 114)) ;
  GALGAS_bool test_7 = GALGAS_bool (kIsStrictSup, var_allocaList_4883.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 128)).add_operation (var_initInstructionGenerationList_4853.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_7.boolEnum ()) {
    test_7 = var_sizeExpressionIR_5545.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 128)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
  }
  const enumGalgasBool test_8 = test_7.boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 129)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_bigint var_bitSize_5812 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_5791_1 ; // Joker input parameter
    var_sizeExpressionIR_5545.method_literalInteger (joker_5791_1, var_bitSize_5812, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 131)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, GALGAS_typeKind::constructor_opaque (var_bitSize_5812, var_flags_4214  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 132)) ;
    }
    {
    ioArgument_ioContext.mProperty_mConstructorMap.setter_insertKey (object->mProperty_mOpaqueTypeName, GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 139))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 137)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                       extensionMethod_opaqueTypeDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_enterInContext (defineExtensionMethod_opaqueTypeDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@opaqueTypeDeclaration enterRoutinesInContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                          const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                          GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                          GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                               extensionMethod_opaqueTypeDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_enterRoutinesInContext (defineExtensionMethod_opaqueTypeDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@opaqueTypeDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                         extensionMethod_opaqueTypeDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_semanticAnalysis (defineExtensionMethod_opaqueTypeDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterControlRegistersInContext'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterControlRegistersInContext (const GALGAS_controlRegisterDeclarationListAST constinArgument_inRegisterDeclarationListAST,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterDeclarationListAST enumerator_7318 (constinArgument_inRegisterDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_7318.hasCurrentObject ()) {
    extensionMethod_enterControlRegistersInContext (enumerator_7318.current (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    enumerator_7318.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_16745 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 438)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_16895 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 440)) ;
    cEnumerator_controlRegisterMap enumerator_16935 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_16935.hasCurrentObject ()) {
      var_firstLetterSet_16895.addAssign_operation (enumerator_16935.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 442)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 442))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 442)) ;
      enumerator_16935.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_17043 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_17077 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_controlRegisterMap enumerator_17124 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_17124.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_17077.objectCompare (enumerator_17124.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 447)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_17077 = enumerator_17124.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
        var_tableOfTypeString_17043.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_17077.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 449)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)).add_operation (var_currentFirstLetter_17077.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_17124.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_tableOfTypeString_17043.plusAssign_operation(function_linkForControlRegister (enumerator_17124.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)) ;
      }else if (kBoolFalse == test_2) {
        cEnumerator_range enumerator_17569 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_17124.current_mArraySize (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 454))), kENUMERATION_UP) ;
        while (enumerator_17569.hasCurrentObject ()) {
          var_tableOfTypeString_17043.plusAssign_operation(function_linkForControlRegister (enumerator_17124.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)).add_operation (enumerator_17569.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)) ;
          enumerator_17569.gotoNextObject () ;
        }
      }
      enumerator_17124.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_17734 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 460)), constinArgument_inControlRegisterMap, var_firstLetterSet_16895, var_tableOfTypeString_17043 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459))) ;
    GALGAS_bool joker_17986 ; // Joker input parameter
    var_typeDumpString_17734.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_16745, joker_17986, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 465)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_16745, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'controlRegisterDumpGenerationTemplate dump'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_PROJECT_5F_NAME,
                                                                              const GALGAS_controlRegisterMap & in_CONTROL_5F_REGISTER_5F_MAP,
                                                                              const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                              const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
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
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_MAP.getter_count (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1211_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1211 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1211.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1211.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_uint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).stringValue () ;
      result << "\">" ;
      result << enumerator_1211.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1211.hasNextObject ()) {
        result << " - " ;
      }
      index_1211_.increment () ;
      enumerator_1211.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">Address</td><td class=\"result_ti"
    "tle\">Value</td></tr>\n" ;
  GALGAS_uint index_1588_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_MAP.isValid ()) {
    cEnumerator_controlRegisterMap enumerator_1588 (in_CONTROL_5F_REGISTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1588.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td>" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1588.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "<a name=\"" ;
        result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "\">" ;
        result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "</a>" ;
      }else if (kBoolFalse == test_0) {
        GALGAS_uint index_1759_ (0) ;
        if (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)).isValid ()) {
          cEnumerator_uintlist enumerator_1759 (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)), kENUMERATION_UP) ;
          while (enumerator_1759.hasCurrentObject ()) {
            result << "<a name=\"" ;
            result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " [" ;
            result << enumerator_1759.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 86)).stringValue () ;
            result << "]\">" ;
            result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " [" ;
            result << enumerator_1759.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 86)).stringValue () ;
            result << "]</a><br/>" ;
            index_1759_.increment () ;
            enumerator_1759.gotoNextObject () ;
          }
        }
      }
      result << "</td><td class=\"address\">$" ;
      result << enumerator_1588.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 89)).stringValue () ;
      result << "</td><td class=\"address\">" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1588.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << enumerator_1588.current_mAddress (HERE).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 91)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        GALGAS_uint index_2053_ (0) ;
        if (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 93)).isValid ()) {
          cEnumerator_uintlist enumerator_2053 (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 93)), kENUMERATION_UP) ;
          while (enumerator_2053.hasCurrentObject ()) {
            result << enumerator_1588.current_mAddress (HERE).add_operation (enumerator_2053.current_mValue (HERE).multiply_operation (enumerator_1588.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).getter_bigint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).stringValue () ;
            index_2053_.increment () ;
            enumerator_2053.gotoNextObject () ;
          }
        }
      }
      result << "</td><td>" ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_1588.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 98)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "<table class=\"fields\"><tr>" ;
        result << function_fieldIndexColumns (enumerator_1588.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 100)).stringValue () ;
        result << "</tr><tr>" ;
        GALGAS_uint index_2346_ (0) ;
        if (enumerator_1588.current_mControlRegisterFieldList (HERE).isValid ()) {
          cEnumerator_controlRegisterFieldList enumerator_2346 (enumerator_1588.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
          while (enumerator_2346.hasCurrentObject ()) {
            result << "<td class=\"fields\" colspan=\"" ;
            result << enumerator_2346.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 103)).stringValue () ;
            result << "\">" ;
            result << enumerator_2346.current_mFieldName (HERE).stringValue () ;
            result << "</td>" ;
            index_2346_.increment () ;
            enumerator_2346.gotoNextObject () ;
          }
        }
        result << "</tr></table>" ;
      }else if (kBoolFalse == test_2) {
      }
      result << "</td></tr>\n" ;
      index_1588_.increment () ;
      enumerator_1588.gotoNextObject () ;
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
//                                          Function 'linkForControlRegister'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForControlRegister (const GALGAS_string & constinArgument_inControlRegisterName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 486)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 486)).add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 486)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 486)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForControlRegister [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_linkForControlRegister (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForControlRegister (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForControlRegister ("linkForControlRegister",
                                                                        functionWithGenericHeader_linkForControlRegister,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_linkForControlRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_19037 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 493))), kENUMERATION_DOWN) ;
  while (enumerator_19037.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_19037.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)) ;
    enumerator_19037.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'arrayIndexListFor'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist function_arrayIndexListFor (const GALGAS_uint & constinArgument_inSize,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist result_outResult ; // Returned variable
  result_outResult = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 501)) ;
  cEnumerator_range enumerator_19338 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 502))), kENUMERATION_UP) ;
  while (enumerator_19338.hasCurrentObject ()) {
    result_outResult.addAssign_operation (enumerator_19338.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 503)) ;
    enumerator_19338.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@globalConstantDeclaration location'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_globalConstantDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outLocation = object->mProperty_mConstantName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_globalConstantDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                 extensionGetter_globalConstantDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_location (defineExtensionGetter_globalConstantDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@globalConstantDeclaration addExtension'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                    GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                    GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  const GALGAS_globalConstantDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                     extensionMethod_globalConstantDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_addExtension (defineExtensionMethod_globalConstantDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@globalConstantDeclaration enterInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  {
  const GALGAS_globalConstantDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_typeName_3242 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mConstantTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 73)) ;
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, var_typeName_3242 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                               extensionMethod_globalConstantDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInPrecedenceGraph (defineExtensionMethod_globalConstantDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@globalConstantDeclaration keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 83)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                                           extensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@globalConstantDeclaration enterInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_4721 ;
  {
  GALGAS_unifiedSymbolMap joker_4660 ; // Joker input parameter
  routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 98)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 100)), joker_4660, var_universalMap_4721, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 96)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_annotationType_4790 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType_4790 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 107)) ;
  }else if (kBoolFalse == test_0) {
    var_annotationType_4790 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 109)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_5037 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-constant.galgas", 112)) ;
  GALGAS_instructionListIR var_instructionGenerationList_5095 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 113)) ;
  GALGAS_allocaList var_allocaList_5125 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 114)) ;
  GALGAS_objectIR var_expressionResult_5564 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 116)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 118)), var_annotationType_4790, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 121)), var_temporaries_5037, ioArgument_ioGlobalLiteralStringMap, var_universalMap_4721, var_allocaList_5125, var_instructionGenerationList_5095, var_expressionResult_5564, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 115)) ;
  GALGAS_objectIR var_result_5617 = function_checkAssignmentCompatibility (var_expressionResult_5564, var_annotationType_4790, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 130)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_5095.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_5125.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_result_5617, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 137)).operator_not (SOURCE_FILE ("declaration-global-constant.galgas", 137)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 138)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_result_5617, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 141)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                       extensionMethod_globalConstantDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInContext (defineExtensionMethod_globalConstantDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@globalConstantDeclaration enterRoutinesInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                              const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                              GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                               extensionMethod_globalConstantDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterRoutinesInContext (defineExtensionMethod_globalConstantDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_7130 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 162)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_7277 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 164)) ;
    cEnumerator_globalConstantMap enumerator_7316 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7316.hasCurrentObject ()) {
      var_firstLetterSet_7277.addAssign_operation (enumerator_7316.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 166)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 166))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 166)) ;
      enumerator_7316.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_7424 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_7458 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_7504 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7504.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_7458.objectCompare (enumerator_7504.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 171)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_7458 = enumerator_7504.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 172)) ;
        var_tableOfTypeString_7424.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_7458.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 173)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173)).add_operation (var_currentFirstLetter_7458.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173)) ;
      }
      var_tableOfTypeString_7424.plusAssign_operation(function_linkForGlobalConstant (enumerator_7504.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)) ;
      enumerator_7504.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_7900 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 178)), inArgument_inGlobalConstantMap, var_firstLetterSet_7277, var_tableOfTypeString_7424 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177))) ;
    GALGAS_bool joker_8144 ; // Joker input parameter
    var_typeDumpString_7900.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_7130, joker_8144, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 183)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_7130, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 185)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
      result << extensionGetter_key (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 204)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 204)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 204)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 204)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@globalConstantDeclaration semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                        const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                        GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                        GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                         extensionMethod_globalConstantDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_semanticAnalysis (defineExtensionMethod_globalConstantDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@moduleDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  {
  const GALGAS_moduleDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mModuleName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 126)) ;
  }
  GALGAS_lstring var_moduleTypeName_4662 = function_llvmRegularTypeMangledNameFromName (function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 127)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mModuleName, var_moduleTypeName_4662 COMMA_SOURCE_FILE ("declaration-module.galgas", 128)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                               extensionMethod_moduleDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_moduleDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@moduleDeclarationAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("module ").add_operation (object->mProperty_mModuleName.getter_string (SOURCE_FILE ("declaration-module.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 134)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                                           extensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@moduleDeclarationAST location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_moduleDeclarationAST_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  result_outLocation = object->mProperty_mModuleName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_moduleDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                 extensionGetter_moduleDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_moduleDeclarationAST_location (defineExtensionGetter_moduleDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@moduleDeclarationAST addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  const GALGAS_moduleDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                     extensionMethod_moduleDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_addExtension (defineExtensionMethod_moduleDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@moduleDeclarationAST enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mModuleMap.setter_insertKey (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 170)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                       extensionMethod_moduleDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_enterInContext (defineExtensionMethod_moduleDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@moduleDeclarationAST enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                               extensionMethod_moduleDeclarationAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_enterRoutinesInContext (defineExtensionMethod_moduleDeclarationAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@moduleDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  GALGAS_lstring var_moduleTypeName_8071 = function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 199)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_moduleType_8137 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_8071, inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 200)) ;
  GALGAS_constructorValue var_constructorValue_8286 ;
  constinArgument_inContext.getter_mConstructorMap (HERE).method_searchKey (var_moduleTypeName_8071, var_constructorValue_8286, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 201)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_8382 ;
  GALGAS_constructorSignature joker_8340 ; // Joker input parameter
  var_constructorValue_8286.method_structure (joker_8340, var_sortedOperandList_8382, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 202)) ;
  GALGAS_operandIRList var_initialValueList_8417 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 203)) ;
  cEnumerator_sortedOperandIRList enumerator_8466 (var_sortedOperandList_8382, kENUMERATION_UP) ;
  while (enumerator_8466.hasCurrentObject ()) {
    var_initialValueList_8417.addAssign_operation (enumerator_8466.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 205)) ;
    enumerator_8466.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mModuleList.addAssign_operation (object->mProperty_mModuleName.getter_string (HERE), var_moduleType_8137, var_initialValueList_8417  COMMA_SOURCE_FILE ("declaration-module.galgas", 207)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                         extensionMethod_moduleDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_semanticAnalysis (defineExtensionMethod_moduleDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@staticArrayAST location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_staticArrayAST_location (const cPtr_abstractDeclaration * inObject,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  result_result = object->mProperty_mStaticListName.getter_location (HERE) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticArrayAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                 extensionGetter_staticArrayAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticArrayAST_location (defineExtensionGetter_staticArrayAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@staticArrayAST keyRepresentationForErrorSignaling'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_staticArrayAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 33)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticArrayAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                                           extensionGetter_staticArrayAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticArrayAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticArrayAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@staticArrayAST addExtension'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                         GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                         GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  const GALGAS_staticArrayAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                     extensionMethod_staticArrayAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_addExtension (defineExtensionMethod_staticArrayAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@staticArrayAST enterInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  {
  const GALGAS_staticArrayAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 95)) ;
  }
  cEnumerator_staticArrayPropertyListAST enumerator_4040 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_4040.hasCurrentObject ()) {
    switch (enumerator_4040.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticArrayPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType * extractPtr_4237 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType *) (enumerator_4040.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_4237->mAssociatedValue0 ;
        GALGAS_lstring var_typeName_4127 = function_llvmRegularTypeMangledNameFromName (extractedValue_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 100)) ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_typeName_4127 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 101)) ;
        }
      }
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_function * extractPtr_4696 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_function *) (enumerator_4040.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_4696->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_4696->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentList enumerator_4374 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_4374.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_4398 = function_llvmRegularTypeMangledNameFromName (enumerator_4374.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 104)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_4398 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 105)) ;
          }
          enumerator_4374.gotoNextObject () ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_lstring var_returnTypeName_4574 = function_llvmRegularTypeMangledNameFromName (extractedValue_returnType, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 108)) ;
          {
          ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_returnTypeName_4574 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 109)) ;
          }
        }
      }
      break ;
    }
    enumerator_4040.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                               extensionMethod_staticArrayAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_enterInPrecedenceGraph (defineExtensionMethod_staticArrayAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@staticArrayAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                           GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  GALGAS_propertyList var_propertyList_5749 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 134)) ;
  GALGAS_propertyMap var_staticlistPropertyMap_5791 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 135)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_5853 = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("declaration-static-array.galgas", 136)) ;
  GALGAS_stringset var_propertyNameSet_5893 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 137)) ;
  GALGAS_lstring var_plmTypeName_5916 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 138)) ;
  cEnumerator_staticArrayPropertyListAST enumerator_6012 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  GALGAS_uint index_5975 ((uint32_t) 0) ;
  while (enumerator_6012.hasCurrentObject ()) {
    switch (enumerator_6012.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticArrayPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType * extractPtr_6692 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType *) (enumerator_6012.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_6692->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_propertyType_6119 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 142)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_5893.getter_hasKey (enumerator_6012.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 143)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 143)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_6012.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 144)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 144)) ;
        }
        var_propertyNameSet_5893.addAssign_operation (enumerator_6012.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 146))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 146)) ;
        var_propertyList_5749.addAssign_operation (enumerator_6012.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 147)), var_propertyType_6119  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 147)) ;
        GALGAS_objectIR var_objectIR_6420 = GALGAS_objectIR::constructor_property (var_propertyType_6119, enumerator_6012.current_mPropertyName (HERE), index_5975  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 148)) ;
        {
        var_universalMap_5853.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_6527 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_5853.ptr () ;
        callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6527, enumerator_6012.current_mPropertyName (HERE), GALGAS_bool (true), var_objectIR_6420, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 149)) ;
        }
        {
        var_staticlistPropertyMap_5791.setter_insertKey (enumerator_6012.current_mPropertyName (HERE), GALGAS_bool (true), var_objectIR_6420, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 150)) ;
        }
      }
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_function * extractPtr_8392 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_function *) (enumerator_6012.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_8392->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_8392->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_8392->mAssociatedValue2 ;
        GALGAS_lstring var_routineMangledName_6846 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_6012.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 157)) ;
        GALGAS_routineTypedSignature var_signature_7030 ;
        {
        routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_7030, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 163)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 165)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 167)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnType_7074 = temp_2 ;
        GALGAS_routineDescriptor var_descriptor_7225 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (extractedValue_mode  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 172)), var_signature_7030, var_returnType_7074, GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineCallingSheme::constructor_propertyIndirectCall (index_5975  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 177))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 169)) ;
        {
        var_universalMap_5853.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7475 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_5853.ptr () ;
        callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7475, enumerator_6012.current_mPropertyName (HERE), extensionGetter_routineSignature (extractedValue_formalArgs, enumerator_6012.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 181)), var_routineMangledName_6846, var_descriptor_7225, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 179)) ;
        }
        const enumGalgasBool test_4 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_routineMangledName_6846.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 185)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 185)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 185)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_routineMangledName_6846, GALGAS_typeKind::constructor_function (var_descriptor_7225  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 186)) ;
          }
        }
        GALGAS_unifiedTypeMap_2D_proxy var_propertyType_8012 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_routineMangledName_6846, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 193)) ;
        var_propertyList_5749.addAssign_operation (enumerator_6012.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 194)), var_propertyType_8012  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 194)) ;
        GALGAS_uint var_propertyIndex_8162 = var_staticlistPropertyMap_5791.getter_count (SOURCE_FILE ("declaration-static-array.galgas", 195)) ;
        {
        var_staticlistPropertyMap_5791.setter_insertKey (var_routineMangledName_6846, GALGAS_bool (true), GALGAS_objectIR::constructor_property (var_propertyType_8012, enumerator_6012.current_mPropertyName (HERE), var_propertyIndex_8162  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 196)) ;
        }
      }
      break ;
    }
    enumerator_6012.gotoNextObject () ;
    index_5975.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 139)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticlistMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_5749, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 203)) ;
  }
  GALGAS_typeKind var_kind_8536 = GALGAS_typeKind::constructor_structure (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 209)), var_staticlistPropertyMap_5791, var_universalMap_5853, var_propertyList_5749, GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 208)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmTypeName_5916, var_kind_8536, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 215)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                       extensionMethod_staticArrayAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_enterInContext (defineExtensionMethod_staticArrayAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@staticArrayAST enterRoutinesInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                   const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                   GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                   GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                               extensionMethod_staticArrayAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_enterRoutinesInContext (defineExtensionMethod_staticArrayAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@staticArrayAST semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                         extensionMethod_staticArrayAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_semanticAnalysis (defineExtensionMethod_staticArrayAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@extendStaticArrayDeclarationAST location'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_extendStaticArrayDeclarationAST_location (const cPtr_abstractDeclaration * inObject,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mStaticlistName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extendStaticArrayDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                 extensionGetter_extendStaticArrayDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extendStaticArrayDeclarationAST_location (defineExtensionGetter_extendStaticArrayDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@extendStaticArrayDeclarationAST keyRepresentationForErrorSignaling'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticlistName.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 33)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                                           extensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@extendStaticArrayDeclarationAST addExtension'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                          GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  const GALGAS_extendStaticArrayDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                     extensionMethod_extendStaticArrayDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_addExtension (defineExtensionMethod_extendStaticArrayDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@extendStaticArrayDeclarationAST enterInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_lstring var_nodeName_3941 = GALGAS_lstring::constructor_new (object->mProperty_mStaticlistName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).add_operation (ioArgument_ioGraph.getter_keyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)), object->mProperty_mStaticlistName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 90))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)) ;
  {
  const GALGAS_extendStaticArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3941, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 92)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3941, object->mProperty_mStaticlistName COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 94)) ;
  }
  cEnumerator_extendStaticArrayExpressionListAST enumerator_4276 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_4276.hasCurrentObject ()) {
    switch (enumerator_4276.current_mExpression (HERE).enumValue ()) {
    case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_4410 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_4276.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_4410->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), var_nodeName_3941, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 99)) ;
      }
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_4663 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_4276.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_4663->mAssociatedValue1 ;
        cEnumerator_routineFormalArgumentList enumerator_4527 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_4527.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_4551 = function_llvmRegularTypeMangledNameFromName (enumerator_4527.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 102)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_4551 COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 103)) ;
          }
          enumerator_4527.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4276.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                               extensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@extendStaticArrayDeclarationAST enterInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                            const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                            GALGAS_semanticContext & ioArgument_ioContext,
                                                                            GALGAS_staticlistValues_5F_listMap & ioArgument_ioStaticListValueMap,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_propertyList var_staticArrayPropertyList_5620 ;
  ioArgument_ioContext.getter_mStaticlistMap (HERE).method_searchKey (object->mProperty_mStaticlistName, var_staticArrayPropertyList_5620, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 123)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_staticArrayPropertyList_5620.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 124)).objectCompare (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 124)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStaticlistName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 125)), var_staticArrayPropertyList_5620.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 127)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 127)), fixItArray1  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 125)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_staticValue_5869 = GALGAS_string ("{") ;
    cEnumerator_extendStaticArrayExpressionListAST enumerator_5918 (object->mProperty_mExpressions, kENUMERATION_UP) ;
    cEnumerator_propertyList enumerator_5955 (var_staticArrayPropertyList_5620, kENUMERATION_UP) ;
    while (enumerator_5918.hasCurrentObject () && enumerator_5955.hasCurrentObject ()) {
      switch (enumerator_5918.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_7754 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_5918.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7754->mAssociatedValue0 ;
          const enumGalgasBool test_2 = enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 133)).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 133)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray3  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 134)) ;
          }else if (kBoolFalse == test_2) {
            GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6454 ;
            {
            GALGAS_unifiedSymbolMap joker_6385 ; // Joker input parameter
            routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 138)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 140)), joker_6385, var_universalMap_6454, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 136)) ;
            }
            GALGAS_semanticTemporariesStruct var_temporaries_6515 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-extend-static-array.galgas", 144)) ;
            GALGAS_instructionListIR var_instructionGenerationList_6581 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 145)) ;
            GALGAS_allocaList var_allocaList_6619 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 146)) ;
            GALGAS_objectIR var_expressionResult_7142 ;
            callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_exp.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 148)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 150)), enumerator_5955.current_mType (HERE), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 153)), var_temporaries_6515, ioArgument_ioGlobalLiteralStringMap, var_universalMap_6454, var_allocaList_6619, var_instructionGenerationList_6581, var_expressionResult_7142, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 147)) ;
            GALGAS_objectIR var_result_7219 = function_checkAssignmentCompatibility (var_expressionResult_7142, enumerator_5955.current_mType (HERE), enumerator_5918.current_mEndOfExpression (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 162)) ;
            GALGAS_bool test_4 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_6581.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 168)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            if (kBoolTrue != test_4.boolEnum ()) {
              test_4 = GALGAS_bool (kIsStrictSup, var_allocaList_6619.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 168)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            }
            GALGAS_bool test_5 = test_4 ;
            if (kBoolTrue != test_5.boolEnum ()) {
              test_5 = extensionGetter_isStatic (var_result_7219, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 168)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 168)) ;
            }
            const enumGalgasBool test_6 = test_5.boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("source expression cannot be statically computed"), fixItArray7  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 169)) ;
            }
            var_staticValue_5869.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 172)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 172)).add_operation (extensionGetter_llvmName (var_expressionResult_7142, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 172)) ;
          }
        }
        break ;
      case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_10589 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_5918.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_10589->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_10589->mAssociatedValue1 ;
          const enumGalgasBool test_8 = enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 175)).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 175)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 175)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray9  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 176)) ;
          }else if (kBoolFalse == test_8) {
            GALGAS_routineDescriptor var_functionDescriptor_8035 ;
            enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 178)).method_function (var_functionDescriptor_8035, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 178)) ;
            GALGAS_lstring var_argumentSignature_8068 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 179)) ;
            GALGAS_lstring var_candidateRoutineLLVMName_8275 ;
            GALGAS_routineDescriptor var_routineDescriptor_8329 ;
            GALGAS_location var_functionDefinitionLocation_8373 ;
            extensionMethod_searchKey (ioArgument_ioContext.getter_mRoutineMapForContext (HERE), extractedValue_functionName, var_argumentSignature_8068, var_candidateRoutineLLVMName_8275, var_routineDescriptor_8329, var_functionDefinitionLocation_8373, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 180)) ;
            GALGAS_bool var_candidateIsPublic_8417 = var_routineDescriptor_8329.getter_mIsPublic (HERE) ;
            GALGAS_routineKind var_candidateRoutineKind_8482 = var_routineDescriptor_8329.getter_mRoutineKind (HERE) ;
            GALGAS_mode var_candidateMode_8543 = extensionGetter_executionMode (var_routineDescriptor_8329.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 189)) ;
            GALGAS_routineTypedSignature var_candidateSignature_8660 = var_routineDescriptor_8329.getter_mSignature (HERE) ;
            GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnType_8725 = var_routineDescriptor_8329.getter_mReturnType (HERE) ;
            const enumGalgasBool test_10 = var_candidateIsPublic_8417.operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 193)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string var_declarationFile_8862 = var_functionDefinitionLocation_8373.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 194)) ;
              GALGAS_string var_invocationFile_8929 = extractedValue_functionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 195)) ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_invocationFile_8929.objectCompare (var_declarationFile_8862)).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 197)), GALGAS_string ("this function is not public"), fixItArray12  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 197)) ;
              }
            }
            const enumGalgasBool test_13 = var_candidateRoutineKind_8482.getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 200)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 200)).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 201)), GALGAS_string ("this routine is not a function"), fixItArray14  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 201)) ;
            }
            GALGAS_mode var_currentMode_9271 = extensionGetter_executionMode (var_functionDescriptor_8035.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 203)) ;
            const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_currentMode_9271.objectCompare (var_candidateMode_8543)).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 205)), GALGAS_string ("this function runs in ").add_operation (extensionGetter_string (var_candidateMode_8543, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)).add_operation (GALGAS_string (" mode, but "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)).add_operation (extensionGetter_string (var_currentMode_9271, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)).add_operation (GALGAS_string (" is required"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)), fixItArray16  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)) ;
            }
            GALGAS_bool test_17 = GALGAS_bool (kIsEqual, var_functionDescriptor_8035.getter_mReturnType (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 207)))) ;
            if (kBoolTrue == test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsNotEqual, var_candidateReturnType_8725.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 207)))) ;
            }
            const enumGalgasBool test_18 = test_17.boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 208)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnType_8725.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 208)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 208)), fixItArray19  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 208)) ;
            }else if (kBoolFalse == test_18) {
              GALGAS_bool test_20 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8035.getter_mReturnType (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 209)))) ;
              if (kBoolTrue == test_20.boolEnum ()) {
                test_20 = GALGAS_bool (kIsEqual, var_candidateReturnType_8725.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 209)))) ;
              }
              const enumGalgasBool test_21 = test_20.boolEnum () ;
              if (kBoolTrue == test_21) {
                TC_Array <C_FixItDescription> fixItArray22 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), GALGAS_string ("this function should return no object"), fixItArray22  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)) ;
              }
            }
            const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8035.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 212)).objectCompare (var_candidateSignature_8660.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 212)))).boolEnum () ;
            if (kBoolTrue == test_23) {
              TC_Array <C_FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 213)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_8660.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 214)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 214)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 214)).add_operation (var_functionDescriptor_8035.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 215)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 214)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)), fixItArray24  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 213)) ;
            }else if (kBoolFalse == test_23) {
              cEnumerator_routineTypedSignature enumerator_10233 (var_functionDescriptor_8035.getter_mSignature (HERE), kENUMERATION_UP) ;
              cEnumerator_routineTypedSignature enumerator_10266 (var_candidateSignature_8660, kENUMERATION_UP) ;
              while (enumerator_10233.hasCurrentObject () && enumerator_10266.hasCurrentObject ()) {
                const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_10233.current (HERE).getter_mType (HERE).objectCompare (enumerator_10266.current (HERE).getter_mType (HERE))).boolEnum () ;
                if (kBoolTrue == test_25) {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (enumerator_10266.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 219)), GALGAS_string ("argument type should be $").add_operation (enumerator_10233.current (HERE).getter_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 219)), fixItArray26  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 219)) ;
                }
                enumerator_10233.gotoNextObject () ;
                enumerator_10266.gotoNextObject () ;
              }
            }
            var_staticValue_5869.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 223)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 223)).add_operation (function_llvmNameForFunction (var_candidateRoutineLLVMName_8275.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 223)) ;
          }
        }
        break ;
      }
      if (enumerator_5918.hasNextObject () && enumerator_5955.hasNextObject ()) {
        var_staticValue_5869.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 227)) ;
      }
      enumerator_5918.gotoNextObject () ;
      enumerator_5955.gotoNextObject () ;
    }
    var_staticValue_5869.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 229)) ;
    ioArgument_ioStaticListValueMap.addAssign_operation (object->mProperty_mStaticlistName.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 230)), var_staticValue_5869  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 230)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                       extensionMethod_extendStaticArrayDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_enterInContext (defineExtensionMethod_extendStaticArrayDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@extendStaticArrayDeclarationAST enterRoutinesInContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                                    GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                               extensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (defineExtensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extendStaticArrayDeclarationAST semanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                              const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_stringset var_invokedFunctionSet_12056 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-extend-static-array.galgas", 261)) ;
  cEnumerator_extendStaticArrayExpressionListAST enumerator_12102 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_12102.hasCurrentObject ()) {
    switch (enumerator_12102.current_mExpression (HERE).enumValue ()) {
    case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_12174 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_12102.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_12174->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_12456 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_12102.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_functionName = extractPtr_12456->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_12456->mAssociatedValue1 ;
        GALGAS_lstring var_routineMangledName_12315 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 267)) ;
        var_invokedFunctionSet_12056.addAssign_operation (var_routineMangledName_12315.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 272))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 272)) ;
      }
      break ;
    }
    enumerator_12102.gotoNextObject () ;
  }
  cMapElement_staticArrayMap * objectArray_12477 = (cMapElement_staticArrayMap *) ioArgument_ioTemporaries.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 275)) ;
  if (NULL != objectArray_12477) {
      macroValidSharedObject (objectArray_12477, cMapElement_staticArrayMap) ;
    objectArray_12477->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12056, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 276)) ;
  }else{
    {
    ioArgument_ioTemporaries.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12056, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 278)) ;
    }
  }
  cMapElement_staticArrayMap * objectArray_12689 = (cMapElement_staticArrayMap *) ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 280)) ;
  if (NULL != objectArray_12689) {
      macroValidSharedObject (objectArray_12689, cMapElement_staticArrayMap) ;
    objectArray_12689->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12056, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 281)) ;
  }else{
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12056, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 283)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                         extensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_semanticAnalysis (defineExtensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_calleeKindIR function_checkMode (const GALGAS_mode & constinArgument_inCallerMode,
                                        const GALGAS_mode & constinArgument_inCalleeMode,
                                        const GALGAS_routineKind & constinArgument_inRoutineKind,
                                        const GALGAS_location & constinArgument_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result_outResult ; // Returned variable
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 63)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_safeFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 64)) ;
      }else if (kBoolFalse == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_safeFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 66)) ;
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 69)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 70)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_bool test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 71)))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 71)))) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 72)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)), fixItArray4  COMMA_SOURCE_FILE ("logical-modes.galgas", 74)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 77)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outResult = GALGAS_calleeKindIR::constructor_primitiveFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 78)) ;
      }else if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a primitive cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)), fixItArray6  COMMA_SOURCE_FILE ("logical-modes.galgas", 80)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 83)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 84)) ;
      }else if (kBoolFalse == test_7) {
        GALGAS_bool test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 85)))) ;
        if (kBoolTrue != test_8.boolEnum ()) {
          test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_guardMode (SOURCE_FILE ("logical-modes.galgas", 85)))) ;
        }
        const enumGalgasBool test_9 = test_8.boolEnum () ;
        if (kBoolTrue == test_9) {
          result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 86)) ;
        }else if (kBoolFalse == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)), fixItArray10  COMMA_SOURCE_FILE ("logical-modes.galgas", 88)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      GALGAS_bool var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (constinArgument_inCalleeMode)) ;
      const enumGalgasBool test_11 = var_ok_3103.operator_not (SOURCE_FILE ("logical-modes.galgas", 92)).boolEnum () ;
      if (kBoolTrue == test_11) {
        switch (constinArgument_inCallerMode.enumValue ()) {
        case GALGAS_mode::kNotBuilt:
          break ;
        case GALGAS_mode::kEnum_userMode:
          {
            var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 95)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_sectionMode:
          {
            GALGAS_bool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 97)))) ;
            if (kBoolTrue != test_12.boolEnum ()) {
              test_12 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 97)))) ;
            }
            var_ok_3103 = test_12 ;
          }
          break ;
        case GALGAS_mode::kEnum_serviceMode:
          {
            GALGAS_bool test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            if (kBoolTrue != test_13.boolEnum ()) {
              test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            }
            GALGAS_bool test_14 = test_13 ;
            if (kBoolTrue != test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            }
            var_ok_3103 = test_14 ;
          }
          break ;
        case GALGAS_mode::kEnum_primitiveMode:
          {
            GALGAS_bool test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            if (kBoolTrue != test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            GALGAS_bool test_16 = test_15 ;
            if (kBoolTrue != test_16.boolEnum ()) {
              test_16 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            GALGAS_bool test_17 = test_16 ;
            if (kBoolTrue != test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            var_ok_3103 = test_17 ;
          }
          break ;
        case GALGAS_mode::kEnum_guardMode:
          {
            GALGAS_bool test_18 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            if (kBoolTrue != test_18.boolEnum ()) {
              test_18 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            GALGAS_bool test_19 = test_18 ;
            if (kBoolTrue != test_19.boolEnum ()) {
              test_19 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            GALGAS_bool test_20 = test_19 ;
            if (kBoolTrue != test_20.boolEnum ()) {
              test_20 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            var_ok_3103 = test_20 ;
          }
          break ;
        case GALGAS_mode::kEnum_panicMode:
        case GALGAS_mode::kEnum_initMode:
          {
            GALGAS_bool test_21 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 105)))) ;
            if (kBoolTrue != test_21.boolEnum ()) {
              test_21 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 105)))) ;
            }
            var_ok_3103 = test_21 ;
          }
          break ;
        case GALGAS_mode::kEnum_bootMode:
          {
          }
          break ;
        case GALGAS_mode::kEnum_safeMode:
          {
            var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 108)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_anyMode:
          {
          }
          break ;
        }
      }
      const enumGalgasBool test_22 = var_ok_3103.operator_not (SOURCE_FILE ("logical-modes.galgas", 112)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a func ").add_operation (extensionGetter_string (constinArgument_inCalleeMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (GALGAS_string (" cannot be called from "), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), fixItArray23  COMMA_SOURCE_FILE ("logical-modes.galgas", 113)) ;
      }
      result_outResult = GALGAS_calleeKindIR::constructor_function (SOURCE_FILE ("logical-modes.galgas", 116)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkMode [5] = {
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkMode (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_mode operand0 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_mode operand1 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_routineKind operand2 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_checkMode (operand0,
                             operand1,
                             operand2,
                             operand3,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkMode ("checkMode",
                                                           functionWithGenericHeader_checkMode,
                                                           & kTypeDescriptor_GALGAS_calleeKindIR,
                                                           4,
                                                           functionArgs_checkMode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'panicModeName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_panicModeName (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("panic") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GALGAS_string gOnceFunctionResult_panicModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_panicModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicModeName (NULL,
                                                           releaseOnceFunctionResult_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicModeName (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateSectionAndSafeDispatcher'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSectionAndSafeDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                               const GALGAS_string constinArgument_inTargetName,
                                               const GALGAS_string constinArgument_inSectionInvocationScheme,
                                               GALGAS_string & ioArgument_ioAssemblerCode,
                                               const GALGAS__32_stringlist constinArgument_inSectionAndSafeList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_stringlist enumerator_9606 (constinArgument_inSectionAndSafeList, kENUMERATION_UP) ;
  GALGAS_uint index_9552 ((uint32_t) 0) ;
  while (enumerator_9606.hasCurrentObject ()) {
    GALGAS_string var_s_9625 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 267)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 267)).add_operation (GALGAS_string ("-section-invocation.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
    var_s_9625 = var_s_9625.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_9606.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 269)) ;
    var_s_9625 = var_s_9625.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_9606.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 270)) ;
    var_s_9625 = var_s_9625.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_9552.getter_string (SOURCE_FILE ("declaration-svc.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 271)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_9625, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 272)) ;
    enumerator_9606.gotoNextObject () ;
    index_9552.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 264)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 276)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 276)).add_operation (GALGAS_string ("-section-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 274)) ;
  cEnumerator__32_stringlist enumerator_10267 (constinArgument_inSectionAndSafeList, kENUMERATION_UP) ;
  GALGAS_uint index_10213 ((uint32_t) 0) ;
  while (enumerator_10267.hasCurrentObject ()) {
    GALGAS_string var_s_10286 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)).add_operation (GALGAS_string ("-section-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 279)) ;
    var_s_10286 = var_s_10286.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_10267.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)) ;
    var_s_10286 = var_s_10286.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_10267.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
    var_s_10286 = var_s_10286.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_10213.getter_string (SOURCE_FILE ("declaration-svc.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 285)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_10286, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)) ;
    enumerator_10267.gotoNextObject () ;
    index_10213.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 278)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 291)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 291)).add_operation (GALGAS_string ("-section-dispatcher-code.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 289)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 293)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 294)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generatePrimitiveAndServiceDispatcher'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePrimitiveAndServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                                    const GALGAS_string constinArgument_inTargetName,
                                                    GALGAS_string & ioArgument_ioAssemblerCode,
                                                    const GALGAS__32_stringlist constinArgument_inServiceList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_stringlist enumerator_11398 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_11368 ((uint32_t) 0) ;
  while (enumerator_11398.hasCurrentObject ()) {
    GALGAS_string var_s_11417 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 306)) ;
    var_s_11417 = var_s_11417.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_11398.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 307)) ;
    var_s_11417 = var_s_11417.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_11368.getter_string (SOURCE_FILE ("declaration-svc.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 308)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_11417, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 309)) ;
    enumerator_11398.gotoNextObject () ;
    index_11368.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  cEnumerator__32_stringlist enumerator_11843 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_11803 ((uint32_t) 0) ;
  while (enumerator_11843.hasCurrentObject ()) {
    GALGAS_string var_s_11862 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 313)) ;
    var_s_11862 = var_s_11862.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_11843.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 314)) ;
    var_s_11862 = var_s_11862.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_11803.getter_string (SOURCE_FILE ("declaration-svc.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 315)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_11862, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 316)) ;
    enumerator_11843.gotoNextObject () ;
    index_11803.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 312)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'initSemanticAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initSemanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                   const GALGAS_lbigint constinArgument_inPriority,
                                   const GALGAS_mode constinArgument_inCurrentMode,
                                   const GALGAS_lstringlist constinArgument_inRequiredByProcList,
                                   const GALGAS_instructionListAST constinArgument_inInstructionListAST,
                                   const GALGAS_location constinArgument_inEndOfInitDeclaration,
                                   GALGAS_allocaList & outArgument_outAllocaList,
                                   GALGAS_instructionListIR & outArgument_outInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAllocaList.drop () ; // Release 'out' argument
  outArgument_outInstructionGenerationList.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineNameForInvocationGraph_5574 = function_initNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inPriority, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 138)) ;
  {
  ioArgument_ioTemporaries.mProperty_mInitRoutinePriorityMap.setter_insertKey (var_routineNameForInvocationGraph_5574, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 139)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_5574.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-init.galgas", 141)).operator_not (SOURCE_FILE ("declaration-init.galgas", 141)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_5574, var_routineNameForInvocationGraph_5574, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 142)) ;
    }
  }
  cEnumerator_lstringlist enumerator_6021 (constinArgument_inRequiredByProcList, kENUMERATION_UP) ;
  while (enumerator_6021.hasCurrentObject ()) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (enumerator_6021.current_mValue (HERE), var_routineNameForInvocationGraph_5574 COMMA_SOURCE_FILE ("declaration-init.galgas", 148)) ;
    }
    enumerator_6021.gotoNextObject () ;
  }
  GALGAS_unifiedSymbolMap var_variableMap_6337 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6397 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_initMode (SOURCE_FILE ("declaration-init.galgas", 156)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-init.galgas", 158)), var_variableMap_6337, var_universalMap_6397, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 154)) ;
  }
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 163)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 164)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_5574, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6337, var_universalMap_6397, outArgument_outAllocaList, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 165)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6397.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 181)) ;
  var_variableMap_6337.method_checkAutomatonStates (constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 182)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredProcedureDeclarationListAST enumerator_2388 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2388.hasCurrentObject ()) {
    GALGAS_lstring var_argumentSignature_2417 = extensionGetter_routineSignature (enumerator_2388.current (HERE).getter_mFormalArgumentList (HERE), enumerator_2388.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
    const enumGalgasBool test_0 = extensionGetter_hasKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), enumerator_2388.current (HERE).getter_mName (HERE), var_argumentSignature_2417, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 65)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 65)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2388.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 66)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_routineDescriptor var_routineDescriptor_2845 ;
      GALGAS_location var_routineLocation_2884 ;
      GALGAS_lstring joker_2794 ; // Joker input parameter
      extensionMethod_searchKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), enumerator_2388.current (HERE).getter_mName (HERE), var_argumentSignature_2417, joker_2794, var_routineDescriptor_2845, var_routineLocation_2884, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 68)) ;
      GALGAS_bool var_isExported_2913 = var_routineDescriptor_2845.getter_mExported (HERE) ;
      GALGAS_mode var_mode_2958 = extensionGetter_executionMode (var_routineDescriptor_2845.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 76)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_mode_2958.objectCompare (enumerator_2388.current (HERE).getter_mExecutionMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("required mode should be '").add_operation (extensionGetter_string (enumerator_2388.current (HERE).getter_mExecutionMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
      }
      GALGAS_bool test_4 = enumerator_2388.current (HERE).getter_mIsExported (HERE) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_isExported_2913.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 82)) ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 85))) ;
        inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)), fixItArray6  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 83)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_7 = var_isExported_2913 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = enumerator_2388.current (HERE).getter_mIsExported (HERE).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 86)) ;
        }
        const enumGalgasBool test_8 = test_7.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 87)) ;
        }
      }
    }
    enumerator_2388.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'guardSemanticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_guardSemanticAnalysis (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 169)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 169)) ;
  }
  GALGAS_lstring var_guardMangledName_6153 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 168)) ;
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_guardMangledName_6153.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 174)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 174)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_guardMangledName_6153, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
    }
  }
  GALGAS_unifiedSymbolMap var_variableMap_6738 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6798 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 183)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 185)), var_variableMap_6738, var_universalMap_6798, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_6860 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 189)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_6919 ;
  GALGAS_allocaList var_allocaList_6944 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 191)) ;
  GALGAS_instructionListIR var_instructionGenerationList_6996 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  switch (constinArgument_inGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_7099 = GALGAS_lstring::constructor_new (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_7181 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)) ;
      var_allocaList_6944.addAssign_operation (var_resultVarName_7099.getter_string (HERE), extensionGetter_llvmTypeName (var_resultType_7181.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
      {
      var_universalMap_6798.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_7358 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6798.ptr () ;
      callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7358, var_resultVarName_7099, GALGAS_objectIR::constructor_localVariableReference (var_resultType_7181, var_resultVarName_7099  COMMA_SOURCE_FILE ("declaration-guard.galgas", 201)), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 202)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 199)) ;
      }
      {
      var_variableMap_6738.setter_insertOutputFormalArgument (var_resultVarName_7099, var_resultType_7181, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_resultType_7181, var_resultVarName_7099  COMMA_SOURCE_FILE ("declaration-guard.galgas", 209)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 205)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6738, var_universalMap_6798, var_formalArguments_6860, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 214)) ;
      }
      var_convenienceGuardGenerationIR_6919 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 221)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 229)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_allocaList_6944, var_instructionGenerationList_6996, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 223)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_9844 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_9844->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6738, var_universalMap_6798, var_formalArguments_6860, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 239)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 251)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_convenienceGuardGenerationIR_6919, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 247)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 265)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_allocaList_6944, var_instructionGenerationList_6996, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 259)) ;
    }
    break ;
  }
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6798.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 276)) ;
  var_variableMap_6738.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 277)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR.setter_insertKey (var_guardMangledName_6153, var_formalArguments_6860, constinArgument_inSelfType, var_convenienceGuardGenerationIR_6919, var_allocaList_6944, var_instructionGenerationList_6996, constinArgument_inWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 280)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@simpleCallInstructionAST baseGuardAnalyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       const GALGAS_mode /* constinArgument_inMode */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
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
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                                        const GALGAS_mode constinArgument_inMode,
                                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                        GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                        GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallInstructionAST * object = (const cPtr_complexCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_12460 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 333)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_12521 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 334)) ;
  GALGAS_objectIR var_currentObject_13086 ;
  GALGAS_string var_globalVariableReceiverName_13157 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("declaration-guard.galgas", 337)), GALGAS_bool (false), GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 342)), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12460, var_baseGuardInstructionGenerationList_12521, var_currentObject_13086, var_globalVariableReceiverName_13157, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 335)) ;
  const enumGalgasBool test_0 = var_currentObject_13086.getter_isPossibleFunction (SOURCE_FILE ("declaration-guard.galgas", 353)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 353)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-guard.galgas", 354)), GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 354)) ;
    outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_objectIR var_receiver_13381 ;
    GALGAS_lstring var_functionName_13412 ;
    var_currentObject_13086.method_possibleFunction (var_receiver_13381, var_functionName_13412, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 356)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14080 ;
    GALGAS_calleeKindIR var_routineKind_14136 ;
    GALGAS_lstring var_functionMangledName_14195 ;
    GALGAS_lstring var_functionNameForGeneration_14273 ;
    GALGAS_unifiedTypeMap_2D_proxy var_returnedType_14330 ;
    {
    routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, GALGAS_bool (false), GALGAS_bool (true), var_receiver_13381, var_functionName_13412, object->mProperty_mArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12460, var_baseGuardInstructionGenerationList_12521, var_effectiveParameterListIR_14080, var_routineKind_14136, var_functionMangledName_14195, var_functionNameForGeneration_14273, var_returnedType_14330, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 357)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedType_14330.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 379)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_13412.getter_location (SOURCE_FILE ("declaration-guard.galgas", 380)), GALGAS_string ("<< internal guard error >>"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 380)) ;
    }
    outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_12460, var_baseGuardInstructionGenerationList_12521, var_functionMangledName_14195.getter_string (HERE), var_effectiveParameterListIR_14080  COMMA_SOURCE_FILE ("declaration-guard.galgas", 383)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 44)) ;
  GALGAS_lstring var_typeName_2042 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2042 COMMA_SOURCE_FILE ("expression-convert.galgas", 46)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 54)) ;
  GALGAS_lstring var_typeName_2686 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2686 COMMA_SOURCE_FILE ("expression-convert.galgas", 56)) ;
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
//                      Overriding extension method '@convertExpressionAST analyzeExpressionNew'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                       const GALGAS_bool constinArgument_inGuard,
                                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
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
  GALGAS_objectIR var_expressionResultPossibleReference_4465 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4465, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 80)) ;
  GALGAS_objectIR var_expressionResult_4626 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4465, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 97)), var_expressionResult_4626, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 94)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 101)).operator_not (SOURCE_FILE ("expression-convert.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 102)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 102)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 102)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 102)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4831 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 105)) ;
  const enumGalgasBool test_2 = var_resultType_4831.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 107)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 107)).operator_not (SOURCE_FILE ("expression-convert.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 108)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 108)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_expressionResult_4626, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 109)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 109)).operator_not (SOURCE_FILE ("expression-convert.galgas", 109)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 110)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_5226 ;
      GALGAS_bigint var_maxSource_5245 ;
      GALGAS_bool joker_5247_2 ; // Joker input parameter
      GALGAS_uint joker_5247_1 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4626, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 112)).method_integer (var_minSource_5226, var_maxSource_5245, joker_5247_2, joker_5247_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 112)) ;
      GALGAS_bigint var_minTarget_5300 ;
      GALGAS_bigint var_maxTarget_5319 ;
      GALGAS_bool joker_5321_2 ; // Joker input parameter
      GALGAS_uint joker_5321_1 ; // Joker input parameter
      var_resultType_4831.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 113)).method_integer (var_minTarget_5300, var_maxTarget_5319, joker_5321_2, joker_5321_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 113)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5300.objectCompare (var_minSource_5226)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5319.objectCompare (var_maxSource_5245)) ;
      }
      GALGAS_bool var_alwaysPossible_5347 = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible_5347.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 116)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-convert.galgas", 116)) ;
      }
      {
      routine_getNewTempVariable (var_resultType_4831, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 118)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4626  COMMA_SOURCE_FILE ("expression-convert.galgas", 120))  COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      }else if (kBoolFalse == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4626, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 125))  COMMA_SOURCE_FILE ("expression-convert.galgas", 125)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                             extensionMethod_convertExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_analyzeExpressionNew (defineExtensionMethod_convertExpressionAST_analyzeExpressionNew, NULL) ;

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
  GALGAS_uint var_staticStringIndex_7288 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 162)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 162)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 162)), var_staticStringIndex_7288, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 161)) ;
  }
  GALGAS_string var_lbl_7302 = object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).getter_string (SOURCE_FILE ("expression-convert.galgas", 165)) ;
  GALGAS_string var_convertMinOkLabel_7363 = GALGAS_string ("min.").add_operation (var_lbl_7302, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)) ;
  GALGAS_string var_convertMaxOkLabel_7410 = GALGAS_string ("max.").add_operation (var_lbl_7302, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 167)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 167)) ;
  GALGAS_string var_convertFailLabel_7456 = GALGAS_string ("fail.").add_operation (var_lbl_7302, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)) ;
  GALGAS_string var_compareMinVar_7493 = GALGAS_string ("cmp.").add_operation (var_lbl_7302, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GALGAS_string var_compareMaxVar_7541 = GALGAS_string ("cmp.").add_operation (var_lbl_7302, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GALGAS_bigint var_minTarget_7614 ;
  GALGAS_bigint var_maxTarget_7633 ;
  GALGAS_bool joker_7635_2 ; // Joker input parameter
  GALGAS_uint joker_7635_1 ; // Joker input parameter
  extensionGetter_kind (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).method_integer (var_minTarget_7614, var_maxTarget_7633, joker_7635_2, joker_7635_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GALGAS_bigint var_minSource_7684 ;
  GALGAS_bool var_operandIsUnsigned_7723 ;
  GALGAS_bigint joker_7690 ; // Joker input parameter
  GALGAS_uint joker_7725_1 ; // Joker input parameter
  extensionGetter_kind (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)).method_integer (var_minSource_7684, joker_7690, var_operandIsUnsigned_7723, joker_7725_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GALGAS_string var_operandType_7746 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_7614.objectCompare (var_minSource_7684)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7493, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned_7723.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7746, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)).add_operation (var_minTarget_7614.getter_string (SOURCE_FILE ("expression-convert.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7493, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)).add_operation (var_convertMinOkLabel_7363, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)).add_operation (var_convertFailLabel_7456, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 178)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7363.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7541, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_7723.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7746, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).add_operation (var_maxTarget_7633.getter_string (SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7541, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (var_convertMaxOkLabel_7410, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (var_convertFailLabel_7456, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 184)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7456.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_7288.getter_string (SOURCE_FILE ("expression-convert.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 186)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).getter_string (SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7410.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (var_operandType_7746, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 44)) ;
  GALGAS_lstring var_typeName_2038 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2038 COMMA_SOURCE_FILE ("expression-extend.galgas", 46)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 54)) ;
  GALGAS_lstring var_typeName_2681 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2681 COMMA_SOURCE_FILE ("expression-extend.galgas", 56)) ;
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
//                       Overriding extension method '@extendExpressionAST analyzeExpressionNew'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inGuard,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
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
  GALGAS_objectIR var_expressionResultPossibleReference_4459 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4459, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 80)) ;
  GALGAS_objectIR var_expressionResult_4620 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4459, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 97)), var_expressionResult_4620, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 94)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4661 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 101)) ;
  const enumGalgasBool test_0 = var_resultType_4661.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 103)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 103)).operator_not (SOURCE_FILE ("expression-extend.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 104)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-extend.galgas", 104)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4620, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 105)).operator_not (SOURCE_FILE ("expression-extend.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned_5082 ;
      GALGAS_uint var_sourceSize_5107 ;
      GALGAS_bigint joker_5043 ; // Joker input parameter
      GALGAS_bigint joker_5050 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4620, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 108)).method_integer (joker_5043, joker_5050, var_sourceIsUnsigned_5082, var_sourceSize_5107, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 108)) ;
      GALGAS_bool var_targetIsUnsigned_5184 ;
      GALGAS_uint var_targetSize_5209 ;
      GALGAS_bigint joker_5145 ; // Joker input parameter
      GALGAS_bigint joker_5152 ; // Joker input parameter
      var_resultType_4661.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 109)).method_integer (joker_5145, joker_5152, var_targetIsUnsigned_5184, var_targetSize_5209, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 109)) ;
      GALGAS_bool test_4 = var_sourceIsUnsigned_5082 ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_targetIsUnsigned_5184 ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sourceSize_5107.objectCompare (var_targetSize_5209)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 112)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 112)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_sourceSize_5107.objectCompare (var_targetSize_5209)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 114)), GALGAS_string ("same size: useless extend operation"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
          }
        }
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_10 = var_sourceIsUnsigned_5082 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          test_10 = var_targetIsUnsigned_5184.operator_not (SOURCE_FILE ("expression-extend.galgas", 116)) ;
        }
        const enumGalgasBool test_11 = test_10.boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_5107.objectCompare (var_targetSize_5209)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 118)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray13  COMMA_SOURCE_FILE ("expression-extend.galgas", 118)) ;
          }
        }else if (kBoolFalse == test_11) {
          GALGAS_bool test_14 = var_sourceIsUnsigned_5082.operator_not (SOURCE_FILE ("expression-extend.galgas", 120)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = var_targetIsUnsigned_5184 ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 121)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray16  COMMA_SOURCE_FILE ("expression-extend.galgas", 121)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_sourceSize_5107.objectCompare (var_targetSize_5209)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 124)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 124)) ;
            }else if (kBoolFalse == test_17) {
              const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_sourceSize_5107.objectCompare (var_targetSize_5209)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 126)), GALGAS_string ("same size: useless extend operation"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 126)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType_4661, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 129)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 129)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4620, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 130)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                             extensionMethod_extendExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_analyzeExpressionNew (defineExtensionMethod_extendExpressionAST_analyzeExpressionNew, NULL) ;

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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 44)) ;
  GALGAS_lstring var_typeName_2046 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2046 COMMA_SOURCE_FILE ("expression-truncate.galgas", 46)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 54)) ;
  GALGAS_lstring var_typeName_2691 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2691 COMMA_SOURCE_FILE ("expression-truncate.galgas", 56)) ;
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
//                      Overriding extension method '@truncateExpressionAST analyzeExpressionNew'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                        const GALGAS_bool constinArgument_inGuard,
                                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
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
  GALGAS_objectIR var_expressionResultPossibleReference_4465 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-truncate.galgas", 84)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4465, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 80)) ;
  GALGAS_objectIR var_expressionResult_4626 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4465, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 97)), var_expressionResult_4626, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 94)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4667 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 101)) ;
  const enumGalgasBool test_0 = var_resultType_4667.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 103)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 103)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 104)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-truncate.galgas", 104)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4626, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 105)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 105)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource_5062 ;
      GALGAS_bigint var_maxSource_5081 ;
      GALGAS_uint var_expSize_5115 ;
      GALGAS_bool joker_5092 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4626, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 108)).method_integer (var_minSource_5062, var_maxSource_5081, joker_5092, var_expSize_5115, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 108)) ;
      GALGAS_bigint var_minTarget_5166 ;
      GALGAS_bigint var_maxTarget_5185 ;
      GALGAS_uint var_resultSize_5222 ;
      GALGAS_bool joker_5196 ; // Joker input parameter
      var_resultType_4667.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 109)).method_integer (var_minTarget_5166, var_maxTarget_5185, joker_5196, var_resultSize_5222, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 109)) ;
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5166.objectCompare (var_minSource_5062)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5185.objectCompare (var_maxSource_5081)) ;
      }
      GALGAS_bool var_alwaysPossible_5246 = test_4 ;
      const enumGalgasBool test_5 = var_alwaysPossible_5246.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 112)), GALGAS_string ("useless explicit conversion"), fixItArray6  COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, var_resultSize_5222.objectCompare (var_expSize_5115)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        routine_getNewTempVariable (var_resultType_4667, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4626  COMMA_SOURCE_FILE ("expression-truncate.galgas", 116))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      }else if (kBoolFalse == test_7) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4626, var_resultType_4667, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 121)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                             extensionMethod_truncateExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_analyzeExpressionNew (defineExtensionMethod_truncateExpressionAST_analyzeExpressionNew, NULL) ;

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
  GALGAS_string var_operandType_6928 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (var_operandType_6928, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 154)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)) ;
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
//                 Overriding extension method '@constructorCall addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName_2058 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName_2058 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 50)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                             extensionMethod_constructorCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_addDependenceEdgeForStaticExpression (defineExtensionMethod_constructorCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@constructorCall noteExpressionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName_2649 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 58)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2649 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 59)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                             extensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@constructorCall analyzeExpressionNew'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                  const GALGAS_bool constinArgument_inGuard,
                                                                  const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
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
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_3846 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType_3846 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType_3846 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 85)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_3846.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 87)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 88)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorValue var_initValue_4171 ;
    constinArgument_inContext.getter_mConstructorMap (HERE).method_searchKey (var_resultType_3846.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 90)), var_initValue_4171, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)) ;
    switch (var_initValue_4171.enumValue ()) {
    case GALGAS_constructorValue::kNotBuilt:
      break ;
    case GALGAS_constructorValue::kEnum_zero:
      {
        outArgument_outResult = GALGAS_objectIR::constructor_zero (var_resultType_3846  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
      }
      break ;
    case GALGAS_constructorValue::kEnum_simple:
      {
        const cEnumAssociatedValues_constructorValue_simple * extractPtr_4520 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4171.unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_4520->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 95)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (var_resultType_3846.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 96)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 96)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 96)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_3846, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)) ;
        }
      }
      break ;
    case GALGAS_constructorValue::kEnum_structure:
      {
        const cEnumAssociatedValues_constructorValue_structure * extractPtr_6384 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4171.unsafePointer ()) ;
        const GALGAS_constructorSignature extractedValue_constructorSignature = extractPtr_6384->mAssociatedValue0 ;
        const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_6384->mAssociatedValue1 ;
        GALGAS_sortedOperandIRList var_sortedOperandIRList_4612 = extractedValue_sortedOperandList ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 102)).objectCompare (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 102)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 104)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 103)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 103)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 103)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 103)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 104)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 105)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 103)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          cEnumerator_constructorSignature enumerator_5019 (extractedValue_constructorSignature, kENUMERATION_UP) ;
          cEnumerator_functionCallEffectiveParameterList enumerator_5052 (object->mProperty_mParameterList, kENUMERATION_UP) ;
          while (enumerator_5019.hasCurrentObject () && enumerator_5052.hasCurrentObject ()) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_5052.current_mSelector (HERE).getter_string (HERE).objectCompare (enumerator_5019.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_5052.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 110)), GALGAS_string ("the selector should be '!").add_operation (enumerator_5019.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 110)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 110)), fixItArray10  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 110)) ;
            }
            GALGAS_objectIR var_expressionResult_5802 ;
            callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) enumerator_5052.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, enumerator_5019.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5802, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)) ;
            GALGAS_objectIR var_result_5835 = function_checkAssignmentCompatibility (var_expressionResult_5802, enumerator_5019.current_mType (HERE), enumerator_5052.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
            var_sortedOperandIRList_4612.addAssign_operation (var_result_5835, enumerator_5019.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 132)) ;
            enumerator_5019.gotoNextObject () ;
            enumerator_5052.gotoNextObject () ;
          }
          GALGAS_operandIRList var_initialValueList_6170 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 134)) ;
          cEnumerator_sortedOperandIRList enumerator_6227 (var_sortedOperandIRList_4612, kENUMERATION_UP) ;
          while (enumerator_6227.hasCurrentObject ()) {
            var_initialValueList_6170.addAssign_operation (enumerator_6227.current_mOperand (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 136)) ;
            enumerator_6227.gotoNextObject () ;
          }
          outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureConstant (var_resultType_3846, var_initialValueList_6170  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 138)) ;
        }
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                             extensionMethod_constructorCall_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_analyzeExpressionNew (defineExtensionMethod_constructorCall_analyzeExpressionNew, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typedConstantCall addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                             extensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_addDependenceEdgeForStaticExpression (defineExtensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typedConstantCall noteExpressionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                             extensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typedConstantCall analyzeExpressionNew'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                    const GALGAS_bool /* constinArgument_inGuard */,
                                                                    const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
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
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredResultType_3863 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_3863 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_3863 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 79)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_3863.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-typed-constant.galgas", 81)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 82)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 82)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_classConstantMap var_classConstantMap_4171 = extensionGetter_classConstantMap (var_inferredResultType_3863, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
    var_classConstantMap_4171.method_searchKey (object->mProperty_mConstructorName, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 85)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                             extensionMethod_typedConstantCall_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_analyzeExpressionNew (defineExtensionMethod_typedConstantCall_analyzeExpressionNew, NULL) ;

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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 54)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 56)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 65)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 66)) ;
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
//                         Overriding extension method '@ifExpressionAST analyzeExpressionNew'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                  const GALGAS_bool constinArgument_inGuard,
                                                                  const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
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
  GALGAS_objectIR var_ifExpressionResultPossibleReference_4813 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResultPossibleReference_4813, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 88)) ;
  GALGAS_objectIR var_ifExpressionResult_4994 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResultPossibleReference_4813, object->mProperty_mIfExpressionEndLocation, var_ifExpressionResult_4994, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 102)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_kind (var_ifExpressionResult_4994, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 109)).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 109)).operator_not (SOURCE_FILE ("expression-if.galgas", 109)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 110)) ;
  }
  GALGAS_objectIR var_thenExpressionPossibleReferenceResult_5697 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionPossibleReferenceResult_5697, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  GALGAS_objectIR var_thenExpressionTempResult_5887 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionPossibleReferenceResult_5697, object->mProperty_mThenExpressionEndLocation, var_thenExpressionTempResult_5887, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 127)) ;
  }
  GALGAS_objectIR var_thenExpressionResult_5920 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_5887, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 133)) ;
  GALGAS_objectIR var_elseExpressionPossibleReferenceResult_6639 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionPossibleReferenceResult_6639, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 140)) ;
  GALGAS_objectIR var_elseExpressionTempResult_6829 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionPossibleReferenceResult_6639, object->mProperty_mThenExpressionEndLocation, var_elseExpressionTempResult_6829, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 154)) ;
  }
  GALGAS_objectIR var_elseExpressionResult_6862 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_6829, extensionGetter_type (var_thenExpressionResult_5920, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 160)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_4994, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 167)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_7229 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_7210_1 ; // Joker input parameter
    var_ifExpressionResult_4994.method_literalInteger (joker_7210_1, var_value_7229, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_7229.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 169)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_5920 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_6862 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (extensionGetter_type (var_elseExpressionResult_6862, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 171)), object->mProperty_mIfExpressionEndLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 171)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_4994, var_thenExpressionResult_5920, var_elseExpressionResult_6862, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 172)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                             extensionMethod_ifExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeExpressionNew (defineExtensionMethod_ifExpressionAST_analyzeExpressionNew, NULL) ;

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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 55)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 56)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 65)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 66)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 74)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 75)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 81)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)) ;
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
//                   Overriding extension method '@infixOperatorExpressionAST analyzeExpressionNew'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                             const GALGAS_bool constinArgument_inGuard,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
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
  GALGAS_objectIR var_leftOperandPossibleReference_6040 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperandPossibleReference_6040, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 129)) ;
  GALGAS_objectIR var_leftOperand_6199 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_6040, object->mProperty_mOperatorLocation, var_leftOperand_6199, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 143)) ;
  }
  GALGAS_objectIR var_rightOperandPossibleReference_6734 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_6199, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 154)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperandPossibleReference_6734, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 150)) ;
  GALGAS_objectIR var_rightOperand_6895 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_6734, object->mProperty_mOperatorLocation, var_rightOperand_6895, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 164)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap_6957 = function_getInfixOperatorMap (object->mProperty_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 171)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_7264 ;
  GALGAS_infixOperatorDescription var_binaryOperator_7317 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_6957, extensionGetter_type (var_leftOperand_6199, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 174)), extensionGetter_type (var_rightOperand_6895, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 175)), object->mProperty_mOperatorLocation, var_resultType_7264, var_binaryOperator_7317, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 173)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_7317.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_6199, object->mProperty_mOperatorLocation, var_rightOperand_6895, var_resultType_7264, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 181)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                             extensionMethod_infixOperatorExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_analyzeExpressionNew (defineExtensionMethod_infixOperatorExpressionAST_analyzeExpressionNew, NULL) ;

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
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 223)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)) ;
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
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 234)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)) ;
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
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 245)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 246)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 246)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 246)) ;
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
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 256)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 257)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 257)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 257)) ;
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
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 267)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 268)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 268)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 268)) ;
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
//           Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpressionNew'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                              const GALGAS_bool constinArgument_inGuard,
                                                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
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
  GALGAS_instructionListIR var_leftInstructionGenerationList_11799 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 301)) ;
  GALGAS_objectIR var_leftOperandPossibleReference_12289 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_11799, var_leftOperandPossibleReference_12289, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 302)) ;
  GALGAS_objectIR var_leftOperand_12448 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_12289, object->mProperty_mOperatorLocation, var_leftOperand_12448, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 316)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_12536 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 323)) ;
  GALGAS_objectIR var_rightOperandPossibleReference_13027 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_12448, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 328)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_12536, var_rightOperandPossibleReference_13027, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 324)) ;
  GALGAS_objectIR var_rightOperand_13188 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_13027, object->mProperty_mOperatorLocation, var_rightOperand_13188, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 338)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_leftOperand_12448, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 345)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 345)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 346)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_rightOperand_13188, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 349)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 349)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 350)) ;
  }
  {
  routine_getNewTempVariable (constinArgument_inContext.getter_mBooleanType (HERE), object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 353)) ;
  }
  {
  extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_12448, var_leftInstructionGenerationList_11799, var_rightOperand_13188, var_rightInstructionGenerationList_12536, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 355)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpressionNew (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpressionNew, NULL) ;

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
//                   Overriding extension method '@prefixOperatorExpressionAST analyzeExpressionNew'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                              const GALGAS_bool constinArgument_inGuard,
                                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
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
  GALGAS_objectIR var_expressionResultPossibleReference_3438 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_3438, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 58)) ;
  GALGAS_objectIR var_expressionResult_3607 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_3438, object->mProperty_mOperatorLocation, var_expressionResult_3607, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 72)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_3703 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_3741 ;
  GALGAS_objectIR var_leftOperand_3765 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_3703 = constinArgument_inContext.getter_mUnsignedComplementOperatorMap (HERE) ;
      var_binaryOperator_3741 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 85)) ;
      switch (extensionGetter_kind (var_expressionResult_3607, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 86)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 88)) ;
          var_leftOperand_3765.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)) ;
          var_leftOperand_3765.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 92)) ;
          var_leftOperand_3765.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 94)) ;
          var_leftOperand_3765.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96)) ;
          var_leftOperand_3765.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 98)) ;
          var_leftOperand_3765.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100)) ;
          var_leftOperand_3765.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 102)) ;
          var_leftOperand_3765.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 104)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray9  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105)) ;
            var_leftOperand_3765.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_8) {
            const enumGalgasBool test_10 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 106)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 106)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_bigint var_minTarget_4957 ;
              GALGAS_bigint var_maxTarget_4976 ;
              GALGAS_bool joker_4978_2 ; // Joker input parameter
              GALGAS_uint joker_4978_1 ; // Joker input parameter
              constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 107)).method_integer (var_minTarget_4957, var_maxTarget_4976, joker_4978_2, joker_4978_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 107)) ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_minTarget_4957.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 108)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray12  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)) ;
                var_leftOperand_3765.drop () ; // Release error dropped variable
              }else if (kBoolFalse == test_11) {
                var_leftOperand_3765 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), var_maxTarget_4976  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)) ;
              }
            }else if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 114)) ;
              var_leftOperand_3765.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_5537 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_3607, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 86)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5537->mAssociatedValue3 ;
          var_leftOperand_3765 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_3703 = constinArgument_inContext.getter_mNotOperatorMap (HERE) ;
      var_binaryOperator_3741 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
      var_leftOperand_3765 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 122))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 122)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_3703 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      var_binaryOperator_3741 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 125)) ;
      var_leftOperand_3765 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_3703 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 129)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 131)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 131)), fixItArray15  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 130)) ;
      }
      const enumGalgasBool test_16 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_16) {
        var_binaryOperator_3741 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 134)) ;
        var_leftOperand_3765 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)) ;
      }else if (kBoolFalse == test_16) {
        var_binaryOperator_3741 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 137)) ;
        var_leftOperand_3765 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_3703.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_key (var_expressionResult_3607, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_6598 = extensionGetter_type (var_expressionResult_3607, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143)) ;
  const enumGalgasBool test_17 = var_expressionResult_3607.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 145)).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_bigint var_value_6741 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_6714_1 ; // Joker input parameter
    var_expressionResult_3607.method_literalInteger (joker_6714_1, var_value_6741, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)) ;
    GALGAS_bigint var_result_6761 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_6761 = var_value_6741.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 150)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 152)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray19  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 153)) ;
          var_result_6761.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_18) {
          const enumGalgasBool test_20 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 154)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 154)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_bigint var_minTarget_7132 ;
            GALGAS_bigint var_maxTarget_7151 ;
            GALGAS_bool joker_7153_2 ; // Joker input parameter
            GALGAS_uint joker_7153_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 155)).method_integer (var_minTarget_7132, var_maxTarget_7151, joker_7153_2, joker_7153_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 155)) ;
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictInf, var_minTarget_7132.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 156)))).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray22  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 157)) ;
              var_result_6761.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_21) {
              var_result_6761 = var_value_6741.operator_xor (var_maxTarget_7151 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159)) ;
            }
          }else if (kBoolFalse == test_20) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray23  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 162)) ;
            var_result_6761.drop () ; // Release error dropped variable
          }
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_6761 = var_value_6741.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 165)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_6761 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 167)).operator_xor (var_value_6741 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 167)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6598, var_result_6761  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 169)) ;
  }else if (kBoolFalse == test_17) {
    {
    routine_getNewTempVariable (var_resultType_6598, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 172)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 176)), object->mProperty_mOperatorLocation, var_leftOperand_3765, var_binaryOperator_3741, var_expressionResult_3607, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 174)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                             extensionMethod_prefixOperatorExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpressionNew (defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpressionNew, NULL) ;

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
//                  Overriding extension method '@literalIntegerInExpressionAST analyzeExpressionNew'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                                const GALGAS_bool /* constinArgument_inGuard */,
                                                                                const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                                const GALGAS_semanticContext constinArgument_inContext,
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
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), object->mProperty_mLiteralInteger.getter_bigint (HERE)  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                             extensionMethod_literalIntegerInExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeExpressionNew (defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpressionNew, NULL) ;

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
//                  Overriding extension method '@literalStringInExpressionAST analyzeExpressionNew'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                               const GALGAS_bool /* constinArgument_inGuard */,
                                                                               const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
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
  GALGAS_unifiedTypeMap_2D_proxy var_type_3631 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
  GALGAS_uint var_staticStringIndex_3821 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_3821, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (var_type_3631, object->mProperty_mLiteralString.getter_string (HERE).getter_length (SOURCE_FILE ("expression-literal-string.galgas", 65)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)), var_staticStringIndex_3821  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                             extensionMethod_literalStringInExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpressionNew (defineExtensionMethod_literalStringInExpressionAST_analyzeExpressionNew, NULL) ;

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
//                  Overriding extension method '@literalBooleanInExpressionAST analyzeExpressionNew'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                                const GALGAS_bool /* constinArgument_inGuard */,
                                                                                const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                                const GALGAS_semanticContext constinArgument_inContext,
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
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mBooleanType (HERE), temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                             extensionMethod_literalBooleanInExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_analyzeExpressionNew (defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpressionNew, NULL) ;

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
//                  Overriding extension method '@registerConstantExpressionAST analyzeExpressionNew'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                const GALGAS_bool constinArgument_inGuard,
                                                                                const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
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
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_4323 ;
  GALGAS_sliceMap var_registerBitSliceMap_4383 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4434 ;
  GALGAS_bigint var_registerAddress_4474 ;
  GALGAS_uint var_registerBitCount_4507 ;
  GALGAS_uint var_powerOfTwoForArraySize_4546 ;
  GALGAS_uint var_elementArraySize_4579 ;
  GALGAS_bool joker_4329 ; // Joker input parameter
  GALGAS_bool joker_4336 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4480 ; // Joker input parameter
  constinArgument_inContext.getter_mControlRegisterMap (HERE).method_searchKey (object->mProperty_mRegisterName, var_registerType_4323, joker_4329, joker_4336, var_registerBitSliceMap_4383, var_registerFieldMap_4434, var_registerAddress_4474, joker_4480, var_registerBitCount_4507, var_powerOfTwoForArraySize_4546, var_elementArraySize_4579, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 93)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4691 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 107)) ;
  cEnumerator_lstringlist enumerator_4733 (object->mProperty_mMaskFieldNames, kENUMERATION_UP) ;
  while (enumerator_4733.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_4816 ;
    GALGAS_uint var_fieldBitCount_4847 ;
    var_registerFieldMap_4434.method_searchKey (enumerator_4733.current_mValue (HERE), var_fieldBitIndex_4816, var_fieldBitCount_4847, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 109)) ;
    GALGAS_bigint var_mask_4866 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 114)).left_shift_operation (var_fieldBitCount_4847 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 114)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 114)) ;
    var_accumulatedFieldStaticValues_4691 = var_accumulatedFieldStaticValues_4691.operator_or (var_mask_4866.left_shift_operation (var_fieldBitIndex_4816 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 115)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 115)) ;
    enumerator_4733.gotoNextObject () ;
  }
  GALGAS_operandList var_operandList_5090 = GALGAS_operandList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 118)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_5159 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_5159.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_5242 ;
    GALGAS_uint var_fieldBitCount_5273 ;
    var_registerFieldMap_4434.method_searchKey (enumerator_5159.current_mFieldName (HERE), var_fieldBitIndex_5242, var_fieldBitCount_5273, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 120)) ;
    GALGAS_objectIR var_expressionResultPossibleReference_5799 ;
    callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) enumerator_5159.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-cst-registre.galgas", 130)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5799, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 126)) ;
    GALGAS_objectIR var_expressionResult_5976 ;
    {
    extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5799, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 143)), var_expressionResult_5976, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 140)) ;
    }
    switch (extensionGetter_kind (var_expressionResult_5976, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_arrayType:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray0  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 157)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_pointer:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_bigint var_value_7007 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_6980_1 ; // Joker input parameter
        var_expressionResult_5976.method_literalInteger (joker_6980_1, var_value_7007, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 165)) ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_value_7007.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_value_7007.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 168)).left_shift_operation (var_fieldBitCount_5273 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 168)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            var_accumulatedFieldStaticValues_4691 = var_accumulatedFieldStaticValues_4691.operator_or (var_value_7007.left_shift_operation (var_fieldBitIndex_5242 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) ;
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)).left_shift_operation (var_fieldBitCount_5273 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)) ;
          }
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_9223 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_5976, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_min = extractPtr_9223->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_max = extractPtr_9223->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_9223->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_expressionBitCount = extractPtr_9223->mAssociatedValue3 ;
        const enumGalgasBool test_12 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 174)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)) ;
        }else if (kBoolFalse == test_12) {
          GALGAS_bool test_14 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5273)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 177)) ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_5159.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_5273.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 179)), fixItArray16  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) ;
          }
          GALGAS_bool test_17 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5273)) ;
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
            extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_5976, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 185)).left_shift_operation (var_fieldBitCount_5273 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 185)), GALGAS_uint ((uint32_t) 8U), enumerator_5159.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)) ;
            }
          }
          GALGAS_objectIR var_partialResult_8322 = var_expressionResult_5976 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4507)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_objectIR var_extendedResult_8495 ;
            {
            routine_getNewTempVariable (var_registerType_4323, enumerator_5159.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_extendedResult_8495, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 193)) ;
            }
            {
            extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_8495, var_partialResult_8322, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 194)) ;
            }
            var_partialResult_8322 = var_extendedResult_8495 ;
          }else if (kBoolFalse == test_20) {
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4507)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_objectIR var_truncatedResult_8781 ;
              {
              routine_getNewTempVariable (var_registerType_4323, enumerator_5159.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_truncatedResult_8781, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 197)) ;
              }
              {
              extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_8781, var_partialResult_8322, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 198)) ;
              }
              var_partialResult_8322 = var_truncatedResult_8781 ;
            }
          }
          GALGAS_objectIR var_shiftedResult_9049 ;
          {
          routine_getNewTempVariable (var_registerType_4323, enumerator_5159.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_shiftedResult_9049, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 202)) ;
          }
          {
          extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9049, var_partialResult_8322, var_fieldBitIndex_5242, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 203)) ;
          }
          var_operandList_5090.addAssign_operation (var_shiftedResult_9049  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 205)) ;
        }
      }
      break ;
    }
    enumerator_5159.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4323, var_accumulatedFieldStaticValues_4691  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)) ;
  cEnumerator_operandList enumerator_9418 (var_operandList_5090, kENUMERATION_UP) ;
  while (enumerator_9418.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_9505 ;
    {
    routine_getNewTempVariable (var_registerType_4323, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 212)), ioArgument_ioTemporaries, var_newResult_9505, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_9505, extensionGetter_type (var_newResult_9505, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 218)), enumerator_9418.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)) ;
    }
    outArgument_outResult = var_newResult_9505 ;
    enumerator_9418.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                             extensionMethod_registerConstantExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_analyzeExpressionNew (defineExtensionMethod_registerConstantExpressionAST_analyzeExpressionNew, NULL) ;

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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mObjectName COMMA_SOURCE_FILE ("expression-primary.galgas", 161)) ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_6023 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_6023.hasCurrentObject ()) {
    switch (enumerator_6023.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_6087 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_6023.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6087->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_6232 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_6023.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_6232->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 166)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6782 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_6023.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_6782->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_6318 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_6318.hasCurrentObject ()) {
          switch (enumerator_6318.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6572 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_6318.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_6572->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_6685 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_6318.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_6685->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 175)) ;
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
          enumerator_6318.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_6023.gotoNextObject () ;
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_7311 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_7311.hasCurrentObject ()) {
    switch (enumerator_7311.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_7375 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_7311.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7375->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_7504 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_7311.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_7504->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 193)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_8038 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_7311.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_8038->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_7590 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_7590.hasCurrentObject ()) {
          switch (enumerator_7590.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_7844 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_7590.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_7844->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 200)) COMMA_SOURCE_FILE ("expression-primary.galgas", 200)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7941 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_7590.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_7941->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 202)) ;
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
          enumerator_7590.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7311.gotoNextObject () ;
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
//                     Overriding extension method '@primaryInExpressionAST analyzeExpressionNew'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzeExpressionNew (const cPtr_expressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                         const GALGAS_bool constinArgument_inGuard,
                                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
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
  GALGAS_internalRepresentation var_internalRepresentation_9526 ;
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 242)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 242)) ;
        var_internalRepresentation_9526.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        var_internalRepresentation_9526 = GALGAS_internalRepresentation::constructor_standAloneIdentifier (object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 244)) ;
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_10238 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_10238->mAssociatedValue0 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 247)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 248)) ;
        var_internalRepresentation_9526.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 249)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 249)).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_internalRepresentation_9526 = GALGAS_internalRepresentation::constructor_structureMember (object->mProperty_mObjectName, GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 252))  COMMA_SOURCE_FILE ("expression-primary.galgas", 250)) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 255)) ;
          var_internalRepresentation_9526.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_10291 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_10291.hasCurrentObject ()) {
    switch (enumerator_10291.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_10845 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_10291.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_10845->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpressionNew (var_internalRepresentation_9526, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 262)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_11481 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_10291.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11481->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_11481->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpressionNew (var_internalRepresentation_9526, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 276)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_12054 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_10291.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_12054->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_12054->mAssociatedValue1 ;
        {
        routine_handleFunctionCallInExpressionNew (var_internalRepresentation_9526, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 293)) ;
        }
      }
      break ;
    }
    enumerator_10291.gotoNextObject () ;
  }
  switch (var_internalRepresentation_9526.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_12319 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (var_internalRepresentation_9526.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_12319->mAssociatedValue0 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_12263 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_12263, extractedValue_identifier, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 313)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_13276 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (var_internalRepresentation_9526.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13276->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_13276->mAssociatedValue1 ;
      const enumGalgasBool test_6 = extensionGetter_kind (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 315)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 315)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_12506 ;
        GALGAS_lstring joker_12473_2 ; // Joker input parameter
        GALGAS_propertyMap joker_12473_1 ; // Joker input parameter
        GALGAS_propertyList joker_12508_2 ; // Joker input parameter
        GALGAS_uint joker_12508_1 ; // Joker input parameter
        extensionGetter_kind (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 316)).method_structure (joker_12473_2, joker_12473_1, var_structureMap_12506, joker_12508_2, joker_12508_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 316)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_12523 = var_structureMap_12506 ;
        GALGAS_objectIR var_masterPropertyIR_12627 ;
        {
        var_m_12523.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_12549 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_12523.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_12549, extractedValue_propertyName, var_masterPropertyIR_12627, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 318)) ;
        }
        GALGAS_uint var_index_12697 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_12668 ; // Joker input parameter
        GALGAS_lstring joker_12679 ; // Joker input parameter
        var_masterPropertyIR_12627.method_property (joker_12668, joker_12679, var_index_12697, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 319)) ;
        GALGAS_objectIR var_newObject_12718 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_12627, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 321)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 322)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 322))  COMMA_SOURCE_FILE ("expression-primary.galgas", 322)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 323)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 320)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 326)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_12718, extractedValue_currentPointer, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 330)), var_index_12697.getter_string (SOURCE_FILE ("expression-primary.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 327)) ;
        }
        outArgument_outResult = var_newObject_12718 ;
      }else if (kBoolFalse == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 335)), GALGAS_string ("this should be a structure instance"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 335)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_13364 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (var_internalRepresentation_9526.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_13364->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_13364->mAssociatedValue1 ;
      outArgument_outResult = extractedValue_valueIR ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_analyzeExpressionNew (void) {
  enterExtensionMethod_analyzeExpressionNew (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                             extensionMethod_primaryInExpressionAST_analyzeExpressionNew) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzeExpressionNew (defineExtensionMethod_primaryInExpressionAST_analyzeExpressionNew, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'handlePropertyAccessInExpressionNew'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpressionNew (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                                  const GALGAS_lstring constinArgument_inPropertyName,
                                                  const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                  const GALGAS_semanticContext constinArgument_inContext,
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
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_17797 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_17797->mAssociatedValue0 ;
      GALGAS_objectIR var_objectIR_14339 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_14271 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_14271, extractedValue_identifier, var_objectIR_14339, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 359)) ;
      }
      switch (var_objectIR_14339.enumValue ()) {
      case GALGAS_objectIR::kNotBuilt:
        break ;
      case GALGAS_objectIR::kEnum_globalVariableReference:
        {
          const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_14680 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (var_objectIR_14339.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_14680->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_14680->mAssociatedValue1 ;
          const enumGalgasBool test_0 = extractedValue_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 362)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 362)).boolEnum () ;
          if (kBoolTrue == test_0) {
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_14339  COMMA_SOURCE_FILE ("expression-primary.galgas", 363)) ;
          }else if (kBoolFalse == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 365)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 365)) ;
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
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 369)), GALGAS_string ("\xC2""\xAB""selfObject\xC2""\xBB"" invalid here"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 369)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_localVariableReference:
        {
          const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_15316 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (var_objectIR_14339.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_15316->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_15316->mAssociatedValue1 ;
          const enumGalgasBool test_3 = extractedValue_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 371)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 371)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_objectIR var_objectIR_14943 = GALGAS_objectIR::constructor_llvmTemporaryValue (extractedValue_type, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 374)), extractedValue_plmName.getter_location (SOURCE_FILE ("expression-primary.galgas", 374))  COMMA_SOURCE_FILE ("expression-primary.galgas", 374)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 374))  COMMA_SOURCE_FILE ("expression-primary.galgas", 372)) ;
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_14943  COMMA_SOURCE_FILE ("expression-primary.galgas", 376)) ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 378)), GALGAS_string ("this should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 378)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_registerReference:
        {
          const cEnumAssociatedValues_objectIR_registerReference * extractPtr_16837 = (const cEnumAssociatedValues_objectIR_registerReference *) (var_objectIR_14339.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_16837->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmRegisterName = extractPtr_16837->mAssociatedValue1 ;
          const GALGAS_bigint extractedValue_address = extractPtr_16837->mAssociatedValue4 ;
          const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_16837->mAssociatedValue5 ;
          const GALGAS_uint extractedValue_arraySize = extractPtr_16837->mAssociatedValue6 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 387)), GALGAS_string ("register is an array, dot notation unavailable"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 387)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_5) {
            GALGAS_objectIR var_registerIR_15845 ;
            {
            routine_getNewTempVariable (extractedValue_type, extractedValue_plmRegisterName.getter_location (SOURCE_FILE ("expression-primary.galgas", 389)), ioArgument_ioTemporaries, var_registerIR_15845, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 389)) ;
            }
            {
            extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerIR_15845, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 390)) ;
            }
            GALGAS_llvmBinaryOperation var_accessOperator_16039 ;
            GALGAS_bigint var_accessRightOperand_16081 ;
            GALGAS_sliceMap var_resultSliceMap_16121 ;
            GALGAS_unifiedTypeMap_2D_proxy var_resultType_16169 ;
            extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_16039, var_accessRightOperand_16081, var_resultSliceMap_16121, var_resultType_16169, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 391)) ;
            GALGAS_objectIR var_resultObject_16204 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_16169, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 400)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 400))  COMMA_SOURCE_FILE ("expression-primary.galgas", 400)), var_resultSliceMap_16121  COMMA_SOURCE_FILE ("expression-primary.galgas", 398)) ;
            ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 403)) ;
            {
            extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_16204, extensionGetter_type (var_registerIR_15845, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 406)), constinArgument_inPropertyName.getter_location (HERE), var_registerIR_15845, var_accessOperator_16039, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), var_accessRightOperand_16081  COMMA_SOURCE_FILE ("expression-primary.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 404)) ;
            }
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_16121, var_resultObject_16204  COMMA_SOURCE_FILE ("expression-primary.galgas", 412)) ;
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_temporaryReference:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 415)), GALGAS_string ("\xC2""\xAB""temporaryReference\xC2""\xBB"" invalid here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 415)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 417)), GALGAS_string ("\xC2""\xAB""property\xC2""\xBB"" invalid here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 417)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmTemporaryValue:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 419)), GALGAS_string ("\xC2""\xAB""llvmTemporaryValue\xC2""\xBB"" invalid here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 419)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalInteger:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 421)), GALGAS_string ("\xC2""\xAB""literalInteger\xC2""\xBB"" invalid here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 421)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmStructureConstant:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 423)), GALGAS_string ("\xC2""\xAB""llvmStructureConstant\xC2""\xBB"" invalid here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 423)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 425)), GALGAS_string ("a global string constant is invalid here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 425)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_zero:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 427)), GALGAS_string ("\xC2""\xAB""zero\xC2""\xBB"" invalid here"), fixItArray13  COMMA_SOURCE_FILE ("expression-primary.galgas", 427)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_possibleFunction:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 429)), GALGAS_string ("\xC2""\xAB""possibleFunction\xC2""\xBB"" invalid here"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 429)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_18874 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_18874->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_18874->mAssociatedValue1 ;
      const enumGalgasBool test_15 = extensionGetter_kind (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 432)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 432)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_17980 ;
        GALGAS_lstring joker_17947_2 ; // Joker input parameter
        GALGAS_propertyMap joker_17947_1 ; // Joker input parameter
        GALGAS_propertyList joker_17982_2 ; // Joker input parameter
        GALGAS_uint joker_17982_1 ; // Joker input parameter
        extensionGetter_kind (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 433)).method_structure (joker_17947_2, joker_17947_1, var_structureMap_17980, joker_17982_2, joker_17982_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 433)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_17997 = var_structureMap_17980 ;
        GALGAS_objectIR var_masterPropertyIR_18107 ;
        {
        var_m_17997.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_18023 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_17997.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_18023, extractedValue_masterPropertyName, var_masterPropertyIR_18107, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 435)) ;
        }
        GALGAS_uint var_index_18177 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_18148 ; // Joker input parameter
        GALGAS_lstring joker_18159 ; // Joker input parameter
        var_masterPropertyIR_18107.method_property (joker_18148, joker_18159, var_index_18177, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 436)) ;
        GALGAS_objectIR var_newObject_18198 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_18107, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 438)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 439)), extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 439))  COMMA_SOURCE_FILE ("expression-primary.galgas", 439)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 440)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 437)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 443)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_18198, extractedValue_currentPointer, extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 447)), var_index_18177.getter_string (SOURCE_FILE ("expression-primary.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 444)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_newObject_18198  COMMA_SOURCE_FILE ("expression-primary.galgas", 450)) ;
      }else if (kBoolFalse == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 452)), GALGAS_string ("'").add_operation (extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 452)).add_operation (GALGAS_string ("' should be a structure"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 452)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 452)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_19748 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_19748->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentObject = extractPtr_19748->mAssociatedValue1 ;
      GALGAS_llvmBinaryOperation var_accessOperator_19030 ;
      GALGAS_bigint var_accessRightOperand_19068 ;
      GALGAS_sliceMap var_resultSliceMap_19104 ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_19148 ;
      extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_19030, var_accessRightOperand_19068, var_resultSliceMap_19104, var_resultType_19148, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 455)) ;
      GALGAS_objectIR var_resultObject_19175 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_19148, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 464)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 464))  COMMA_SOURCE_FILE ("expression-primary.galgas", 464)), var_resultSliceMap_19104  COMMA_SOURCE_FILE ("expression-primary.galgas", 462)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 467)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_19175, extensionGetter_type (extractedValue_currentObject, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 470)), constinArgument_inPropertyName.getter_location (HERE), extractedValue_currentObject, var_accessOperator_19030, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), var_accessRightOperand_19068  COMMA_SOURCE_FILE ("expression-primary.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 468)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_19104, var_resultObject_19175  COMMA_SOURCE_FILE ("expression-primary.galgas", 476)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handleArrayAccessInExpressionNew'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArrayAccessInExpressionNew (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                               const GALGAS_expressionAST constinArgument_inIndexExpression,
                                               const GALGAS_location constinArgument_inEndOfIndex,
                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                               const GALGAS_bool constinArgument_inGuard,
                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               const GALGAS_mode constinArgument_inCurrentMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_variableIR_20661 ;
  GALGAS_location var_errorLocation_20687 ;
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_20883 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_20883->mAssociatedValue0 ;
      var_errorLocation_20687 = extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 502)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_20826 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_20826, extractedValue_identifier, var_variableIR_20661, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 503)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_21880 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_21880->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_21880->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 505)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 505)).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_errorLocation_20687 = extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 506)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_21120 ;
        GALGAS_lstring joker_21087_2 ; // Joker input parameter
        GALGAS_propertyMap joker_21087_1 ; // Joker input parameter
        GALGAS_propertyList joker_21122_2 ; // Joker input parameter
        GALGAS_uint joker_21122_1 ; // Joker input parameter
        extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).method_structure (joker_21087_2, joker_21087_1, var_structureMap_21120, joker_21122_2, joker_21122_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_21137 = var_structureMap_21120 ;
        GALGAS_objectIR var_masterPropertyIR_21241 ;
        {
        var_m_21137.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_21163 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_21137.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_21163, extractedValue_propertyName, var_masterPropertyIR_21241, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 509)) ;
        }
        var_variableIR_20661 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_21241, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 512)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 512))  COMMA_SOURCE_FILE ("expression-primary.galgas", 512)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 513)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 510)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 516)) ;
        GALGAS_uint var_index_21599 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_21570 ; // Joker input parameter
        GALGAS_lstring joker_21581 ; // Joker input parameter
        var_masterPropertyIR_21241.method_property (joker_21570, joker_21581, var_index_21599, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 517)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_variableIR_20661, extractedValue_currentPointerIR, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 521)), var_index_21599.getter_string (SOURCE_FILE ("expression-primary.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 518)) ;
        }
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 525)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 525)) ;
        var_variableIR_20661.drop () ; // Release error dropped variable
        var_errorLocation_20687.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_22023 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_22023->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_22023->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 528)), GALGAS_string ("this object is not an array"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 528)) ;
      var_variableIR_20661.drop () ; // Release error dropped variable
      var_errorLocation_20687.drop () ; // Release error dropped variable
    }
    break ;
  }
  const enumGalgasBool test_3 = extensionGetter_type (var_variableIR_20661, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 531)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 531)).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 531)).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_20661, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 547)), var_variableIR_20661  COMMA_SOURCE_FILE ("expression-primary.galgas", 547)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = var_variableIR_20661.getter_isRegisterReference (SOURCE_FILE ("expression-primary.galgas", 548)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_sliceMap var_sliceMap_23225 ;
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_20661, var_sliceMap_23225, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_sliceMap_23225, var_variableIR_20661  COMMA_SOURCE_FILE ("expression-primary.galgas", 565)) ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_errorLocation_20687, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 567)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handleFunctionCallInExpressionNew'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpressionNew (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 590)) ;
  }
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_24569 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_24569->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 595)), GALGAS_string ("this is not a function"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 595)) ;
      ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_25131 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_25131->mAssociatedValue0 ;
      {
      routine_handleStandAloneFunctionCallInExpression (ioArgument_ioInternalRepresentation, extractedValue_identifier, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 599)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_25958 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25958->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_25958->mAssociatedValue1 ;
      const enumGalgasBool test_3 = extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 616)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 616)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_objectIR var_callReturnedResult_25742 ;
        {
        routine_handleMethodCallInExpressionNew (extractedValue_propertyName, extractedValue_currentPointerIR, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, ioArgument_ioInstructionGenerationList, var_callReturnedResult_25742, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 617)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 632)), var_callReturnedResult_25742  COMMA_SOURCE_FILE ("expression-primary.galgas", 632)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 634)), GALGAS_string ("this object should be a structure"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 634)) ;
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
                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
  GALGAS_universalPropertyAndRoutineMapForContext var_currentMap_26812 ;
  GALGAS_lstring joker_26781_2 ; // Joker input parameter
  GALGAS_propertyMap joker_26781_1 ; // Joker input parameter
  GALGAS_propertyList joker_26814_2 ; // Joker input parameter
  GALGAS_uint joker_26814_1 ; // Joker input parameter
  extensionGetter_kind (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 656)).method_structure (joker_26781_2, joker_26781_1, var_currentMap_26812, joker_26814_2, joker_26814_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 656)) ;
  GALGAS_lstring var_routineMangledName_26842 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 657)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 657)), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 657)) ;
  GALGAS_lstring var_signature_26990 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 659)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_27179 ;
  GALGAS_routineDescriptor var_routineDescriptor_27221 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) var_currentMap_26812.ptr (), constinArgument_inMethodName, var_signature_26990, var_LLVMInvocationRoutineName_27179, var_routineDescriptor_27221, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 661)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_routineDescriptor_27221.getter_mReturnType (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 668)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 669)), GALGAS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 669)) ;
    var_routineDescriptor_27221.drop () ; // Release error dropped variable
  }
  GALGAS_calleeKindIR var_calleeKind_27437 = function_checkMode (constinArgument_inMode, extensionGetter_executionMode (var_routineDescriptor_27221.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 674)), var_routineDescriptor_27221.getter_mRoutineKind (HERE), constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 672)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_27715 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 679)) ;
  switch (var_routineDescriptor_27221.getter_mRoutineCallingScheme (HERE).enumValue ()) {
  case GALGAS_routineCallingSheme::kNotBuilt:
    break ;
  case GALGAS_routineCallingSheme::kEnum_staticCall:
    {
      var_effectiveParameterListIR_27715.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 682)), constinArgument_inCurrentPointerIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 682)) ;
    }
    break ;
  case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
    {
    }
    break ;
  }
  {
  routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_routineDescriptor_27221.getter_mSignature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_27715, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 686)) ;
  }
  {
  routine_getNewTempVariable (var_routineDescriptor_27221.getter_mReturnType (HERE), var_routineMangledName_26842.getter_location (SOURCE_FILE ("expression-primary.galgas", 702)), ioArgument_ioTemporaries, outArgument_outCallReturnedResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 702)) ;
  }
  switch (var_routineDescriptor_27221.getter_mRoutineCallingScheme (HERE).enumValue ()) {
  case GALGAS_routineCallingSheme::kNotBuilt:
    break ;
  case GALGAS_routineCallingSheme::kEnum_staticCall:
    {
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), outArgument_outCallReturnedResult, var_routineMangledName_26842, var_LLVMInvocationRoutineName_27179, var_calleeKind_27437, var_effectiveParameterListIR_27715  COMMA_SOURCE_FILE ("expression-primary.galgas", 707))  COMMA_SOURCE_FILE ("expression-primary.galgas", 707)) ;
      {
      ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_26842 COMMA_SOURCE_FILE ("expression-primary.galgas", 716)) ;
      }
    }
    break ;
  case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
    {
      const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall * extractPtr_29849 = (const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall *) (var_routineDescriptor_27221.getter_mRoutineCallingScheme (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_propertyIndex = extractPtr_29849->mAssociatedValue0 ;
      GALGAS_objectIR var_propertyReference_29202 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 719)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 720)), constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 720))  COMMA_SOURCE_FILE ("expression-primary.galgas", 720)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 721)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 718)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 724)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_propertyReference_29202, constinArgument_inCurrentPointerIR, constinArgument_inMethodName.getter_string (SOURCE_FILE ("expression-primary.galgas", 728)), extractedValue_propertyIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 725)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (var_propertyReference_29202, GALGAS_typeKind::constructor_function (var_routineDescriptor_27221  COMMA_SOURCE_FILE ("expression-primary.galgas", 734)), outArgument_outCallReturnedResult, var_effectiveParameterListIR_27715  COMMA_SOURCE_FILE ("expression-primary.galgas", 732))  COMMA_SOURCE_FILE ("expression-primary.galgas", 732)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'handleStandAloneFunctionCallInExpression'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleStandAloneFunctionCallInExpression (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                                       const GALGAS_lstring constinArgument_inFunctionName,
                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 761)) ;
  }
  GALGAS_lstring var_routineMangledName_30912 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inFunctionName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 764)) ;
  GALGAS_lstring var_signature_31027 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 766)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_31224 ;
  GALGAS_routineDescriptor var_routineDescriptor_31266 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), constinArgument_inFunctionName, var_signature_31027, var_LLVMInvocationRoutineName_31224, var_routineDescriptor_31266, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 768)) ;
  GALGAS_routineKind var_routineKind_31334 = var_routineDescriptor_31266.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_31384 = extensionGetter_executionMode (var_routineKind_31334, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 776)) ;
  GALGAS_routineTypedSignature var_formalSignature_31436 = var_routineDescriptor_31266.getter_mSignature (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_routineDescriptor_31266.getter_mReturnType (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 779)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inFunctionName.getter_location (SOURCE_FILE ("expression-primary.galgas", 780)), GALGAS_string ("not a function (returns no value)"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 780)) ;
    var_routineDescriptor_31266.drop () ; // Release error dropped variable
  }
  GALGAS_calleeKindIR var_calleeKind_31681 = function_checkMode (constinArgument_inMode, var_calleeMode_31384, var_routineKind_31334, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 783)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_31901 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 790)) ;
  {
  routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_formalSignature_31436, constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_31901, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 791)) ;
  }
  GALGAS_objectIR var_functionResult_32560 ;
  {
  routine_getNewTempVariable (var_routineDescriptor_31266.getter_mReturnType (HERE), var_routineMangledName_30912.getter_location (SOURCE_FILE ("expression-primary.galgas", 807)), ioArgument_ioTemporaries, var_functionResult_32560, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 807)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_functionResult_32560, var_routineMangledName_30912, var_LLVMInvocationRoutineName_31224, var_calleeKind_31681, var_effectiveParameterListIR_31901  COMMA_SOURCE_FILE ("expression-primary.galgas", 809))  COMMA_SOURCE_FILE ("expression-primary.galgas", 809)) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_30912 COMMA_SOURCE_FILE ("expression-primary.galgas", 818)) ;
  }
  ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 820)), var_functionResult_32560  COMMA_SOURCE_FILE ("expression-primary.galgas", 820)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeEffectiveParametersNew'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParametersNew (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
  GALGAS_procEffectiveParameterList var_parameterList_34008 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 841)) ;
  cEnumerator_routineTypedSignature enumerator_34051 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_34094 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_34051.hasCurrentObject () && enumerator_34094.hasCurrentObject ()) {
    switch (enumerator_34094.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_35121 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_34094.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_35121->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_35121->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_35121->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_34051.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 848)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_34232 = temp_0 ;
        GALGAS_lstring var_varLLVMName_34400 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 850)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 850)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 850)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 850))  COMMA_SOURCE_FILE ("expression-primary.galgas", 850)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 851)) ;
        GALGAS_objectIR var_objectIR_34532 = GALGAS_objectIR::constructor_localVariableReference (var_type_34232, var_varLLVMName_34400  COMMA_SOURCE_FILE ("expression-primary.galgas", 852)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_34650 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_34650, extractedValue_name, var_objectIR_34532, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 854)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_34724 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_34724, extractedValue_name, var_objectIR_34532, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 856)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 856)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_34400.getter_string (SOURCE_FILE ("expression-primary.galgas", 858)), extensionGetter_llvmTypeName (var_type_34232.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 858))  COMMA_SOURCE_FILE ("expression-primary.galgas", 858)) ;
        var_parameterList_34008.addAssign_operation (enumerator_34094.current_mEffectiveParameterKind (HERE), enumerator_34094.current_mSelector (HERE), var_type_34232  COMMA_SOURCE_FILE ("expression-primary.galgas", 859)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 861)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_34232, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_34400.getter_string (SOURCE_FILE ("expression-primary.galgas", 862)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 862)), var_varLLVMName_34400.getter_location (SOURCE_FILE ("expression-primary.galgas", 862))  COMMA_SOURCE_FILE ("expression-primary.galgas", 862)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 862))  COMMA_SOURCE_FILE ("expression-primary.galgas", 862))  COMMA_SOURCE_FILE ("expression-primary.galgas", 860)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_35939 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_34094.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_35939->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_35231 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_35178 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_35178, extractedValue_name, var_objectIR_35231, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 864)) ;
        }
        var_parameterList_34008.addAssign_operation (enumerator_34094.current_mEffectiveParameterKind (HERE), enumerator_34094.current_mSelector (HERE), extensionGetter_type (var_objectIR_35231, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 874))  COMMA_SOURCE_FILE ("expression-primary.galgas", 874)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 876)), GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_35231, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 878)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_35231, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 879)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 879)), extensionGetter_location (var_objectIR_35231, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 880))  COMMA_SOURCE_FILE ("expression-primary.galgas", 879)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 881))  COMMA_SOURCE_FILE ("expression-primary.galgas", 877))  COMMA_SOURCE_FILE ("expression-primary.galgas", 875)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_37033 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_34094.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_37033->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_37033->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_36513 ;
        callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_34051.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_36513, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 884)) ;
        GALGAS_objectIR var_expressionValue_36679 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_36513, extractedValue_endOfExp, var_expressionValue_36679, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 898)) ;
        }
        GALGAS_objectIR var_result_36706 = function_checkAssignmentCompatibility (var_expressionValue_36679, enumerator_34051.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 904)) ;
        var_parameterList_34008.addAssign_operation (enumerator_34094.current_mEffectiveParameterKind (HERE), enumerator_34094.current_mSelector (HERE), enumerator_34051.current_mType (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 910)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 911)), var_result_36706  COMMA_SOURCE_FILE ("expression-primary.galgas", 911)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_37774 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_34094.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_37774->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_37153 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_37096 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_37096, extractedValue_name, var_objectIR_37153, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 913)) ;
        }
        var_parameterList_34008.addAssign_operation (enumerator_34094.current_mEffectiveParameterKind (HERE), enumerator_34094.current_mSelector (HERE), extensionGetter_type (var_objectIR_37153, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 920))  COMMA_SOURCE_FILE ("expression-primary.galgas", 920)) ;
        GALGAS_objectIR var_argumentIR_37525 = GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_37153, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 922)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_37153, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 923)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 923)), extensionGetter_location (var_objectIR_37153, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 923))  COMMA_SOURCE_FILE ("expression-primary.galgas", 923)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 924))  COMMA_SOURCE_FILE ("expression-primary.galgas", 921)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 926)), var_argumentIR_37525  COMMA_SOURCE_FILE ("expression-primary.galgas", 926)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_40218 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_34094.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_40218->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 928)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 929)), GALGAS_string ("'self' is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 929)) ;
          var_parameterList_34008.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 935)).enumValue ()) {
          case GALGAS_typeKind::kNotBuilt:
            break ;
          case GALGAS_typeKind::kEnum_opaque:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 937)), GALGAS_string ("a structure type is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 937)) ;
              var_parameterList_34008.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_arrayType:
            {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 939)), GALGAS_string ("a structure type is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 939)) ;
              var_parameterList_34008.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_boolean:
            {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 941)), GALGAS_string ("a structure type is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 941)) ;
              var_parameterList_34008.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_staticInteger:
            {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 943)), GALGAS_string ("a structure type is required here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 943)) ;
              var_parameterList_34008.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_literalString:
            {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 945)), GALGAS_string ("a structure type is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 945)) ;
              var_parameterList_34008.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_enumeration:
            {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 947)), GALGAS_string ("a structure type is required here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 947)) ;
              var_parameterList_34008.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_function:
            {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 949)), GALGAS_string ("a structure type is required here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 949)) ;
              var_parameterList_34008.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_pointer:
            {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 951)), GALGAS_string ("a structure type is required here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 951)) ;
              var_parameterList_34008.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_integer:
            {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 953)), GALGAS_string ("a structure type is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-primary.galgas", 953)) ;
              var_parameterList_34008.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_structure:
            {
              const cEnumAssociatedValues_typeKind_structure * extractPtr_40192 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 935)).unsafePointer ()) ;
              const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_40192->mAssociatedValue2 ;
              GALGAS_universalPropertyAndRoutineMapForContext var_m_39554 = extractedValue_universalMap ;
              GALGAS_objectIR var_propertyObject_39642 ;
              {
              var_m_39554.insulate (HERE) ;
              cPtr_universalPropertyAndRoutineMapForContext * ptr_39584 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_39554.ptr () ;
              callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_39584, extractedValue_name, var_propertyObject_39642, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 956)) ;
              }
              GALGAS_uint var_idx_39697 ;
              GALGAS_unifiedTypeMap_2D_proxy joker_39680_2 ; // Joker input parameter
              GALGAS_lstring joker_39680_1 ; // Joker input parameter
              var_propertyObject_39642.method_property (joker_39680_2, joker_39680_1, var_idx_39697, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 957)) ;
              GALGAS_objectIR var_fieldObjectReference_39799 ;
              {
              routine_getNewTempVariable (extensionGetter_type (var_propertyObject_39642, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 958)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 958)), ioArgument_ioTemporaries, var_fieldObjectReference_39799, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 958)) ;
              }
              {
              extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_39799, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 962)), var_idx_39697, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 959)) ;
              }
              var_parameterList_34008.addAssign_operation (enumerator_34094.current_mEffectiveParameterKind (HERE), enumerator_34094.current_mSelector (HERE), extensionGetter_type (var_propertyObject_39642, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 965))  COMMA_SOURCE_FILE ("expression-primary.galgas", 965)) ;
              ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 967)), var_fieldObjectReference_39799  COMMA_SOURCE_FILE ("expression-primary.galgas", 966)) ;
            }
            break ;
          }
        }
      }
      break ;
    }
    enumerator_34051.gotoNextObject () ;
    enumerator_34094.gotoNextObject () ;
  }
  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 974)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 974)))).boolEnum () ;
  if (kBoolTrue == test_14) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 975)).getter_string (SOURCE_FILE ("expression-primary.galgas", 975)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 975)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 975)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 976)).getter_string (SOURCE_FILE ("expression-primary.galgas", 975)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 975)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 976)), fixItArray15  COMMA_SOURCE_FILE ("expression-primary.galgas", 975)) ;
  }else if (kBoolFalse == test_14) {
    cEnumerator_routineTypedSignature enumerator_40550 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_40579 (var_parameterList_34008, kENUMERATION_UP) ;
    while (enumerator_40550.hasCurrentObject () && enumerator_40579.hasCurrentObject ()) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, enumerator_40550.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 979)).objectCompare (enumerator_40579.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 979)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_40579.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 980)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_40579.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 980)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 980)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 980)).add_operation (enumerator_40550.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 981)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 981)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 981)), fixItArray17  COMMA_SOURCE_FILE ("expression-primary.galgas", 980)) ;
      }
      GALGAS_string var_requiredPassingMode_40870 = extensionGetter_requiredActualPassingModeForSelector (enumerator_40550.current_mFormalArgumentPassingMode (HERE), enumerator_40550.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 983)) ;
      GALGAS_string var_testedPassingMode_40991 = extensionGetter_passingModeForActualSelector (enumerator_40579.current_mEffectiveParameterPassingMode (HERE), enumerator_40579.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 984)) ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_40870.objectCompare (var_testedPassingMode_40991)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_40579.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 986)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_40870, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 986)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 986)), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 986)) ;
      }
      enumerator_40550.gotoNextObject () ;
      enumerator_40579.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                             const GALGAS_string constinArgument_inGlobalVariableReceiverName,
                                             const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                             const GALGAS_bool constinArgument_inGuard,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                             const GALGAS_location constinArgument_inErrorLocation,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             GALGAS_objectIR & ioArgument_ioObjectPtr,
                                             GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 1016)).operator_not (SOURCE_FILE ("expression-primary.galgas", 1016)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1017)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_42671 ;
      GALGAS_objectIR joker_42638_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_42638_1, var_functionName_42671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1019)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_42671.getter_location (SOURCE_FILE ("expression-primary.galgas", 1020)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1020)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_42842 ;
      GALGAS_lstring var_functionName_42873 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_42842, var_functionName_42873, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1022)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_43580 ;
      GALGAS_calleeKindIR var_routineKind_43629 ;
      GALGAS_lstring var_functionMangledName_43688 ;
      GALGAS_lstring var_functionNameForGeneration_43759 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_42842, var_functionName_42873, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_43580, var_routineKind_43629, var_functionMangledName_43688, var_functionNameForGeneration_43759, outArgument_outReturnedType, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1023)) ;
      }
      GALGAS_objectIR var_functionResult_43947 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_43688.getter_location (SOURCE_FILE ("expression-primary.galgas", 1046)), ioArgument_ioTemporaries, var_functionResult_43947, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1046)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_43947, var_functionMangledName_43688, var_functionNameForGeneration_43759, var_routineKind_43629, var_effectiveParameterListIR_43580  COMMA_SOURCE_FILE ("expression-primary.galgas", 1048))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1048)) ;
      ioArgument_ioObjectPtr = var_functionResult_43947 ;
    }
  }
}


