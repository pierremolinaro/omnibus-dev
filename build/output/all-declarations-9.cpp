#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@staticArrayAST location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_staticArrayAST_location (const cPtr_abstractDeclarationAST * inObject,
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

static GALGAS_string extensionGetter_staticArrayAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
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

static void extensionMethod_staticArrayAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                         GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                         GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
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

static void extensionMethod_staticArrayAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  {
  const GALGAS_staticArrayAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 101)) ;
  }
  cEnumerator_staticArrayPropertyListAST enumerator_4260 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_4260.hasCurrentObject ()) {
    switch (enumerator_4260.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticArrayPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType * extractPtr_4457 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType *) (enumerator_4260.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_4457->mAssociatedValue0 ;
        GALGAS_lstring var_typeName_4347 = function_llvmRegularTypeMangledNameFromName (extractedValue_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 106)) ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_typeName_4347 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 107)) ;
        }
      }
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_function * extractPtr_4916 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_function *) (enumerator_4260.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_4916->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_4916->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentList enumerator_4594 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_4594.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_4618 = function_llvmRegularTypeMangledNameFromName (enumerator_4594.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 110)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_4618 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 111)) ;
          }
          enumerator_4594.gotoNextObject () ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_lstring var_returnTypeName_4794 = function_llvmRegularTypeMangledNameFromName (extractedValue_returnType, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 114)) ;
          {
          ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_returnTypeName_4794 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 115)) ;
          }
        }
      }
      break ;
    }
    enumerator_4260.gotoNextObject () ;
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

static void extensionMethod_staticArrayAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                           GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  GALGAS_propertyList var_propertyList_5969 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 140)) ;
  GALGAS_propertyMap var_staticlistPropertyMap_6011 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 141)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6073 = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("declaration-static-array.galgas", 142)) ;
  GALGAS_stringset var_propertyNameSet_6113 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 143)) ;
  GALGAS_lstring var_plmTypeName_6136 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 144)) ;
  cEnumerator_staticArrayPropertyListAST enumerator_6232 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  GALGAS_uint index_6195 ((uint32_t) 0) ;
  while (enumerator_6232.hasCurrentObject ()) {
    switch (enumerator_6232.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticArrayPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType * extractPtr_6919 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType *) (enumerator_6232.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_6919->mAssociatedValue0 ;
        GALGAS_PLMType var_propertyType_6339 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 148)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 148)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_6113.getter_hasKey (enumerator_6232.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 149)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 149)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_6232.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 150)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 150)) ;
        }
        var_propertyNameSet_6113.addAssign_operation (enumerator_6232.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 152))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 152)) ;
        var_propertyList_5969.addAssign_operation (enumerator_6232.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 153)), var_propertyType_6339  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 153)) ;
        GALGAS_objectIR var_objectIR_6647 = GALGAS_objectIR::constructor_property (var_propertyType_6339, enumerator_6232.current_mPropertyName (HERE), index_6195  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 154)) ;
        {
        var_universalMap_6073.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_6754 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6073.ptr () ;
        callExtensionSetter_insertProperty ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6754, enumerator_6232.current_mPropertyName (HERE), GALGAS_bool (true), var_objectIR_6647, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 155)) ;
        }
        {
        var_staticlistPropertyMap_6011.setter_insertKey (enumerator_6232.current_mPropertyName (HERE), GALGAS_bool (true), var_objectIR_6647, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 156)) ;
        }
      }
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_function * extractPtr_8500 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_function *) (enumerator_6232.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_8500->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_8500->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_8500->mAssociatedValue2 ;
        GALGAS_lstring var_routineMangledName_7073 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_6232.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 163)) ;
        GALGAS_routineTypedSignature var_signature_7257 ;
        {
        routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_7257, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 169)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 171)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 173)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_7306 = temp_2 ;
        GALGAS_routineDescriptor var_descriptor_7478 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (extractedValue_mode  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 178)), var_signature_7257, var_returnTypeProxy_7306, GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineCallingSheme::constructor_propertyIndirectCall (index_6195  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 183))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 175)) ;
        {
        var_universalMap_6073.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7733 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6073.ptr () ;
        callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7733, enumerator_6232.current_mPropertyName (HERE), extensionGetter_routineSignature (extractedValue_formalArgs, enumerator_6232.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 187)), var_routineMangledName_7073, var_descriptor_7478, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 185)) ;
        }
        const enumGalgasBool test_4 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_routineMangledName_7073.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 191)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 191)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 191)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_routineMangledName_7073, GALGAS_PLMType::constructor_function (var_descriptor_7478  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 192)) ;
          }
        }
        GALGAS_PLMType var_propertyType_8113 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_routineMangledName_7073, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 197)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 197)) ;
        var_propertyList_5969.addAssign_operation (enumerator_6232.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 198)), var_propertyType_8113  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 198)) ;
        GALGAS_uint var_propertyIndex_8270 = var_staticlistPropertyMap_6011.getter_count (SOURCE_FILE ("declaration-static-array.galgas", 199)) ;
        {
        var_staticlistPropertyMap_6011.setter_insertKey (var_routineMangledName_7073, GALGAS_bool (true), GALGAS_objectIR::constructor_property (var_propertyType_8113, enumerator_6232.current_mPropertyName (HERE), var_propertyIndex_8270  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 200)) ;
        }
      }
      break ;
    }
    enumerator_6232.gotoNextObject () ;
    index_6195.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 145)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticlistMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_5969, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 207)) ;
  }
  GALGAS_PLMType var_kind_8644 = GALGAS_PLMType::constructor_structure (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 213)), var_staticlistPropertyMap_6011, var_universalMap_6073, var_propertyList_5969, GALGAS_uint ((uint32_t) 0U), object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 218))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 212)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmTypeName_6136, var_kind_8644, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 220)) ;
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

static void extensionMethod_staticArrayAST_enterRoutinesInContext (const cPtr_abstractDeclarationAST * /* inObject */,
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
//                     Overriding extension method '@staticArrayAST solveEntitiesForDeclarations'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_solveEntitiesForDeclarations (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                         const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_solveEntitiesForDeclarations (void) {
  enterExtensionMethod_solveEntitiesForDeclarations (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                                     extensionMethod_staticArrayAST_solveEntitiesForDeclarations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_solveEntitiesForDeclarations (defineExtensionMethod_staticArrayAST_solveEntitiesForDeclarations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@staticArrayAST semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  GALGAS_lstring var_plmTypeName_10471 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 254)) ;
  GALGAS_PLMType var_type_10589 ;
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (var_plmTypeName_10471, var_type_10589, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 255)) ;
  {
  routine_generatePropertyAccess (var_type_10589, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 256)) ;
  }
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

static GALGAS_location extensionGetter_extendStaticArrayDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
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

static GALGAS_string extensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
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

static void extensionMethod_extendStaticArrayDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                          GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
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

static void extensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_lstring var_nodeName_4227 = GALGAS_lstring::constructor_new (object->mProperty_mStaticlistName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 100)).add_operation (ioArgument_ioGraph.getter_keyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 100)).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 100)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 100)), object->mProperty_mStaticlistName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 100))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 100)) ;
  {
  const GALGAS_extendStaticArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4227, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 102)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4227, object->mProperty_mStaticlistName COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 104)) ;
  }
  cEnumerator_extendStaticArrayExpressionListAST enumerator_4562 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_4562.hasCurrentObject ()) {
    switch (enumerator_4562.current_mExpression (HERE).enumValue ()) {
    case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_4696 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_4562.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_4696->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), var_nodeName_4227, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 109)) ;
      }
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_4949 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_4562.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_4949->mAssociatedValue1 ;
        cEnumerator_routineFormalArgumentList enumerator_4813 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_4813.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_4837 = function_llvmRegularTypeMangledNameFromName (enumerator_4813.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 112)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_4837 COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 113)) ;
          }
          enumerator_4813.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4562.gotoNextObject () ;
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

static void extensionMethod_extendStaticArrayDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                            const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                            GALGAS_semanticContext & ioArgument_ioContext,
                                                                            GALGAS_staticlistValues_5F_listMap & ioArgument_ioStaticListValueMap,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_propertyList var_staticArrayPropertyList_5906 ;
  ioArgument_ioContext.getter_mStaticlistMap (HERE).method_searchKey (object->mProperty_mStaticlistName, var_staticArrayPropertyList_5906, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 133)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_staticArrayPropertyList_5906.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 134)).objectCompare (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 134)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStaticlistName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 135)), var_staticArrayPropertyList_5906.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 136)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 136)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 136)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 137)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 136)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 137)), fixItArray1  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 135)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_staticValue_6155 = GALGAS_string ("{") ;
    cEnumerator_extendStaticArrayExpressionListAST enumerator_6204 (object->mProperty_mExpressions, kENUMERATION_UP) ;
    cEnumerator_propertyList enumerator_6241 (var_staticArrayPropertyList_5906, kENUMERATION_UP) ;
    while (enumerator_6204.hasCurrentObject () && enumerator_6241.hasCurrentObject ()) {
      switch (enumerator_6204.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_8023 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_6204.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_8023->mAssociatedValue0 ;
          const enumGalgasBool test_2 = enumerator_6241.current_mType (HERE).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 143)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_6204.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray3  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 144)) ;
          }else if (kBoolFalse == test_2) {
            GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6733 ;
            {
            GALGAS_unifiedSymbolMapEx joker_6664 ; // Joker input parameter
            routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 148)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 150)), joker_6664, var_universalMap_6733, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 146)) ;
            }
            GALGAS_semanticTemporariesStruct var_temporaries_6794 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-extend-static-array.galgas", 154)) ;
            GALGAS_instructionListIR var_instructionGenerationList_6860 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 155)) ;
            GALGAS_allocaList var_allocaList_6898 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 156)) ;
            GALGAS_objectIR var_expressionResult_7418 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-extend-static-array.galgas", 158)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 160)), enumerator_6241.current_mType (HERE), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 163)), var_temporaries_6794, ioArgument_ioGlobalLiteralStringMap, var_universalMap_6733, var_allocaList_6898, var_instructionGenerationList_6860, var_expressionResult_7418, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 157)) ;
            GALGAS_objectIR var_result_7495 = function_checkAssignmentCompatibility (var_expressionResult_7418, enumerator_6241.current_mType (HERE), enumerator_6204.current_mEndOfExpression (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 172)) ;
            GALGAS_bool test_4 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_6860.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 178)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            if (kBoolTrue != test_4.boolEnum ()) {
              test_4 = GALGAS_bool (kIsStrictSup, var_allocaList_6898.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 178)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            }
            GALGAS_bool test_5 = test_4 ;
            if (kBoolTrue != test_5.boolEnum ()) {
              test_5 = extensionGetter_isStatic (var_result_7495, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 178)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 178)) ;
            }
            const enumGalgasBool test_6 = test_5.boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_6204.current_mEndOfExpression (HERE), GALGAS_string ("source expression cannot be statically computed"), fixItArray7  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 179)) ;
            }
            var_staticValue_6155.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_6241.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 182)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 182)).add_operation (extensionGetter_llvmName (var_expressionResult_7418, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 182)) ;
          }
        }
        break ;
      case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_10887 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_6204.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_10887->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_10887->mAssociatedValue1 ;
          const enumGalgasBool test_8 = enumerator_6241.current_mType (HERE).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 185)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 185)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_6204.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray9  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 186)) ;
          }else if (kBoolFalse == test_8) {
            GALGAS_routineDescriptor var_functionDescriptor_8290 ;
            enumerator_6241.current_mType (HERE).method_function (var_functionDescriptor_8290, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 188)) ;
            GALGAS_lstring var_argumentSignature_8323 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 189)) ;
            GALGAS_lstring var_candidateRoutineLLVMName_8530 ;
            GALGAS_routineDescriptor var_routineDescriptor_8584 ;
            GALGAS_location var_functionDefinitionLocation_8628 ;
            extensionMethod_searchKey (ioArgument_ioContext.getter_mRoutineMapForContext (HERE), extractedValue_functionName, var_argumentSignature_8323, var_candidateRoutineLLVMName_8530, var_routineDescriptor_8584, var_functionDefinitionLocation_8628, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 190)) ;
            GALGAS_bool var_candidateIsPublic_8672 = var_routineDescriptor_8584.getter_mIsPublic (HERE) ;
            GALGAS_routineKind var_candidateRoutineKind_8737 = var_routineDescriptor_8584.getter_mRoutineKind (HERE) ;
            GALGAS_mode var_candidateMode_8798 = extensionGetter_executionMode (var_routineDescriptor_8584.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 199)) ;
            GALGAS_routineTypedSignature var_candidateSignature_8915 = var_routineDescriptor_8584.getter_mSignature (HERE) ;
            GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnTypeProxy_8985 = var_routineDescriptor_8584.getter_mReturnTypeProxy (HERE) ;
            const enumGalgasBool test_10 = var_candidateIsPublic_8672.operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 203)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string var_declarationFile_9127 = var_functionDefinitionLocation_8628.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 204)) ;
              GALGAS_string var_invocationFile_9194 = extractedValue_functionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)) ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_invocationFile_9194.objectCompare (var_declarationFile_9127)).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), GALGAS_string ("this function is not public"), fixItArray12  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)) ;
              }
            }
            const enumGalgasBool test_13 = var_candidateRoutineKind_8737.getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 210)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 210)).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 211)), GALGAS_string ("this routine is not a function"), fixItArray14  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 211)) ;
            }
            GALGAS_mode var_currentMode_9536 = extensionGetter_executionMode (var_functionDescriptor_8290.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 213)) ;
            const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_currentMode_9536.objectCompare (var_candidateMode_8798)).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 215)), GALGAS_string ("this function runs in ").add_operation (extensionGetter_string (var_candidateMode_8798, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)).add_operation (GALGAS_string (" mode, but "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)).add_operation (extensionGetter_string (var_currentMode_9536, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)).add_operation (GALGAS_string (" is required"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)), fixItArray16  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)) ;
            }
            GALGAS_bool test_17 = GALGAS_bool (kIsEqual, var_functionDescriptor_8290.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 217)))) ;
            if (kBoolTrue == test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_8985.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 217)))) ;
            }
            const enumGalgasBool test_18 = test_17.boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 218)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnTypeProxy_8985.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 218)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 218)), fixItArray19  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 218)) ;
            }else if (kBoolFalse == test_18) {
              GALGAS_bool test_20 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8290.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 219)))) ;
              if (kBoolTrue == test_20.boolEnum ()) {
                test_20 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_8985.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 219)))) ;
              }
              const enumGalgasBool test_21 = test_20.boolEnum () ;
              if (kBoolTrue == test_21) {
                TC_Array <C_FixItDescription> fixItArray22 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 220)), GALGAS_string ("this function should return no object"), fixItArray22  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 220)) ;
              }
            }
            const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8290.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 222)).objectCompare (var_candidateSignature_8915.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 222)))).boolEnum () ;
            if (kBoolTrue == test_23) {
              TC_Array <C_FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 223)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_8915.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 224)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 224)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 224)).add_operation (var_functionDescriptor_8290.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 225)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 224)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), fixItArray24  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 223)) ;
            }else if (kBoolFalse == test_23) {
              cEnumerator_routineTypedSignature enumerator_10523 (var_functionDescriptor_8290.getter_mSignature (HERE), kENUMERATION_UP) ;
              cEnumerator_routineTypedSignature enumerator_10556 (var_candidateSignature_8915, kENUMERATION_UP) ;
              while (enumerator_10523.hasCurrentObject () && enumerator_10556.hasCurrentObject ()) {
                const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_10523.current (HERE).getter_mTypeProxy (HERE).objectCompare (enumerator_10556.current (HERE).getter_mTypeProxy (HERE))).boolEnum () ;
                if (kBoolTrue == test_25) {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (enumerator_10556.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 229)), GALGAS_string ("argument type should be $").add_operation (enumerator_10523.current (HERE).getter_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 229)), fixItArray26  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 229)) ;
                }
                enumerator_10523.gotoNextObject () ;
                enumerator_10556.gotoNextObject () ;
              }
            }
            var_staticValue_6155.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_6241.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 233)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 233)).add_operation (function_llvmNameForFunction (var_candidateRoutineLLVMName_8530.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 233)) ;
          }
        }
        break ;
      }
      if (enumerator_6204.hasNextObject () && enumerator_6241.hasNextObject ()) {
        var_staticValue_6155.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 237)) ;
      }
      enumerator_6204.gotoNextObject () ;
      enumerator_6241.gotoNextObject () ;
    }
    var_staticValue_6155.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 239)) ;
    ioArgument_ioStaticListValueMap.addAssign_operation (object->mProperty_mStaticlistName.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 240)), var_staticValue_6155  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 240)) ;
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

static void extensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (const cPtr_abstractDeclarationAST * /* inObject */,
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
//             Overriding extension method '@extendStaticArrayDeclarationAST solveEntitiesForDeclarations'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_solveEntitiesForDeclarations (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                          const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_solveEntitiesForDeclarations (void) {
  enterExtensionMethod_solveEntitiesForDeclarations (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                                     extensionMethod_extendStaticArrayDeclarationAST_solveEntitiesForDeclarations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_solveEntitiesForDeclarations (defineExtensionMethod_extendStaticArrayDeclarationAST_solveEntitiesForDeclarations, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extendStaticArrayDeclarationAST semanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                              const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_stringset var_invokedFunctionSet_12859 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-extend-static-array.galgas", 280)) ;
  cEnumerator_extendStaticArrayExpressionListAST enumerator_12905 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_12905.hasCurrentObject ()) {
    switch (enumerator_12905.current_mExpression (HERE).enumValue ()) {
    case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_12977 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_12905.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_12977->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_13259 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_12905.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_functionName = extractPtr_13259->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_13259->mAssociatedValue1 ;
        GALGAS_lstring var_routineMangledName_13118 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 286)) ;
        var_invokedFunctionSet_12859.addAssign_operation (var_routineMangledName_13118.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 291))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 291)) ;
      }
      break ;
    }
    enumerator_12905.gotoNextObject () ;
  }
  cMapElement_staticArrayMap * objectArray_13280 = (cMapElement_staticArrayMap *) ioArgument_ioTemporaries.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 294)) ;
  if (NULL != objectArray_13280) {
      macroValidSharedObject (objectArray_13280, cMapElement_staticArrayMap) ;
    objectArray_13280->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12859, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 295)) ;
  }else{
    {
    ioArgument_ioTemporaries.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12859, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 297)) ;
    }
  }
  cMapElement_staticArrayMap * objectArray_13492 = (cMapElement_staticArrayMap *) ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 299)) ;
  if (NULL != objectArray_13492) {
      macroValidSharedObject (objectArray_13492, cMapElement_staticArrayMap) ;
    objectArray_13492->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12859, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 300)) ;
  }else{
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12859, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 302)) ;
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
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("panic") ;
//---
  return result_result ;
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
//                                     Once function 'panicCodeForAssertViolation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForAssertViolation (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 3)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForAssertViolation = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForAssertViolation ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForAssertViolation (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForAssertViolation) {
    gOnceFunctionResult_panicCodeForAssertViolation = onceFunction_panicCodeForAssertViolation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForAssertViolation = true ;
  }
  return gOnceFunctionResult_panicCodeForAssertViolation ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForAssertViolation (void) {
  gOnceFunctionResult_panicCodeForAssertViolation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForAssertViolation (NULL,
                                                                         releaseOnceFunctionResult_panicCodeForAssertViolation) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForAssertViolation [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForAssertViolation (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForAssertViolation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForAssertViolation ("panicCodeForAssertViolation",
                                                                             functionWithGenericHeader_panicCodeForAssertViolation,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForAssertViolation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Once function 'panicCodeForUnsignedAdditionOverflow'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 5)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (NULL,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForSignedAdditionOverflow'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForSignedAdditionOverflow = onceFunction_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedAdditionOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedAdditionOverflow (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedAdditionOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedAdditionOverflow ("panicCodeForSignedAdditionOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedAdditionOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Once function 'panicCodeForUnsignedSubtractOverflow'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow = onceFunction_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedSubtractOverflow (NULL,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedSubtractOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedSubtractOverflow ("panicCodeForUnsignedSubtractOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForSignedSubtractOverflow'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForSignedSubtractOverflow = onceFunction_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedSubtractOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedSubtractOverflow (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedSubtractOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedSubtractOverflow ("panicCodeForSignedSubtractOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedSubtractOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Once function 'panicCodeForUnsignedMultiplicationOverflow'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow = onceFunction_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedMultiplicationOverflow (NULL,
                                                                                        releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedMultiplicationOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedMultiplicationOverflow ("panicCodeForUnsignedMultiplicationOverflow",
                                                                                            functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow,
                                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                                            0,
                                                                                            functionArgs_panicCodeForUnsignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Once function 'panicCodeForSignedMultiplicationOverflow'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow = onceFunction_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedMultiplicationOverflow (NULL,
                                                                                      releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedMultiplicationOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                                         const GALGAS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedMultiplicationOverflow ("panicCodeForSignedMultiplicationOverflow",
                                                                                          functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow,
                                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                                          0,
                                                                                          functionArgs_panicCodeForSignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForUnsignedDivisionByZero'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForUnsignedDivisionByZero = onceFunction_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedDivisionByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedDivisionByZero (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedDivisionByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedDivisionByZero ("panicCodeForUnsignedDivisionByZero",
                                                                                    functionWithGenericHeader_panicCodeForUnsignedDivisionByZero,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForUnsignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'panicCodeForSignedDivisionByZero'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedDivisionByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForSignedDivisionByZero = onceFunction_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedDivisionByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForSignedDivisionByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedDivisionByZero (NULL,
                                                                              releaseOnceFunctionResult_panicCodeForSignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedDivisionByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedDivisionByZero ("panicCodeForSignedDivisionByZero",
                                                                                  functionWithGenericHeader_panicCodeForSignedDivisionByZero,
                                                                                  & kTypeDescriptor_GALGAS_bigint,
                                                                                  0,
                                                                                  functionArgs_panicCodeForSignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForUnsignedRemainderByZero'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForUnsignedRemainderByZero = onceFunction_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedRemainderByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedRemainderByZero (NULL,
                                                                                 releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedRemainderByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedRemainderByZero ("panicCodeForUnsignedRemainderByZero",
                                                                                     functionWithGenericHeader_panicCodeForUnsignedRemainderByZero,
                                                                                     & kTypeDescriptor_GALGAS_bigint,
                                                                                     0,
                                                                                     functionArgs_panicCodeForUnsignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'panicCodeForSignedRemainderByZero'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 23)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedRemainderByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForSignedRemainderByZero = onceFunction_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedRemainderByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForSignedRemainderByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedRemainderByZero (NULL,
                                                                               releaseOnceFunctionResult_panicCodeForSignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedRemainderByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedRemainderByZero ("panicCodeForSignedRemainderByZero",
                                                                                   functionWithGenericHeader_panicCodeForSignedRemainderByZero,
                                                                                   & kTypeDescriptor_GALGAS_bigint,
                                                                                   0,
                                                                                   functionArgs_panicCodeForSignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'panicCodeForConvertOverflow'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForConvertOverflow (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 27)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForConvertOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForConvertOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForConvertOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForConvertOverflow) {
    gOnceFunctionResult_panicCodeForConvertOverflow = onceFunction_panicCodeForConvertOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForConvertOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForConvertOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForConvertOverflow (void) {
  gOnceFunctionResult_panicCodeForConvertOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForConvertOverflow (NULL,
                                                                         releaseOnceFunctionResult_panicCodeForConvertOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForConvertOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForConvertOverflow (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForConvertOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForConvertOverflow ("panicCodeForConvertOverflow",
                                                                             functionWithGenericHeader_panicCodeForConvertOverflow,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForConvertOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Once function 'panicCodeForRegisterFieldOvf'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForRegisterFieldOvf (C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("13", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 31)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForRegisterFieldOvf = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForRegisterFieldOvf ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForRegisterFieldOvf (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForRegisterFieldOvf) {
    gOnceFunctionResult_panicCodeForRegisterFieldOvf = onceFunction_panicCodeForRegisterFieldOvf (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForRegisterFieldOvf = true ;
  }
  return gOnceFunctionResult_panicCodeForRegisterFieldOvf ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForRegisterFieldOvf (void) {
  gOnceFunctionResult_panicCodeForRegisterFieldOvf.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForRegisterFieldOvf (NULL,
                                                                          releaseOnceFunctionResult_panicCodeForRegisterFieldOvf) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForRegisterFieldOvf [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForRegisterFieldOvf (C_Compiler * inCompiler,
                                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  return function_panicCodeForRegisterFieldOvf (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForRegisterFieldOvf ("panicCodeForRegisterFieldOvf",
                                                                              functionWithGenericHeader_panicCodeForRegisterFieldOvf,
                                                                              & kTypeDescriptor_GALGAS_bigint,
                                                                              0,
                                                                              functionArgs_panicCodeForRegisterFieldOvf) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'panicCodeForNegativeArrayIndex'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 35)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForNegativeArrayIndex ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForNegativeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex) {
    gOnceFunctionResult_panicCodeForNegativeArrayIndex = onceFunction_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForNegativeArrayIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForNegativeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForNegativeArrayIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForNegativeArrayIndex (NULL,
                                                                            releaseOnceFunctionResult_panicCodeForNegativeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForNegativeArrayIndex [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForNegativeArrayIndex ("panicCodeForNegativeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForNegativeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForNegativeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'panicCodeForTooLargeArrayIndex'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex) {
    gOnceFunctionResult_panicCodeForTooLargeArrayIndex = onceFunction_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForTooLargeArrayIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForTooLargeArrayIndex (NULL,
                                                                            releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForTooLargeArrayIndex [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForTooLargeArrayIndex ("panicCodeForTooLargeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForTooLargeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForTooLargeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'panicCodeForClosedSync'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForClosedSync (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 41)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForClosedSync = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForClosedSync ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForClosedSync (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForClosedSync) {
    gOnceFunctionResult_panicCodeForClosedSync = onceFunction_panicCodeForClosedSync (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForClosedSync = true ;
  }
  return gOnceFunctionResult_panicCodeForClosedSync ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForClosedSync (void) {
  gOnceFunctionResult_panicCodeForClosedSync.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForClosedSync (NULL,
                                                                    releaseOnceFunctionResult_panicCodeForClosedSync) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForClosedSync [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForClosedSync (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_panicCodeForClosedSync (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForClosedSync ("panicCodeForClosedSync",
                                                                        functionWithGenericHeader_panicCodeForClosedSync,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_panicCodeForClosedSync) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmFunctionPrototype'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmFunctionPrototype (const GALGAS_PLMType & constinArgument_inReturnType,
                                              const GALGAS_string & constinArgument_inFunctionName,
                                              const GALGAS_PLMType & constinArgument_inReceiverType,
                                              const GALGAS_routineFormalArgumentListForGeneration & constinArgument_inFormalArgumentListForGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = extensionGetter_llvmTypeName (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 233)) ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)) ;
  GALGAS_bool var_first_8750 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 236)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 237)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 237)) ;
    var_first_8750 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_8922 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8922.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_first_8750.boolEnum () ;
    if (kBoolTrue == test_1) {
      var_first_8750 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 244)) ;
    }
    switch (enumerator_8922.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8922.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 248)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 248)).add_operation (enumerator_8922.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 248)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8922.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 250)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 250)).add_operation (function_llvmNameForLocalVariable (enumerator_8922.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 250)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8922.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 252)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 252)).add_operation (function_llvmNameForLocalVariable (enumerator_8922.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 252)) ;
      }
      break ;
    }
    enumerator_8922.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 255)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmFunctionPrototype (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_PLMType operand0 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_PLMType operand2 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListForGeneration operand3 = GALGAS_routineFormalArgumentListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                                               inCompiler
                                                                                                                               COMMA_THERE) ;
  return function_llvmFunctionPrototype (operand0,
                                         operand1,
                                         operand2,
                                         operand3,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmFunctionPrototype ("llvmFunctionPrototype",
                                                                       functionWithGenericHeader_llvmFunctionPrototype,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       4,
                                                                       functionArgs_llvmFunctionPrototype) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'llvmFunctionCall'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmFunctionCall (const GALGAS_PLMType & constinArgument_inReturnType,
                                         const GALGAS_string & constinArgument_inFunctionName,
                                         const GALGAS_PLMType & constinArgument_inReceiverType,
                                         const GALGAS_routineFormalArgumentListForGeneration & constinArgument_inFormalArgumentListForGeneration,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("call ").add_operation (extensionGetter_llvmTypeName (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)).add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
  GALGAS_bool var_first_9952 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 267)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 268)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 268)) ;
    var_first_9952 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_10124 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_10124.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_first_9952.boolEnum () ;
    if (kBoolTrue == test_1) {
      var_first_9952 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)) ;
    }
    switch (enumerator_10124.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_10124.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 279)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 279)).add_operation (enumerator_10124.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 279)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_10124.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)).add_operation (function_llvmNameForLocalVariable (enumerator_10124.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_10124.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)).add_operation (function_llvmNameForLocalVariable (enumerator_10124.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)) ;
      }
      break ;
    }
    enumerator_10124.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmFunctionCall [5] = {
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmFunctionCall (C_Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_PLMType operand0 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_PLMType operand2 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListForGeneration operand3 = GALGAS_routineFormalArgumentListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                                               inCompiler
                                                                                                                               COMMA_THERE) ;
  return function_llvmFunctionCall (operand0,
                                    operand1,
                                    operand2,
                                    operand3,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmFunctionCall ("llvmFunctionCall",
                                                                  functionWithGenericHeader_llvmFunctionCall,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  4,
                                                                  functionArgs_llvmFunctionCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateSectionAndSafeDispatcher'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSectionAndSafeDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                               const GALGAS_string constinArgument_inTargetName,
                                               const GALGAS_targetParameters constinArgument_inTargetParameters,
                                               GALGAS_string & ioArgument_ioAssemblerCode,
                                               GALGAS_string & ioArgument_ioLLVMcode,
                                               const GALGAS_sectionIRlist constinArgument_inSectionIRlist,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inTargetParameters.getter_mSectionImplementation (HERE).enumValue ()) {
  case GALGAS_sectionImplementationScheme::kNotBuilt:
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_svc:
    {
      const cEnumAssociatedValues_sectionImplementationScheme_svc * extractPtr_14183 = (const cEnumAssociatedValues_sectionImplementationScheme_svc *) (constinArgument_inTargetParameters.getter_mSectionImplementation (HERE).unsafePointer ()) ;
      const GALGAS_lstring extractedValue_sectionHandler = extractPtr_14183->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_sectionDispatcherEntry = extractPtr_14183->mAssociatedValue2 ;
      const GALGAS_lstring extractedValue_sectionDispatcherHeader = extractPtr_14183->mAssociatedValue3 ;
      const GALGAS_lstring extractedValue_sectionDispatcherInvocation = extractPtr_14183->mAssociatedValue4 ;
      cEnumerator_sectionIRlist enumerator_12482 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
      while (enumerator_12482.hasCurrentObject ()) {
        GALGAS_string var_prototype_12505 = function_llvmFunctionPrototype (enumerator_12482.current_mReturnType (HERE), enumerator_12482.current_mSectionCallName (HERE), enumerator_12482.current_mReceiverType (HERE), enumerator_12482.current_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 338)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (enumerator_12482.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 344)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_12505, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 345)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 345)) ;
        enumerator_12482.gotoNextObject () ;
      }
      cEnumerator_sectionIRlist enumerator_12796 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
      GALGAS_uint index_12741 ((uint32_t) 0) ;
      while (enumerator_12796.hasCurrentObject ()) {
        GALGAS_string var_s_12817 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 350)).add_operation (extractedValue_sectionDispatcherInvocation.getter_string (SOURCE_FILE ("declaration-svc.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
        var_s_12817 = var_s_12817.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_12796.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 352)) ;
        var_s_12817 = var_s_12817.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_12796.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 353)) ;
        var_s_12817 = var_s_12817.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_12741.getter_string (SOURCE_FILE ("declaration-svc.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 354)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_12817, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 355)) ;
        enumerator_12796.gotoNextObject () ;
        index_12741.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 347)) ;
      }
      ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 359)).add_operation (extractedValue_sectionDispatcherHeader.getter_string (SOURCE_FILE ("declaration-svc.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 357)) ;
      cEnumerator_sectionIRlist enumerator_13427 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
      GALGAS_uint index_13372 ((uint32_t) 0) ;
      while (enumerator_13427.hasCurrentObject ()) {
        GALGAS_string var_s_13448 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 364)).add_operation (extractedValue_sectionDispatcherEntry.getter_string (SOURCE_FILE ("declaration-svc.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 362)) ;
        var_s_13448 = var_s_13448.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_13427.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 366)) ;
        var_s_13448 = var_s_13448.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_13427.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 367)) ;
        var_s_13448 = var_s_13448.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_13372.getter_string (SOURCE_FILE ("declaration-svc.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 368)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_13448, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 369)) ;
        enumerator_13427.gotoNextObject () ;
        index_13372.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 361)) ;
      }
      ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 371)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 374)).add_operation (extractedValue_sectionHandler.getter_string (SOURCE_FILE ("declaration-svc.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 372)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 377)) ;
    }
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_function:
    {
      const cEnumAssociatedValues_sectionImplementationScheme_function * extractPtr_15214 = (const cEnumAssociatedValues_sectionImplementationScheme_function *) (constinArgument_inTargetParameters.getter_mSectionImplementation (HERE).unsafePointer ()) ;
      const GALGAS_string extractedValue_disableInterruptInLLVM = extractPtr_15214->mAssociatedValue0 ;
      const GALGAS_string extractedValue_enableInterruptInLLVM = extractPtr_15214->mAssociatedValue1 ;
      cEnumerator_sectionIRlist enumerator_14345 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
      while (enumerator_14345.hasCurrentObject ()) {
        GALGAS_string var_prototype_14368 = function_llvmFunctionPrototype (enumerator_14345.current_mReturnType (HERE), enumerator_14345.current_mSectionCallName (HERE), enumerator_14345.current_mReceiverType (HERE), enumerator_14345.current_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 380)) ;
        GALGAS_string var_resultTypeName_14516 ;
        var_resultTypeName_14516 = extensionGetter_llvmTypeName (enumerator_14345.current_mReturnType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (enumerator_14345.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 388)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define ").add_operation (var_prototype_14368, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extractedValue_disableInterruptInLLVM, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 390)).add_operation (GALGAS_string (" ; Disable interrupt\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 390)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_14345.current_mReturnType (HERE).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 392)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%result = "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 393)) ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmFunctionCall (enumerator_14345.current_mReturnType (HERE), enumerator_14345.current_mSectionImplementationName (HERE), enumerator_14345.current_mReceiverType (HERE), enumerator_14345.current_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 395)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 395)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extractedValue_enableInterruptInLLVM, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 396)).add_operation (GALGAS_string (" ; Enable interrupt\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 396)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (var_resultTypeName_14516, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 397)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_14345.current_mReturnType (HERE).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 398)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" %result"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 399)) ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 401)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 402)) ;
        enumerator_14345.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_none:
    {
    }
    break ;
  }
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
                                                    const GALGAS_targetParameters constinArgument_inTargetParameters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 420)).add_operation (constinArgument_inTargetParameters.getter_mServiceHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 418)) ;
  cEnumerator__32_stringlist enumerator_15806 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_15776 ((uint32_t) 0) ;
  while (enumerator_15806.hasCurrentObject ()) {
    GALGAS_string var_s_15825 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 424)) ;
    var_s_15825 = var_s_15825.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_15806.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)) ;
    var_s_15825 = var_s_15825.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15776.getter_string (SOURCE_FILE ("declaration-svc.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 429)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15825, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)) ;
    enumerator_15806.gotoNextObject () ;
    index_15776.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 423)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 434)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 432)) ;
  cEnumerator__32_stringlist enumerator_16320 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_16280 ((uint32_t) 0) ;
  while (enumerator_16320.hasCurrentObject ()) {
    GALGAS_string var_s_16339 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 439)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 437)) ;
    var_s_16339 = var_s_16339.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_16320.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 441)) ;
    var_s_16339 = var_s_16339.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_16280.getter_string (SOURCE_FILE ("declaration-svc.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 442)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16339, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 443)) ;
    enumerator_16320.gotoNextObject () ;
    index_16280.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 436)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'initSemanticAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initSemanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                   const GALGAS_PLMType constinArgument_inSelfType,
                                   const GALGAS_lbigint constinArgument_inPriority,
                                   const GALGAS_mode constinArgument_inCurrentMode,
                                   const GALGAS_instructionListAST constinArgument_inInstructionListAST,
                                   const GALGAS_location constinArgument_inEndOfInitDeclaration,
                                   GALGAS_allocaList & outArgument_outAllocaList,
                                   GALGAS_instructionListIR & outArgument_outInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAllocaList.drop () ; // Release 'out' argument
  outArgument_outInstructionGenerationList.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineNameForInvocationGraph_5378 = function_initNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inPriority, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 133)) ;
  {
  ioArgument_ioTemporaries.mProperty_mInitRoutinePriorityMap.setter_insertKey (var_routineNameForInvocationGraph_5378, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 134)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_5378.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-init.galgas", 136)).operator_not (SOURCE_FILE ("declaration-init.galgas", 136)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_5378, var_routineNameForInvocationGraph_5378, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 137)) ;
    }
  }
  GALGAS_unifiedSymbolMapEx var_variableMap_5958 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6018 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_initMode (SOURCE_FILE ("declaration-init.galgas", 145)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-init.galgas", 147)), var_variableMap_5958, var_universalMap_6018, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 143)) ;
  }
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 152)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 153)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_5378, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_5958, var_universalMap_6018, outArgument_outAllocaList, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 154)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6018.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 170)) ;
  var_variableMap_5958.method_checkAutomatonStates (constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 171)) ;
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
  cEnumerator_requiredProcedureDeclarationListAST enumerator_2216 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2216.hasCurrentObject ()) {
    GALGAS_lstring var_argumentSignature_2245 = extensionGetter_routineSignature (enumerator_2216.current (HERE).getter_mFormalArgumentList (HERE), enumerator_2216.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 58)) ;
    const enumGalgasBool test_0 = extensionGetter_hasKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), enumerator_2216.current (HERE).getter_mName (HERE), var_argumentSignature_2245, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 59)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 59)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2216.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 60)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 60)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_routineDescriptor var_routineDescriptor_2673 ;
      GALGAS_location var_routineLocation_2712 ;
      GALGAS_lstring joker_2622 ; // Joker input parameter
      extensionMethod_searchKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), enumerator_2216.current (HERE).getter_mName (HERE), var_argumentSignature_2245, joker_2622, var_routineDescriptor_2673, var_routineLocation_2712, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
      GALGAS_bool var_isExported_2741 = var_routineDescriptor_2673.getter_mExported (HERE) ;
      GALGAS_mode var_mode_2786 = extensionGetter_executionMode (var_routineDescriptor_2673.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 70)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_mode_2786.objectCompare (enumerator_2216.current (HERE).getter_mExecutionMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_routineLocation_2712, GALGAS_string ("required mode should be '").add_operation (extensionGetter_string (enumerator_2216.current (HERE).getter_mExecutionMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 73)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 73)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 73)) ;
      }
      GALGAS_bool test_4 = enumerator_2216.current (HERE).getter_mIsExported (HERE) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_isExported_2741.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 76)) ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79))) ;
        inCompiler->emitSemanticError (var_routineLocation_2712, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)), fixItArray6  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_7 = var_isExported_2741 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = enumerator_2216.current (HERE).getter_mIsExported (HERE).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 80)) ;
        }
        const enumGalgasBool test_8 = test_7.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineLocation_2712, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 82)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 82)), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 81)) ;
        }
      }
    }
    enumerator_2216.gotoNextObject () ;
  }
}


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
//                   Overriding extension method '@complexCallNoSelfInstructionAST baseGuardAnalyze'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallNoSelfInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
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
  const cPtr_complexCallNoSelfInstructionAST * object = (const cPtr_complexCallNoSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallNoSelfInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_12409 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 333)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_12470 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 334)) ;
  GALGAS_objectIR var_currentObject_13035 ;
  GALGAS_string var_globalVariableReceiverName_13106 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("declaration-guard.galgas", 337)), GALGAS_bool (false), GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 342)), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12409, var_baseGuardInstructionGenerationList_12470, var_currentObject_13035, var_globalVariableReceiverName_13106, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 335)) ;
  const enumGalgasBool test_0 = var_currentObject_13035.getter_isPossibleFunction (SOURCE_FILE ("declaration-guard.galgas", 353)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 353)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-guard.galgas", 354)), GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 354)) ;
    outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_objectIR var_receiver_13330 ;
    GALGAS_lstring var_functionName_13361 ;
    var_currentObject_13035.method_possibleFunction (var_receiver_13330, var_functionName_13361, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 356)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14029 ;
    GALGAS_calleeKindIR var_routineKind_14085 ;
    GALGAS_lstring var_functionMangledName_14144 ;
    GALGAS_lstring var_functionNameForGeneration_14222 ;
    GALGAS_PLMType var_returnedType_14266 ;
    {
    routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, GALGAS_bool (false), GALGAS_bool (true), var_receiver_13330, var_functionName_13361, object->mProperty_mArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12409, var_baseGuardInstructionGenerationList_12470, var_effectiveParameterListIR_14029, var_routineKind_14085, var_functionMangledName_14144, var_functionNameForGeneration_14222, var_returnedType_14266, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 357)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedType_14266.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 379)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_13361.getter_location (SOURCE_FILE ("declaration-guard.galgas", 380)), GALGAS_string ("<< internal guard error >>"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 380)) ;
    }
    outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_12409, var_baseGuardInstructionGenerationList_12470, var_functionMangledName_14144.getter_string (HERE), var_effectiveParameterListIR_14029  COMMA_SOURCE_FILE ("declaration-guard.galgas", 383)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallNoSelfInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_complexCallNoSelfInstructionAST.mSlotID,
                                         extensionMethod_complexCallNoSelfInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallNoSelfInstructionAST_baseGuardAnalyze (defineExtensionMethod_complexCallNoSelfInstructionAST_baseGuardAnalyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@complexCallSelfInstructionAST baseGuardAnalyze'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallSelfInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
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
  const cPtr_complexCallSelfInstructionAST * object = (const cPtr_complexCallSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallSelfInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_15405 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 405)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_15466 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 406)) ;
  GALGAS_objectIR var_currentObject_16031 ;
  GALGAS_string var_globalVariableReceiverName_16102 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("declaration-guard.galgas", 409)), GALGAS_bool (false), GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 414)), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_15405, var_baseGuardInstructionGenerationList_15466, var_currentObject_16031, var_globalVariableReceiverName_16102, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 407)) ;
  const enumGalgasBool test_0 = var_currentObject_16031.getter_isPossibleFunction (SOURCE_FILE ("declaration-guard.galgas", 425)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 425)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-guard.galgas", 426)), GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 426)) ;
    outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_objectIR var_receiver_16326 ;
    GALGAS_lstring var_functionName_16357 ;
    var_currentObject_16031.method_possibleFunction (var_receiver_16326, var_functionName_16357, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 428)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_17025 ;
    GALGAS_calleeKindIR var_routineKind_17081 ;
    GALGAS_lstring var_functionMangledName_17140 ;
    GALGAS_lstring var_functionNameForGeneration_17218 ;
    GALGAS_PLMType var_returnedType_17262 ;
    {
    routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, GALGAS_bool (false), GALGAS_bool (true), var_receiver_16326, var_functionName_16357, object->mProperty_mArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_15405, var_baseGuardInstructionGenerationList_15466, var_effectiveParameterListIR_17025, var_routineKind_17081, var_functionMangledName_17140, var_functionNameForGeneration_17218, var_returnedType_17262, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 429)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedType_17262.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 451)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_16357.getter_location (SOURCE_FILE ("declaration-guard.galgas", 452)), GALGAS_string ("<< internal guard error >>"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 452)) ;
    }
    outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_15405, var_baseGuardInstructionGenerationList_15466, var_functionMangledName_17140.getter_string (HERE), var_effectiveParameterListIR_17025  COMMA_SOURCE_FILE ("declaration-guard.galgas", 455)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallSelfInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_complexCallSelfInstructionAST.mSlotID,
                                         extensionMethod_complexCallSelfInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallSelfInstructionAST_baseGuardAnalyze (defineExtensionMethod_complexCallSelfInstructionAST_baseGuardAnalyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@convertExpressionAST solveEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_solveEntities (const cPtr_expressionAST * inObject,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                GALGAS_expressionSE & outArgument_outExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_expressionSE var_expression_1329 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSemanticContext, var_expression_1329, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  outArgument_outExpression = GALGAS_convertExpressionSE::constructor_new (var_expression_1329, object->mProperty_mTypeName, object->mProperty_mEndOfExpression  COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 66)) ;
  GALGAS_lstring var_typeName_2971 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 67)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2971 COMMA_SOURCE_FILE ("expression-convert.galgas", 68)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 76)) ;
  GALGAS_lstring var_typeName_3615 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 77)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3615 COMMA_SOURCE_FILE ("expression-convert.galgas", 78)) ;
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
  GALGAS_objectIR var_expressionResultPossibleReference_5362 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5362, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 102)) ;
  GALGAS_objectIR var_expressionResult_5523 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5362, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 119)), var_expressionResult_5523, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 123)).operator_not (SOURCE_FILE ("expression-convert.galgas", 123)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 124)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 124)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 124)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 124)) ;
  }
  GALGAS_PLMType var_resultType_5728 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 127)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 127)) ;
  const enumGalgasBool test_2 = var_resultType_5728.getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 129)).operator_not (SOURCE_FILE ("expression-convert.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 130)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 130)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_type (var_expressionResult_5523, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 131)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 131)).operator_not (SOURCE_FILE ("expression-convert.galgas", 131)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 132)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_6123 ;
      GALGAS_bigint var_maxSource_6142 ;
      GALGAS_bool joker_6144_3 ; // Joker input parameter
      GALGAS_uint joker_6144_2 ; // Joker input parameter
      GALGAS_string joker_6144_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_5523, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 134)).method_integer (var_minSource_6123, var_maxSource_6142, joker_6144_3, joker_6144_2, joker_6144_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 134)) ;
      GALGAS_bigint var_minTarget_6190 ;
      GALGAS_bigint var_maxTarget_6209 ;
      GALGAS_bool joker_6211_3 ; // Joker input parameter
      GALGAS_uint joker_6211_2 ; // Joker input parameter
      GALGAS_string joker_6211_1 ; // Joker input parameter
      var_resultType_5728.method_integer (var_minTarget_6190, var_maxTarget_6209, joker_6211_3, joker_6211_2, joker_6211_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 135)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_6190.objectCompare (var_minSource_6123)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_6209.objectCompare (var_maxSource_6142)) ;
      }
      GALGAS_bool var_alwaysPossible_6237 = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible_6237.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 138)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-convert.galgas", 138)) ;
      }
      {
      routine_getNewTempVariable (var_resultType_5728, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 140)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_5523  COMMA_SOURCE_FILE ("expression-convert.galgas", 142))  COMMA_SOURCE_FILE ("expression-convert.galgas", 142)) ;
      }else if (kBoolFalse == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_5523, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 147))  COMMA_SOURCE_FILE ("expression-convert.galgas", 147)) ;
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
  GALGAS_uint var_staticStringIndex_8178 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 184)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 184)), var_staticStringIndex_8178, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
  }
  GALGAS_string var_lbl_8192 = object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).getter_string (SOURCE_FILE ("expression-convert.galgas", 187)) ;
  GALGAS_string var_convertMinOkLabel_8253 = GALGAS_string ("min.").add_operation (var_lbl_8192, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  GALGAS_string var_convertMaxOkLabel_8300 = GALGAS_string ("max.").add_operation (var_lbl_8192, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  GALGAS_string var_convertFailLabel_8346 = GALGAS_string ("fail.").add_operation (var_lbl_8192, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  GALGAS_string var_compareMinVar_8383 = GALGAS_string ("cmp.").add_operation (var_lbl_8192, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  GALGAS_string var_compareMaxVar_8431 = GALGAS_string ("cmp.").add_operation (var_lbl_8192, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  GALGAS_bigint var_minTarget_8504 ;
  GALGAS_bigint var_maxTarget_8523 ;
  GALGAS_bool joker_8525_3 ; // Joker input parameter
  GALGAS_uint joker_8525_2 ; // Joker input parameter
  GALGAS_string joker_8525_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 193)).method_integer (var_minTarget_8504, var_maxTarget_8523, joker_8525_3, joker_8525_2, joker_8525_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  GALGAS_bigint var_minSource_8574 ;
  GALGAS_bool var_operandIsUnsigned_8613 ;
  GALGAS_bigint joker_8580 ; // Joker input parameter
  GALGAS_uint joker_8615_2 ; // Joker input parameter
  GALGAS_string joker_8615_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)).method_integer (var_minSource_8574, joker_8580, var_operandIsUnsigned_8613, joker_8615_2, joker_8615_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  GALGAS_string var_operandType_8636 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_8504.objectCompare (var_minSource_8574)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_8383, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 197)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 197)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned_8613.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 198)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_8636, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (var_minTarget_8504.getter_string (SOURCE_FILE ("expression-convert.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 199)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_8383, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (var_convertMinOkLabel_8253, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (var_convertFailLabel_8346, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 200)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_8253.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 201)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_8431, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 203)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_8613.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 204)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_8636, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 205)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 205)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 205)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 205)).add_operation (var_maxTarget_8523.getter_string (SOURCE_FILE ("expression-convert.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 205)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 205)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_8431, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 206)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 206)).add_operation (var_convertMaxOkLabel_8300, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 206)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 206)).add_operation (var_convertFailLabel_8346, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 206)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_8346.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 207)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_8178.getter_string (SOURCE_FILE ("expression-convert.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 208)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)).getter_string (SOURCE_FILE ("expression-convert.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).getter_string (SOURCE_FILE ("expression-convert.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).add_operation (object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_8300.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).add_operation (var_operandType_8636, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 213)) ;
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
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               GALGAS_expressionSE & outArgument_outExpression,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_expressionSE var_expression_1326 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSemanticContext, var_expression_1326, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  outArgument_outExpression = GALGAS_extendExpressionSE::constructor_new (var_expression_1326, object->mProperty_mTypeName, object->mProperty_mEndOfExpression  COMMA_SOURCE_FILE ("expression-extend.galgas", 31)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 67)) ;
  GALGAS_lstring var_typeName_2967 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 68)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2967 COMMA_SOURCE_FILE ("expression-extend.galgas", 69)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 77)) ;
  GALGAS_lstring var_typeName_3610 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 78)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3610 COMMA_SOURCE_FILE ("expression-extend.galgas", 79)) ;
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
  GALGAS_objectIR var_expressionResultPossibleReference_5356 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5356, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 103)) ;
  GALGAS_objectIR var_expressionResult_5517 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5356, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 120)), var_expressionResult_5517, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 117)) ;
  }
  GALGAS_PLMType var_resultType_5558 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 124)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 124)) ;
  const enumGalgasBool test_0 = var_resultType_5558.getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 126)).operator_not (SOURCE_FILE ("expression-extend.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 127)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-extend.galgas", 127)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (var_expressionResult_5517, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 128)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 128)).operator_not (SOURCE_FILE ("expression-extend.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 129)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned_5979 ;
      GALGAS_uint var_sourceSize_6004 ;
      GALGAS_bigint joker_5940 ; // Joker input parameter
      GALGAS_bigint joker_5947 ; // Joker input parameter
      GALGAS_string joker_6006_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_5517, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 131)).method_integer (joker_5940, joker_5947, var_sourceIsUnsigned_5979, var_sourceSize_6004, joker_6006_1, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 131)) ;
      GALGAS_bool var_targetIsUnsigned_6078 ;
      GALGAS_uint var_targetSize_6103 ;
      GALGAS_bigint joker_6039 ; // Joker input parameter
      GALGAS_bigint joker_6046 ; // Joker input parameter
      GALGAS_string joker_6105_1 ; // Joker input parameter
      var_resultType_5558.method_integer (joker_6039, joker_6046, var_targetIsUnsigned_6078, var_targetSize_6103, joker_6105_1, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 132)) ;
      GALGAS_bool test_4 = var_sourceIsUnsigned_5979 ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_targetIsUnsigned_6078 ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sourceSize_6004.objectCompare (var_targetSize_6103)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 135)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 135)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_sourceSize_6004.objectCompare (var_targetSize_6103)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 137)), GALGAS_string ("same size: useless extend operation"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 137)) ;
          }
        }
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_10 = var_sourceIsUnsigned_5979 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          test_10 = var_targetIsUnsigned_6078.operator_not (SOURCE_FILE ("expression-extend.galgas", 139)) ;
        }
        const enumGalgasBool test_11 = test_10.boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_6004.objectCompare (var_targetSize_6103)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 141)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray13  COMMA_SOURCE_FILE ("expression-extend.galgas", 141)) ;
          }
        }else if (kBoolFalse == test_11) {
          GALGAS_bool test_14 = var_sourceIsUnsigned_5979.operator_not (SOURCE_FILE ("expression-extend.galgas", 143)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = var_targetIsUnsigned_6078 ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 144)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray16  COMMA_SOURCE_FILE ("expression-extend.galgas", 144)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_sourceSize_6004.objectCompare (var_targetSize_6103)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 147)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 147)) ;
            }else if (kBoolFalse == test_17) {
              const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_sourceSize_6004.objectCompare (var_targetSize_6103)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 149)), GALGAS_string ("same size: useless extend operation"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 149)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType_5558, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 152)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 152)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_5517, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 153)) ;
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
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 GALGAS_expressionSE & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_expressionSE var_expression_1332 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSemanticContext, var_expression_1332, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  outArgument_outExpression = GALGAS_truncateExpressionSE::constructor_new (var_expression_1332, object->mProperty_mTypeName, object->mProperty_mEndOfExpression  COMMA_SOURCE_FILE ("expression-truncate.galgas", 31)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 67)) ;
  GALGAS_lstring var_typeName_2981 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 68)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2981 COMMA_SOURCE_FILE ("expression-truncate.galgas", 69)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 77)) ;
  GALGAS_lstring var_typeName_3626 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 78)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3626 COMMA_SOURCE_FILE ("expression-truncate.galgas", 79)) ;
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
  GALGAS_objectIR var_expressionResultPossibleReference_5368 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-truncate.galgas", 107)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5368, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 103)) ;
  GALGAS_objectIR var_expressionResult_5529 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5368, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 120)), var_expressionResult_5529, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 117)) ;
  }
  GALGAS_PLMType var_resultType_5570 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 124)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 124)) ;
  const enumGalgasBool test_0 = var_resultType_5570.getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 126)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 127)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-truncate.galgas", 127)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (var_expressionResult_5529, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 128)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 129)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource_5965 ;
      GALGAS_bigint var_maxSource_5984 ;
      GALGAS_uint var_expSize_6018 ;
      GALGAS_bool joker_5995 ; // Joker input parameter
      GALGAS_string joker_6020_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_5529, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 131)).method_integer (var_minSource_5965, var_maxSource_5984, joker_5995, var_expSize_6018, joker_6020_1, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 131)) ;
      GALGAS_bigint var_minTarget_6066 ;
      GALGAS_bigint var_maxTarget_6085 ;
      GALGAS_uint var_resultSize_6122 ;
      GALGAS_bool joker_6096 ; // Joker input parameter
      GALGAS_string joker_6124_1 ; // Joker input parameter
      var_resultType_5570.method_integer (var_minTarget_6066, var_maxTarget_6085, joker_6096, var_resultSize_6122, joker_6124_1, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 132)) ;
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_minTarget_6066.objectCompare (var_minSource_5965)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_6085.objectCompare (var_maxSource_5984)) ;
      }
      GALGAS_bool var_alwaysPossible_6150 = test_4 ;
      const enumGalgasBool test_5 = var_alwaysPossible_6150.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 135)), GALGAS_string ("useless explicit conversion"), fixItArray6  COMMA_SOURCE_FILE ("expression-truncate.galgas", 135)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, var_resultSize_6122.objectCompare (var_expSize_6018)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        routine_getNewTempVariable (var_resultType_5570, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 138)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_5529  COMMA_SOURCE_FILE ("expression-truncate.galgas", 139))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 139)) ;
      }else if (kBoolFalse == test_7) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_5529, var_resultType_5570, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 144)) ;
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
  GALGAS_string var_operandType_7832 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 175)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 176)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 176)).add_operation (var_operandType_7832, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 176)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 176)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 176)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 176)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 177)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 176)) ;
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
                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                              GALGAS_expressionSE & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  GALGAS_functionCallEffectiveParameterListSE var_parameterList_1787 = GALGAS_functionCallEffectiveParameterListSE::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 41)) ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_1841 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_1841.hasCurrentObject ()) {
    GALGAS_expressionSE var_expression_1930 ;
    callExtensionMethod_solveEntities ((const cPtr_expressionAST *) enumerator_1841.current_mExpression (HERE).ptr (), constinArgument_inSemanticContext, var_expression_1930, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 43)) ;
    var_parameterList_1787.addAssign_operation (enumerator_1841.current_mSelector (HERE), var_expression_1930  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 47)) ;
    enumerator_1841.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_constructorCallSE::constructor_new (object->mProperty_mTypeName, var_parameterList_1787, object->mProperty_mErrorLocation  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
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
  GALGAS_lstring var_typeName_3415 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 83)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName_3415 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 84)) ;
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
  GALGAS_lstring var_typeName_4009 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_4009 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
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
  GALGAS_PLMType var_resultType_5167 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType_5167 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType_5167 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 119)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 119)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_5167.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-constructor-call.galgas", 121)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 122)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorValue var_initValue_5520 ;
    constinArgument_inContext.getter_mConstructorMap (HERE).method_searchKey (extensionGetter_key (var_resultType_5167, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 124)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 124)), var_initValue_5520, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
    switch (var_initValue_5520.enumValue ()) {
    case GALGAS_constructorValue::kNotBuilt:
      break ;
    case GALGAS_constructorValue::kEnum_zero:
      {
        outArgument_outResult = GALGAS_objectIR::constructor_zero (var_resultType_5167  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 127)) ;
      }
      break ;
    case GALGAS_constructorValue::kEnum_simple:
      {
        const cEnumAssociatedValues_constructorValue_simple * extractPtr_5869 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_5520.unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_5869->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (extensionGetter_key (var_resultType_5167, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_5167, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 132)) ;
        }
      }
      break ;
    case GALGAS_constructorValue::kEnum_structure:
      {
        const cEnumAssociatedValues_constructorValue_structure * extractPtr_7730 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_5520.unsafePointer ()) ;
        const GALGAS_constructorSignature extractedValue_constructorSignature = extractPtr_7730->mAssociatedValue0 ;
        const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_7730->mAssociatedValue1 ;
        GALGAS_sortedOperandIRList var_sortedOperandIRList_5961 = extractedValue_sortedOperandList ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 136)).objectCompare (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 136)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 138)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 137)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 138)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 139)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 139)), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          cEnumerator_constructorSignature enumerator_6368 (extractedValue_constructorSignature, kENUMERATION_UP) ;
          cEnumerator_functionCallEffectiveParameterListAST enumerator_6401 (object->mProperty_mParameterList, kENUMERATION_UP) ;
          while (enumerator_6368.hasCurrentObject () && enumerator_6401.hasCurrentObject ()) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_6401.current_mSelector (HERE).getter_string (HERE).objectCompare (enumerator_6368.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_6401.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 144)), GALGAS_string ("the selector should be '!").add_operation (enumerator_6368.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 144)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 144)), fixItArray10  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 144)) ;
            }
            GALGAS_objectIR var_expressionResult_7148 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6401.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, enumerator_6368.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7148, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 146)) ;
            GALGAS_objectIR var_result_7181 = function_checkAssignmentCompatibility (var_expressionResult_7148, enumerator_6368.current_mType (HERE), enumerator_6401.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 160)) ;
            var_sortedOperandIRList_5961.addAssign_operation (var_result_7181, enumerator_6368.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 166)) ;
            enumerator_6368.gotoNextObject () ;
            enumerator_6401.gotoNextObject () ;
          }
          GALGAS_operandIRList var_initialValueList_7516 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 168)) ;
          cEnumerator_sortedOperandIRList enumerator_7573 (var_sortedOperandIRList_5961, kENUMERATION_UP) ;
          while (enumerator_7573.hasCurrentObject ()) {
            var_initialValueList_7516.addAssign_operation (enumerator_7573.current_mOperand (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
            enumerator_7573.gotoNextObject () ;
          }
          outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureConstant (var_resultType_5167, var_initialValueList_7516  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 172)) ;
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
                                                                const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                GALGAS_expressionSE & outArgument_outExpression,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  outArgument_outExpression = GALGAS_typedConstantCallSE::constructor_new (object->mProperty_mOptionalTypeName, object->mProperty_mConstructorName  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 25)) ;
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
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 60)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 60)) ;
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
    ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 70)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 70)) ;
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
  GALGAS_PLMType var_inferredResultType_4665 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_4665 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_4665 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 97)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 97)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_4665.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-typed-constant.galgas", 99)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 100)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 100)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constantMap var_classConstantMap_5001 = extensionGetter_classConstantMap (var_inferredResultType_4665, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 102)) ;
    GALGAS_bigint var_value_5110 ;
    GALGAS_lstring var_classTypeName_5129 ;
    var_classConstantMap_5001.method_searchKey (object->mProperty_mConstructorName, var_value_5110, var_classTypeName_5129, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 103)) ;
    GALGAS_PLMType var_resultType_5149 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_classTypeName_5129, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 104)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 104)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_5149, var_value_5110  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 105)) ;
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
                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                           GALGAS_expressionSE & outArgument_outExpression,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_expressionSE var_ifExpression_1582 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSemanticContext, var_ifExpression_1582, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  GALGAS_expressionSE var_thenExpression_1675 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSemanticContext, var_thenExpression_1675, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  GALGAS_expressionSE var_elseExpression_1768 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSemanticContext, var_elseExpression_1768, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 41)) ;
  outArgument_outExpression = GALGAS_ifExpressionSE::constructor_new (var_ifExpression_1582, object->mProperty_mIfExpressionEndLocation, var_thenExpression_1675, object->mProperty_mThenExpressionEndLocation, var_elseExpression_1768, object->mProperty_mElseExpressionEndLocation  COMMA_SOURCE_FILE ("expression-if.galgas", 45)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 95)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 96)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 97)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 105)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 106)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 107)) ;
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
  GALGAS_objectIR var_ifExpressionResultPossibleReference_6134 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResultPossibleReference_6134, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 129)) ;
  GALGAS_objectIR var_ifExpressionResult_6315 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResultPossibleReference_6134, object->mProperty_mIfExpressionEndLocation, var_ifExpressionResult_6315, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 143)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_type (var_ifExpressionResult_6315, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 150)).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 150)).operator_not (SOURCE_FILE ("expression-if.galgas", 150)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 151)) ;
  }
  GALGAS_objectIR var_thenExpressionPossibleReferenceResult_7015 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionPossibleReferenceResult_7015, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 154)) ;
  GALGAS_objectIR var_thenExpressionTempResult_7205 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionPossibleReferenceResult_7015, object->mProperty_mThenExpressionEndLocation, var_thenExpressionTempResult_7205, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)) ;
  }
  GALGAS_objectIR var_thenExpressionResult_7238 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_7205, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 174)) ;
  GALGAS_objectIR var_elseExpressionPossibleReferenceResult_7954 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionPossibleReferenceResult_7954, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 181)) ;
  GALGAS_objectIR var_elseExpressionTempResult_8144 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionPossibleReferenceResult_7954, object->mProperty_mThenExpressionEndLocation, var_elseExpressionTempResult_8144, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 195)) ;
  }
  GALGAS_objectIR var_elseExpressionResult_8177 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_8144, extensionGetter_type (var_thenExpressionResult_7238, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 203)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 201)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_6315, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 208)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_8544 ;
    GALGAS_PLMType joker_8525_1 ; // Joker input parameter
    var_ifExpressionResult_6315.method_literalInteger (joker_8525_1, var_value_8544, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 209)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_8544.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 210)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_7238 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_8177 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (extensionGetter_type (var_elseExpressionResult_8177, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)), object->mProperty_mIfExpressionEndLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 212)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_6315, var_thenExpressionResult_7238, var_elseExpressionResult_8177, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 213)) ;
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
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      GALGAS_expressionSE & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_expressionSE var_leftExpression_2218 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSemanticContext, var_leftExpression_2218, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 64)) ;
  GALGAS_expressionSE var_rightExpression_2313 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSemanticContext, var_rightExpression_2313, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 68)) ;
  outArgument_outExpression = GALGAS_infixOperatorExpressionSE::constructor_new (var_leftExpression_2218, object->mProperty_mOperatorLocation, object->mProperty_mOp, var_rightExpression_2313  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 72)) ;
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
                                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                       GALGAS_expressionSE & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_expressionSE var_leftExpression_3085 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSemanticContext, var_leftExpression_3085, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 89)) ;
  GALGAS_expressionSE var_rightExpression_3180 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSemanticContext, var_rightExpression_3180, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 93)) ;
  outArgument_outExpression = GALGAS_booleanShortCircuitAndOperatorExpressionSE::constructor_new (var_leftExpression_3085, object->mProperty_mOperatorLocation, var_rightExpression_3180  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 97)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 108)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 109)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 118)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 119)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 127)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 128)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 134)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 135)) ;
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
  GALGAS_objectIR var_leftOperandPossibleReference_7961 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperandPossibleReference_7961, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 182)) ;
  GALGAS_objectIR var_leftOperand_8120 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_7961, object->mProperty_mOperatorLocation, var_leftOperand_8120, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 196)) ;
  }
  GALGAS_objectIR var_rightOperandPossibleReference_8652 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_8120, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 207)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperandPossibleReference_8652, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 203)) ;
  GALGAS_objectIR var_rightOperand_8813 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_8652, object->mProperty_mOperatorLocation, var_rightOperand_8813, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 217)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap_8875 = function_getInfixOperatorMap (object->mProperty_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)) ;
  GALGAS_PLMType var_resultType_9182 ;
  GALGAS_infixOperatorDescription var_binaryOperator_9235 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_8875, extensionGetter_type (var_leftOperand_8120, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 227)), extensionGetter_type (var_rightOperand_8813, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 228)), object->mProperty_mOperatorLocation, var_resultType_9182, var_binaryOperator_9235, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 226)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_9235.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_8120, object->mProperty_mOperatorLocation, var_rightOperand_8813, var_resultType_9182, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 234)) ;
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
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 276)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 277)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 277)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 277)) ;
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
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 287)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 288)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 288)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 288)) ;
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
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 298)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 299)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 299)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 299)) ;
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
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 309)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 310)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 310)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 310)) ;
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
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 320)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 321)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 321)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 321)) ;
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
  GALGAS_instructionListIR var_leftInstructionGenerationList_13688 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 354)) ;
  GALGAS_objectIR var_leftOperandPossibleReference_14175 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_13688, var_leftOperandPossibleReference_14175, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 355)) ;
  GALGAS_objectIR var_leftOperand_14334 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_14175, object->mProperty_mOperatorLocation, var_leftOperand_14334, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 369)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_14422 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 376)) ;
  GALGAS_objectIR var_rightOperandPossibleReference_14910 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_14334, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 381)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_14422, var_rightOperandPossibleReference_14910, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 377)) ;
  GALGAS_objectIR var_rightOperand_15071 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_14910, object->mProperty_mOperatorLocation, var_rightOperand_15071, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 391)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_leftOperand_14334, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 398)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 398)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 399)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_rightOperand_15071, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 402)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 402)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 403)) ;
  }
  GALGAS_bool test_4 = var_leftOperandPossibleReference_14175.getter_isLiteralInteger (SOURCE_FILE ("expression-infix-operators.galgas", 406)) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = var_rightOperandPossibleReference_14910.getter_isLiteralInteger (SOURCE_FILE ("expression-infix-operators.galgas", 406)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bigint var_leftStaticValue_15609 ;
    GALGAS_PLMType joker_15573 ; // Joker input parameter
    var_leftOperandPossibleReference_14175.method_literalInteger (joker_15573, var_leftStaticValue_15609, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 407)) ;
    GALGAS_bigint var_rightStaticValue_15704 ;
    GALGAS_PLMType joker_15667 ; // Joker input parameter
    var_rightOperandPossibleReference_14910.method_literalInteger (joker_15667, var_rightStaticValue_15704, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 408)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_type (var_leftOperand_14334, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 409)), var_leftStaticValue_15609.operator_and (var_rightStaticValue_15704 COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 409))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 409)) ;
  }else if (kBoolFalse == test_5) {
    {
    routine_getNewTempVariable (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 412)), object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 412)) ;
    }
    {
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_14334, var_leftInstructionGenerationList_13688, var_rightOperand_15071, var_rightInstructionGenerationList_14422, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 414)) ;
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
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       GALGAS_expressionSE & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_expressionSE var_expression_1578 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSemanticContext, var_expression_1578, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionSE::constructor_new (object->mProperty_mOperatorLocation, object->mProperty_mOp, var_expression_1578  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 40)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 51)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 59)) ;
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
  GALGAS_objectIR var_expressionResultPossibleReference_4356 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4356, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 81)) ;
  GALGAS_objectIR var_expressionResult_4525 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4356, object->mProperty_mOperatorLocation, var_expressionResult_4525, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 95)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_4621 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_4659 ;
  GALGAS_objectIR var_leftOperand_4683 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_4621 = constinArgument_inContext.getter_mUnsignedComplementOperatorMap (HERE) ;
      var_binaryOperator_4659 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 108)) ;
      switch (extensionGetter_type (var_expressionResult_4525, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)).enumValue ()) {
      case GALGAS_PLMType::kNotBuilt:
        break ;
      case GALGAS_PLMType::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)) ;
          var_leftOperand_4683.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113)) ;
          var_leftOperand_4683.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_boolean:
      case GALGAS_PLMType::kEnum_void:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)) ;
          var_leftOperand_4683.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)) ;
          var_leftOperand_4683.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 119)) ;
          var_leftOperand_4683.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
          var_leftOperand_4683.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 123)) ;
          var_leftOperand_4683.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 125)) ;
          var_leftOperand_4683.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_staticInteger:
        {
          const enumGalgasBool test_8 = constinArgument_inOptionalTargetType.getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 127)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_bigint var_minTarget_5706 ;
            GALGAS_bigint var_maxTarget_5725 ;
            GALGAS_bool joker_5727_3 ; // Joker input parameter
            GALGAS_uint joker_5727_2 ; // Joker input parameter
            GALGAS_string joker_5727_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.method_integer (var_minTarget_5706, var_maxTarget_5725, joker_5727_3, joker_5727_2, joker_5727_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)) ;
            const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_minTarget_5706.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 129)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 130)) ;
              var_leftOperand_4683.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_9) {
              var_leftOperand_4683 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 132)), var_maxTarget_5725  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 132)) ;
            }
          }else if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray11  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)) ;
            var_leftOperand_4683.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_PLMType::kEnum_integer:
        {
          const cEnumAssociatedValues_PLMType_integer * extractPtr_6257 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_4525, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_6257->mAssociatedValue3 ;
          var_leftOperand_4683 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 138)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_4621 = constinArgument_inContext.getter_mNotOperatorMap (HERE) ;
      var_binaryOperator_4659 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 142)) ;
      var_leftOperand_4683 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 143)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_4621 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      var_binaryOperator_4659 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 146)) ;
      var_leftOperand_4683 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 147)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_4621 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 150)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 152)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 152)), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 151)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_binaryOperator_4659 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 155)) ;
        var_leftOperand_4683 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 156)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 156))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 156)) ;
      }else if (kBoolFalse == test_14) {
        var_binaryOperator_4659 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 158)) ;
        var_leftOperand_4683 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 159)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_4621.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_key (var_expressionResult_4525, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
  GALGAS_PLMType var_resultType_7254 = extensionGetter_type (var_expressionResult_4525, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 164)) ;
  const enumGalgasBool test_15 = var_expressionResult_4525.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 166)).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_bigint var_value_7397 ;
    GALGAS_PLMType joker_7370_1 ; // Joker input parameter
    var_expressionResult_4525.method_literalInteger (joker_7370_1, var_value_7397, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 167)) ;
    GALGAS_bigint var_result_7417 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_7417 = var_value_7397.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_16 = constinArgument_inOptionalTargetType.getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 173)).boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_bigint var_minTarget_7612 ;
          GALGAS_bigint var_maxTarget_7631 ;
          GALGAS_bool joker_7633_3 ; // Joker input parameter
          GALGAS_uint joker_7633_2 ; // Joker input parameter
          GALGAS_string joker_7633_1 ; // Joker input parameter
          constinArgument_inOptionalTargetType.method_integer (var_minTarget_7612, var_maxTarget_7631, joker_7633_3, joker_7633_2, joker_7633_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 174)) ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictInf, var_minTarget_7612.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 175)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray18  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 176)) ;
            var_result_7417.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_17) {
            var_result_7417 = var_value_7397.operator_xor (var_maxTarget_7631 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 178)) ;
          }
        }else if (kBoolFalse == test_16) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray19  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 181)) ;
          var_result_7417.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_7417 = var_value_7397.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 184)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_7417 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 186)).operator_xor (var_value_7397 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 186)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_7254, var_result_7417  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 188)) ;
  }else if (kBoolFalse == test_15) {
    {
    routine_getNewTempVariable (var_resultType_7254, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 191)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 195)), object->mProperty_mOperatorLocation, var_leftOperand_4683, var_binaryOperator_4659, var_expressionResult_4525, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 193)) ;
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
                                                                         const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                         GALGAS_expressionSE & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outExpression = GALGAS_literalIntegerInExpressionSE::constructor_new (object->mProperty_mLiteralInteger  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 23)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 51)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 51)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 51)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 59)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 59)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 59)) ;
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
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-literal-integer.galgas", 80)), object->mProperty_mLiteralInteger.getter_bigint (HERE)  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 80)) ;
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
                                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                        GALGAS_expressionSE & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  outArgument_outExpression = GALGAS_literalStringInExpressionSE::constructor_new (object->mProperty_mLiteralString  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 23)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)), constinArgument_inConstantName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59)) ;
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
  GALGAS_PLMType var_type_4403 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 80)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 80)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 80)) ;
  GALGAS_uint var_staticStringIndex_4600 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_4600, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 81)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (var_type_4403, object->mProperty_mLiteralString.getter_string (HERE).getter_length (SOURCE_FILE ("expression-literal-string.galgas", 82)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 82)), var_staticStringIndex_4600  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 82)) ;
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
                                                                         const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                         GALGAS_expressionSE & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionSE::constructor_new (object->mProperty_mValue  COMMA_SOURCE_FILE ("expression-true-false.galgas", 23)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 58)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 58)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 58)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 66)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 66)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 66)) ;
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
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 87)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 87)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-true-false.galgas", 87)), temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 87)) ;
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
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         GALGAS_expressionSE & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_registerIntegerFieldListSE var_fieldValues_1846 = GALGAS_registerIntegerFieldListSE::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 43)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_1876 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_1876.hasCurrentObject ()) {
    GALGAS_expressionSE var_expression_1965 ;
    callExtensionMethod_solveEntities ((const cPtr_expressionAST *) enumerator_1876.current_mExpression (HERE).ptr (), constinArgument_inSemanticContext, var_expression_1965, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 45)) ;
    var_fieldValues_1846.addAssign_operation (enumerator_1876.current_mFieldName (HERE), var_expression_1965, enumerator_1876.current_mExpressionLocation (HERE)  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 49)) ;
    enumerator_1876.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_registerConstantExpressionSE::constructor_new (object->mProperty_mRegisterName, object->mProperty_mMaskFieldNames, var_fieldValues_1846  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 51)) ;
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
  cEnumerator_registerIntegerFieldListAST enumerator_4461 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_4461.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_4461.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 105)) ;
    enumerator_4461.gotoNextObject () ;
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
  GALGAS_PLMType var_registerType_5673 ;
  GALGAS_sliceMap var_registerBitSliceMap_5733 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_5784 ;
  GALGAS_bigint var_registerAddress_5824 ;
  GALGAS_uint var_registerBitCount_5857 ;
  GALGAS_uint var_powerOfTwoForArraySize_5896 ;
  GALGAS_uint var_elementArraySize_5929 ;
  GALGAS_bool joker_5679 ; // Joker input parameter
  GALGAS_bool joker_5686 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_5830 ; // Joker input parameter
  constinArgument_inContext.getter_mControlRegisterMap (HERE).method_searchKey (object->mProperty_mRegisterName, var_registerType_5673, joker_5679, joker_5686, var_registerBitSliceMap_5733, var_registerFieldMap_5784, var_registerAddress_5824, joker_5830, var_registerBitCount_5857, var_powerOfTwoForArraySize_5896, var_elementArraySize_5929, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 128)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_6041 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 142)) ;
  cEnumerator_lstringlist enumerator_6083 (object->mProperty_mMaskFieldNames, kENUMERATION_UP) ;
  while (enumerator_6083.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_6166 ;
    GALGAS_uint var_fieldBitCount_6197 ;
    var_registerFieldMap_5784.method_searchKey (enumerator_6083.current_mValue (HERE), var_fieldBitIndex_6166, var_fieldBitCount_6197, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 144)) ;
    GALGAS_bigint var_mask_6216 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)).left_shift_operation (var_fieldBitCount_6197 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)) ;
    var_accumulatedFieldStaticValues_6041 = var_accumulatedFieldStaticValues_6041.operator_or (var_mask_6216.left_shift_operation (var_fieldBitIndex_6166 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 150)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 150)) ;
    enumerator_6083.gotoNextObject () ;
  }
  GALGAS_operandList var_operandList_6440 = GALGAS_operandList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_6509 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_6509.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_6592 ;
    GALGAS_uint var_fieldBitCount_6623 ;
    var_registerFieldMap_5784.method_searchKey (enumerator_6509.current_mFieldName (HERE), var_fieldBitIndex_6592, var_fieldBitCount_6623, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
    GALGAS_objectIR var_expressionResultPossibleReference_7146 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6509.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-cst-registre.galgas", 165)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_7146, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
    GALGAS_objectIR var_expressionResult_7323 ;
    {
    extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_7146, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 178)), var_expressionResult_7323, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)) ;
    }
    switch (extensionGetter_type (var_expressionResult_7323, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 182)).enumValue ()) {
    case GALGAS_PLMType::kNotBuilt:
      break ;
    case GALGAS_PLMType::kEnum_arrayType:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray0  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 184)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_opaque:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_enumeration:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 188)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_structure:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 190)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_boolean:
    case GALGAS_PLMType::kEnum_void:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 192)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_literalString:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 194)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_pointer:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 196)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 198)) ;
      }
      break ;
    case GALGAS_PLMType::kEnum_staticInteger:
      {
        GALGAS_bigint var_value_8366 ;
        GALGAS_PLMType joker_8339_1 ; // Joker input parameter
        var_expressionResult_7323.method_literalInteger (joker_8339_1, var_value_8366, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 200)) ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_value_8366.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 201)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 202)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_value_8366.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 203)).left_shift_operation (var_fieldBitCount_6623 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 203)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            var_accumulatedFieldStaticValues_6041 = var_accumulatedFieldStaticValues_6041.operator_or (var_value_8366.left_shift_operation (var_fieldBitIndex_6592 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 204)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 204)) ;
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 206)).left_shift_operation (var_fieldBitCount_6623 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 206)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 206)), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 206)) ;
          }
        }
      }
      break ;
    case GALGAS_PLMType::kEnum_integer:
      {
        const cEnumAssociatedValues_PLMType_integer * extractPtr_10614 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_7323, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 182)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_min = extractPtr_10614->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_max = extractPtr_10614->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_10614->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_expressionBitCount = extractPtr_10614->mAssociatedValue3 ;
        const enumGalgasBool test_12 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 209)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)) ;
        }else if (kBoolFalse == test_12) {
          GALGAS_bool test_14 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_6623)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 212)) ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_6509.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_6623.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), fixItArray16  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)) ;
          }
          GALGAS_bool test_17 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_6623)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 217)) ;
          }
          GALGAS_bool test_18 = test_17 ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 217)) ;
          }
          const enumGalgasBool test_19 = test_18.boolEnum () ;
          if (kBoolTrue == test_19) {
            {
            extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_7323, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 220)).left_shift_operation (var_fieldBitCount_6623 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 220)), function_panicCodeForRegisterFieldOvf (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)), enumerator_6509.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)) ;
            }
          }
          GALGAS_objectIR var_partialResult_9713 = var_expressionResult_7323 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_5857)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_objectIR var_extendedResult_9886 ;
            {
            routine_getNewTempVariable (var_registerType_5673, enumerator_6509.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_extendedResult_9886, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 228)) ;
            }
            {
            extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_9886, var_partialResult_9713, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 229)) ;
            }
            var_partialResult_9713 = var_extendedResult_9886 ;
          }else if (kBoolFalse == test_20) {
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_5857)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_objectIR var_truncatedResult_10172 ;
              {
              routine_getNewTempVariable (var_registerType_5673, enumerator_6509.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_truncatedResult_10172, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 232)) ;
              }
              {
              extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_10172, var_partialResult_9713, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 233)) ;
              }
              var_partialResult_9713 = var_truncatedResult_10172 ;
            }
          }
          GALGAS_objectIR var_shiftedResult_10440 ;
          {
          routine_getNewTempVariable (var_registerType_5673, enumerator_6509.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_shiftedResult_10440, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)) ;
          }
          {
          extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_10440, var_partialResult_9713, var_fieldBitIndex_6592, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 238)) ;
          }
          var_operandList_6440.addAssign_operation (var_shiftedResult_10440  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 240)) ;
        }
      }
      break ;
    }
    enumerator_6509.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_5673, var_accumulatedFieldStaticValues_6041  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 245)) ;
  cEnumerator_operandList enumerator_10809 (var_operandList_6440, kENUMERATION_UP) ;
  while (enumerator_10809.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_10896 ;
    {
    routine_getNewTempVariable (var_registerType_5673, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 247)), ioArgument_ioTemporaries, var_newResult_10896, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 247)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_10896, extensionGetter_type (var_newResult_10896, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 250)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 251)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 253)), enumerator_10809.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 248)) ;
    }
    outArgument_outResult = var_newResult_10896 ;
    enumerator_10809.gotoNextObject () ;
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
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  GALGAS_expressionSE & outArgument_outExpression,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_primaryInExpressionAccessListSE var_accessList_5024 = GALGAS_primaryInExpressionAccessListSE::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 127)) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_5053 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_5053.hasCurrentObject ()) {
    switch (enumerator_5053.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_5155 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_5053.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5155->mAssociatedValue0 ;
        var_accessList_5024.addAssign_operation (GALGAS_primaryInExpressionAccessSE::constructor_property (extractedValue_name  COMMA_SOURCE_FILE ("expression-primary.galgas", 131))  COMMA_SOURCE_FILE ("expression-primary.galgas", 131)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_5366 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_5053.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexAST = extractPtr_5366->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_5366->mAssociatedValue1 ;
        GALGAS_expressionSE var_index_5284 ;
        callExtensionMethod_solveEntities ((const cPtr_expressionAST *) extractedValue_indexAST.ptr (), constinArgument_inSemanticContext, var_index_5284, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 133)) ;
        var_accessList_5024.addAssign_operation (GALGAS_primaryInExpressionAccessSE::constructor_arrayAccess (var_index_5284, extractedValue_endOfIndex  COMMA_SOURCE_FILE ("expression-primary.galgas", 137))  COMMA_SOURCE_FILE ("expression-primary.galgas", 137)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_5534 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_5053.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_5534->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfArguments = extractPtr_5534->mAssociatedValue1 ;
        var_accessList_5024.addAssign_operation (GALGAS_primaryInExpressionAccessSE::constructor_funcCall (extractedValue_arguments, extractedValue_endOfArguments  COMMA_SOURCE_FILE ("expression-primary.galgas", 139))  COMMA_SOURCE_FILE ("expression-primary.galgas", 139)) ;
      }
      break ;
    }
    enumerator_5053.gotoNextObject () ;
  }
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inSemanticContext.getter_mControlRegisterMap (HERE).getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 145)) COMMA_SOURCE_FILE ("expression-primary.galgas", 145)).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outExpression = GALGAS_registerReadInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_5024  COMMA_SOURCE_FILE ("expression-primary.galgas", 146)) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = constinArgument_inSemanticContext.getter_mGlobalVariableMap (HERE).getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 147)) COMMA_SOURCE_FILE ("expression-primary.galgas", 147)).boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_outExpression = GALGAS_globalVariableAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_5024  COMMA_SOURCE_FILE ("expression-primary.galgas", 148)) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = constinArgument_inSemanticContext.getter_mGlobalConstantMap (HERE).getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 149)) COMMA_SOURCE_FILE ("expression-primary.galgas", 149)).boolEnum () ;
          if (kBoolTrue == test_2) {
            outArgument_outExpression = GALGAS_globalConstantAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_5024  COMMA_SOURCE_FILE ("expression-primary.galgas", 150)) ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_accessList_5024.getter_length (SOURCE_FILE ("expression-primary.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_primaryInExpressionAccessSE var_access_6227 ;
              var_accessList_5024.method_first (var_access_6227, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 152)) ;
              switch (var_access_6227.enumValue ()) {
              case GALGAS_primaryInExpressionAccessSE::kNotBuilt:
                break ;
              case GALGAS_primaryInExpressionAccessSE::kEnum_property:
                {
                  outArgument_outExpression = GALGAS_localVariableAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_5024  COMMA_SOURCE_FILE ("expression-primary.galgas", 155)) ;
                }
                break ;
              case GALGAS_primaryInExpressionAccessSE::kEnum_arrayAccess:
                {
                  outArgument_outExpression = GALGAS_localVariableAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_5024  COMMA_SOURCE_FILE ("expression-primary.galgas", 157)) ;
                }
                break ;
              case GALGAS_primaryInExpressionAccessSE::kEnum_funcCall:
                {
                  const cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall * extractPtr_6960 = (const cEnumAssociatedValues_primaryInExpressionAccessSE_funcCall *) (var_access_6227.unsafePointer ()) ;
                  const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_6960->mAssociatedValue0 ;
                  const GALGAS_location extractedValue_endOfArguments = extractPtr_6960->mAssociatedValue1 ;
                  GALGAS_lstring var_signature_6592 = extensionGetter_routineSignature (extractedValue_arguments, object->mProperty_mObjectName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 159)) ;
                  const enumGalgasBool test_4 = extensionGetter_hasKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), object->mProperty_mObjectName, var_signature_6592, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 160)).boolEnum () ;
                  if (kBoolTrue == test_4) {
                    outArgument_outExpression = GALGAS_standAloneRoutineCallInExpressionSE::constructor_new (object->mProperty_mObjectName, extractedValue_arguments, extractedValue_endOfArguments  COMMA_SOURCE_FILE ("expression-primary.galgas", 161)) ;
                  }else if (kBoolFalse == test_4) {
                    outArgument_outExpression = GALGAS_localVariableAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_5024  COMMA_SOURCE_FILE ("expression-primary.galgas", 163)) ;
                  }
                }
                break ;
              }
            }else if (kBoolFalse == test_3) {
              outArgument_outExpression = GALGAS_localVariableAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, var_accessList_5024  COMMA_SOURCE_FILE ("expression-primary.galgas", 167)) ;
            }
          }
        }
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_7238 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_7238->mAssociatedValue0 ;
      outArgument_outExpression = GALGAS_selfAccessInExpressionSE::constructor_new (object->mProperty_mObjectName, extractedValue_location, var_accessList_5024  COMMA_SOURCE_FILE ("expression-primary.galgas", 170)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mObjectName COMMA_SOURCE_FILE ("expression-primary.galgas", 276)) ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_10945 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_10945.hasCurrentObject ()) {
    switch (enumerator_10945.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_11009 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_10945.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_11009->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_11154 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_10945.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11154->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 281)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_11704 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_10945.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_11704->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_11240 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_11240.hasCurrentObject ()) {
          switch (enumerator_11240.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_11494 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_11240.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_11494->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 288)) COMMA_SOURCE_FILE ("expression-primary.galgas", 288)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_11607 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_11240.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_11607->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 290)) ;
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
          enumerator_11240.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_10945.gotoNextObject () ;
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_12233 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_12233.hasCurrentObject ()) {
    switch (enumerator_12233.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_12297 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_12233.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_12297->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_12426 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_12233.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_12426->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 308)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_12960 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_12233.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_12960->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_12512 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_12512.hasCurrentObject ()) {
          switch (enumerator_12512.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_12766 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_12512.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_12766->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 315)) COMMA_SOURCE_FILE ("expression-primary.galgas", 315)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_12863 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_12512.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_12863->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 317)) ;
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
          enumerator_12512.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_12233.gotoNextObject () ;
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
  GALGAS_internalRepresentation var_internalRepresentation_14419 ;
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 357)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 357)) ;
        var_internalRepresentation_14419.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        var_internalRepresentation_14419 = GALGAS_internalRepresentation::constructor_standAloneIdentifier (object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 359)) ;
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_15124 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_15124->mAssociatedValue0 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 362)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 363)) ;
        var_internalRepresentation_14419.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 364)).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_internalRepresentation_14419 = GALGAS_internalRepresentation::constructor_structureMember (object->mProperty_mObjectName, GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 367))  COMMA_SOURCE_FILE ("expression-primary.galgas", 365)) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 370)) ;
          var_internalRepresentation_14419.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_15177 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_15177.hasCurrentObject ()) {
    switch (enumerator_15177.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_15728 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_15177.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_15728->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (var_internalRepresentation_14419, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 377)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_16361 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_15177.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_16361->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_16361->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (var_internalRepresentation_14419, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 391)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_16934 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_15177.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_16934->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_16934->mAssociatedValue1 ;
        {
        routine_handleFunctionCallInExpressionNew (var_internalRepresentation_14419, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 408)) ;
        }
      }
      break ;
    }
    enumerator_15177.gotoNextObject () ;
  }
  switch (var_internalRepresentation_14419.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_17199 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (var_internalRepresentation_14419.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_17199->mAssociatedValue0 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_17143 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_17143, extractedValue_identifier, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 428)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_18156 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (var_internalRepresentation_14419.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_18156->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_18156->mAssociatedValue1 ;
      const enumGalgasBool test_6 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 430)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 430)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_17386 ;
        GALGAS_lstring joker_17353_2 ; // Joker input parameter
        GALGAS_propertyMap joker_17353_1 ; // Joker input parameter
        GALGAS_propertyList joker_17388_3 ; // Joker input parameter
        GALGAS_uint joker_17388_2 ; // Joker input parameter
        GALGAS_string joker_17388_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 431)).method_structure (joker_17353_2, joker_17353_1, var_structureMap_17386, joker_17388_3, joker_17388_2, joker_17388_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 431)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_17403 = var_structureMap_17386 ;
        GALGAS_objectIR var_masterPropertyIR_17507 ;
        {
        var_m_17403.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_17429 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_17403.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_17429, extractedValue_propertyName, var_masterPropertyIR_17507, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 433)) ;
        }
        GALGAS_uint var_index_17577 ;
        GALGAS_PLMType joker_17548 ; // Joker input parameter
        GALGAS_lstring joker_17559 ; // Joker input parameter
        var_masterPropertyIR_17507.method_property (joker_17548, joker_17559, var_index_17577, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 434)) ;
        GALGAS_objectIR var_newObject_17598 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_17507, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 436)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 437)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 437))  COMMA_SOURCE_FILE ("expression-primary.galgas", 437)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 438)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 435)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 441)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_17598, extractedValue_currentPointer, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 445)), var_index_17577.getter_string (SOURCE_FILE ("expression-primary.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 442)) ;
        }
        outArgument_outResult = var_newObject_17598 ;
      }else if (kBoolFalse == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 450)), GALGAS_string ("this should be a structure instance"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 450)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_18244 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (var_internalRepresentation_14419.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_18244->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_18244->mAssociatedValue1 ;
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
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_22598 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_22598->mAssociatedValue0 ;
      GALGAS_objectIR var_objectIR_19218 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_19150 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_19150, extractedValue_identifier, var_objectIR_19218, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 474)) ;
      }
      switch (var_objectIR_19218.enumValue ()) {
      case GALGAS_objectIR::kNotBuilt:
        break ;
      case GALGAS_objectIR::kEnum_globalVariableReference:
        {
          const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_19552 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (var_objectIR_19218.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_19552->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_19552->mAssociatedValue1 ;
          const enumGalgasBool test_0 = extractedValue_type.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 477)).boolEnum () ;
          if (kBoolTrue == test_0) {
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_19218  COMMA_SOURCE_FILE ("expression-primary.galgas", 478)) ;
          }else if (kBoolFalse == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 480)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 480)) ;
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
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 484)), GALGAS_string ("\xC2""\xAB""selfObject\xC2""\xBB"" invalid here"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 484)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_localVariableReference:
        {
          const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_20159 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (var_objectIR_19218.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_20159->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_20159->mAssociatedValue1 ;
          const enumGalgasBool test_3 = extractedValue_type.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 486)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_objectIR var_objectIR_19786 = GALGAS_objectIR::constructor_llvmTemporaryValue (extractedValue_type, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 489)), extractedValue_plmName.getter_location (SOURCE_FILE ("expression-primary.galgas", 489))  COMMA_SOURCE_FILE ("expression-primary.galgas", 489)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 489))  COMMA_SOURCE_FILE ("expression-primary.galgas", 487)) ;
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_19786  COMMA_SOURCE_FILE ("expression-primary.galgas", 491)) ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 493)), GALGAS_string ("this should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 493)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_registerReference:
        {
          const cEnumAssociatedValues_objectIR_registerReference * extractPtr_21638 = (const cEnumAssociatedValues_objectIR_registerReference *) (var_objectIR_19218.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_21638->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmRegisterName = extractPtr_21638->mAssociatedValue1 ;
          const GALGAS_bigint extractedValue_address = extractPtr_21638->mAssociatedValue4 ;
          const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_21638->mAssociatedValue5 ;
          const GALGAS_uint extractedValue_arraySize = extractPtr_21638->mAssociatedValue6 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 502)), GALGAS_string ("register is an array, dot notation unavailable"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 502)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_5) {
            GALGAS_objectIR var_registerIR_20675 ;
            {
            routine_getNewTempVariable (extractedValue_type, extractedValue_plmRegisterName.getter_location (SOURCE_FILE ("expression-primary.galgas", 504)), ioArgument_ioTemporaries, var_registerIR_20675, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 504)) ;
            }
            {
            extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerIR_20675, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 505)) ;
            }
            GALGAS_llvmBinaryOperation var_accessOperator_20869 ;
            GALGAS_bigint var_accessRightOperand_20911 ;
            GALGAS_sliceMap var_resultSliceMap_20951 ;
            GALGAS_PLMType var_resultType_20986 ;
            extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_20869, var_accessRightOperand_20911, var_resultSliceMap_20951, var_resultType_20986, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 506)) ;
            GALGAS_objectIR var_resultObject_21021 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_20986, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 515)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 515))  COMMA_SOURCE_FILE ("expression-primary.galgas", 515)), var_resultSliceMap_20951  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
            ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 518)) ;
            {
            extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_21021, extensionGetter_type (var_registerIR_20675, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 521)), constinArgument_inPropertyName.getter_location (HERE), var_registerIR_20675, var_accessOperator_20869, GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-primary.galgas", 525)), var_accessRightOperand_20911  COMMA_SOURCE_FILE ("expression-primary.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 519)) ;
            }
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_20951, var_resultObject_21021  COMMA_SOURCE_FILE ("expression-primary.galgas", 527)) ;
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_temporaryReference:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 530)), GALGAS_string ("\xC2""\xAB""temporaryReference\xC2""\xBB"" invalid here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 530)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 532)), GALGAS_string ("\xC2""\xAB""property\xC2""\xBB"" invalid here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmTemporaryValue:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 534)), GALGAS_string ("\xC2""\xAB""llvmTemporaryValue\xC2""\xBB"" invalid here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 534)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalInteger:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 536)), GALGAS_string ("\xC2""\xAB""literalInteger\xC2""\xBB"" invalid here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 536)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmStructureConstant:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 538)), GALGAS_string ("\xC2""\xAB""llvmStructureConstant\xC2""\xBB"" invalid here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 540)), GALGAS_string ("a global string constant is invalid here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 540)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_zero:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 542)), GALGAS_string ("\xC2""\xAB""zero\xC2""\xBB"" invalid here"), fixItArray13  COMMA_SOURCE_FILE ("expression-primary.galgas", 542)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_possibleFunction:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 544)), GALGAS_string ("\xC2""\xAB""possibleFunction\xC2""\xBB"" invalid here"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 544)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_23649 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_23649->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_23649->mAssociatedValue1 ;
      const enumGalgasBool test_15 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 547)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 547)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_22781 ;
        GALGAS_lstring joker_22748_2 ; // Joker input parameter
        GALGAS_propertyMap joker_22748_1 ; // Joker input parameter
        GALGAS_propertyList joker_22783_3 ; // Joker input parameter
        GALGAS_uint joker_22783_2 ; // Joker input parameter
        GALGAS_string joker_22783_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)).method_structure (joker_22748_2, joker_22748_1, var_structureMap_22781, joker_22783_3, joker_22783_2, joker_22783_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_22798 = var_structureMap_22781 ;
        GALGAS_objectIR var_masterPropertyIR_22908 ;
        {
        var_m_22798.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_22824 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_22798.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_22824, extractedValue_masterPropertyName, var_masterPropertyIR_22908, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 550)) ;
        }
        GALGAS_uint var_index_22978 ;
        GALGAS_PLMType joker_22949 ; // Joker input parameter
        GALGAS_lstring joker_22960 ; // Joker input parameter
        var_masterPropertyIR_22908.method_property (joker_22949, joker_22960, var_index_22978, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 551)) ;
        GALGAS_objectIR var_newObject_22999 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_22908, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 553)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 554)), extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 554))  COMMA_SOURCE_FILE ("expression-primary.galgas", 554)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 555)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 552)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 558)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_22999, extractedValue_currentPointer, extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 562)), var_index_22978.getter_string (SOURCE_FILE ("expression-primary.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 559)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_newObject_22999  COMMA_SOURCE_FILE ("expression-primary.galgas", 565)) ;
      }else if (kBoolFalse == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 567)), GALGAS_string ("'").add_operation (extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 567)).add_operation (GALGAS_string ("' should be a structure"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 567)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 567)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_24494 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_24494->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentObject = extractPtr_24494->mAssociatedValue1 ;
      GALGAS_llvmBinaryOperation var_accessOperator_23805 ;
      GALGAS_bigint var_accessRightOperand_23843 ;
      GALGAS_sliceMap var_resultSliceMap_23879 ;
      GALGAS_PLMType var_resultType_23910 ;
      extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_23805, var_accessRightOperand_23843, var_resultSliceMap_23879, var_resultType_23910, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 570)) ;
      GALGAS_objectIR var_resultObject_23937 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_23910, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 579)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 579))  COMMA_SOURCE_FILE ("expression-primary.galgas", 579)), var_resultSliceMap_23879  COMMA_SOURCE_FILE ("expression-primary.galgas", 577)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 582)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_23937, extensionGetter_type (extractedValue_currentObject, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 585)), constinArgument_inPropertyName.getter_location (HERE), extractedValue_currentObject, var_accessOperator_23805, GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-primary.galgas", 589)), var_accessRightOperand_23843  COMMA_SOURCE_FILE ("expression-primary.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 583)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_23879, var_resultObject_23937  COMMA_SOURCE_FILE ("expression-primary.galgas", 591)) ;
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
  GALGAS_objectIR var_variableIR_25386 ;
  GALGAS_location var_errorLocation_25412 ;
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_25608 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_25608->mAssociatedValue0 ;
      var_errorLocation_25412 = extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 617)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_25551 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_25551, extractedValue_identifier, var_variableIR_25386, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 618)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_26605 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_26605->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_26605->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 620)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 620)).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_errorLocation_25412 = extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 621)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_25845 ;
        GALGAS_lstring joker_25812_2 ; // Joker input parameter
        GALGAS_propertyMap joker_25812_1 ; // Joker input parameter
        GALGAS_propertyList joker_25847_3 ; // Joker input parameter
        GALGAS_uint joker_25847_2 ; // Joker input parameter
        GALGAS_string joker_25847_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 622)).method_structure (joker_25812_2, joker_25812_1, var_structureMap_25845, joker_25847_3, joker_25847_2, joker_25847_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 622)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_25862 = var_structureMap_25845 ;
        GALGAS_objectIR var_masterPropertyIR_25966 ;
        {
        var_m_25862.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_25888 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_25862.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_25888, extractedValue_propertyName, var_masterPropertyIR_25966, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 624)) ;
        }
        var_variableIR_25386 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_25966, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 626)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 627)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 627))  COMMA_SOURCE_FILE ("expression-primary.galgas", 627)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 628)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 625)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 631)) ;
        GALGAS_uint var_index_26324 ;
        GALGAS_PLMType joker_26295 ; // Joker input parameter
        GALGAS_lstring joker_26306 ; // Joker input parameter
        var_masterPropertyIR_25966.method_property (joker_26295, joker_26306, var_index_26324, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 632)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_variableIR_25386, extractedValue_currentPointerIR, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 636)), var_index_26324.getter_string (SOURCE_FILE ("expression-primary.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 633)) ;
        }
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 640)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 640)) ;
        var_variableIR_25386.drop () ; // Release error dropped variable
        var_errorLocation_25412.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_26748 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_26748->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_26748->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 643)), GALGAS_string ("this object is not an array"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 643)) ;
      var_variableIR_25386.drop () ; // Release error dropped variable
      var_errorLocation_25412.drop () ; // Release error dropped variable
    }
    break ;
  }
  const enumGalgasBool test_3 = extensionGetter_type (var_variableIR_25386, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 646)).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 646)).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_25386, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 647)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 662)), var_variableIR_25386  COMMA_SOURCE_FILE ("expression-primary.galgas", 662)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = var_variableIR_25386.getter_isRegisterReference (SOURCE_FILE ("expression-primary.galgas", 663)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_sliceMap var_sliceMap_27943 ;
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_25386, var_sliceMap_27943, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 664)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_sliceMap_27943, var_variableIR_25386  COMMA_SOURCE_FILE ("expression-primary.galgas", 680)) ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_errorLocation_25412, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 682)) ;
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
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 705)) ;
  }
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_29282 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_29282->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 710)), GALGAS_string ("this is not a function"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 710)) ;
      ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_29844 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_29844->mAssociatedValue0 ;
      {
      routine_handleStandAloneFunctionCallInExpression (ioArgument_ioInternalRepresentation, extractedValue_identifier, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 714)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_30671 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_30671->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_30671->mAssociatedValue1 ;
      const enumGalgasBool test_3 = extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 731)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 731)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_objectIR var_callReturnedResult_30455 ;
        {
        routine_handleMethodCallInExpressionNew (extractedValue_propertyName, extractedValue_currentPointerIR, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inArguments, ioArgument_ioInstructionGenerationList, var_callReturnedResult_30455, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 732)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 747)), var_callReturnedResult_30455  COMMA_SOURCE_FILE ("expression-primary.galgas", 747)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 749)), GALGAS_string ("this object should be a structure"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 749)) ;
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
  GALGAS_universalPropertyAndRoutineMapForContext var_currentMap_31512 ;
  GALGAS_lstring joker_31481_2 ; // Joker input parameter
  GALGAS_propertyMap joker_31481_1 ; // Joker input parameter
  GALGAS_propertyList joker_31514_3 ; // Joker input parameter
  GALGAS_uint joker_31514_2 ; // Joker input parameter
  GALGAS_string joker_31514_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 771)).method_structure (joker_31481_2, joker_31481_1, var_currentMap_31512, joker_31514_3, joker_31514_2, joker_31514_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 771)) ;
  GALGAS_lstring var_routineMangledName_31542 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 772)), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 772)) ;
  GALGAS_lstring var_signature_31690 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 774)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_31879 ;
  GALGAS_routineDescriptor var_routineDescriptor_31921 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) var_currentMap_31512.ptr (), constinArgument_inMethodName, var_signature_31690, var_LLVMInvocationRoutineName_31879, var_routineDescriptor_31921, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 776)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_routineDescriptor_31921.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 783)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 783)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 784)), GALGAS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 784)) ;
    var_routineDescriptor_31921.drop () ; // Release error dropped variable
    outArgument_outCallReturnedResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_calleeKindIR var_calleeKind_32177 = function_checkMode (constinArgument_inMode, extensionGetter_executionMode (var_routineDescriptor_31921.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 789)), var_routineDescriptor_31921.getter_mRoutineKind (HERE), constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 787)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_32469 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 794)) ;
    switch (var_routineDescriptor_31921.getter_mRoutineCallingScheme (HERE).enumValue ()) {
    case GALGAS_routineCallingSheme::kNotBuilt:
      break ;
    case GALGAS_routineCallingSheme::kEnum_staticCall:
      {
        var_effectiveParameterListIR_32469.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 797)), constinArgument_inCurrentPointerIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 797)) ;
      }
      break ;
    case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
      {
      }
      break ;
    }
    {
    routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_routineDescriptor_31921.getter_mSignature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_32469, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 801)) ;
    }
    {
    routine_getNewTempVariable (var_routineDescriptor_31921.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 817)), var_routineMangledName_31542.getter_location (SOURCE_FILE ("expression-primary.galgas", 817)), ioArgument_ioTemporaries, outArgument_outCallReturnedResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 817)) ;
    }
    switch (var_routineDescriptor_31921.getter_mRoutineCallingScheme (HERE).enumValue ()) {
    case GALGAS_routineCallingSheme::kNotBuilt:
      break ;
    case GALGAS_routineCallingSheme::kEnum_staticCall:
      {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), outArgument_outCallReturnedResult, var_routineMangledName_31542, var_LLVMInvocationRoutineName_31879, var_calleeKind_32177, var_effectiveParameterListIR_32469  COMMA_SOURCE_FILE ("expression-primary.galgas", 822))  COMMA_SOURCE_FILE ("expression-primary.galgas", 822)) ;
        {
        ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_31542 COMMA_SOURCE_FILE ("expression-primary.galgas", 831)) ;
        }
      }
      break ;
    case GALGAS_routineCallingSheme::kEnum_propertyIndirectCall:
      {
        const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall * extractPtr_34775 = (const cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall *) (var_routineDescriptor_31921.getter_mRoutineCallingScheme (HERE).unsafePointer ()) ;
        const GALGAS_uint extractedValue_propertyIndex = extractPtr_34775->mAssociatedValue0 ;
        GALGAS_objectIR var_propertyReference_34046 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (constinArgument_inCurrentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 834)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 835)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 835)), constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 835))  COMMA_SOURCE_FILE ("expression-primary.galgas", 835)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 836)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 833)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 839)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_propertyReference_34046, constinArgument_inCurrentPointerIR, constinArgument_inMethodName.getter_string (SOURCE_FILE ("expression-primary.galgas", 843)), extractedValue_propertyIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 844)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 840)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (var_propertyReference_34046, GALGAS_PLMType::constructor_function (var_routineDescriptor_31921  COMMA_SOURCE_FILE ("expression-primary.galgas", 849)), outArgument_outCallReturnedResult, var_effectiveParameterListIR_32469  COMMA_SOURCE_FILE ("expression-primary.galgas", 847))  COMMA_SOURCE_FILE ("expression-primary.galgas", 847)) ;
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
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 877)) ;
  }
  GALGAS_lstring var_routineMangledName_35833 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inFunctionName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 880)) ;
  GALGAS_lstring var_signature_35948 = extensionGetter_routineSignature (constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 882)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_36145 ;
  GALGAS_routineDescriptor var_routineDescriptor_36187 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), constinArgument_inFunctionName, var_signature_35948, var_LLVMInvocationRoutineName_36145, var_routineDescriptor_36187, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 884)) ;
  GALGAS_routineKind var_routineKind_36255 = var_routineDescriptor_36187.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_36305 = extensionGetter_executionMode (var_routineKind_36255, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 892)) ;
  GALGAS_routineTypedSignature var_formalSignature_36357 = var_routineDescriptor_36187.getter_mSignature (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_routineDescriptor_36187.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 895)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 895)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inFunctionName.getter_location (SOURCE_FILE ("expression-primary.galgas", 896)), GALGAS_string ("not a function (returns no value)"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 896)) ;
    var_routineDescriptor_36187.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    GALGAS_calleeKindIR var_calleeKind_36619 = function_checkMode (constinArgument_inMode, var_calleeMode_36305, var_routineKind_36255, constinArgument_inFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 899)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_36853 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 906)) ;
    {
    routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_formalSignature_36357, constinArgument_inArguments, constinArgument_inFunctionName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_36853, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 907)) ;
    }
    GALGAS_objectIR var_functionResult_37558 ;
    {
    routine_getNewTempVariable (var_routineDescriptor_36187.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 923)), var_routineMangledName_35833.getter_location (SOURCE_FILE ("expression-primary.galgas", 923)), ioArgument_ioTemporaries, var_functionResult_37558, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 923)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_functionResult_37558, var_routineMangledName_35833, var_LLVMInvocationRoutineName_36145, var_calleeKind_36619, var_effectiveParameterListIR_36853  COMMA_SOURCE_FILE ("expression-primary.galgas", 925))  COMMA_SOURCE_FILE ("expression-primary.galgas", 925)) ;
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_35833 COMMA_SOURCE_FILE ("expression-primary.galgas", 934)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 936)), var_functionResult_37558  COMMA_SOURCE_FILE ("expression-primary.galgas", 936)) ;
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
  GALGAS_procEffectiveParameterList var_parameterList_39025 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 958)) ;
  cEnumerator_routineTypedSignature enumerator_39068 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_39111 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_39068.hasCurrentObject () && enumerator_39111.hasCurrentObject ()) {
    switch (enumerator_39111.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_40150 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_39111.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_40150->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_40150->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_40150->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_39068.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 963)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 965)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 965)) ;
        }
        GALGAS_PLMType var_type_39249 = temp_0 ;
        GALGAS_lstring var_varLLVMName_39436 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 967)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 967)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 967)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 967))  COMMA_SOURCE_FILE ("expression-primary.galgas", 967)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 968)) ;
        GALGAS_objectIR var_objectIR_39568 = GALGAS_objectIR::constructor_localVariableReference (var_type_39249, var_varLLVMName_39436  COMMA_SOURCE_FILE ("expression-primary.galgas", 969)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_39686 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_39686, extractedValue_name, var_objectIR_39568, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 971)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_39760 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_39760, extractedValue_name, var_objectIR_39568, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 973)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 973)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_39436.getter_string (SOURCE_FILE ("expression-primary.galgas", 975)), extensionGetter_llvmTypeName (var_type_39249, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 975))  COMMA_SOURCE_FILE ("expression-primary.galgas", 975)) ;
        var_parameterList_39025.addAssign_operation (enumerator_39111.current_mEffectiveParameterKind (HERE), enumerator_39111.current_mSelector (HERE), var_type_39249  COMMA_SOURCE_FILE ("expression-primary.galgas", 976)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 978)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_39249, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_39436.getter_string (SOURCE_FILE ("expression-primary.galgas", 979)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 979)), var_varLLVMName_39436.getter_location (SOURCE_FILE ("expression-primary.galgas", 979))  COMMA_SOURCE_FILE ("expression-primary.galgas", 979)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 979))  COMMA_SOURCE_FILE ("expression-primary.galgas", 979))  COMMA_SOURCE_FILE ("expression-primary.galgas", 977)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_40968 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_39111.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_40968->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_40260 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_40207 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_40207, extractedValue_name, var_objectIR_40260, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 981)) ;
        }
        var_parameterList_39025.addAssign_operation (enumerator_39111.current_mEffectiveParameterKind (HERE), enumerator_39111.current_mSelector (HERE), extensionGetter_type (var_objectIR_40260, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 991))  COMMA_SOURCE_FILE ("expression-primary.galgas", 991)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 993)), GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_40260, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 995)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_40260, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 996)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 996)), extensionGetter_location (var_objectIR_40260, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 997))  COMMA_SOURCE_FILE ("expression-primary.galgas", 996)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 998))  COMMA_SOURCE_FILE ("expression-primary.galgas", 994))  COMMA_SOURCE_FILE ("expression-primary.galgas", 992)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_42095 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_39111.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_42095->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_42095->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_41551 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_39068.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1005)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_41551, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1001)) ;
        GALGAS_objectIR var_expressionValue_41717 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_41551, extractedValue_endOfExp, var_expressionValue_41717, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1015)) ;
        }
        GALGAS_objectIR var_result_41744 = function_checkAssignmentCompatibility (var_expressionValue_41717, enumerator_39068.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1023)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1021)) ;
        var_parameterList_39025.addAssign_operation (enumerator_39111.current_mEffectiveParameterKind (HERE), enumerator_39111.current_mSelector (HERE), enumerator_39068.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1027))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1027)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 1028)), var_result_41744  COMMA_SOURCE_FILE ("expression-primary.galgas", 1028)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_42836 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_39111.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_42836->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_42215 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_42158 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_42158, extractedValue_name, var_objectIR_42215, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1030)) ;
        }
        var_parameterList_39025.addAssign_operation (enumerator_39111.current_mEffectiveParameterKind (HERE), enumerator_39111.current_mSelector (HERE), extensionGetter_type (var_objectIR_42215, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1037))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1037)) ;
        GALGAS_objectIR var_argumentIR_42587 = GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_42215, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1039)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_42215, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1040)), extensionGetter_location (var_objectIR_42215, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1040))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1040)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1041))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1038)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1043)), var_argumentIR_42587  COMMA_SOURCE_FILE ("expression-primary.galgas", 1043)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_44884 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_39111.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_44884->mAssociatedValue0 ;
        switch (constinArgument_inSelfType.enumValue ()) {
        case GALGAS_PLMType::kNotBuilt:
          break ;
        case GALGAS_PLMType::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1047)), GALGAS_string ("'self' is not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1047)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1049)), GALGAS_string ("a structure type is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 1049)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_arrayType:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1051)), GALGAS_string ("a structure type is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 1051)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_boolean:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1053)), GALGAS_string ("a structure type is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1053)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_staticInteger:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1055)), GALGAS_string ("a structure type is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 1055)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1057)), GALGAS_string ("a structure type is required here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 1057)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1059)), GALGAS_string ("a structure type is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 1059)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1061)), GALGAS_string ("a structure type is required here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1061)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_pointer:
          {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1063)), GALGAS_string ("a structure type is required here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 1063)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_integer:
          {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1065)), GALGAS_string ("a structure type is required here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1065)) ;
            var_parameterList_39025.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_structure:
          {
            const cEnumAssociatedValues_PLMType_structure * extractPtr_44874 = (const cEnumAssociatedValues_PLMType_structure *) (constinArgument_inSelfType.unsafePointer ()) ;
            const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_44874->mAssociatedValue2 ;
            GALGAS_universalPropertyAndRoutineMapForContext var_m_44262 = extractedValue_universalMap ;
            GALGAS_objectIR var_propertyObject_44348 ;
            {
            var_m_44262.insulate (HERE) ;
            cPtr_universalPropertyAndRoutineMapForContext * ptr_44290 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_44262.ptr () ;
            callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_44290, extractedValue_name, var_propertyObject_44348, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1068)) ;
            }
            GALGAS_uint var_idx_44401 ;
            GALGAS_PLMType joker_44384_2 ; // Joker input parameter
            GALGAS_lstring joker_44384_1 ; // Joker input parameter
            var_propertyObject_44348.method_property (joker_44384_2, joker_44384_1, var_idx_44401, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1069)) ;
            GALGAS_objectIR var_fieldObjectReference_44501 ;
            {
            routine_getNewTempVariable (extensionGetter_type (var_propertyObject_44348, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1070)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1070)), ioArgument_ioTemporaries, var_fieldObjectReference_44501, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1070)) ;
            }
            {
            extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_44501, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1074)), var_idx_44401, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1071)) ;
            }
            var_parameterList_39025.addAssign_operation (enumerator_39111.current_mEffectiveParameterKind (HERE), enumerator_39111.current_mSelector (HERE), extensionGetter_type (var_propertyObject_44348, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1077))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1077)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1079)), var_fieldObjectReference_44501  COMMA_SOURCE_FILE ("expression-primary.galgas", 1078)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_39068.gotoNextObject () ;
    enumerator_39111.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1085)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1085)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1086)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1086)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1086)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1087)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1086)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1087)), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 1086)) ;
  }else if (kBoolFalse == test_13) {
    cEnumerator_routineTypedSignature enumerator_45220 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_45249 (var_parameterList_39025, kENUMERATION_UP) ;
    while (enumerator_45220.hasCurrentObject () && enumerator_45249.hasCurrentObject ()) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_45220.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1090)).objectCompare (extensionGetter_key (enumerator_45249.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1090)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_45249.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1091)), GALGAS_string ("the actual parameter type is '").add_operation (extensionGetter_key (enumerator_45249.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1091)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1091)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1091)).add_operation (enumerator_45220.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1092)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1092)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1092)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 1091)) ;
      }
      GALGAS_string var_requiredPassingMode_45550 = extensionGetter_requiredActualPassingModeForSelector (enumerator_45220.current_mFormalArgumentPassingMode (HERE), enumerator_45220.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1094)) ;
      GALGAS_string var_testedPassingMode_45671 = extensionGetter_passingModeForActualSelector (enumerator_45249.current_mEffectiveParameterPassingMode (HERE), enumerator_45249.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1095)) ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_45550.objectCompare (var_testedPassingMode_45671)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_45249.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1097)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_45550, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1097)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1097)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 1097)) ;
      }
      enumerator_45220.gotoNextObject () ;
      enumerator_45249.gotoNextObject () ;
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
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 1127)).operator_not (SOURCE_FILE ("expression-primary.galgas", 1127)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1128)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_47327 ;
      GALGAS_objectIR joker_47294_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_47294_1, var_functionName_47327, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1130)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_47327.getter_location (SOURCE_FILE ("expression-primary.galgas", 1131)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1131)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_47498 ;
      GALGAS_lstring var_functionName_47529 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_47498, var_functionName_47529, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1133)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_48236 ;
      GALGAS_calleeKindIR var_routineKind_48285 ;
      GALGAS_lstring var_functionMangledName_48344 ;
      GALGAS_lstring var_functionNameForGeneration_48415 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_47498, var_functionName_47529, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_48236, var_routineKind_48285, var_functionMangledName_48344, var_functionNameForGeneration_48415, outArgument_outReturnedType, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1134)) ;
      }
      GALGAS_objectIR var_functionResult_48603 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_48344.getter_location (SOURCE_FILE ("expression-primary.galgas", 1157)), ioArgument_ioTemporaries, var_functionResult_48603, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1157)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_48603, var_functionMangledName_48344, var_functionNameForGeneration_48415, var_routineKind_48285, var_effectiveParameterListIR_48236  COMMA_SOURCE_FILE ("expression-primary.galgas", 1159))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1159)) ;
      ioArgument_ioObjectPtr = var_functionResult_48603 ;
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
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1197)) ;
  GALGAS_PLMType var_receiverType_50235 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1198)) ;
  GALGAS_bool var_specialCase_50348 = var_receiverType_50235.getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 1200)) ;
  const enumGalgasBool test_0 = var_specialCase_50348.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_propertyMap_50473 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_50511 ;
    GALGAS_lstring joker_50429_1 ; // Joker input parameter
    GALGAS_propertyList joker_50513_3 ; // Joker input parameter
    GALGAS_uint joker_50513_2 ; // Joker input parameter
    GALGAS_string joker_50513_1 ; // Joker input parameter
    var_receiverType_50235.method_structure (joker_50429_1, var_propertyMap_50473, var_universalMap_50511, joker_50513_3, joker_50513_2, joker_50513_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1202)) ;
    const enumGalgasBool test_1 = var_propertyMap_50473.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1203)) COMMA_SOURCE_FILE ("expression-primary.galgas", 1203)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_propertyObject_50641 ;
      GALGAS_bool joker_50610 ; // Joker input parameter
      var_propertyMap_50473.method_searchKey (constinArgument_inRoutineName, joker_50610, var_propertyObject_50641, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1204)) ;
      GALGAS_PLMType var_type_50688 ;
      GALGAS_lstring var_plmName_50716 ;
      GALGAS_uint var_index_50740 ;
      var_propertyObject_50641.method_property (var_type_50688, var_plmName_50716, var_index_50740, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1205)) ;
      var_specialCase_50348 = var_type_50688.getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 1206)) ;
      const enumGalgasBool test_2 = var_specialCase_50348.boolEnum () ;
      if (kBoolTrue == test_2) {
        constinArgument_inRoutineName.log ("inRoutineName"  COMMA_SOURCE_FILE ("expression-primary.galgas", 1208)) ;
      }
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_receiverType_50235.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1213)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1214)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 1214)) ;
  }
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_receiverType_50235.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1218)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string ("$").add_operation (extensionGetter_key (var_receiverType_50235, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1218)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1218)) ;
  }
  outArgument_outRoutineMangledName = function_routineMangledNameFromCall (temp_4, constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1217)) ;
  GALGAS_routineDescriptor var_routineDescriptor_51406 ;
  GALGAS_location var_outRoutineLocation_51444 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), constinArgument_inRoutineName, extensionGetter_routineSignature (constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1224)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1224)), outArgument_outRoutineNameForGeneration, var_routineDescriptor_51406, var_outRoutineLocation_51444, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1222)) ;
  GALGAS_bool var_isPublic_51463 = var_routineDescriptor_51406.getter_mIsPublic (HERE) ;
  GALGAS_routineKind var_routineKind_51511 = var_routineDescriptor_51406.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_51561 = extensionGetter_executionMode (var_routineKind_51511, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1231)) ;
  GALGAS_routineTypedSignature var_formalSignature_51648 = var_routineDescriptor_51406.getter_mSignature (HERE) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_routineDescriptor_51406.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1233)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    outArgument_outReturnedType = GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1234)) ;
  }else if (kBoolFalse == test_6) {
    outArgument_outReturnedType = var_routineDescriptor_51406.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1236)) ;
  }
  const enumGalgasBool test_7 = var_isPublic_51463.operator_not (SOURCE_FILE ("expression-primary.galgas", 1239)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_receiverType_50235.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1240)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_declarationFile_51976 = var_outRoutineLocation_51444.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1241)) ;
      GALGAS_string var_invocationFile_52029 = constinArgument_inRoutineName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1242)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_invocationFile_52029.objectCompare (var_declarationFile_51976)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1244)), GALGAS_string ("this routine is not public"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1244)) ;
      }
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 1251)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredMode, var_calleeMode_51561, var_routineKind_51511, constinArgument_inRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1253)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_51648, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1260)) ;
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
  GALGAS_procEffectiveParameterList var_parameterList_54473 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1301)) ;
  cEnumerator_routineTypedSignature enumerator_54516 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_54559 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_54516.hasCurrentObject () && enumerator_54559.hasCurrentObject ()) {
    switch (enumerator_54559.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_56049 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_54559.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_56049->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_56049->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_56049->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_54516.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1306)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1308)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1308)) ;
        }
        GALGAS_PLMType var_type_54697 = temp_0 ;
        GALGAS_lstring var_varLLVMName_54884 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1310)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1310)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1310)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1310))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1310)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1311)) ;
        GALGAS_objectIR var_objectIR_55016 = GALGAS_objectIR::constructor_localVariableReference (var_type_54697, var_varLLVMName_54884  COMMA_SOURCE_FILE ("expression-primary.galgas", 1312)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_55134 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_55134, extractedValue_name, var_objectIR_55016, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1314)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_54697, GALGAS_bool (true), var_objectIR_55016, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1315)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_55430 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_55430, extractedValue_name, var_objectIR_55016, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 1324)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1324)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_54697, GALGAS_bool (true), var_objectIR_55016, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1325)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_54884.getter_string (SOURCE_FILE ("expression-primary.galgas", 1334)), extensionGetter_llvmTypeName (var_type_54697, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1334))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1334)) ;
        var_parameterList_54473.addAssign_operation (enumerator_54559.current_mEffectiveParameterKind (HERE), enumerator_54559.current_mSelector (HERE), var_type_54697  COMMA_SOURCE_FILE ("expression-primary.galgas", 1335)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1337)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_54697, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_54884.getter_string (SOURCE_FILE ("expression-primary.galgas", 1338)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1338)), var_varLLVMName_54884.getter_location (SOURCE_FILE ("expression-primary.galgas", 1338))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1338)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1338))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1338))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1336)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_57108 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_54559.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_57108->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_56159 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_56106 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_56106, extractedValue_name, var_objectIR_56159, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1340)) ;
        }
        GALGAS_PLMType var_type_56246 ;
        GALGAS_bool var_accessIsAllowed_56293 ;
        GALGAS_bool var_isCopyable_56360 ;
        GALGAS_bool var_canBeUsedAsInputParameter_56474 ;
        {
        GALGAS_objectIR joker_56312 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_56246, var_accessIsAllowed_56293, joker_56312, var_isCopyable_56360, var_canBeUsedAsInputParameter_56474, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1341)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_56293.operator_not (SOURCE_FILE ("expression-primary.galgas", 1349)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1350)), GALGAS_string ("routine has no access right on the this variable"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 1350)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter_56474.operator_not (SOURCE_FILE ("expression-primary.galgas", 1352)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1353)), GALGAS_string ("this variable cannot be used as input parameter"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1353)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable_56360.operator_not (SOURCE_FILE ("expression-primary.galgas", 1355)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1356)), GALGAS_string ("an $").add_operation (extensionGetter_key (var_type_56246, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1356)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1356)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1356)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 1356)) ;
        }
        var_parameterList_54473.addAssign_operation (enumerator_54559.current_mEffectiveParameterKind (HERE), enumerator_54559.current_mSelector (HERE), var_type_56246  COMMA_SOURCE_FILE ("expression-primary.galgas", 1358)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1360)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_56246, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_56159, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1361)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1361)), extensionGetter_location (var_objectIR_56159, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1361))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1361)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1361))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1361))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1359)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_58235 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_54559.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_58235->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_58235->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_57691 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_54516.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1367)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_57691, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1363)) ;
        GALGAS_objectIR var_expressionValue_57857 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_57691, extractedValue_endOfExp, var_expressionValue_57857, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1377)) ;
        }
        GALGAS_objectIR var_result_57884 = function_checkAssignmentCompatibility (var_expressionValue_57857, enumerator_54516.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1385)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1383)) ;
        var_parameterList_54473.addAssign_operation (enumerator_54559.current_mEffectiveParameterKind (HERE), enumerator_54559.current_mSelector (HERE), enumerator_54516.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1389))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1389)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 1390)), var_result_57884  COMMA_SOURCE_FILE ("expression-primary.galgas", 1390)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_59119 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_54559.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_59119->mAssociatedValue0 ;
        GALGAS_PLMType var_type_58364 ;
        GALGAS_bool var_accessIsAllowed_58411 ;
        GALGAS_objectIR var_objectIR_58442 ;
        GALGAS_bool var_canBeUsedAsInputParameter_58519 ;
        {
        GALGAS_bool joker_58452_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_58364, var_accessIsAllowed_58411, var_objectIR_58442, joker_58452_1, var_canBeUsedAsInputParameter_58519, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1392)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter_58519.operator_not (SOURCE_FILE ("expression-primary.galgas", 1400)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1401)), GALGAS_string ("this variable cannot be used as output/input parameter"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1401)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed_58411.operator_not (SOURCE_FILE ("expression-primary.galgas", 1403)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1404)), GALGAS_string ("routine has no access right on the this variable"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1404)) ;
        }
        var_parameterList_54473.addAssign_operation (enumerator_54559.current_mEffectiveParameterKind (HERE), enumerator_54559.current_mSelector (HERE), var_type_58364  COMMA_SOURCE_FILE ("expression-primary.galgas", 1406)) ;
        GALGAS_objectIR var_argumentIR_58881 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_58364, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_58442, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1409)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1409)), extensionGetter_location (var_objectIR_58442, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1409))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1409)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1410))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1407)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1412)), var_argumentIR_58881  COMMA_SOURCE_FILE ("expression-primary.galgas", 1412)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_61563 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_54559.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_61563->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 1414)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1415)), GALGAS_string ("'self' is not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 1415)) ;
          var_parameterList_54473.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("expression-primary.galgas", 1416)).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1417)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1417)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1417)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 1417)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("expression-primary.galgas", 1418)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1419)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1419)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 1419)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.enumValue ()) {
              case GALGAS_PLMType::kNotBuilt:
                break ;
              case GALGAS_PLMType::kEnum_opaque:
                {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1423)), GALGAS_string ("a structure type is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 1423)) ;
                  var_parameterList_54473.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_arrayType:
                {
                  TC_Array <C_FixItDescription> fixItArray20 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1425)), GALGAS_string ("a structure type is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-primary.galgas", 1425)) ;
                  var_parameterList_54473.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_boolean:
              case GALGAS_PLMType::kEnum_void:
                {
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1427)), GALGAS_string ("a structure type is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-primary.galgas", 1427)) ;
                  var_parameterList_54473.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_staticInteger:
                {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1429)), GALGAS_string ("a structure type is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-primary.galgas", 1429)) ;
                  var_parameterList_54473.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_literalString:
                {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1431)), GALGAS_string ("a structure type is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-primary.galgas", 1431)) ;
                  var_parameterList_54473.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_enumeration:
                {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1433)), GALGAS_string ("a structure type is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-primary.galgas", 1433)) ;
                  var_parameterList_54473.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_function:
                {
                  TC_Array <C_FixItDescription> fixItArray25 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1435)), GALGAS_string ("a structure type is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-primary.galgas", 1435)) ;
                  var_parameterList_54473.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_pointer:
                {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1437)), GALGAS_string ("a structure type is required here"), fixItArray26  COMMA_SOURCE_FILE ("expression-primary.galgas", 1437)) ;
                  var_parameterList_54473.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_integer:
                {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1439)), GALGAS_string ("a structure type is required here"), fixItArray27  COMMA_SOURCE_FILE ("expression-primary.galgas", 1439)) ;
                  var_parameterList_54473.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_PLMType::kEnum_structure:
                {
                  const cEnumAssociatedValues_PLMType_structure * extractPtr_61540 = (const cEnumAssociatedValues_PLMType_structure *) (constinArgument_inSelfType.unsafePointer ()) ;
                  const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_61540->mAssociatedValue2 ;
                  GALGAS_universalPropertyAndRoutineMapForContext var_m_60902 = extractedValue_universalMap ;
                  GALGAS_objectIR var_propertyObject_60990 ;
                  {
                  var_m_60902.insulate (HERE) ;
                  cPtr_universalPropertyAndRoutineMapForContext * ptr_60932 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_60902.ptr () ;
                  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_60932, extractedValue_name, var_propertyObject_60990, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1442)) ;
                  }
                  GALGAS_uint var_idx_61045 ;
                  GALGAS_PLMType joker_61028_2 ; // Joker input parameter
                  GALGAS_lstring joker_61028_1 ; // Joker input parameter
                  var_propertyObject_60990.method_property (joker_61028_2, joker_61028_1, var_idx_61045, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1443)) ;
                  GALGAS_objectIR var_fieldObjectReference_61147 ;
                  {
                  routine_getNewTempVariable (extensionGetter_type (var_propertyObject_60990, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1444)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1444)), ioArgument_ioTemporaries, var_fieldObjectReference_61147, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1444)) ;
                  }
                  {
                  extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_61147, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1448)), var_idx_61045, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1445)) ;
                  }
                  var_parameterList_54473.addAssign_operation (enumerator_54559.current_mEffectiveParameterKind (HERE), enumerator_54559.current_mSelector (HERE), extensionGetter_type (var_propertyObject_60990, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1451))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1451)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1453)), var_fieldObjectReference_61147  COMMA_SOURCE_FILE ("expression-primary.galgas", 1452)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_54516.gotoNextObject () ;
    enumerator_54559.gotoNextObject () ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1460)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1460)))).boolEnum () ;
  if (kBoolTrue == test_28) {
    TC_Array <C_FixItDescription> fixItArray29 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1461)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1461)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1461)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1461)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1462)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1461)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1461)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1462)), fixItArray29  COMMA_SOURCE_FILE ("expression-primary.galgas", 1461)) ;
  }else if (kBoolFalse == test_28) {
    cEnumerator_routineTypedSignature enumerator_61898 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_61927 (var_parameterList_54473, kENUMERATION_UP) ;
    while (enumerator_61898.hasCurrentObject () && enumerator_61927.hasCurrentObject ()) {
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_61898.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1465)).objectCompare (extensionGetter_key (enumerator_61927.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1465)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_61927.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1466)), GALGAS_string ("the actual parameter type is '").add_operation (extensionGetter_key (enumerator_61927.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1466)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1466)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1466)).add_operation (enumerator_61898.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1467)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1467)), fixItArray31  COMMA_SOURCE_FILE ("expression-primary.galgas", 1466)) ;
      }
      GALGAS_string var_requiredPassingMode_62228 = extensionGetter_requiredActualPassingModeForSelector (enumerator_61898.current_mFormalArgumentPassingMode (HERE), enumerator_61898.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1469)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1469)) ;
      GALGAS_string var_testedPassingMode_62349 = extensionGetter_passingModeForActualSelector (enumerator_61927.current_mEffectiveParameterPassingMode (HERE), enumerator_61927.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1470)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_62228.objectCompare (var_testedPassingMode_62349)).boolEnum () ;
      if (kBoolTrue == test_32) {
        TC_Array <C_FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_61927.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1472)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_62228, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1472)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1472)), fixItArray33  COMMA_SOURCE_FILE ("expression-primary.galgas", 1472)) ;
      }
      enumerator_61898.gotoNextObject () ;
      enumerator_61927.gotoNextObject () ;
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
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_expressionSE var_expression_2666 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSemanticContext, var_expression_2666, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 53)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_checkInstructionSE::constructor_new (object->mProperty_mInstructionLocation, var_expression_2666  COMMA_SOURCE_FILE ("directive-check.galgas", 57))  COMMA_SOURCE_FILE ("directive-check.galgas", 57)) ;
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
  GALGAS_instructionListIR var_instructionGenerationList_3939 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 79)) ;
  GALGAS_objectIR var_expressionResult_4385 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("directive-check.galgas", 84)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3939, var_expressionResult_4385, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 80)) ;
  const enumGalgasBool test_0 = extensionGetter_type (var_expressionResult_4385, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 95)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 95)).operator_not (SOURCE_FILE ("directive-check.galgas", 95)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 96)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_4385, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 99)).operator_not (SOURCE_FILE ("directive-check.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 100)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_4768 ;
    GALGAS_PLMType joker_4745_1 ; // Joker input parameter
    var_expressionResult_4385.method_literalInteger (joker_4745_1, var_value_4768, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 102)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_4768.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 103)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 104)) ;
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
//                   Overriding extension method '@varAssignmentNoSelfInstructionAST solveEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentNoSelfInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                             GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentNoSelfInstructionAST * object = (const cPtr_varAssignmentNoSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentNoSelfInstructionAST) ;
  extensionMethod_solveEntitiesForAssignmentInstruction (object->mProperty_mAssignmentTargetAST, constinArgument_inSemanticContext, object->mProperty_mInstructionLocation, object->mProperty_mSourceExpression, ioArgument_ioInstructionListSE, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentNoSelfInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_varAssignmentNoSelfInstructionAST.mSlotID,
                                      extensionMethod_varAssignmentNoSelfInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentNoSelfInstructionAST_solveEntities (defineExtensionMethod_varAssignmentNoSelfInstructionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@varAssignmentSelfInstructionAST solveEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentSelfInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentSelfInstructionAST * object = (const cPtr_varAssignmentSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentSelfInstructionAST) ;
  extensionMethod_solveEntitiesForAssignmentInstruction (object->mProperty_mAssignmentTargetAST, constinArgument_inSemanticContext, object->mProperty_mInstructionLocation, object->mProperty_mSourceExpression, ioArgument_ioInstructionListSE, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 140)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentSelfInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_varAssignmentSelfInstructionAST.mSlotID,
                                      extensionMethod_varAssignmentSelfInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentSelfInstructionAST_solveEntities (defineExtensionMethod_varAssignmentSelfInstructionAST_solveEntities, NULL) ;

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
  GALGAS_objectIR var_currentObject_10352 ;
  GALGAS_string var_globalVariableReceiverName_10422 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 240)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_10352, var_globalVariableReceiverName_10422, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 238)) ;
  const enumGalgasBool test_0 = var_currentObject_10352.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 255)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 256)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 256)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 256)) ;
    var_currentObject_10352.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperandPossibleReference_11077 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_10352, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_11077, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 259)) ;
  GALGAS_objectIR var_sourceOperand_11257 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_11077, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 276)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 276)), var_sourceOperand_11257, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 273)) ;
  }
  GALGAS_objectIR var_result_11276 = function_checkAssignmentCompatibility (var_sourceOperand_11257, extensionGetter_type (var_currentObject_10352, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 282)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 282)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 279)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_10352, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 285)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 285)), var_result_11276, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 285)) ;
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
  GALGAS_objectIR var_currentObject_13038 ;
  GALGAS_string var_globalVariableReceiverName_13108 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 306)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_13038, var_globalVariableReceiverName_13108, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 304)) ;
  const enumGalgasBool test_0 = var_currentObject_13038.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 321)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 322)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 322)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 322)) ;
    var_currentObject_13038.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperandPossibleReference_13763 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_13038, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 329)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_13763, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 325)) ;
  GALGAS_objectIR var_sourceOperand_13943 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_13763, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 342)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 342)), var_sourceOperand_13943, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 339)) ;
  }
  GALGAS_objectIR var_result_13962 = function_checkAssignmentCompatibility (var_sourceOperand_13943, extensionGetter_type (var_currentObject_13038, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 347)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 348)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 348)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 345)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_13038, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 351)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 351)), var_result_13962, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 351)) ;
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
//                 Overriding extension method '@varOperatorAssignNoSelfInstructionAST solveEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignNoSelfInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                 GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignNoSelfInstructionAST * object = (const cPtr_varOperatorAssignNoSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignNoSelfInstructionAST) ;
  extensionMethod_solveEntitiesForAssignmentOperatorInstruction (object->mProperty_mAssignmentTargetAST, constinArgument_inSemanticContext, object->mProperty_mInstructionLocation, object->mProperty_mInfixOperator, object->mProperty_mInfixOperatorLocation, object->mProperty_mSourceExpression, ioArgument_ioInstructionListSE, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 156)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignNoSelfInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_varOperatorAssignNoSelfInstructionAST.mSlotID,
                                      extensionMethod_varOperatorAssignNoSelfInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignNoSelfInstructionAST_solveEntities (defineExtensionMethod_varOperatorAssignNoSelfInstructionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@varOperatorAssignSelfInstructionAST solveEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignSelfInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                               GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignSelfInstructionAST * object = (const cPtr_varOperatorAssignSelfInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignSelfInstructionAST) ;
  extensionMethod_solveEntitiesForAssignmentOperatorInstruction (object->mProperty_mAssignmentTargetAST, constinArgument_inSemanticContext, object->mProperty_mInstructionLocation, object->mProperty_mInfixOperator, object->mProperty_mInfixOperatorLocation, object->mProperty_mSourceExpression, ioArgument_ioInstructionListSE, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignSelfInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_varOperatorAssignSelfInstructionAST.mSlotID,
                                      extensionMethod_varOperatorAssignSelfInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignSelfInstructionAST_solveEntities (defineExtensionMethod_varOperatorAssignSelfInstructionAST_solveEntities, NULL) ;

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
  GALGAS_objectIR var_targetObject_12686 ;
  GALGAS_string var_globalVariableReceiverName_12756 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("instruction-assignment-operator.galgas", 312)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObject_12686, var_globalVariableReceiverName_12756, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 310)) ;
  const enumGalgasBool test_0 = var_targetObject_12686.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 327)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 328)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 328)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 328)) ;
    var_targetObject_12686.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourcePossibleReference_13405 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_12686, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 335)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_13405, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 331)) ;
  GALGAS_objectIR var_sourceValue_13564 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_13405, object->mProperty_mEndOfSourceExpression, var_sourceValue_13564, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 345)) ;
  }
  GALGAS_bool var_noPanicGeneration_13636 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_13699 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 353)))) ;
  GALGAS_infixOperatorMap var_operatorMap_13761 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_13761 = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_13761 = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_13761 = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_13699.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 364)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 364)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 365)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 365)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 364)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_13636.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
      var_operatorMap_13761 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_13761 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_13699.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 372)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 372)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 373)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 373)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 372)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_13636.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
      var_operatorMap_13761 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_13761 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_13699.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 380)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 380)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 381)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 381)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 380)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_13636.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
      var_operatorMap_13761 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_13761 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_13699.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 388)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 388)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 389)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 389)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 388)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_13636.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
      var_operatorMap_13761 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_13761 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_13699.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 396)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 396)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 397)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 397)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 396)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_13636.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
      var_operatorMap_13761 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_13761 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_16106 ;
  GALGAS_PLMType joker_16052 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_13761, extensionGetter_type (var_targetObject_12686, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 404)), extensionGetter_type (var_sourceValue_13564, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 405)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 406)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 406)), joker_16052, var_binaryOperator_16106, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 403)) ;
  GALGAS_objectIR var_variableValue_16289 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_12686, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 414)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 414)), var_variableValue_16289, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 411)) ;
  }
  GALGAS_objectIR var_newResultingValue_16519 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_16106.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_16289, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 421)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 421)), var_sourceValue_13564, extensionGetter_type (var_targetObject_12686, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 423)), var_newResultingValue_16519, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 417)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_12686, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 428)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 428)), var_newResultingValue_16519, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 426)) ;
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
  GALGAS_objectIR var_targetObject_18128 ;
  GALGAS_string var_globalVariableReceiverName_18198 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("instruction-assignment-operator.galgas", 452)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObject_18128, var_globalVariableReceiverName_18198, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 450)) ;
  const enumGalgasBool test_0 = var_targetObject_18128.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 467)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 468)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 468)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 468)) ;
    var_targetObject_18128.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourcePossibleReference_18847 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_18128, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 475)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_18847, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 471)) ;
  GALGAS_objectIR var_sourceValue_19006 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_18847, object->mProperty_mEndOfSourceExpression, var_sourceValue_19006, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 485)) ;
  }
  GALGAS_bool var_noPanicGeneration_19078 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_19141 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 493)))) ;
  GALGAS_infixOperatorMap var_operatorMap_19203 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_19203 = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_19203 = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_19203 = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_19141.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 504)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 504)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 505)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 505)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 504)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_19078.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
      var_operatorMap_19203 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_19203 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_19141.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 512)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 512)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 513)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 513)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 512)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_19078.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
      var_operatorMap_19203 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_19203 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_19141.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 520)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 520)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 521)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 521)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 520)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_19078.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
      var_operatorMap_19203 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_19203 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_19141.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 528)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 528)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 529)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 529)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 528)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_19078.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
      var_operatorMap_19203 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_19203 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_19141.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 536)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 536)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 537)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 537)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 536)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_19078.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
      var_operatorMap_19203 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_19203 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_21548 ;
  GALGAS_PLMType joker_21494 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_19203, extensionGetter_type (var_targetObject_18128, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 544)), extensionGetter_type (var_sourceValue_19006, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 545)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 546)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 546)), joker_21494, var_binaryOperator_21548, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 543)) ;
  GALGAS_objectIR var_variableValue_21731 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_18128, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 554)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 554)), var_variableValue_21731, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 551)) ;
  }
  GALGAS_objectIR var_newResultingValue_21961 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_21548.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_21731, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 561)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 561)), var_sourceValue_19006, extensionGetter_type (var_targetObject_18128, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 563)), var_newResultingValue_21961, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 557)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_18128, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 568)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 568)), var_newResultingValue_21961, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 566)) ;
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
//                    Overriding extension method '@varInstructionWithAssignmentAST solveEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_expressionSE var_expression_4108 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSemanticContext, var_expression_4108, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_varInstructionWithAssignmentSE::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mVarName, object->mProperty_mOptionalTypeName, var_expression_4108  COMMA_SOURCE_FILE ("instruction-var.galgas", 101))  COMMA_SOURCE_FILE ("instruction-var.galgas", 101)) ;
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
                                                             const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_varInstructionSE::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mVarName, object->mProperty_mTypeName  COMMA_SOURCE_FILE ("instruction-var.galgas", 122))  COMMA_SOURCE_FILE ("instruction-var.galgas", 122)) ;
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
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 144)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 145)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)) ;
  }
  GALGAS_PLMType var_targetType_5969 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_6611 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_5969, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_6611, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 148)) ;
  GALGAS_objectIR var_expressionResult_6761 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_6611, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 165)), var_expressionResult_6761, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 162)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_5969.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 169)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_5969 = extensionGetter_type (var_expressionResult_6761, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 170)) ;
  }
  GALGAS_objectIR var_result_6887 = function_checkAssignmentCompatibility (var_expressionResult_6761, var_targetType_5969, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172)) ;
  GALGAS_lstring var_varName_7134 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 180))  COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 181)) ;
  GALGAS_objectIR var_objectIR_7266 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_6887, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 182)), var_varName_7134  COMMA_SOURCE_FILE ("instruction-var.galgas", 182)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7360 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7360, object->mProperty_mVarName, var_objectIR_7266, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 183)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertDefinedVariable (object->mProperty_mVarName, extensionGetter_type (var_result_6887, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 186)), GALGAS_bool (true), var_objectIR_7266, extensionGetter_copyable (extensionGetter_type (var_result_6887, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 189)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 184)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varName_7134.getter_string (SOURCE_FILE ("instruction-var.galgas", 193)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_6887, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 193))  COMMA_SOURCE_FILE ("instruction-var.galgas", 193)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varName_7134.getter_string (SOURCE_FILE ("instruction-var.galgas", 195)), extensionGetter_type (var_result_6887, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 196)), var_result_6887, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 194)) ;
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
  GALGAS_PLMType var_targetType_8729 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 217)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 217)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_8729, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 219)).operator_not (SOURCE_FILE ("instruction-var.galgas", 219)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 220)), GALGAS_string ("$").add_operation (extensionGetter_key (var_targetType_8729, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 220)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 220)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 220)) ;
  }
  GALGAS_lstring var_varLLVMName_8974 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 223)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 223)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 223))  COMMA_SOURCE_FILE ("instruction-var.galgas", 223)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 224)) ;
  GALGAS_objectIR var_objectIR_9106 = GALGAS_objectIR::constructor_localVariableReference (var_targetType_8729, var_varLLVMName_8974  COMMA_SOURCE_FILE ("instruction-var.galgas", 225)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_9201 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_9201, object->mProperty_mVarName, var_objectIR_9106, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 226)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 226)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUndefinedVariable (object->mProperty_mVarName, var_targetType_8729, GALGAS_bool (true), var_objectIR_9106, extensionGetter_copyable (var_targetType_8729, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 232)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 227)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_8974.getter_string (SOURCE_FILE ("instruction-var.galgas", 236)), extensionGetter_llvmTypeName (var_targetType_8729, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 236))  COMMA_SOURCE_FILE ("instruction-var.galgas", 236)) ;
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
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_expressionSE var_expression_3201 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSemanticContext, var_expression_3201, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)) ;
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_letInstructionWithAssignmentSE::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mConstantName, object->mProperty_mOptionalTypeName, var_expression_3201  COMMA_SOURCE_FILE ("instruction-let.galgas", 74))  COMMA_SOURCE_FILE ("instruction-let.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionWithAssignmentAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                      extensionMethod_letInstructionWithAssignmentAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_solveEntities (defineExtensionMethod_letInstructionWithAssignmentAST_solveEntities, NULL) ;

