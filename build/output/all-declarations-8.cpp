#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'isrSlotTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_isrSlotTypeName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("isrSlot") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GALGAS_string gOnceFunctionResult_isrSlotTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_isrSlotTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (NULL,
                                                             releaseOnceFunctionResult_isrSlotTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_isrSlotTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_isrSlotTypeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_lstring var_rootNode_10470 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 315)), object->mProperty_mPanicCodeTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  {
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_10470, temp_0, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 316)) ;
  }
  GALGAS_lstring var_panicCodeTypeName_10623 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mPanicCodeTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 317)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_10470, var_panicCodeTypeName_10623 COMMA_SOURCE_FILE ("configuration.galgas", 318)) ;
  }
  GALGAS_lstring var_panicLineTypeName_10757 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mPanicLineTypeName, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 319)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_10470, var_panicLineTypeName_10757 COMMA_SOURCE_FILE ("configuration.galgas", 320)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                               extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@configurationDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_configurationDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  result_outLocation = object->mProperty_mPanicCodeTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_configurationDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                 extensionGetter_configurationDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_configurationDeclarationAST_location (defineExtensionGetter_configurationDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 332)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                           extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@configurationDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mPointerSize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 347)), GALGAS_string ("duplicate configuration"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 347)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 348)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_location (SOURCE_FILE ("configuration.galgas", 349)), GALGAS_string ("zero size pointer not allowed"), fixItArray3  COMMA_SOURCE_FILE ("configuration.galgas", 349)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioContext.mProperty_mPointerSize = object->mProperty_mTargetParameters.getter_mPointerSize (HERE).getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 351)) ;
    }
  }
  ioArgument_ioContext.mProperty_mTargetParameters = object->mProperty_mTargetParameters ;
  ioArgument_ioContext.mProperty_mPanicCodeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicCodeTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 355)) ;
  const enumGalgasBool test_4 = ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 356)).getter_isInteger (SOURCE_FILE ("configuration.galgas", 356)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_unsigned_12814 ;
    GALGAS_bigint joker_12789_2 ; // Joker input parameter
    GALGAS_bigint joker_12789_1 ; // Joker input parameter
    GALGAS_uint joker_12816_2 ; // Joker input parameter
    GALGAS_string joker_12816_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 357)).method_integer (joker_12789_2, joker_12789_1, var_unsigned_12814, joker_12816_2, joker_12816_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 357)) ;
    const enumGalgasBool test_5 = var_unsigned_12814.operator_not (SOURCE_FILE ("configuration.galgas", 358)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 359)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("configuration.galgas", 359)) ;
    }
  }else if (kBoolFalse == test_4) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 362)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray7  COMMA_SOURCE_FILE ("configuration.galgas", 362)) ;
  }
  ioArgument_ioContext.mProperty_mPanicLineType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mPanicLineTypeName, inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 365)) ;
  const enumGalgasBool test_8 = ioArgument_ioContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 366)).getter_isInteger (SOURCE_FILE ("configuration.galgas", 366)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_bool var_unsigned_13273 ;
    GALGAS_bigint joker_13248_2 ; // Joker input parameter
    GALGAS_bigint joker_13248_1 ; // Joker input parameter
    GALGAS_uint joker_13275_2 ; // Joker input parameter
    GALGAS_string joker_13275_1 ; // Joker input parameter
    ioArgument_ioContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 367)).method_integer (joker_13248_2, joker_13248_1, var_unsigned_13273, joker_13275_2, joker_13275_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 367)) ;
    const enumGalgasBool test_9 = var_unsigned_13273.operator_not (SOURCE_FILE ("configuration.galgas", 368)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 369)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray10  COMMA_SOURCE_FILE ("configuration.galgas", 369)) ;
    }
  }else if (kBoolFalse == test_8) {
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 372)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray11  COMMA_SOURCE_FILE ("configuration.galgas", 372)) ;
  }
  GALGAS_stringset var_panicCodeSet_13565 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 375)) ;
  cEnumerator_interruptionConfigurationList enumerator_13627 (object->mProperty_mInterruptionConfigurationList, kENUMERATION_UP) ;
  while (enumerator_13627.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_13627.current_mInterruptName (HERE), enumerator_13627.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 377)) ;
    }
    switch (enumerator_13627.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_code:
      {
        const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_13920 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_13627.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_value = extractPtr_13920->mAssociatedValue0 ;
        GALGAS_string var_s_13773 = extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("configuration.galgas", 381)) ;
        const enumGalgasBool test_12 = var_panicCodeSet_13565.getter_hasKey (var_s_13773 COMMA_SOURCE_FILE ("configuration.galgas", 382)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_value.getter_location (SOURCE_FILE ("configuration.galgas", 383)), GALGAS_string ("duplicate interrupt code"), fixItArray13  COMMA_SOURCE_FILE ("configuration.galgas", 383)) ;
        }
        var_panicCodeSet_13565.addAssign_operation (var_s_13773  COMMA_SOURCE_FILE ("configuration.galgas", 385)) ;
      }
      break ;
    }
    enumerator_13627.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                       extensionMethod_configurationDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInContext (defineExtensionMethod_configurationDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@configurationDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_configurationDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                          const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_configurationDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                         extensionMethod_configurationDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_configurationDeclarationAST_semanticAnalysis (defineExtensionMethod_configurationDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@typeArrayDeclarationAST location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeArrayDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                 extensionGetter_typeArrayDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclarationAST_location (defineExtensionGetter_typeArrayDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typeArrayDeclarationAST addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                  GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                  GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  const GALGAS_typeArrayDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                     extensionMethod_typeArrayDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_addExtension (defineExtensionMethod_typeArrayDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@typeArrayDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  GALGAS_lstring var_newTypeName_2951 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 61)) ;
  GALGAS_lstring var_elementTypeName_3028 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
  {
  const GALGAS_typeArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2951, temp_0, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 63)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2951, var_elementTypeName_3028 COMMA_SOURCE_FILE ("type-array.galgas", 64)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_newTypeName_2951, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 65)) ;
  GALGAS_lstring var_rootNode_3273 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 66)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 66)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2951, var_rootNode_3273 COMMA_SOURCE_FILE ("type-array.galgas", 67)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                               extensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@typeArrayDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("arraytype $").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 73)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                                           extensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typeArrayDeclarationAST enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeArrayDeclarationAST * object = (const cPtr_typeArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeArrayDeclarationAST) ;
  GALGAS_PLMType var_kind_4487 ;
  GALGAS_uint joker_4493_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_kind_4487, joker_4493_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 87)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_kind_4487, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 92)).operator_not (SOURCE_FILE ("type-array.galgas", 92)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 93)), GALGAS_string ("an array element should be copyable"), fixItArray1  COMMA_SOURCE_FILE ("type-array.galgas", 93)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_instanciable (var_kind_4487, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 95)).operator_not (SOURCE_FILE ("type-array.galgas", 95)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 96)), GALGAS_string ("an array element should be instanciable"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 96)) ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_4788 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 99)) ;
  GALGAS_allocaList var_allocaList_4818 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 100)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_4864 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-array.galgas", 101)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_4981 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_4981, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 102)) ;
  }
  GALGAS_staticStringMap joker_5281 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 114)) ;
  GALGAS_objectIR var_sizeExpressionIR_5434 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), GALGAS_PLMType::constructor_void (SOURCE_FILE ("type-array.galgas", 107)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mArrayTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 109)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 109)), GALGAS_PLMType::constructor_void (SOURCE_FILE ("type-array.galgas", 110)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-array.galgas", 112)), var_temporaries_4864, joker_5281, var_universalMap_4981, var_allocaList_4818, var_initInstructionGenerationList_4788, var_sizeExpressionIR_5434, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 106)) ;
  const enumGalgasBool test_4 = var_sizeExpressionIR_5434.getter_isLiteralInteger (SOURCE_FILE ("type-array.galgas", 120)).operator_not (SOURCE_FILE ("type-array.galgas", 120)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray5  COMMA_SOURCE_FILE ("type-array.galgas", 121)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_arraySize_5631 ;
    GALGAS_PLMType joker_5608_1 ; // Joker input parameter
    var_sizeExpressionIR_5434.method_literalInteger (joker_5608_1, var_arraySize_5631, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 123)) ;
    GALGAS_PLMType var_elementType_5652 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 124)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 124)) ;
    GALGAS_constantMap var_classConstantMap_5858 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 126)) ;
    {
    var_classConstantMap_5858.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 127))  COMMA_SOURCE_FILE ("type-array.galgas", 127)), var_arraySize_5631, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 127)).getter_nowhere (SOURCE_FILE ("type-array.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 127)) ;
    }
    GALGAS_propertyMap var_arrayTypePropertyMap_6086 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 129)) ;
    {
    var_arrayTypePropertyMap_6086.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 131)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("type-array.galgas", 133)), var_arraySize_5631  COMMA_SOURCE_FILE ("type-array.galgas", 133))  COMMA_SOURCE_FILE ("type-array.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 130)) ;
    }
    GALGAS_constructorMap var_constructorMap_6412 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 136)) ;
    {
    var_constructorMap_6412.setter_insertKey (GALGAS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-array.galgas", 137)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 137)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_5652, var_arraySize_5631.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 137))  COMMA_SOURCE_FILE ("type-array.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 137)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mArrayTypeName, GALGAS_PLMType::constructor_arrayType (object->mProperty_mArrayTypeName, var_arrayTypePropertyMap_6086, var_elementType_5652, var_arraySize_5631, var_classConstantMap_5858, GALGAS_PLMTypeFlags::constructor_instanciable (SOURCE_FILE ("type-array.galgas", 147)).operator_or (GALGAS_PLMTypeFlags::constructor_copyable (SOURCE_FILE ("type-array.galgas", 147)) COMMA_SOURCE_FILE ("type-array.galgas", 147)), object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 148)), var_constructorMap_6412  COMMA_SOURCE_FILE ("type-array.galgas", 141)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-array.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 139)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                       extensionMethod_typeArrayDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_enterInContext (defineExtensionMethod_typeArrayDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@typeArrayDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeArrayDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                      const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeArrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_typeArrayDeclarationAST.mSlotID,
                                         extensionMethod_typeArrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeArrayDeclarationAST_semanticAnalysis (defineExtensionMethod_typeArrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@booleanDeclarationAST location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_booleanDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  result_outLocation = object->mProperty_mBooleanTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                 extensionGetter_booleanDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclarationAST_location (defineExtensionGetter_booleanDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@booleanDeclarationAST addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  const GALGAS_booleanDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                     extensionMethod_booleanDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_addExtension (defineExtensionMethod_booleanDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@booleanDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  GALGAS_lstring var_boolTypeName_1821 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 34)) ;
  {
  const GALGAS_booleanDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_boolTypeName_1821, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 35)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                               extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@booleanDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (function_llvmRegularTypeMangledNameFromName (object->mProperty_mBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 41)).getter_string (SOURCE_FILE ("type-bool.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 41)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                                           extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@booleanDeclarationAST enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mBooleanTypeName, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-bool.galgas", 55)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-bool.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 55)) ;
  }
  {
  routine_enterBooleanOperators (object->mProperty_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 57)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                       extensionMethod_booleanDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInContext (defineExtensionMethod_booleanDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBooleanOperators (GALGAS_lstring inArgument_inBooleanTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_selfType_3440 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inArgument_inBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 69)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 69)) ;
  GALGAS_lstring var_boolBoolOp_3539 = function_combineTypeNamesForInfixOperator (inArgument_inBooleanTypeName.getter_string (HERE), inArgument_inBooleanTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 70)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_3539, var_selfType_3440, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 74))  COMMA_SOURCE_FILE ("type-bool.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_boolBoolOp_3539, var_selfType_3440, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-bool.galgas", 79))  COMMA_SOURCE_FILE ("type-bool.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 76)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_3539, var_selfType_3440, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 84))  COMMA_SOURCE_FILE ("type-bool.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 81)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_3539, var_selfType_3440, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 89))  COMMA_SOURCE_FILE ("type-bool.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 86)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_boolBoolOp_3539, var_selfType_3440, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-bool.galgas", 94))  COMMA_SOURCE_FILE ("type-bool.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 91)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_boolBoolOp_3539, var_selfType_3440, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-bool.galgas", 99))  COMMA_SOURCE_FILE ("type-bool.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 96)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_3539, var_selfType_3440, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 104))  COMMA_SOURCE_FILE ("type-bool.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 101)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_boolBoolOp_3539, var_selfType_3440, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-bool.galgas", 109))  COMMA_SOURCE_FILE ("type-bool.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 106)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_boolBoolOp_3539, var_selfType_3440, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-bool.galgas", 114))  COMMA_SOURCE_FILE ("type-bool.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 111)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (inArgument_inBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 116)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@booleanDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                         extensionMethod_booleanDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclarationAST_semanticAnalysis (defineExtensionMethod_booleanDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@enumerationDeclaration addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                 GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                 GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                 GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  const GALGAS_enumerationDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                     extensionMethod_enumerationDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_addExtension (defineExtensionMethod_enumerationDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@enumerationDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_lstring var_typeName_2859 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)) ;
  {
  const GALGAS_enumerationDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_2859, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2859, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) ;
  }
  GALGAS_bigint var_maxValue_3127 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 69)) ;
  cEnumerator_enumerationConstantList enumerator_3165 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_3165.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_maxValue_3127.objectCompare (enumerator_3165.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_maxValue_3127 = enumerator_3165.current_mConstantValue (HERE) ;
    }
    enumerator_3165.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_3265 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)).isValid ()) {
    uint32_t variant_3276 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)).uintValue () ;
    bool loop_3276 = true ;
    while (loop_3276) {
      loop_3276 = GALGAS_bool (kIsStrictSup, var_maxValue_3127.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 76)))).isValid () ;
      if (loop_3276) {
        loop_3276 = GALGAS_bool (kIsStrictSup, var_maxValue_3127.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 76)))).boolValue () ;
      }
      if (loop_3276 && (0 == variant_3276)) {
        loop_3276 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 76)) ;
      }
      if (loop_3276) {
        variant_3276 -- ;
        var_representationBitCount_3265.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 77)) ;
        var_maxValue_3127 = var_maxValue_3127.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
      }
    }
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2859, function_llvmRegularTypeMangledNameFromName (GALGAS_string ("uint").add_operation (var_representationBitCount_3265.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 80)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                               extensionMethod_enumerationDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@enumerationDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_enumerationDeclaration_location (const cPtr_abstractDeclarationAST * inObject,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                 extensionGetter_enumerationDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_location (defineExtensionGetter_enumerationDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@enumerationDeclaration keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outRepresentation = GALGAS_string ("enum $").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 92)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                                           extensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@enumerationDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                   const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                   GALGAS_semanticContext & ioArgument_ioContext,
                                                                   GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_constantMap var_enumConstantMap_5089 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
  GALGAS_bigint var_maxValue_5113 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 116)) ;
  cEnumerator_enumerationConstantList enumerator_5154 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_5154.hasCurrentObject ()) {
    {
    var_enumConstantMap_5089.setter_insertKey (enumerator_5154.current_mConstantName (HERE), enumerator_5154.current_mConstantValue (HERE), object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_5113.objectCompare (enumerator_5154.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_maxValue_5113 = enumerator_5154.current_mConstantValue (HERE) ;
    }
    enumerator_5154.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_5357 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 125)).isValid ()) {
    uint32_t variant_5368 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 125)).uintValue () ;
    bool loop_5368 = true ;
    while (loop_5368) {
      loop_5368 = GALGAS_bool (kIsStrictSup, var_maxValue_5113.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 125)))).isValid () ;
      if (loop_5368) {
        loop_5368 = GALGAS_bool (kIsStrictSup, var_maxValue_5113.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 125)))).boolValue () ;
      }
      if (loop_5368 && (0 == variant_5368)) {
        loop_5368 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 125)) ;
      }
      if (loop_5368) {
        variant_5368 -- ;
        var_representationBitCount_5357.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)) ;
        var_maxValue_5113 = var_maxValue_5113.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_integerType_5512 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_5357.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 130))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)) ;
  GALGAS_propertyMap var_propertyMap_5654 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 131)) ;
  GALGAS_lstring var_accessorMangledName_5685 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 132))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 132)), GALGAS_effectiveArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 132)) ;
  GALGAS_routineDescriptor var_routineDescriptor_5782 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 136))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)), GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 137)), var_integerType_5512, GALGAS_bool (true), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 133)) ;
  {
  var_propertyMap_5654.setter_insertKey (var_accessorMangledName_5685, GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_routineDescriptor_5782  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 142)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, GALGAS_PLMType::constructor_enumeration (var_enumConstantMap_5089, var_propertyMap_5654, var_representationBitCount_5357, object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 154))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 150)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-enumeration-declaration.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 148)) ;
  }
  {
  routine_enterEnumerationComparisonOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 159)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumerationDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                       extensionMethod_enumerationDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInContext (defineExtensionMethod_enumerationDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterEnumerationComparisonOperators'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationComparisonOperators (GALGAS_lstring inArgument_inTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_6989 = function_combineTypeNamesForInfixOperator (inArgument_inTypeName.getter_string (HERE), inArgument_inTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 168)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_6989, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-enumeration-declaration.galgas", 171)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 172))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 169)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_key_6989, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-enumeration-declaration.galgas", 176)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-enumeration-declaration.galgas", 177))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 174)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_6989, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-enumeration-declaration.galgas", 181)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 182))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 179)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_6989, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-enumeration-declaration.galgas", 186)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 187))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 184)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_key_6989, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-enumeration-declaration.galgas", 191)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-enumeration-declaration.galgas", 192))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 189)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_key_6989, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-enumeration-declaration.galgas", 196)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-enumeration-declaration.galgas", 197))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 194)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumerationDeclaration_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                     const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_bigint var_maxValue_8479 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)) ;
  cEnumerator_enumerationConstantList enumerator_8517 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_8517.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_8479.objectCompare (enumerator_8517.current_mConstantValue (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_maxValue_8479 = enumerator_8517.current_mConstantValue (HERE) ;
    }
    enumerator_8517.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_8655 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 218)).isValid ()) {
    uint32_t variant_8666 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 218)).uintValue () ;
    bool loop_8666 = true ;
    while (loop_8666) {
      loop_8666 = GALGAS_bool (kIsStrictSup, var_maxValue_8479.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 218)))).isValid () ;
      if (loop_8666) {
        loop_8666 = GALGAS_bool (kIsStrictSup, var_maxValue_8479.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 218)))).boolValue () ;
      }
      if (loop_8666 && (0 == variant_8666)) {
        loop_8666 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 218)) ;
      }
      if (loop_8666) {
        variant_8666 -- ;
        var_representationBitCount_8655.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 219)) ;
        var_maxValue_8479 = var_maxValue_8479.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 220)) ;
      }
    }
  }
  GALGAS_lstring var_routineMangledName_8819 = function_routineMangledNameFromAST (GALGAS_string ("$").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 224)), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 225))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 225)), GALGAS_routineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 223)) ;
  const enumGalgasBool test_1 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_8819.getter_string (HERE) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 229)).operator_not (SOURCE_FILE ("type-enumeration-declaration.galgas", 229)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_8819, var_routineMangledName_8819, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 230)) ;
    }
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mUIntFunctionForEnumerationList.addAssign_operation (object->mProperty_mEnumerationName, var_representationBitCount_8655  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 235)) ;
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
//                           Overriding extension getter '@structureDeclarationAST location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_structureDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outLocation = object->mProperty_mStructureName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                 extensionGetter_structureDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclarationAST_location (defineExtensionGetter_structureDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@structureDeclarationAST addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_extensionDeclarationListAST & ioArgument_ioExtensionDeclarationListAST,
                                                                  GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                  GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  const GALGAS_structureDeclarationAST temp_0 = object ;
  GALGAS_structureDeclarationAST var_newDeclaration_5314 = temp_0 ;
  GALGAS_extensionDeclarationListAST var_currentExtensionDeclarationListAST_5362 = ioArgument_ioExtensionDeclarationListAST ;
  ioArgument_ioExtensionDeclarationListAST = GALGAS_extensionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 144)) ;
  cEnumerator_extensionDeclarationListAST enumerator_5519 (var_currentExtensionDeclarationListAST_5362, kENUMERATION_UP) ;
  while (enumerator_5519.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mStructureName.getter_string (HERE).objectCompare (enumerator_5519.current_mTypeName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_newDeclaration_5314 = GALGAS_structureDeclarationAST::constructor_new (var_newDeclaration_5314.getter_mStructureName (SOURCE_FILE ("type-structure-declaration.galgas", 148)), var_newDeclaration_5314.getter_mAttributeListAST (SOURCE_FILE ("type-structure-declaration.galgas", 149)), var_newDeclaration_5314.getter_mStructurePropertyListAST (SOURCE_FILE ("type-structure-declaration.galgas", 150)).add_operation (enumerator_5519.current_mPropertyList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 150)), var_newDeclaration_5314.getter_mFunctionDeclarationListAST (SOURCE_FILE ("type-structure-declaration.galgas", 151)).add_operation (enumerator_5519.current_mProcedureDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 151)), var_newDeclaration_5314.getter_mSystemRoutineListAST (SOURCE_FILE ("type-structure-declaration.galgas", 152)).add_operation (enumerator_5519.current_mSVCListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 152)), var_newDeclaration_5314.getter_mGuardListAST (SOURCE_FILE ("type-structure-declaration.galgas", 153)).add_operation (enumerator_5519.current_mGuardListAST (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 153))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioExtensionDeclarationListAST.addAssign_operation (enumerator_5519.current_mTypeName (HERE), enumerator_5519.current_mProcedureDeclarationListAST (HERE), enumerator_5519.current_mPropertyList (HERE), enumerator_5519.current_mSVCListAST (HERE), enumerator_5519.current_mGuardListAST (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 156)) ;
    }
    enumerator_5519.gotoNextObject () ;
  }
  outArgument_outNewDeclaration = var_newDeclaration_5314 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                     extensionMethod_structureDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_addExtension (defineExtensionMethod_structureDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_lstring var_structureTypeName_6582 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 167)) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_structureTypeName_6582, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 169)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_6817 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_6817.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6817.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_6878 = function_llvmRegularTypeMangledNameFromName (enumerator_6817.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_structureTypeName_6582, var_typeName_6878 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      }
    }
    switch (enumerator_6817.current_mInitialisation (HERE).enumValue ()) {
    case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
      {
      }
      break ;
    case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_7173 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_6817.current_mInitialisation (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_7173->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), var_structureTypeName_6582, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
      }
      break ;
    }
    enumerator_6817.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_7256 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_7256.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentList enumerator_7329 (enumerator_7256.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_7329.hasCurrentObject ()) {
      GALGAS_lstring var_typeName_7351 = function_llvmRegularTypeMangledNameFromName (enumerator_7329.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 185)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_7351 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 186)) ;
      }
      enumerator_7329.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_7256.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_typeName_7527 = function_llvmRegularTypeMangledNameFromName (enumerator_7256.current_mFunctionReturnTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 189)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_7527 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 190)) ;
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_7256.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 192)) ;
    enumerator_7256.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 195)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 196)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                               extensionMethod_structureDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("struct $").add_operation (object->mProperty_mStructureName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 202)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                           extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclarationAST enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_propertyList var_propertyList_10186 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 257)) ;
  GALGAS_propertyMap var_propertyMap_10218 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 258)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_10266 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 259)) ;
  GALGAS_constructorSignature var_constructorSignature_10316 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 260)) ;
  GALGAS_string var_constructorKey_10346 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_10370 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_10421 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_10421.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_10421.current (HERE), object->mProperty_mStructureName, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_propertyList_10186, var_propertyMap_10218, var_sortedOperandIRList_10266, var_constructorSignature_10316, var_constructorKey_10346, var_canBeCopied_10370, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 264)) ;
    enumerator_10421.gotoNextObject () ;
  }
  var_constructorKey_10346.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 276)) ;
  GALGAS_constructorMap var_constructorMap_10818 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 278)) ;
  {
  var_constructorMap_10818.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_10346, object->mProperty_mStructureName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 280)), var_constructorSignature_10316, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_10266  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 279)) ;
  }
  GALGAS_PLMTypeFlags var_flags_11068 = GALGAS_PLMTypeFlags::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 285)) ;
  cEnumerator_lstringlist enumerator_11128 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_11128.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_11128.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_flags_11068.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 288)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_11128.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 289)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 289)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = var_canBeCopied_10370.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 290)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mStructureName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 291)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 291)) ;
        }else if (kBoolFalse == test_3) {
          var_flags_11068 = var_flags_11068.operator_or (GALGAS_PLMTypeFlags::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 293)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 293)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_11128.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 296)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 296)) ;
    }
    enumerator_11128.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_11633 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_11633.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_11682 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 302)) ;
    cEnumerator_lstringlist enumerator_11740 (enumerator_11633.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_11740.hasCurrentObject ()) {
      var_attributeSet_11682.addAssign_operation (enumerator_11740.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 304)) ;
      enumerator_11740.gotoNextObject () ;
    }
    GALGAS_bool var_exportedFunction_11823 = var_attributeSet_11682.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 306)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 306)) ;
    GALGAS_bool var_canMutateProperties_11897 = var_attributeSet_11682.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 307)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 307)) ;
    GALGAS_bool var_canAccessProperties_11971 = GALGAS_bool (kIsNotEqual, enumerator_11633.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("type-structure-declaration.galgas", 308)))) ;
    GALGAS_routineTypedSignature var_signature_12114 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_11633.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_signature_12114, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 310)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_12255 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_11633.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnTypeProxy_12255 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 312)) ;
    }
    GALGAS_lstring var_routineMangledName_12311 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_11633.current (HERE).getter_mFunctionName (HERE), enumerator_11633.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 314)) ;
    GALGAS_routineDescriptor var_descriptor_12494 = GALGAS_routineDescriptor::constructor_new (enumerator_11633.current (HERE).getter_mPublicFunction (HERE), var_exportedFunction_11823, GALGAS_routineKind::constructor_function (enumerator_11633.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 323)), var_signature_12114, var_returnTypeProxy_12255, var_canMutateProperties_11897, var_canAccessProperties_11971  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 320)) ;
    {
    var_propertyMap_10218.setter_insertKey (var_routineMangledName_12311, enumerator_11633.current (HERE).getter_mPublicFunction (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_12494  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 330)) ;
    }
    enumerator_11633.gotoNextObject () ;
  }
  cEnumerator_systemRoutineDeclarationListAST enumerator_13000 (object->mProperty_mSystemRoutineListAST, kENUMERATION_UP) ;
  while (enumerator_13000.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_13049 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 335)) ;
    cEnumerator_lstringlist enumerator_13097 (enumerator_13000.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13097.hasCurrentObject ()) {
      var_attributeSet_13049.addAssign_operation (enumerator_13097.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 337)) ;
      enumerator_13097.gotoNextObject () ;
    }
    GALGAS_bool var_exportedRoutine_13179 = var_attributeSet_13049.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339)) ;
    GALGAS_bool var_canMutateProperties_13253 = var_attributeSet_13049.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 340)) ;
    GALGAS_lstring var_routineMangledName_13354 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_13000.current (HERE).getter_mName (HERE), enumerator_13000.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 342)) ;
    GALGAS_routineTypedSignature var_signature_13575 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_13000.current (HERE).getter_mFormalArgumentList (HERE), var_signature_13575, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_13706 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_13000.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_13706 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 350)) ;
    }
    GALGAS_bool var_mutating_13742 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13795 (enumerator_13000.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13795.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_13795.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 354)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        var_mutating_13742 = GALGAS_bool (true) ;
      }
      enumerator_13795.gotoNextObject () ;
    }
    GALGAS_routineDescriptor var_descriptor_13944 = GALGAS_routineDescriptor::constructor_new (enumerator_13000.current (HERE).getter_mPublic (HERE), var_exportedRoutine_13179, enumerator_13000.current (HERE).getter_mRoutineKind (HERE), var_signature_13575, var_returnTypeProxy_13706, var_canMutateProperties_13253, GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)) ;
    {
    var_propertyMap_10218.setter_insertKey (var_routineMangledName_13354, enumerator_13000.current (HERE).getter_mPublic (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_13944  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 369)) ;
    }
    enumerator_13000.gotoNextObject () ;
  }
  GALGAS_guardMapForContext var_guardMap_14395 = GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 372)) ;
  cEnumerator_guardDeclarationListAST enumerator_14429 (object->mProperty_mGuardListAST, kENUMERATION_UP) ;
  while (enumerator_14429.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_14483 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_14429.current (HERE).getter_mGuardName (HERE), enumerator_14429.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 375)) ;
    GALGAS_routineTypedSignature var_signature_14699 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_14429.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_14699, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 381)) ;
    }
    {
    var_guardMap_14395.setter_insertKey (var_guardMangledName_14483, enumerator_14429.current (HERE).getter_mIsPublic (HERE), var_signature_14699, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 383)) ;
    }
    enumerator_14429.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mStructureName, GALGAS_PLMType::constructor_structure (object->mProperty_mStructureName, var_propertyMap_10218, var_propertyList_10186, var_flags_11068, var_guardMap_14395, var_constructorMap_10818  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 392)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 390)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                       extensionMethod_structureDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInContext (defineExtensionMethod_structureDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@structureDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_PLMType var_structureType_18878 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mStructureName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)) ;
  const GALGAS_structureDeclarationAST temp_0 = object ;
  callExtensionMethod_functionSemanticAnalysis ((const cPtr_structureDeclarationAST *) temp_0.ptr (), var_structureType_18878, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 502)) ;
  extensionMethod_systemRoutineSemanticAnalysis (object->mProperty_mSystemRoutineListAST, var_structureType_18878, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 509)) ;
  extensionMethod_guardSemanticAnalysis (object->mProperty_mGuardListAST, var_structureType_18878, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 516)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                         extensionMethod_structureDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_semanticAnalysis (defineExtensionMethod_structureDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@typeAliasDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeAliasDeclaration_location (const cPtr_abstractDeclarationAST * inObject,
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

static void extensionMethod_typeAliasDeclaration_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                               GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
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

static void extensionMethod_typeAliasDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_lstring var_newTypeName_2712 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 55)) ;
  GALGAS_lstring var_aliasedTypeName_2787 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
  {
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2712, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 57)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2712, var_aliasedTypeName_2787 COMMA_SOURCE_FILE ("type-alias.galgas", 58)) ;
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

static GALGAS_string extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outRepresentation = GALGAS_string ("typealias $").add_operation (object->mProperty_mNewTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 64)) ;
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
//                         Overriding extension method '@typeAliasDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_PLMType var_kind_4005 ;
  GALGAS_uint joker_4007_1 ; // Joker input parameter
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAliasedTypeName, var_kind_4005, joker_4007_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 78)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mNewTypeName, var_kind_4005, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-alias.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 80)) ;
  }
  GALGAS_lstring var_newNewInfixKey_4182 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 83)) ;
  GALGAS_lstring var_aliasAliasInfixKey_4286 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 84)) ;
  GALGAS_lstring var_newLiteralIntegerInfixKey_4405 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 85)) ;
  GALGAS_lstring var_aliasLiteralIntegerInfixKey_4523 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 86)) ;
  GALGAS_lstring var_literalIntegerNewInfixKey_4643 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 87)), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 87)) ;
  GALGAS_lstring var_literalIntegerAliasInfixKey_4760 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 88)), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 88)) ;
  GALGAS_PLMType var_newType_4861 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mNewTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 89)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 89)) ;
  GALGAS_PLMType var_oldType_4952 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 90)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 90)) ;
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mEqualOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 91)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mNonEqualOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 102)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictInfOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 113)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mInfEqualOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 124)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictSupOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 135)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSupEqualOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 146)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAndOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 157)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mOrOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 168)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mXorOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 179)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mBooleanXorOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 190)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 201)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 212)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 223)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 234)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 245)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 256)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 267)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 278)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 289)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModNoOvfOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 300)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mLeftShiftOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 311)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mRightShiftOperatorMap, var_newNewInfixKey_4182, var_aliasAliasInfixKey_4286, var_newLiteralIntegerInfixKey_4405, var_aliasLiteralIntegerInfixKey_4523, var_literalIntegerNewInfixKey_4643, var_literalIntegerAliasInfixKey_4760, var_newType_4861, var_oldType_4952, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 322)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 333)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mNotOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 334)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 335)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedTypeName.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 345)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 346)) ;
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 350)) ;
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
                                      const GALGAS_PLMType constinArgument_inNewType,
                                      const GALGAS_PLMType constinArgument_inOldType,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedAliasedInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 370)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_resultType_12365 ;
    GALGAS_infixOperatorDescription var_operation_12412 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedAliasedInfixKey, var_resultType_12365, var_operation_12412, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 371)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_12365.objectCompare (constinArgument_inOldType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_resultType_12365 = constinArgument_inNewType ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewNewInfixKey, var_resultType_12365, var_operation_12412, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 379)) ;
    }
  }
  const enumGalgasBool test_2 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedLiteralIntegerInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 385)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_PLMType var_resultType_12776 ;
    GALGAS_infixOperatorDescription var_operation_12823 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedLiteralIntegerInfixKey, var_resultType_12776, var_operation_12823, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 386)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_resultType_12776.objectCompare (constinArgument_inOldType)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_resultType_12776 = constinArgument_inNewType ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewLiteralIntegerInfixKey, var_resultType_12776, var_operation_12823, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 394)) ;
    }
  }
  const enumGalgasBool test_4 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inLiteralIntegerAliasInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 400)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_PLMType var_resultType_13194 ;
    GALGAS_infixOperatorDescription var_operation_13241 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inLiteralIntegerAliasInfixKey, var_resultType_13194, var_operation_13241, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 401)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_resultType_13194.objectCompare (constinArgument_inOldType)).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_resultType_13194 = constinArgument_inNewType ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inLiteralIntegerNewInfixKey, var_resultType_13194, var_operation_13241, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 409)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typeAliasDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
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
//                            Overriding extension getter '@integerDeclarationAST location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_integerDeclarationAST_location (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                 extensionGetter_integerDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclarationAST_location (defineExtensionGetter_integerDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@integerDeclarationAST addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                     extensionMethod_integerDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_addExtension (defineExtensionMethod_integerDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_2056 = function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_2056, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_2056, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 43)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 43)) COMMA_SOURCE_FILE ("type-integer.galgas", 43)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                               extensionMethod_integerDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)).getter_string (SOURCE_FILE ("type-integer.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 49)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                           extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@integerDeclarationAST enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_3326 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 62)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 62)) ;
  GALGAS_bigint var_min_3389 ;
  GALGAS_bigint var_max_3403 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_min_3389 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 67)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) COMMA_SOURCE_FILE ("type-integer.galgas", 67)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) ;
    var_max_3403 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 68)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 68)) COMMA_SOURCE_FILE ("type-integer.galgas", 68)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 68)) ;
  }else if (kBoolFalse == test_1) {
    var_min_3389 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)) ;
    var_max_3403 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 71)).left_shift_operation (object->mProperty_mSize COMMA_SOURCE_FILE ("type-integer.galgas", 71)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 71)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3326, GALGAS_PLMType::constructor_integer (var_min_3389, var_max_3403, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 76)), object->mProperty_mSize, var_integerTypeName_3326.getter_string (SOURCE_FILE ("type-integer.galgas", 76))  COMMA_SOURCE_FILE ("type-integer.galgas", 76)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-integer.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 74)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_3326, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 80)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_3326, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 86)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_3326, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 92)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                       extensionMethod_integerDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInContext (defineExtensionMethod_integerDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@integerDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                         extensionMethod_integerDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclarationAST_semanticAnalysis (defineExtensionMethod_integerDeclarationAST_semanticAnalysis, NULL) ;

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
  GALGAS_PLMType var_selfType_5569 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 121)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 121)) ;
  GALGAS_lstring var_intIntOp_5697 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 123)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_5697, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 126)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 127))  COMMA_SOURCE_FILE ("type-integer.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 124)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_5697, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 131)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 132))  COMMA_SOURCE_FILE ("type-integer.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 129)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 137)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 137)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_5697, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 136)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 134)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 142)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 142)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_5697, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 141)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 139)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 147)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 147)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_5697, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 146)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 144)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 152)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 152)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_5697, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 151)), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 149)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 155)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 159))  COMMA_SOURCE_FILE ("type-integer.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 164))  COMMA_SOURCE_FILE ("type-integer.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 161)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 169))  COMMA_SOURCE_FILE ("type-integer.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 166)) ;
    }
    {
    ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 171)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 177)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 185)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 185)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 182)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 190))  COMMA_SOURCE_FILE ("type-integer.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 187)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 195)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 195)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 200))  COMMA_SOURCE_FILE ("type-integer.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 197)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 205)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 205)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 202)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 210))  COMMA_SOURCE_FILE ("type-integer.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 207)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 215)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 215)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 212)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 220)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 220)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 217)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 225)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 225)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 222)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 230)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 230)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 227)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 236))  COMMA_SOURCE_FILE ("type-integer.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 233)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 241)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 241)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_5697, var_selfType_5569, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 238)) ;
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
                                                                                            const GALGAS_PLMType constinArgument_inResultType,
                                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  GALGAS_bool test_0 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 262)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 262)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left_10287 ;
    GALGAS_PLMType joker_10261_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_10261_1, var_left_10287, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 263)) ;
    GALGAS_bigint var_right_10352 ;
    GALGAS_PLMType joker_10325_1 ; // Joker input parameter
    constinArgument_inRightOperand.method_literalInteger (joker_10325_1, var_right_10352, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 264)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue_10442 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_10287, var_right_10352, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 266)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_10442  COMMA_SOURCE_FILE ("type-integer.galgas", 267)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 270)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 274)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
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
  GALGAS_PLMType var_selfType_11609 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 295)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 295)) ;
  GALGAS_lstring var_intLiteralOp_11741 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 297)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_11741, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 300)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 301))  COMMA_SOURCE_FILE ("type-integer.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 298)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_11741, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 305)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 306))  COMMA_SOURCE_FILE ("type-integer.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 303)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 311)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 311)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_11741, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 310)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 308)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 316)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 316)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_11741, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 315)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 313)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 321)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 321)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_11741, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 320)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 318)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 326)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 326)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_11741, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 325)), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 329)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 333))  COMMA_SOURCE_FILE ("type-integer.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 330)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 338))  COMMA_SOURCE_FILE ("type-integer.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 335)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 343))  COMMA_SOURCE_FILE ("type-integer.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 350)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 350)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 347)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 355))  COMMA_SOURCE_FILE ("type-integer.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 352)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 360)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 360)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 357)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 365))  COMMA_SOURCE_FILE ("type-integer.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 362)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 370)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 370)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 367)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 375))  COMMA_SOURCE_FILE ("type-integer.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 372)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 380)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 380)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 377)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 385)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 385)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 390)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 390)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 387)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 395)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 395)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 392)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 401))  COMMA_SOURCE_FILE ("type-integer.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 398)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 406)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 406)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_11741, var_selfType_11609, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
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
                                                                                                 const GALGAS_PLMType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_16174 ;
  GALGAS_PLMType joker_16140_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_16140_1, var_literalValue_16174, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 428)) ;
  GALGAS_bigint var_min_16228 ;
  GALGAS_bigint var_max_16249 ;
  GALGAS_bool joker_16251_3 ; // Joker input parameter
  GALGAS_uint joker_16251_2 ; // Joker input parameter
  GALGAS_string joker_16251_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 429)).method_integer (var_min_16228, var_max_16249, joker_16251_3, joker_16251_2, joker_16251_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 429)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_16174.objectCompare (var_min_16228)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_16228.getter_string (SOURCE_FILE ("type-integer.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 431)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 431)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 431)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_16174.objectCompare (var_max_16249)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_16249.getter_string (SOURCE_FILE ("type-integer.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 433)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 435)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 436)) ;
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
  GALGAS_PLMType var_selfType_17539 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 459)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 459)) ;
  GALGAS_lstring var_intLiteralOp_17671 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 461)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 461)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_17671, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 464)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 465))  COMMA_SOURCE_FILE ("type-integer.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 462)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_17671, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 469)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 470))  COMMA_SOURCE_FILE ("type-integer.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 467)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 475)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 475)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_17671, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 474)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 472)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 480)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 480)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_17671, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 479)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 477)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 485)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 485)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_17671, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 484)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 482)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 490)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 490)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_17671, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-integer.galgas", 489)), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 487)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 493)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 497))  COMMA_SOURCE_FILE ("type-integer.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 494)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 502))  COMMA_SOURCE_FILE ("type-integer.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 499)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 507))  COMMA_SOURCE_FILE ("type-integer.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 504)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 514)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 514)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 511)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 519))  COMMA_SOURCE_FILE ("type-integer.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 516)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 524)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 524)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 521)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 529))  COMMA_SOURCE_FILE ("type-integer.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 526)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 534)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 534)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 531)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 539))  COMMA_SOURCE_FILE ("type-integer.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 536)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 544)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 544)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 541)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 549)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 549)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 546)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 554)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 554)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 551)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 559)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 559)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 556)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 565))  COMMA_SOURCE_FILE ("type-integer.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 562)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 570)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 570)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_17671, var_selfType_17539, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 567)) ;
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
                                                                                                 const GALGAS_PLMType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_22078 ;
  GALGAS_PLMType joker_22044_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_22044_1, var_literalValue_22078, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 592)) ;
  GALGAS_bigint var_min_22133 ;
  GALGAS_bigint var_max_22154 ;
  GALGAS_bool joker_22156_3 ; // Joker input parameter
  GALGAS_uint joker_22156_2 ; // Joker input parameter
  GALGAS_string joker_22156_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 593)).method_integer (var_min_22133, var_max_22154, joker_22156_3, joker_22156_2, joker_22156_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 593)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_22078.objectCompare (var_min_22133)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_22133.getter_string (SOURCE_FILE ("type-integer.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 595)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 595)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 595)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_22078.objectCompare (var_max_22154)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_22154.getter_string (SOURCE_FILE ("type-integer.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 597)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 597)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 597)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 599)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)) ;
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
//                        Overriding extension getter '@literalIntegerDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalIntegerDeclarationAST_location (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 11)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalIntegerDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                 extensionGetter_literalIntegerDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclarationAST_location (defineExtensionGetter_literalIntegerDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@literalIntegerDeclarationAST addExtension'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                       GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                       GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclarationAST * object = (const cPtr_literalIntegerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclarationAST) ;
  const GALGAS_literalIntegerDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                     extensionMethod_literalIntegerDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_addExtension (defineExtensionMethod_literalIntegerDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@literalIntegerDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclarationAST * object = (const cPtr_literalIntegerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclarationAST) ;
  GALGAS_lstring var_staticIntegerTypeName_1813 = function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)) ;
  {
  const GALGAS_literalIntegerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName_1813, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName_1813, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                               extensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalIntegerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@literalIntegerDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 41)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                                           extensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalIntegerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@literalIntegerDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_3058 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 54)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 54)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3058, GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("type-literal-integer.galgas", 58)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-literal-integer.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 56)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 62)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                       extensionMethod_literalIntegerDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_enterInContext (defineExtensionMethod_literalIntegerDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterLiteralIntegerOperators (GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_literalIntegerTypeName_3556 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 72)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 72)) ;
  GALGAS_lstring var_intIntOp_3629 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_3556.getter_string (HERE), var_literalIntegerTypeName_3556.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 74)) ;
  GALGAS_PLMType var_selfType_3743 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_3556, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 75)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3629, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-literal-integer.galgas", 80)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 81))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 78)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3629, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-literal-integer.galgas", 85)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 86))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3629, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-literal-integer.galgas", 90)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 91))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 88)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3629, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-literal-integer.galgas", 95)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 96))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 93)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3629, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-literal-integer.galgas", 100)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 101))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 98)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3629, GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("type-literal-integer.galgas", 105)), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 106))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 103)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 112))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 117))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 122))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 119)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (var_literalIntegerTypeName_3556, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 124)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (var_literalIntegerTypeName_3556, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 128)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 135))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 132)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 140))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 145))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 142)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 150))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 147)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 155))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 152)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 160))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 157)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 165))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 162)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 170))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 167)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 175))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 172)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 180))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 177)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 186))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 183)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3629, var_selfType_3743, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 191))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 188)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@literalIntegerDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                           const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                           GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalIntegerDeclarationAST.mSlotID,
                                         extensionMethod_literalIntegerDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclarationAST_semanticAnalysis (defineExtensionMethod_literalIntegerDeclarationAST_semanticAnalysis, NULL) ;

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
                                                                                                   const GALGAS_PLMType constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_8713 ;
  GALGAS_PLMType joker_8682_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_8682_1, var_leftValue_8713, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 224)) ;
  GALGAS_bigint var_rightValue_8781 ;
  GALGAS_PLMType joker_8749_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_8749_1, var_rightValue_8781, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 225)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_8795 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_8713, var_rightValue_8781, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 226)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_8795  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 227)) ;
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
//                         Overriding extension getter '@literalStringDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalStringDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  result_outLocation = object->mProperty_mLiteralStringTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalStringDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                 extensionGetter_literalStringDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_location (defineExtensionGetter_literalStringDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@literalStringDeclarationAST addExtension'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                      GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                      GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                     extensionMethod_literalStringDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_addExtension (defineExtensionMethod_literalStringDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  GALGAS_lstring var_literalStringTypeName_1866 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mLiteralStringTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 34)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1866, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1866, function_llvmRegularTypeMangledNameFromName (GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 36)) COMMA_SOURCE_FILE ("type-static-string.galgas", 36)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                               extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mProperty_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 42)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                           extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@literalStringDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                        const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mLiteralStringTypeName, GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("type-static-string.galgas", 58)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-static-string.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                       extensionMethod_literalStringDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInContext (defineExtensionMethod_literalStringDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@literalStringDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                          const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                         extensionMethod_literalStringDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_semanticAnalysis (defineExtensionMethod_literalStringDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@opaqueTypeDeclarationAST location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_opaqueTypeDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  result_outLocation = object->mProperty_mOpaqueTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_opaqueTypeDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                 extensionGetter_opaqueTypeDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_opaqueTypeDeclarationAST_location (defineExtensionGetter_opaqueTypeDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@opaqueTypeDeclarationAST addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                   GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                   GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                   GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  const GALGAS_opaqueTypeDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                     extensionMethod_opaqueTypeDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclarationAST_addExtension (defineExtensionMethod_opaqueTypeDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@opaqueTypeDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  GALGAS_lstring var_typeName_3042 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOpaqueTypeName, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 65)) ;
  {
  const GALGAS_opaqueTypeDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_3042, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_3042, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_typeName_3042, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                               extensionMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_opaqueTypeDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@opaqueTypeDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("opaqueType $").add_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 74)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                                           extensionGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_opaqueTypeDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@opaqueTypeDeclarationAST enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                     const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclarationAST * object = (const cPtr_opaqueTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclarationAST) ;
  GALGAS_PLMTypeFlags var_flags_4333 = GALGAS_PLMTypeFlags::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 88)) ;
  cEnumerator_lstringlist enumerator_4377 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4377.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4377.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("instantiable"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_flags_4333.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 91)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4377.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 92)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)) ;
      }else if (kBoolFalse == test_1) {
        var_flags_4333 = var_flags_4333.operator_or (GALGAS_PLMTypeFlags::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 94)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4377.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_flags_4333.getter_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 97)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_4377.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 98)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)) ;
        }else if (kBoolFalse == test_4) {
          var_flags_4333 = var_flags_4333.operator_or (GALGAS_PLMTypeFlags::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 100)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4377.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 103)), GALGAS_string ("only @copyable and @instantiable attributes are allowed here"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
      }
    }
    enumerator_4377.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_4962 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 107)) ;
  GALGAS_allocaList var_allocaList_4992 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 108)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5038 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-opaque-declaration.galgas", 109)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_5163 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_universalMap_5163, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 110)) ;
  }
  GALGAS_staticStringMap joker_5465 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
  GALGAS_objectIR var_sizeExpressionIR_5618 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), GALGAS_PLMType::constructor_void (SOURCE_FILE ("type-opaque-declaration.galgas", 116)), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mOpaqueTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 118)), object->mProperty_mOpaqueTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 118)), GALGAS_PLMType::constructor_void (SOURCE_FILE ("type-opaque-declaration.galgas", 119)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-opaque-declaration.galgas", 121)), var_temporaries_5038, joker_5465, var_universalMap_5163, var_allocaList_4992, var_initInstructionGenerationList_4962, var_sizeExpressionIR_5618, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 115)) ;
  GALGAS_bool test_7 = GALGAS_bool (kIsStrictSup, var_allocaList_4992.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 129)).add_operation (var_initInstructionGenerationList_4962.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_7.boolEnum ()) {
    test_7 = var_sizeExpressionIR_5618.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 129)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 129)) ;
  }
  const enumGalgasBool test_8 = test_7.boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 130)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_constructorMap var_constructorMap_5860 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 132)) ;
    {
    var_constructorMap_5860.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 133)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 133)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)) ;
    }
    GALGAS_bigint var_bitSize_5999 ;
    GALGAS_PLMType joker_5978_1 ; // Joker input parameter
    var_sizeExpressionIR_5618.method_literalInteger (joker_5978_1, var_bitSize_5999, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 134)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, GALGAS_PLMType::constructor_opaque (var_bitSize_5999, var_flags_4333, object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 137)), var_constructorMap_5860  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 137)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-opaque-declaration.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 135)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                       extensionMethod_opaqueTypeDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclarationAST_enterInContext (defineExtensionMethod_opaqueTypeDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@opaqueTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST.mSlotID,
                                         extensionMethod_opaqueTypeDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_opaqueTypeDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@controlRegisterDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  GALGAS_lstring var_nodeName_7465 = object->mProperty_mRegisterArrayList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 201)) ;
  {
  const GALGAS_controlRegisterDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_7465, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 203)) ;
  }
  GALGAS_lstring var_typeName_7614 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mRegisterTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 205)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_7465, var_typeName_7614 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
  }
  GALGAS_lstring var_rootNode_7766 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)), var_nodeName_7465.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_7465, var_rootNode_7766 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 209)) ;
  }
  cEnumerator_controlRegisterList enumerator_7969 (object->mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_7969.hasCurrentObject ()) {
    switch (enumerator_7969.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_8276 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_7969.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySize = extractPtr_8276->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_8276->mAssociatedValue2 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_7465, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 215)) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_7465, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
      }
      break ;
    }
    enumerator_7969.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                               extensionMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_controlRegisterDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@controlRegisterDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  GALGAS_lstring var_nodeName_8543 = object->mProperty_mRegisterArrayList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 224)) ;
  result_outRepresentation = GALGAS_string ("control register ").add_operation (var_nodeName_8543.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 225)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                                           extensionGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_controlRegisterDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@controlRegisterDeclarationAST location'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_controlRegisterDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  result_result = object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 234)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_controlRegisterDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                 extensionGetter_controlRegisterDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_controlRegisterDeclarationAST_location (defineExtensionGetter_controlRegisterDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@controlRegisterDeclarationAST addExtension'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                        GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                        GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  const GALGAS_controlRegisterDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                     extensionMethod_controlRegisterDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_addExtension (defineExtensionMethod_controlRegisterDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@controlRegisterDeclarationAST enterInContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                          const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                          GALGAS_semanticContext & ioArgument_ioContext,
                                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = (const cPtr_controlRegisterDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  GALGAS_PLMType var_registerType_14300 ;
  GALGAS_uint var_registerBitCount_14331 ;
  const GALGAS_controlRegisterDeclarationAST temp_0 = object ;
  callExtensionMethod_controlRegisterType ((const cPtr_controlRegisterDeclarationAST *) temp_0.ptr (), ioArgument_ioContext, var_registerType_14300, var_registerBitCount_14331, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 367)) ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_14499 ;
  GALGAS_sliceMap var_registerBitSliceMap_14528 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_14562 ;
  const GALGAS_controlRegisterDeclarationAST temp_1 = object ;
  callExtensionMethod_buildControlRegisterSliceMap ((const cPtr_controlRegisterDeclarationAST *) temp_1.ptr (), ioArgument_ioContext, var_registerType_14300, var_registerBitCount_14331, var_registerFieldMap_14499, var_registerBitSliceMap_14528, var_controlRegisterFieldList_14562, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 369)) ;
  GALGAS_bigint var_maxRegisterAddress_14628 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 378)).left_shift_operation (ioArgument_ioContext.getter_mPointerSize (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 378)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 378)) ;
  cEnumerator_controlRegisterList enumerator_14703 (object->mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_14703.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly_14751 = GALGAS_bool (false) ;
    GALGAS_bool var_isAccessibleInUserMode_14790 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_14839 (enumerator_14703.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14839.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_14839.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_isReadOnly_14751.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_14839.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 386)), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 386)) ;
        }else if (kBoolFalse == test_3) {
          var_isReadOnly_14751 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_14839.current_mValue (HERE).getter_string (HERE).objectCompare (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 390)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const enumGalgasBool test_6 = var_isAccessibleInUserMode_14790.boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_14839.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 392)), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 392)) ;
          }else if (kBoolFalse == test_6) {
            var_isAccessibleInUserMode_14790 = GALGAS_bool (true) ;
          }
        }else if (kBoolFalse == test_5) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_14839.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 397)), GALGAS_string ("only @ro (read only) and @user (accessible in `user mode) attributes are accepted here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 397)) ;
        }
      }
      enumerator_14839.gotoNextObject () ;
    }
    GALGAS_objectIR var_addressExpressionResult_15613 ;
    callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) enumerator_14703.current (HERE).getter_mRegisterAddress (HERE).ptr (), enumerator_14703.current (HERE).getter_mRegisterAddressLocation (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_addressExpressionResult_15613, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 401)) ;
    GALGAS_bigint var_registerAddress_15647 ;
    const enumGalgasBool test_9 = var_addressExpressionResult_15613.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 408)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 408)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (enumerator_14703.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("control register address is not a static integer expression"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
      var_registerAddress_15647.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_9) {
      GALGAS_PLMType joker_15907_1 ; // Joker input parameter
      var_addressExpressionResult_15613.method_literalInteger (joker_15907_1, var_registerAddress_15647, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
      const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_registerAddress_15647.objectCompare (var_maxRegisterAddress_14628)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_14703.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxRegisterAddress_14628.getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 416)) ;
      }
    }
    GALGAS_bigint var_arraySize_16192 ;
    GALGAS_uint var_elementArraySize_16219 ;
    switch (enumerator_14703.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_16192 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 424)) ;
        var_elementArraySize_16219 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_19209 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_14703.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_19209->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_19209->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_19209->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_19209->mAssociatedValue3 ;
        GALGAS_universalValuedObjectMapForContext var_universalMap_16834 ;
        {
        routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-control-register.galgas", 431)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 433)), var_universalMap_16834, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)) ;
        }
        GALGAS_semanticTemporariesStruct var_temporaries_17122 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-control-register.galgas", 442)) ;
        GALGAS_instructionListIR var_instructionGenerationList_17184 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 443)) ;
        GALGAS_allocaList var_allocaList_17218 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 444)) ;
        GALGAS_objectIR var_sizeExpressionResult_17703 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_arraySizeExpression.ptr (), GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-control-register.galgas", 446)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 448)), GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-control-register.galgas", 449)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-control-register.galgas", 451)), var_temporaries_17122, ioArgument_ioGlobalLiteralStringMap, var_universalMap_16834, var_allocaList_17218, var_instructionGenerationList_17184, var_sizeExpressionResult_17703, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 445)) ;
        const enumGalgasBool test_13 = var_sizeExpressionResult_17703.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 459)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 459)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression"), fixItArray14  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
          var_arraySize_16192.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          GALGAS_PLMType joker_17935_1 ; // Joker input parameter
          var_sizeExpressionResult_17703.method_literalInteger (joker_17935_1, var_arraySize_16192, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 462)) ;
          const enumGalgasBool test_15 = GALGAS_bool (kIsStrictInf, var_arraySize_16192.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 463)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray16  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 464)) ;
            var_arraySize_16192.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_15) {
            GALGAS_uint var_powerOfTwoForArraySize_18204 = var_arraySize_16192.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("declaration-control-register.galgas", 468)) ;
            const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_arraySize_16192.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 469)).left_shift_operation (var_powerOfTwoForArraySize_18204 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 469)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray18  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 470)) ;
              var_arraySize_16192.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_18823 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSizeExpression.ptr (), extractedValue_arrayElementSizeLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_elementArraySizeExpressionResult_18823, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 477)) ;
        const enumGalgasBool test_19 = var_elementArraySizeExpressionResult_18823.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 483)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 483)).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression"), fixItArray20  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 484)) ;
          var_elementArraySize_16219.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_19) {
          GALGAS_bigint var_elementArraySizeAsBigInt_19139 ;
          GALGAS_PLMType joker_19101_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_18823.method_literalInteger (joker_19101_1, var_elementArraySizeAsBigInt_19139, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 488)) ;
          var_elementArraySize_16219 = var_elementArraySizeAsBigInt_19139.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 489)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioContext.mProperty_mControlRegisterMap.setter_insertKey (enumerator_14703.current (HERE).getter_mRegisterName (HERE), var_registerType_14300, var_isReadOnly_14751, var_isAccessibleInUserMode_14790, var_registerBitSliceMap_14528, var_registerFieldMap_14499, var_registerAddress_15647, var_controlRegisterFieldList_14562, var_registerBitCount_14331, var_arraySize_16192.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 502)), var_elementArraySize_16219, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 492)) ;
    }
    enumerator_14703.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                       extensionMethod_controlRegisterDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_enterInContext (defineExtensionMethod_controlRegisterDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@controlRegisterDeclarationAST semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                            GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                         extensionMethod_controlRegisterDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_semanticAnalysis (defineExtensionMethod_controlRegisterDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_20795 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 528)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_20945 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 530)) ;
    cEnumerator_controlRegisterMap enumerator_20985 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_20985.hasCurrentObject ()) {
      var_firstLetterSet_20945.addAssign_operation (enumerator_20985.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 532)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 532))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 532)) ;
      enumerator_20985.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_21093 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_21127 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_controlRegisterMap enumerator_21174 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_21174.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_21127.objectCompare (enumerator_21174.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 537)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_21127 = enumerator_21174.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 538)) ;
        var_tableOfTypeString_21093.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_21127.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 539)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 539)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 539)).add_operation (var_currentFirstLetter_21127.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 539)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 539)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_21174.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_tableOfTypeString_21093.plusAssign_operation(function_linkForControlRegister (enumerator_21174.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 542)) ;
      }else if (kBoolFalse == test_2) {
        cEnumerator_range enumerator_21619 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_21174.current_mArraySize (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 544))), kENUMERATION_UP) ;
        while (enumerator_21619.hasCurrentObject ()) {
          var_tableOfTypeString_21093.plusAssign_operation(function_linkForControlRegister (enumerator_21174.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)).add_operation (enumerator_21619.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)) ;
          enumerator_21619.gotoNextObject () ;
        }
      }
      enumerator_21174.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_21784 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 550)), constinArgument_inControlRegisterMap, var_firstLetterSet_20945, var_tableOfTypeString_21093 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 549))) ;
    GALGAS_bool joker_22036 ; // Joker input parameter
    var_typeDumpString_21784.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_20795, joker_22036, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 555)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_20795, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 557)) ;
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
      result << extensionGetter_key (enumerator_1588.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 89)).stringValue () ;
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
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 576)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 576)).add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 576)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 576)) ;
//---
  return result_result ;
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
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_23062 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 583))), kENUMERATION_DOWN) ;
  while (enumerator_23062.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_23062.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 584)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 584)) ;
    enumerator_23062.gotoNextObject () ;
  }
//---
  return result_result ;
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
  GALGAS_uintlist result_result ; // Returned variable
  result_result = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 591)) ;
  cEnumerator_range enumerator_23347 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 592))), kENUMERATION_UP) ;
  while (enumerator_23347.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_23347.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 593)) ;
    enumerator_23347.gotoNextObject () ;
  }
//---
  return result_result ;
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
//                        Overriding extension getter '@globalConstantDeclarationAST location'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_globalConstantDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  result_outLocation = object->mProperty_mConstantName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_globalConstantDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                 extensionGetter_globalConstantDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_location (defineExtensionGetter_globalConstantDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@globalConstantDeclarationAST addExtension'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                       GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                       GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                     extensionMethod_globalConstantDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_addExtension (defineExtensionMethod_globalConstantDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@globalConstantDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  {
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 71)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_typeName_3344 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mConstantTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, var_typeName_3344 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 75)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                               extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@globalConstantDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 84)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                           extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@globalConstantDeclarationAST enterInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_4820 ;
  {
  routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 99)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 101)), var_universalMap_4820, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 97)) ;
  }
  GALGAS_PLMType var_annotationType_4876 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType_4876 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-global-constant.galgas", 107)) ;
  }else if (kBoolFalse == test_0) {
    var_annotationType_4876 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 109)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 109)) ;
  }
  GALGAS_semanticTemporariesStruct joker_5318 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-constant.galgas", 119)) ;
  GALGAS_allocaList joker_5411 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 122)) ;
  GALGAS_instructionListIR joker_5437 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 123)) ;
  GALGAS_objectIR var_expressionResult_5477 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-global-constant.galgas", 113)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 115)), var_annotationType_4876, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 118)), joker_5318, ioArgument_ioGlobalLiteralStringMap, var_universalMap_4820, joker_5411, joker_5437, var_expressionResult_5477, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 112)) ;
  GALGAS_objectIR var_result_5530 = function_checkAssignmentCompatibility (var_expressionResult_5477, var_annotationType_4876, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 127)) ;
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_result_5530, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 134)).operator_not (SOURCE_FILE ("declaration-global-constant.galgas", 134)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 135)), GALGAS_string ("source expression cannot be statically computed"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 135)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_result_5530, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                       extensionMethod_globalConstantDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInContext (defineExtensionMethod_globalConstantDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_6577 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 150)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_6724 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 152)) ;
    cEnumerator_globalConstantMap enumerator_6763 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_6763.hasCurrentObject ()) {
      var_firstLetterSet_6724.addAssign_operation (enumerator_6763.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 154)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 154))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 154)) ;
      enumerator_6763.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_6871 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_6905 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_6951 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_6951.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_6905.objectCompare (enumerator_6951.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 159)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_6905 = enumerator_6951.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 160)) ;
        var_tableOfTypeString_6871.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6905.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 161)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 161)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 161)).add_operation (var_currentFirstLetter_6905.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 161)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 161)) ;
      }
      var_tableOfTypeString_6871.plusAssign_operation(function_linkForGlobalConstant (enumerator_6951.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 163)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 163)) ;
      enumerator_6951.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_7347 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 166)), inArgument_inGlobalConstantMap, var_firstLetterSet_6724, var_tableOfTypeString_6871 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 165))) ;
    GALGAS_bool joker_7591 ; // Joker input parameter
    var_typeDumpString_7347.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_6577, joker_7591, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 171)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_6577, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173)) ;
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
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 192)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 192)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 192)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 192)) ;
//---
  return result_result ;
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
//                    Overriding extension method '@globalConstantDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclarationAST_semanticAnalysis (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                           const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                           GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                         extensionMethod_globalConstantDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_semanticAnalysis (defineExtensionMethod_globalConstantDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@requiredModuleAST enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_requiredModuleAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  {
  const GALGAS_requiredModuleAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mModuleName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 148)) ;
  }
  GALGAS_lstring var_moduleTypeName_5314 = function_llvmRegularTypeMangledNameFromName (function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 149)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mModuleName, var_moduleTypeName_5314 COMMA_SOURCE_FILE ("declaration-module.galgas", 150)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_requiredModuleAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                               extensionMethod_requiredModuleAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_requiredModuleAST_enterInPrecedenceGraph (defineExtensionMethod_requiredModuleAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@requiredModuleAST keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_requiredModuleAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  result_outRepresentation = GALGAS_string ("module ").add_operation (object->mProperty_mModuleName.getter_string (SOURCE_FILE ("declaration-module.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 156)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_requiredModuleAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                                           extensionGetter_requiredModuleAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_requiredModuleAST_keyRepresentationForErrorSignaling (defineExtensionGetter_requiredModuleAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension getter '@requiredModuleAST location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_requiredModuleAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  result_outLocation = object->mProperty_mModuleName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_requiredModuleAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                 extensionGetter_requiredModuleAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_requiredModuleAST_location (defineExtensionGetter_requiredModuleAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@requiredModuleAST addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_requiredModuleAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                            GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                            GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                            GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  const GALGAS_requiredModuleAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_requiredModuleAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                     extensionMethod_requiredModuleAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_requiredModuleAST_addExtension (defineExtensionMethod_requiredModuleAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'retainRequiredModules'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_retainRequiredModules (GALGAS_ast & ioArgument_ioAST,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciedModuleMap var_instanciedModuleMap_7739 = GALGAS_instanciedModuleMap::constructor_emptyMap (SOURCE_FILE ("declaration-module.galgas", 198)) ;
  GALGAS_stringset var_validModuleNames_7774 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-module.galgas", 199)) ;
  cEnumerator_moduleInstanciationListAST enumerator_7890 (ioArgument_ioAST.getter_mRequiredModuleListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7890.hasCurrentObject ()) {
    GALGAS_moduleInstanciationArgumentMap var_moduleInstanciationArgumentMap_7961 = GALGAS_moduleInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-module.galgas", 201)) ;
    cEnumerator_moduleInstanciationArgumentListAST enumerator_8005 (enumerator_7890.current_mModuleInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_8005.hasCurrentObject ()) {
      {
      var_moduleInstanciationArgumentMap_7961.setter_insertKey (enumerator_8005.current_mSelector (HERE), enumerator_8005.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 203)) ;
      }
      enumerator_8005.gotoNextObject () ;
    }
    {
    var_instanciedModuleMap_7739.setter_insertKey (enumerator_7890.current_mModuleName (HERE), var_moduleInstanciationArgumentMap_7961, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 205)) ;
    }
    enumerator_7890.gotoNextObject () ;
  }
  cEnumerator_moduleDeclarationListAST enumerator_8307 (ioArgument_ioAST.getter_mModuleDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8307.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_instanciedModuleMap_7739.getter_hasKey (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-module.galgas", 209)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_validModuleNames_7774.addAssign_operation (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 210)) ;
      GALGAS_moduleInstanciationArgumentMap var_moduleInstanciationArgumentMap_8539 ;
      var_instanciedModuleMap_7739.method_searchKey (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE), var_moduleInstanciationArgumentMap_8539, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 211)) ;
      GALGAS_stringset var_validArgumentSet_8634 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-module.galgas", 213)) ;
      GALGAS_structurePropertyListAST var_modulePropertyListAST_8693 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 214)) ;
      cEnumerator_modulePropertyListAST enumerator_8812 (enumerator_8307.current_mModule (HERE).getter_mPropertyListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_8812.hasCurrentObject ()) {
        GALGAS_expressionAST var_initExpression_8853 ;
        switch (enumerator_8812.current_mOptionalExpression (HERE).enumValue ()) {
        case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
          {
            var_moduleInstanciationArgumentMap_8539.method_searchKey (enumerator_8812.current_mPropertyName (HERE), var_initExpression_8853, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 219)) ;
            var_validArgumentSet_8634.addAssign_operation (enumerator_8812.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 220)) ;
          }
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_9131 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_8812.current_mOptionalExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_expression = extractPtr_9131->mAssociatedValue0 ;
            var_initExpression_8853 = extractedValue_expression ;
          }
          break ;
        }
        var_modulePropertyListAST_8693.addAssign_operation (enumerator_8812.current_mPropertyName (HERE), enumerator_8812.current_mIsConstant (HERE), GALGAS_bool (false), enumerator_8812.current_mTypeName (HERE), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_8853  COMMA_SOURCE_FILE ("declaration-module.galgas", 229))  COMMA_SOURCE_FILE ("declaration-module.galgas", 224)) ;
        enumerator_8812.gotoNextObject () ;
      }
      cEnumerator_stringset enumerator_9491 (var_moduleInstanciationArgumentMap_8539.getter_keySet (SOURCE_FILE ("declaration-module.galgas", 232)).substract_operation (var_validArgumentSet_8634, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 232)), kENUMERATION_UP) ;
      while (enumerator_9491.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_moduleInstanciationArgumentMap_8539.getter_locationForKey (enumerator_9491.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 233)), GALGAS_string ("invalid selector"), fixItArray1  COMMA_SOURCE_FILE ("declaration-module.galgas", 233)) ;
        enumerator_9491.gotoNextObject () ;
      }
      GALGAS_lstring var_moduleTypeName_9637 = function_moduleMangledNameFromModuleName (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 236)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_requiredModuleAST::constructor_new (enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 237))  COMMA_SOURCE_FILE ("declaration-module.galgas", 237)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (var_moduleTypeName_9637, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 240)), var_modulePropertyListAST_8693, enumerator_8307.current_mModule (HERE).getter_mFunctionDeclarationListAST (HERE), enumerator_8307.current_mModule (HERE).getter_mSystemRoutineListAST (HERE), enumerator_8307.current_mModule (HERE).getter_mGuardListAST (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 238))  COMMA_SOURCE_FILE ("declaration-module.galgas", 238)) ;
      cEnumerator_initList enumerator_10102 (enumerator_8307.current_mModule (HERE).getter_mModuleInitListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_10102.hasCurrentObject ()) {
        ioArgument_ioAST.mProperty_mInitListAST.addAssign_operation (enumerator_10102.current (HERE).getter_mInitLocation (HERE), var_moduleTypeName_9637, enumerator_8307.current_mModule (HERE).getter_mModuleName (HERE).getter_string (SOURCE_FILE ("declaration-module.galgas", 250)), enumerator_10102.current (HERE).getter_mInstructionList (HERE), enumerator_10102.current (HERE).getter_mEndOfInitLocation (HERE), enumerator_10102.current (HERE).getter_mPriority (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 247)) ;
        enumerator_10102.gotoNextObject () ;
      }
    }
    enumerator_8307.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mModuleDeclarationListAST = GALGAS_moduleDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 257)) ;
  cEnumerator_stringset enumerator_10532 (var_instanciedModuleMap_7739.getter_keySet (SOURCE_FILE ("declaration-module.galgas", 259)).substract_operation (var_validModuleNames_7774, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 259)), kENUMERATION_UP) ;
  while (enumerator_10532.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (var_instanciedModuleMap_7739.getter_locationForKey (enumerator_10532.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 260)), GALGAS_string ("undefined module"), fixItArray2  COMMA_SOURCE_FILE ("declaration-module.galgas", 260)) ;
    enumerator_10532.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@requiredModuleAST enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_requiredModuleAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                              const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  {
  ioArgument_ioContext.mProperty_mModuleMap.setter_insertKey (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 280)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_requiredModuleAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                       extensionMethod_requiredModuleAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_requiredModuleAST_enterInContext (defineExtensionMethod_requiredModuleAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@requiredModuleAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_requiredModuleAST_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_requiredModuleAST * object = (const cPtr_requiredModuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_requiredModuleAST) ;
  GALGAS_lstring var_moduleTypeName_12436 = function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 300)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_moduleTypeProxy_12507 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_12436, inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 301)) ;
  GALGAS_constructorMap var_constructorMap_12600 = extensionGetter_constructorMap (var_moduleTypeProxy_12507.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 302)) ;
  GALGAS_constructorValue var_constructorValue_12735 ;
  GALGAS_constructorSignature joker_12712 ; // Joker input parameter
  var_constructorMap_12600.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), var_moduleTypeName_12436.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 303)), joker_12712, var_constructorValue_12735, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 303)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_12807 ;
  var_constructorValue_12735.method_structure (var_sortedOperandList_12807, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 304)) ;
  GALGAS_operandIRList var_initialValueList_12842 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 305)) ;
  cEnumerator_sortedOperandIRList enumerator_12891 (var_sortedOperandList_12807, kENUMERATION_UP) ;
  while (enumerator_12891.hasCurrentObject ()) {
    var_initialValueList_12842.addAssign_operation (enumerator_12891.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 307)) ;
    enumerator_12891.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mModuleList.addAssign_operation (object->mProperty_mModuleName.getter_string (HERE), var_moduleTypeProxy_12507, var_initialValueList_12842  COMMA_SOURCE_FILE ("declaration-module.galgas", 309)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_requiredModuleAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_requiredModuleAST.mSlotID,
                                         extensionMethod_requiredModuleAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_requiredModuleAST_semanticAnalysis (defineExtensionMethod_requiredModuleAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@staticListAST addExtension'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticListAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                        GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                        GALGAS_extendStaticArrayDeclarationAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                        GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_staticListValueListAST var_newValueList_5464 = object->mProperty_mValueList ;
  GALGAS_extendStaticArrayDeclarationAST var_extendStaticArrayDeclarationAST_5544 = GALGAS_extendStaticArrayDeclarationAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 149)) ;
  cEnumerator_extendStaticArrayDeclarationAST enumerator_5622 (ioArgument_ioExtendStaticArrayDeclarationAST, kENUMERATION_UP) ;
  while (enumerator_5622.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mStaticListName.getter_string (HERE).objectCompare (enumerator_5622.current_mStaticListName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_newValueList_5464.addAssign_operation (enumerator_5622.current_mExpressions (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 152)) ;
    }else if (kBoolFalse == test_0) {
      var_extendStaticArrayDeclarationAST_5544.addAssign_operation (enumerator_5622.current_mStaticListName (HERE), enumerator_5622.current_mExpressions (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 154)) ;
    }
    enumerator_5622.gotoNextObject () ;
  }
  ioArgument_ioExtendStaticArrayDeclarationAST = var_extendStaticArrayDeclarationAST_5544 ;
  outArgument_outNewDeclaration = GALGAS_staticListAST::constructor_new (object->mProperty_mStaticListName, object->mProperty_mPropertyList, var_newValueList_5464  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 158)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticListAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                     extensionMethod_staticListAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticListAST_addExtension (defineExtensionMethod_staticListAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@staticListAST enterInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticListAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  {
  const GALGAS_staticListAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 167)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_6575 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_6575.hasCurrentObject ()) {
    switch (enumerator_6575.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_6772 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_6575.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_6772->mAssociatedValue0 ;
        GALGAS_lstring var_typeName_6662 = function_llvmRegularTypeMangledNameFromName (extractedValue_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 172)) ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_typeName_6662 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 173)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7231 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_6575.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_7231->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_7231->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentList enumerator_6909 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_6909.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_6933 = function_llvmRegularTypeMangledNameFromName (enumerator_6909.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 176)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_6933 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 177)) ;
          }
          enumerator_6909.gotoNextObject () ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_lstring var_returnTypeName_7109 = function_llvmRegularTypeMangledNameFromName (extractedValue_returnType, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 180)) ;
          {
          ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_returnTypeName_7109 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 181)) ;
          }
        }
      }
      break ;
    }
    enumerator_6575.gotoNextObject () ;
  }
  cEnumerator_staticListValueListAST enumerator_7334 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_7334.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementListAST enumerator_7366 (enumerator_7334.current_mExpressions (HERE), kENUMERATION_UP) ;
    while (enumerator_7366.hasCurrentObject ()) {
      switch (enumerator_7366.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_7513 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7366.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7513->mAssociatedValue0 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), object->mProperty_mStaticListName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 190)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_7776 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7366.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_7776->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentList enumerator_7634 (extractedValue_formalArgs, kENUMERATION_UP) ;
          while (enumerator_7634.hasCurrentObject ()) {
            GALGAS_lstring var_typeName_7660 = function_llvmRegularTypeMangledNameFromName (enumerator_7634.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 193)) ;
            {
            ioArgument_ioGraph.setter_noteNode (var_typeName_7660 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 194)) ;
            }
            enumerator_7634.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7366.gotoNextObject () ;
    }
    enumerator_7334.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticListAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                               extensionMethod_staticListAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticListAST_enterInPrecedenceGraph (defineExtensionMethod_staticListAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@staticListAST location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_staticListAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  result_result = object->mProperty_mStaticListName.getter_location (HERE) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticListAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                 extensionGetter_staticListAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticListAST_location (defineExtensionGetter_staticListAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@staticListAST keyRepresentationForErrorSignaling'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_staticListAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 210)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                           extensionGetter_staticListAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticListAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@staticListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticListAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                          const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                          GALGAS_semanticContext & ioArgument_ioContext,
                                                          GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_propertyList var_propertyList_9490 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 239)) ;
  GALGAS_propertyMap var_propertyMap_9522 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 240)) ;
  GALGAS_stringset var_propertyNameSet_9556 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 241)) ;
  GALGAS_lstring var_plmElementTypeName_9586 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 242)) ;
  cEnumerator_staticListPropertyListAST enumerator_9777 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  GALGAS_uint index_9740 ((uint32_t) 0) ;
  while (enumerator_9777.hasCurrentObject ()) {
    switch (enumerator_9777.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_10341 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_9777.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_10341->mAssociatedValue0 ;
        GALGAS_PLMType var_propertyType_9884 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 247)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 247)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_9556.getter_hasKey (enumerator_9777.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 248)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 248)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_9777.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 249)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 249)) ;
        }else if (kBoolFalse == test_0) {
          var_propertyNameSet_9556.addAssign_operation (enumerator_9777.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 251))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 251)) ;
          var_propertyList_9490.addAssign_operation (enumerator_9777.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 252)), var_propertyType_9884  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 252)) ;
          {
          var_propertyMap_9522.setter_insertKey (enumerator_9777.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_indexed (var_propertyType_9884, index_9740  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 253)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_11932 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_9777.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_11932->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_11932->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_11932->mAssociatedValue2 ;
        GALGAS_lstring var_routineMangledName_10495 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_9777.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 261)) ;
        GALGAS_routineTypedSignature var_signature_10679 ;
        {
        routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_10679, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 267)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 269)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 271)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_10728 = temp_2 ;
        GALGAS_routineDescriptor var_descriptor_10900 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (extractedValue_mode  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 276)), var_signature_10679, var_returnTypeProxy_10728, GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 273)) ;
        GALGAS_PLMType var_type_11340 = GALGAS_PLMType::constructor_function (var_descriptor_10900  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 282)) ;
        const enumGalgasBool test_4 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_routineMangledName_10495.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 283)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 283)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 283)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_routineMangledName_10495, var_type_11340, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-array.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 284)) ;
          }
        }
        GALGAS_PLMType var_propertyType_11635 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_routineMangledName_10495, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 290)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 290)) ;
        var_propertyList_9490.addAssign_operation (enumerator_9777.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 291)), var_propertyType_11635  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 291)) ;
        {
        var_propertyMap_9522.setter_insertKey (var_routineMangledName_10495, GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_indexed (var_propertyType_11635, index_9740  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 292)) ;
        }
      }
      break ;
    }
    enumerator_9777.gotoNextObject () ;
    index_9740.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 244)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_9490, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 299)) ;
  }
  GALGAS_PLMType var_kind_12130 = GALGAS_PLMType::constructor_structure (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 302)), var_propertyMap_9522, var_propertyList_9490, GALGAS_PLMTypeFlags::constructor_none (SOURCE_FILE ("declaration-static-array.galgas", 305)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 306)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 307))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 301)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmElementTypeName_9586, var_kind_12130, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-array.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 309)) ;
  }
  GALGAS_stringlist var_stringValueList_12586 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 315)) ;
  cEnumerator_staticListValueListAST enumerator_12617 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_12617.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_propertyList_9490.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 317)).objectCompare (enumerator_12617.current (HERE).getter_mExpressions (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 317)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mStaticListName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 318)), var_propertyList_9490.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 319)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 319)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 319)).add_operation (enumerator_12617.current (HERE).getter_mExpressions (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 320)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 319)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 320)), fixItArray6  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 318)) ;
    }else if (kBoolFalse == test_5) {
      GALGAS_string var_staticValue_12870 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementListAST enumerator_12927 (enumerator_12617.current (HERE).getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_12953 (var_propertyList_9490, kENUMERATION_UP) ;
      while (enumerator_12927.hasCurrentObject () && enumerator_12953.hasCurrentObject ()) {
        switch (enumerator_12927.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_14798 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_12927.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_exp = extractPtr_14798->mAssociatedValue0 ;
            const enumGalgasBool test_7 = enumerator_12953.current_mType (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-array.galgas", 326)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_12927.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 327)) ;
            }else if (kBoolFalse == test_7) {
              GALGAS_universalValuedObjectMapForContext var_universalMap_13446 ;
              {
              routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-static-array.galgas", 331)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-array.galgas", 333)), var_universalMap_13446, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 329)) ;
              }
              GALGAS_semanticTemporariesStruct var_temporaries_13511 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-static-array.galgas", 336)) ;
              GALGAS_instructionListIR var_instructionGenerationList_13579 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 337)) ;
              GALGAS_allocaList var_allocaList_13619 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 338)) ;
              GALGAS_objectIR var_expressionResult_14165 ;
              callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-static-array.galgas", 340)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-static-array.galgas", 342)), enumerator_12953.current_mType (HERE), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-static-array.galgas", 345)), var_temporaries_13511, ioArgument_ioGlobalLiteralStringMap, var_universalMap_13446, var_allocaList_13619, var_instructionGenerationList_13579, var_expressionResult_14165, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 339)) ;
              GALGAS_objectIR var_result_14248 = function_checkAssignmentCompatibility (var_expressionResult_14165, enumerator_12953.current_mType (HERE), enumerator_12927.current_mEndOfExpression (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 354)) ;
              GALGAS_bool test_9 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_13579.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 360)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
              if (kBoolTrue != test_9.boolEnum ()) {
                test_9 = GALGAS_bool (kIsStrictSup, var_allocaList_13619.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 360)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
              }
              GALGAS_bool test_10 = test_9 ;
              if (kBoolTrue != test_10.boolEnum ()) {
                test_10 = extensionGetter_isStatic (var_result_14248, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 360)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 360)) ;
              }
              const enumGalgasBool test_11 = test_10.boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_12927.current_mEndOfExpression (HERE), GALGAS_string ("source expression cannot be statically computed"), fixItArray12  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 361)) ;
              }
              var_staticValue_12870.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_12953.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)).add_operation (extensionGetter_llvmName (var_expressionResult_14165, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 364)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_17673 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_12927.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_functionName = extractPtr_17673->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_17673->mAssociatedValue1 ;
            const enumGalgasBool test_13 = enumerator_12953.current_mType (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-array.galgas", 367)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 367)).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (enumerator_12927.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray14  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 368)) ;
            }else if (kBoolFalse == test_13) {
              GALGAS_routineDescriptor var_descriptor_15067 ;
              enumerator_12953.current_mType (HERE).method_function (var_descriptor_15067, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 370)) ;
              GALGAS_lstring var_argumentSignature_15102 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 371)) ;
              GALGAS_lstring var_candidateRoutineLLVMName_15317 ;
              GALGAS_routineDescriptor var_routineDescriptor_15373 ;
              GALGAS_location var_functionDefinitionLocation_15419 ;
              extensionMethod_searchKey (ioArgument_ioContext.getter_mRoutineMapForContext (HERE), extractedValue_functionName, var_argumentSignature_15102, var_candidateRoutineLLVMName_15317, var_routineDescriptor_15373, var_functionDefinitionLocation_15419, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 372)) ;
              GALGAS_bool var_candidateIsPublic_15467 = var_routineDescriptor_15373.getter_mIsPublic (HERE) ;
              GALGAS_routineKind var_candidateRoutineKind_15534 = var_routineDescriptor_15373.getter_mRoutineKind (HERE) ;
              GALGAS_mode var_candidateMode_15597 = extensionGetter_executionMode (var_routineDescriptor_15373.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 381)) ;
              GALGAS_routineTypedSignature var_candidateSignature_15681 = var_routineDescriptor_15373.getter_mSignature (HERE) ;
              GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnTypeProxy_15753 = var_routineDescriptor_15373.getter_mReturnTypeProxy (HERE) ;
              const enumGalgasBool test_15 = var_candidateIsPublic_15467.operator_not (SOURCE_FILE ("declaration-static-array.galgas", 385)).boolEnum () ;
              if (kBoolTrue == test_15) {
                GALGAS_string var_declarationFile_15901 = var_functionDefinitionLocation_15419.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 386)) ;
                GALGAS_string var_invocationFile_15970 = extractedValue_functionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 387)) ;
                const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_invocationFile_15970.objectCompare (var_declarationFile_15901)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <C_FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 389)), GALGAS_string ("this function is not public"), fixItArray17  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 389)) ;
                }
              }
              const enumGalgasBool test_18 = var_candidateRoutineKind_15534.getter_isFunction (SOURCE_FILE ("declaration-static-array.galgas", 392)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 392)).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <C_FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 393)), GALGAS_string ("this routine is not a function"), fixItArray19  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 393)) ;
              }
              GALGAS_mode var_currentMode_16328 = extensionGetter_executionMode (var_descriptor_15067.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 395)) ;
              const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, var_currentMode_16328.objectCompare (var_candidateMode_15597)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <C_FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 397)), GALGAS_string ("this function runs in ").add_operation (extensionGetter_string (var_candidateMode_15597, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)).add_operation (GALGAS_string (" mode, but "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)).add_operation (extensionGetter_string (var_currentMode_16328, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)).add_operation (GALGAS_string (" is required"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)), fixItArray21  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 397)) ;
              }
              GALGAS_bool test_22 = GALGAS_bool (kIsEqual, var_descriptor_15067.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 399)))) ;
              if (kBoolTrue == test_22.boolEnum ()) {
                test_22 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_15753.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 399)))) ;
              }
              const enumGalgasBool test_23 = test_22.boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <C_FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 400)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnTypeProxy_15753.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 400)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 400)), fixItArray24  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 400)) ;
              }else if (kBoolFalse == test_23) {
                GALGAS_bool test_25 = GALGAS_bool (kIsNotEqual, var_descriptor_15067.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 401)))) ;
                if (kBoolTrue == test_25.boolEnum ()) {
                  test_25 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_15753.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 401)))) ;
                }
                const enumGalgasBool test_26 = test_25.boolEnum () ;
                if (kBoolTrue == test_26) {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 402)), GALGAS_string ("this function should return no object"), fixItArray27  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 402)) ;
                }
              }
              const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, var_descriptor_15067.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 404)).objectCompare (var_candidateSignature_15681.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 404)))).boolEnum () ;
              if (kBoolTrue == test_28) {
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 405)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_15681.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 406)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 406)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 406)).add_operation (var_descriptor_15067.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 407)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 406)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 407)), fixItArray29  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 405)) ;
              }else if (kBoolFalse == test_28) {
                cEnumerator_routineTypedSignature enumerator_17295 (var_descriptor_15067.getter_mSignature (HERE), kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_17328 (var_candidateSignature_15681, kENUMERATION_UP) ;
                while (enumerator_17295.hasCurrentObject () && enumerator_17328.hasCurrentObject ()) {
                  const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_17295.current (HERE).getter_mTypeProxy (HERE).objectCompare (enumerator_17328.current (HERE).getter_mTypeProxy (HERE))).boolEnum () ;
                  if (kBoolTrue == test_30) {
                    TC_Array <C_FixItDescription> fixItArray31 ;
                    inCompiler->emitSemanticError (enumerator_17328.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 411)), GALGAS_string ("argument type should be $").add_operation (enumerator_17295.current (HERE).getter_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 411)), fixItArray31  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 411)) ;
                  }
                  enumerator_17295.gotoNextObject () ;
                  enumerator_17328.gotoNextObject () ;
                }
              }
              var_staticValue_12870.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_12953.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)).add_operation (function_llvmNameForFunction (var_candidateRoutineLLVMName_15317.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)) ;
            }
          }
          break ;
        }
        if (enumerator_12927.hasNextObject () && enumerator_12953.hasNextObject ()) {
          var_staticValue_12870.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 419)) ;
        }
        enumerator_12927.gotoNextObject () ;
        enumerator_12953.gotoNextObject () ;
      }
      var_staticValue_12870.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 421)) ;
      var_stringValueList_12586.addAssign_operation (var_staticValue_12870  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 422)) ;
    }
    enumerator_12617.gotoNextObject () ;
  }
  {
  ioArgument_ioStaticListValueMap.setter_insertKey (object->mProperty_mStaticListName, var_stringValueList_12586, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 425)) ;
  }
  GALGAS_propertyMap var_listTypePropertyMap_18013 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 427)) ;
  {
  var_listTypePropertyMap_18013.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 429)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("declaration-static-array.galgas", 431)), object->mProperty_mValueList.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 431)).getter_bigint (SOURCE_FILE ("declaration-static-array.galgas", 431))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 431))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 428)) ;
  }
  GALGAS_PLMType var_elementType_18356 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_plmElementTypeName_9586, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 434)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 434)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 436)), GALGAS_PLMType::constructor_arrayType (GALGAS_lstring::constructor_new (function_llvmNameForStaticListType (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 438)), object->mProperty_mStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 438)), var_listTypePropertyMap_18013, var_elementType_18356, var_stringValueList_12586.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 441)).getter_bigint (SOURCE_FILE ("declaration-static-array.galgas", 441)), GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 442)), GALGAS_PLMTypeFlags::constructor_none (SOURCE_FILE ("declaration-static-array.galgas", 443)), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 444)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 444)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 445))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 437)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-array.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 435)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_staticListType_19050 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 450)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19050.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 453)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 453))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 451)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticListAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticListAST_enterInContext (defineExtensionMethod_staticListAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@staticListAST semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticListAST_semanticAnalysis (const cPtr_abstractDeclarationAST * inObject,
                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_stringset var_invokedFunctionSet_20245 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 475)) ;
  cEnumerator_staticListValueListAST enumerator_20276 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_20276.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementListAST enumerator_20328 (enumerator_20276.current (HERE).getter_mExpressions (HERE), kENUMERATION_UP) ;
    while (enumerator_20328.hasCurrentObject ()) {
      switch (enumerator_20328.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_20404 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_20328.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_20404->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_20702 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_20328.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_20702->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_20702->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_20551 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 482)) ;
          var_invokedFunctionSet_20245.addAssign_operation (var_routineMangledName_20551.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 487))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 487)) ;
        }
        break ;
      }
      enumerator_20328.gotoNextObject () ;
    }
    enumerator_20276.gotoNextObject () ;
  }
  {
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_20245, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 491)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_20245, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 492)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticListAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                         extensionMethod_staticListAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticListAST_semanticAnalysis (defineExtensionMethod_staticListAST_semanticAnalysis, NULL) ;

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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 3)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 5)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 23)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 27)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("13", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 31)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 35)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_result ;
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
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 41)) ;
//---
  return result_result ;
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
  result_result = extensionGetter_llvmTypeName (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 215)) ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 216)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 216)) ;
  GALGAS_bool var_first_8047 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 218)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 219)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 219)) ;
    var_first_8047 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_8219 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8219.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_first_8047.boolEnum () ;
    if (kBoolTrue == test_1) {
      var_first_8047 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 226)) ;
    }
    switch (enumerator_8219.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8219.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)).add_operation (enumerator_8219.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8219.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (function_llvmNameForLocalVariable (enumerator_8219.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_8219.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)).add_operation (function_llvmNameForLocalVariable (enumerator_8219.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)) ;
      }
      break ;
    }
    enumerator_8219.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 237)) ;
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
  result_result = GALGAS_string ("call ").add_operation (extensionGetter_llvmTypeName (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 247)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 247)).add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 247)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 247)) ;
  GALGAS_bool var_first_9247 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 249)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 250)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 250)) ;
    var_first_9247 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListForGeneration enumerator_9419 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9419.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_first_9247.boolEnum () ;
    if (kBoolTrue == test_1) {
      var_first_9247 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 257)) ;
    }
    switch (enumerator_9419.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9419.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)).add_operation (enumerator_9419.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9419.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (function_llvmNameForLocalVariable (enumerator_9419.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9419.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)).add_operation (function_llvmNameForLocalVariable (enumerator_9419.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
      }
      break ;
    }
    enumerator_9419.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 268)) ;
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
      const cEnumAssociatedValues_sectionImplementationScheme_svc * extractPtr_13476 = (const cEnumAssociatedValues_sectionImplementationScheme_svc *) (constinArgument_inTargetParameters.getter_mSectionImplementation (HERE).unsafePointer ()) ;
      const GALGAS_lstring extractedValue_sectionHandler = extractPtr_13476->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_sectionDispatcherEntry = extractPtr_13476->mAssociatedValue2 ;
      const GALGAS_lstring extractedValue_sectionDispatcherHeader = extractPtr_13476->mAssociatedValue3 ;
      const GALGAS_lstring extractedValue_sectionDispatcherInvocation = extractPtr_13476->mAssociatedValue4 ;
      cEnumerator_sectionIRlist enumerator_11775 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
      while (enumerator_11775.hasCurrentObject ()) {
        GALGAS_string var_prototype_11798 = function_llvmFunctionPrototype (enumerator_11775.current_mReturnType (HERE), enumerator_11775.current_mSectionCallName (HERE), enumerator_11775.current_mReceiverType (HERE), enumerator_11775.current_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 320)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (enumerator_11775.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 326)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_11798, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)) ;
        enumerator_11775.gotoNextObject () ;
      }
      cEnumerator_sectionIRlist enumerator_12089 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
      GALGAS_uint index_12034 ((uint32_t) 0) ;
      while (enumerator_12089.hasCurrentObject ()) {
        GALGAS_string var_s_12110 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)).add_operation (extractedValue_sectionDispatcherInvocation.getter_string (SOURCE_FILE ("declaration-svc.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 330)) ;
        var_s_12110 = var_s_12110.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_12089.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 334)) ;
        var_s_12110 = var_s_12110.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_12089.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 335)) ;
        var_s_12110 = var_s_12110.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_12034.getter_string (SOURCE_FILE ("declaration-svc.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 336)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_12110, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)) ;
        enumerator_12089.gotoNextObject () ;
        index_12034.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 329)) ;
      }
      ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 341)).add_operation (extractedValue_sectionDispatcherHeader.getter_string (SOURCE_FILE ("declaration-svc.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 339)) ;
      cEnumerator_sectionIRlist enumerator_12720 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
      GALGAS_uint index_12665 ((uint32_t) 0) ;
      while (enumerator_12720.hasCurrentObject ()) {
        GALGAS_string var_s_12741 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 346)).add_operation (extractedValue_sectionDispatcherEntry.getter_string (SOURCE_FILE ("declaration-svc.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 344)) ;
        var_s_12741 = var_s_12741.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_12720.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
        var_s_12741 = var_s_12741.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_12720.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 349)) ;
        var_s_12741 = var_s_12741.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_12665.getter_string (SOURCE_FILE ("declaration-svc.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 350)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_12741, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 351)) ;
        enumerator_12720.gotoNextObject () ;
        index_12665.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 343)) ;
      }
      ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 353)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 356)).add_operation (extractedValue_sectionHandler.getter_string (SOURCE_FILE ("declaration-svc.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 354)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 358)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 359)) ;
    }
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_function:
    {
      const cEnumAssociatedValues_sectionImplementationScheme_function * extractPtr_14507 = (const cEnumAssociatedValues_sectionImplementationScheme_function *) (constinArgument_inTargetParameters.getter_mSectionImplementation (HERE).unsafePointer ()) ;
      const GALGAS_string extractedValue_disableInterruptInLLVM = extractPtr_14507->mAssociatedValue0 ;
      const GALGAS_string extractedValue_enableInterruptInLLVM = extractPtr_14507->mAssociatedValue1 ;
      cEnumerator_sectionIRlist enumerator_13638 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
      while (enumerator_13638.hasCurrentObject ()) {
        GALGAS_string var_prototype_13661 = function_llvmFunctionPrototype (enumerator_13638.current_mReturnType (HERE), enumerator_13638.current_mSectionCallName (HERE), enumerator_13638.current_mReceiverType (HERE), enumerator_13638.current_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 362)) ;
        GALGAS_string var_resultTypeName_13809 ;
        var_resultTypeName_13809 = extensionGetter_llvmTypeName (enumerator_13638.current_mReturnType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 369)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (enumerator_13638.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 370)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define ").add_operation (var_prototype_13661, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 371)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 371)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extractedValue_disableInterruptInLLVM, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 372)).add_operation (GALGAS_string (" ; Disable interrupt\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 372)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_13638.current_mReturnType (HERE).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 374)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%result = "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 375)) ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmFunctionCall (enumerator_13638.current_mReturnType (HERE), enumerator_13638.current_mSectionImplementationName (HERE), enumerator_13638.current_mReceiverType (HERE), enumerator_13638.current_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 377)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 377)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extractedValue_enableInterruptInLLVM, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 378)).add_operation (GALGAS_string (" ; Enable interrupt\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 378)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (var_resultTypeName_13809, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 379)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_13638.current_mReturnType (HERE).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 380)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" %result"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 381)) ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 383)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 384)) ;
        enumerator_13638.gotoNextObject () ;
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
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 402)).add_operation (constinArgument_inTargetParameters.getter_mServiceHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 400)) ;
  cEnumerator__32_stringlist enumerator_15099 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_15069 ((uint32_t) 0) ;
  while (enumerator_15099.hasCurrentObject ()) {
    GALGAS_string var_s_15118 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 408)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 406)) ;
    var_s_15118 = var_s_15118.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_15099.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 410)) ;
    var_s_15118 = var_s_15118.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15069.getter_string (SOURCE_FILE ("declaration-svc.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 411)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15118, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
    enumerator_15099.gotoNextObject () ;
    index_15069.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 405)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 416)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 414)) ;
  cEnumerator__32_stringlist enumerator_15613 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_15573 ((uint32_t) 0) ;
  while (enumerator_15613.hasCurrentObject ()) {
    GALGAS_string var_s_15632 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 421)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 419)) ;
    var_s_15632 = var_s_15632.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_15613.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 423)) ;
    var_s_15632 = var_s_15632.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15573.getter_string (SOURCE_FILE ("declaration-svc.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 424)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15632, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 425)) ;
    enumerator_15613.gotoNextObject () ;
    index_15573.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 418)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 427)) ;
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
                                   const GALGAS_location /* constinArgument_inEndOfInitDeclaration */,
                                   GALGAS_allocaList & outArgument_outAllocaList,
                                   GALGAS_instructionListIR & outArgument_outInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAllocaList.drop () ; // Release 'out' argument
  outArgument_outInstructionGenerationList.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineNameForInvocationGraph_5385 = function_initNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inPriority, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 133)) ;
  {
  ioArgument_ioTemporaries.mProperty_mInitRoutinePriorityMap.setter_insertKey (var_routineNameForInvocationGraph_5385, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 134)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_5385.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-init.galgas", 136)).operator_not (SOURCE_FILE ("declaration-init.galgas", 136)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_5385, var_routineNameForInvocationGraph_5385, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 137)) ;
    }
  }
  GALGAS_universalValuedObjectMapForContext var_universalMap_5986 ;
  {
  routine_initialVariableMap (constinArgument_inContext, constinArgument_inCurrentMode, GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-init.galgas", 147)), var_universalMap_5986, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 143)) ;
  }
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 151)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 152)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_5385, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_5986, outArgument_outAllocaList, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 153)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalValuedObjectMapForContext *) var_universalMap_5986.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 168)) ;
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
                                    const GALGAS_location /* constinArgument_inEndOfRoutineDeclaration */,
                                    const GALGAS_bool constinArgument_inWarnIfUnused,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 171)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (extensionGetter_key (constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 171)) ;
  }
  GALGAS_lstring var_guardMangledName_6380 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 170)) ;
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_guardMangledName_6380.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 176)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 176)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_guardMangledName_6380, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 177)) ;
    }
  }
  GALGAS_universalValuedObjectMapForContext var_universalMap_6984 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 185)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 187)), var_universalMap_6984, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 183)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_7046 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 190)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_7105 ;
  GALGAS_allocaList var_allocaList_7130 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  GALGAS_instructionListIR var_instructionGenerationList_7182 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 193)) ;
  switch (constinArgument_inGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_7285 = GALGAS_lstring::constructor_new (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)) ;
      GALGAS_PLMType var_resultType_7370 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
      var_allocaList_7130.addAssign_operation (function_llvmNameForLocalVariable (var_resultVarName_7285.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 199)), extensionGetter_llvmTypeName (var_resultType_7370, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 199))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 199)) ;
      {
      var_universalMap_6984.insulate (HERE) ;
      cPtr_universalValuedObjectMapForContext * ptr_7575 = (cPtr_universalValuedObjectMapForContext *) var_universalMap_6984.ptr () ;
      callExtensionSetter_insertLocalVariable ((cPtr_universalValuedObjectMapForContext *) ptr_7575, var_resultVarName_7285, var_resultType_7370, var_resultVarName_7285, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 204)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 200)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_6984, var_formalArguments_7046, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 208)) ;
      }
      var_convenienceGuardGenerationIR_7105 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 214)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6380, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 222)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_6984, var_allocaList_7130, var_instructionGenerationList_7182, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 216)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_9673 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_9673->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_6984, var_formalArguments_7046, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 231)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, var_guardMangledName_6380, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 243)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_6984, var_convenienceGuardGenerationIR_7105, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 239)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6380, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 256)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_6984, var_allocaList_7130, var_instructionGenerationList_7182, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 250)) ;
    }
    break ;
  }
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalValuedObjectMapForContext *) var_universalMap_6984.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 267)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR.setter_insertKey (var_guardMangledName_6380, var_formalArguments_7046, constinArgument_inSelfType, var_convenienceGuardGenerationIR_7105, var_allocaList_7130, var_instructionGenerationList_7182, constinArgument_inWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 271)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                                    const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                                    const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                    const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                    GALGAS_universalValuedObjectMapForContext & /* ioArgument_ioUniversalMap */,
                                                                                    GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mSandAloneRoutineName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 306)), GALGAS_string ("NOT HANDLED YET"), fixItArray0  COMMA_SOURCE_FILE ("declaration-guard.galgas", 306)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                         extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@procedureCallInstructionAST baseGuardAnalyze'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                          GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_12119 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 321)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_12180 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 322)) ;
  GALGAS_objectIR var_currentObject_12311 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 326)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("declaration-guard.galgas", 327)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 327)) ;
      var_currentObject_12311.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_currentObject_12311 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 329))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 329)) ;
    }
  }else if (kBoolFalse == test_0) {
    callExtensionMethod_searchValuedObject ((const cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr (), object->mProperty_mIdentifier, var_currentObject_12311, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 332)) ;
  }
  GALGAS_location var_currentErrorLocation_12685 = object->mProperty_mIdentifier.getter_location (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_12751 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_12805 ;
  {
  var_accessList_12751.setter_popLast (var_lastAccess_12805, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 337)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_12861 (var_accessList_12751, kENUMERATION_UP) ;
  while (enumerator_12861.hasCurrentObject ()) {
    GALGAS_PLMType var_currentType_12884 = extensionGetter_type (var_currentObject_12311, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 340)) ;
    switch (enumerator_12861.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_13854 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_12861.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_13854->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_13004 = extensionGetter_propertyMap (var_currentType_12884, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 343)) ;
        GALGAS_propertyAccessKind var_propertyAccess_13098 ;
        GALGAS_bool joker_13077 ; // Joker input parameter
        var_propertyMap_13004.method_searchKey (extractedValue_propertyName, joker_13077, var_propertyAccess_13098, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 344)) ;
        switch (var_propertyAccess_13098.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 347)), GALGAS_string ("a method cannot be used in this context"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 347)) ;
            var_currentObject_12311.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 349)), GALGAS_string ("a constant property not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 349)) ;
            var_currentObject_12311.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_13844 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_13098.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_13844->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_13844->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_13506 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_13506, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 351)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_12180, var_currentType_12884, extensionGetter_llvmName (var_currentObject_12311, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 354)), extractedValue_propertyType, var_property_5F_llvmName_13506, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 352)) ;
            }
            var_currentObject_12311 = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_13506  COMMA_SOURCE_FILE ("declaration-guard.galgas", 360)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_13997 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_12861.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_13997->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_13997->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 363)) ;
        var_currentObject_12311.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_12861.gotoNextObject () ;
  }
  switch (var_lastAccess_12805.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17229 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_12805.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_17229->mAssociatedValue0 ;
      GALGAS_PLMType var_currentType_14115 = extensionGetter_type (var_currentObject_12311, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 369)) ;
      GALGAS_propertyMap var_propertyMap_14171 = extensionGetter_propertyMap (var_currentType_14115, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 370)) ;
      GALGAS_lstring var_key_14211 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 371)) ;
      GALGAS_propertyAccessKind var_propertyAccess_14345 ;
      GALGAS_bool joker_14304 ; // Joker input parameter
      var_propertyMap_14171.method_searchKey (var_key_14211, joker_14304, var_propertyAccess_14345, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 372)) ;
      switch (var_propertyAccess_14345.enumValue ()) {
      case GALGAS_propertyAccessKind::kNotBuilt:
        break ;
      case GALGAS_propertyAccessKind::kEnum_constantProperty:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 375)), GALGAS_string ("a constant cannot be used as method"), fixItArray6  COMMA_SOURCE_FILE ("declaration-guard.galgas", 375)) ;
          outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_indexed:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 377)), GALGAS_string ("a property cannot be used as method"), fixItArray7  COMMA_SOURCE_FILE ("declaration-guard.galgas", 377)) ;
          outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
        {
          const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * extractPtr_17221 = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) (var_propertyAccess_14345.unsafePointer ()) ;
          const GALGAS_routineDescriptor extractedValue_routineDescriptor = extractPtr_17221->mAssociatedValue0 ;
          GALGAS_procCallEffectiveParameterListIR temp_8 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 382)) ;
          temp_8.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 381)), GALGAS_objectIR::constructor_reference (var_currentType_14115, extensionGetter_llvmName (var_currentObject_12311, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 382))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 382))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 382)) ;
          GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14796 = temp_8 ;
          GALGAS_routineKind var_routineKind_14986 = extractedValue_routineDescriptor.getter_mRoutineKind (HERE) ;
          GALGAS_mode var_calleeMode_15040 = extensionGetter_executionMode (var_routineKind_14986, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 387)) ;
          GALGAS_routineTypedSignature var_formalSignature_15096 = extractedValue_routineDescriptor.getter_mSignature (HERE) ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, extractedValue_routineDescriptor.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 390)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 391)), GALGAS_string ("not a procedure (returns a value)"), fixItArray10  COMMA_SOURCE_FILE ("declaration-guard.galgas", 391)) ;
            outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_9) {
            GALGAS_calleeKindIR var_calleeKind_15414 = function_checkMode (constinArgument_inCurrentMode, var_calleeMode_15040, var_routineKind_14986, extractedValue_methodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 394)) ;
            {
            routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature_15096, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12119, var_baseGuardInstructionGenerationList_12180, var_effectiveParameterListIR_14796, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 401)) ;
            }
            GALGAS_lstring var_routineMangledName_16315 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (var_currentType_14115, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 417)), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 417)) ;
            var_baseGuardInstructionGenerationList_12180.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("declaration-guard.galgas", 420)), GALGAS_objectIR::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 421)), var_routineMangledName_16315, var_routineMangledName_16315, var_calleeKind_15414, var_effectiveParameterListIR_14796  COMMA_SOURCE_FILE ("declaration-guard.galgas", 419))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 419)) ;
            {
            ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_16315 COMMA_SOURCE_FILE ("declaration-guard.galgas", 428)) ;
            }
            outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_12119, var_baseGuardInstructionGenerationList_12180, var_routineMangledName_16315.getter_string (HERE), var_effectiveParameterListIR_14796  COMMA_SOURCE_FILE ("declaration-guard.galgas", 430)) ;
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_17369 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_12805.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_17369->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray11  COMMA_SOURCE_FILE ("declaration-guard.galgas", 439)) ;
      outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procedureCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                         extensionMethod_procedureCallInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procedureCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_procedureCallInstructionAST_baseGuardAnalyze, NULL) ;

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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 50)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2146 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 52)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2146 COMMA_SOURCE_FILE ("expression-convert.galgas", 53)) ;
    }
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 62)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2833 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 64)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2833 COMMA_SOURCE_FILE ("expression-convert.galgas", 65)) ;
    }
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
                                                                    GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4583 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4583, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 90)) ;
  GALGAS_objectIR var_expressionResult_4729 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4583, var_expressionResult_4729, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 104)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 110)).operator_not (SOURCE_FILE ("expression-convert.galgas", 110)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 111)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 111)) ;
  }
  GALGAS_PLMType temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)) ;
  }
  GALGAS_PLMType var_resultType_4943 = temp_2 ;
  const enumGalgasBool test_4 = var_resultType_4943.getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 119)).operator_not (SOURCE_FILE ("expression-convert.galgas", 119)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 120)), GALGAS_string ("this type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_6 = extensionGetter_type (var_expressionResult_4729, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 121)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 121)).operator_not (SOURCE_FILE ("expression-convert.galgas", 121)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-convert.galgas", 122)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_6) {
      GALGAS_bigint var_minSource_5409 ;
      GALGAS_bigint var_maxSource_5428 ;
      GALGAS_bool joker_5430_3 ; // Joker input parameter
      GALGAS_uint joker_5430_2 ; // Joker input parameter
      GALGAS_string joker_5430_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4729, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 124)).method_integer (var_minSource_5409, var_maxSource_5428, joker_5430_3, joker_5430_2, joker_5430_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 124)) ;
      GALGAS_bigint var_minTarget_5476 ;
      GALGAS_bigint var_maxTarget_5495 ;
      GALGAS_bool joker_5497_3 ; // Joker input parameter
      GALGAS_uint joker_5497_2 ; // Joker input parameter
      GALGAS_string joker_5497_1 ; // Joker input parameter
      var_resultType_4943.method_integer (var_minTarget_5476, var_maxTarget_5495, joker_5497_3, joker_5497_2, joker_5497_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 125)) ;
      GALGAS_bool test_8 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5476.objectCompare (var_minSource_5409)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5495.objectCompare (var_maxSource_5428)) ;
      }
      GALGAS_bool var_alwaysPossible_5523 = test_8 ;
      const enumGalgasBool test_9 = var_alwaysPossible_5523.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 128)), GALGAS_string ("useless explicit conversion"), fixItArray10  COMMA_SOURCE_FILE ("expression-convert.galgas", 128)) ;
      }
      {
      routine_getNewTempVariable (var_resultType_4943, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 130)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_11) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4729  COMMA_SOURCE_FILE ("expression-convert.galgas", 132))  COMMA_SOURCE_FILE ("expression-convert.galgas", 132)) ;
      }else if (kBoolFalse == test_11) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4729, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 137))  COMMA_SOURCE_FILE ("expression-convert.galgas", 137)) ;
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
  GALGAS_uint var_staticStringIndex_7446 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 174)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 174)), var_staticStringIndex_7446, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  }
  GALGAS_string var_lbl_7460 = object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)).getter_string (SOURCE_FILE ("expression-convert.galgas", 177)) ;
  GALGAS_string var_convertMinOkLabel_7521 = GALGAS_string ("min.").add_operation (var_lbl_7460, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)) ;
  GALGAS_string var_convertMaxOkLabel_7568 = GALGAS_string ("max.").add_operation (var_lbl_7460, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
  GALGAS_string var_convertFailLabel_7614 = GALGAS_string ("fail.").add_operation (var_lbl_7460, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
  GALGAS_string var_compareMinVar_7651 = GALGAS_string ("cmp.").add_operation (var_lbl_7460, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
  GALGAS_string var_compareMaxVar_7699 = GALGAS_string ("cmp.").add_operation (var_lbl_7460, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
  GALGAS_bigint var_minTarget_7772 ;
  GALGAS_bigint var_maxTarget_7791 ;
  GALGAS_bool joker_7793_3 ; // Joker input parameter
  GALGAS_uint joker_7793_2 ; // Joker input parameter
  GALGAS_string joker_7793_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).method_integer (var_minTarget_7772, var_maxTarget_7791, joker_7793_3, joker_7793_2, joker_7793_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
  GALGAS_bigint var_minSource_7842 ;
  GALGAS_bool var_operandIsUnsigned_7881 ;
  GALGAS_bigint joker_7848 ; // Joker input parameter
  GALGAS_uint joker_7883_2 ; // Joker input parameter
  GALGAS_string joker_7883_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).method_integer (var_minSource_7842, joker_7848, var_operandIsUnsigned_7881, joker_7883_2, joker_7883_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)) ;
  GALGAS_string var_operandType_7904 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_7772.objectCompare (var_minSource_7842)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7651, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned_7881.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7904, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (var_minTarget_7772.getter_string (SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7651, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (var_convertMinOkLabel_7521, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (var_convertFailLabel_7614, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7521.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7699, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 193)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_7881.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7904, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_maxTarget_7791.getter_string (SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7699, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (var_convertMaxOkLabel_7568, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (var_convertFailLabel_7614, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 196)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7614.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 197)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_7446.getter_string (SOURCE_FILE ("expression-convert.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 198)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 198)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).getter_string (SOURCE_FILE ("expression-convert.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 199)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).getter_string (SOURCE_FILE ("expression-convert.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 200)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 201)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7568.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 202)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (var_operandType_7904, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 203)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 50)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2145 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 52)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2145 COMMA_SOURCE_FILE ("expression-extend.galgas", 53)) ;
    }
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 62)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2832 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 64)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2832 COMMA_SOURCE_FILE ("expression-extend.galgas", 65)) ;
    }
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
                                                                   GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4436 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4436, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 88)) ;
  GALGAS_objectIR var_expressionResult_4582 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4436, var_expressionResult_4582, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 102)) ;
  }
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 110)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 110)) ;
  }
  GALGAS_PLMType var_resultType_4632 = temp_0 ;
  const enumGalgasBool test_2 = var_resultType_4632.getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 113)).operator_not (SOURCE_FILE ("expression-extend.galgas", 113)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 114)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_type (var_expressionResult_4582, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 115)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 115)).operator_not (SOURCE_FILE ("expression-extend.galgas", 115)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-extend.galgas", 116)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bool var_sourceIsUnsigned_5124 ;
      GALGAS_uint var_sourceSize_5149 ;
      GALGAS_bigint joker_5085 ; // Joker input parameter
      GALGAS_bigint joker_5092 ; // Joker input parameter
      GALGAS_string joker_5151_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4582, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 118)).method_integer (joker_5085, joker_5092, var_sourceIsUnsigned_5124, var_sourceSize_5149, joker_5151_1, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 118)) ;
      GALGAS_bool var_targetIsUnsigned_5223 ;
      GALGAS_uint var_targetSize_5248 ;
      GALGAS_bigint joker_5184 ; // Joker input parameter
      GALGAS_bigint joker_5191 ; // Joker input parameter
      GALGAS_string joker_5250_1 ; // Joker input parameter
      var_resultType_4632.method_integer (joker_5184, joker_5191, var_targetIsUnsigned_5223, var_targetSize_5248, joker_5250_1, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 119)) ;
      GALGAS_bool test_6 = var_sourceIsUnsigned_5124 ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = var_targetIsUnsigned_5223 ;
      }
      const enumGalgasBool test_7 = test_6.boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_sourceSize_5149.objectCompare (var_targetSize_5248)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 122)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 122)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_sourceSize_5149.objectCompare (var_targetSize_5248)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 124)), GALGAS_string ("same size: useless extend operation"), fixItArray11  COMMA_SOURCE_FILE ("expression-extend.galgas", 124)) ;
          }
        }
      }else if (kBoolFalse == test_7) {
        GALGAS_bool test_12 = var_sourceIsUnsigned_5124 ;
        if (kBoolTrue == test_12.boolEnum ()) {
          test_12 = var_targetIsUnsigned_5223.operator_not (SOURCE_FILE ("expression-extend.galgas", 126)) ;
        }
        const enumGalgasBool test_13 = test_12.boolEnum () ;
        if (kBoolTrue == test_13) {
          const enumGalgasBool test_14 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_5149.objectCompare (var_targetSize_5248)).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 128)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray15  COMMA_SOURCE_FILE ("expression-extend.galgas", 128)) ;
          }
        }else if (kBoolFalse == test_13) {
          GALGAS_bool test_16 = var_sourceIsUnsigned_5124.operator_not (SOURCE_FILE ("expression-extend.galgas", 130)) ;
          if (kBoolTrue == test_16.boolEnum ()) {
            test_16 = var_targetIsUnsigned_5223 ;
          }
          const enumGalgasBool test_17 = test_16.boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 131)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 131)) ;
          }else if (kBoolFalse == test_17) {
            const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_sourceSize_5149.objectCompare (var_targetSize_5248)).boolEnum () ;
            if (kBoolTrue == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 134)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
            }else if (kBoolFalse == test_19) {
              const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, var_sourceSize_5149.objectCompare (var_targetSize_5248)).boolEnum () ;
              if (kBoolTrue == test_21) {
                TC_Array <C_FixItDescription> fixItArray22 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 136)), GALGAS_string ("same size: useless extend operation"), fixItArray22  COMMA_SOURCE_FILE ("expression-extend.galgas", 136)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType_4632, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 139)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4582, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 140)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 50)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2150 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 52)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2150 COMMA_SOURCE_FILE ("expression-truncate.galgas", 53)) ;
    }
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 62)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2838 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 64)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2838 COMMA_SOURCE_FILE ("expression-truncate.galgas", 65)) ;
    }
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
                                                                     const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4575 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-truncate.galgas", 94)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4575, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 90)) ;
  GALGAS_objectIR var_expressionResult_4721 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4575, var_expressionResult_4721, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 104)) ;
  }
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)) ;
  }
  GALGAS_PLMType var_resultType_4771 = temp_0 ;
  const enumGalgasBool test_2 = var_resultType_4771.getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 115)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 115)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 116)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_type (var_expressionResult_4721, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 117)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 117)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 117)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-truncate.galgas", 118)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_5237 ;
      GALGAS_bigint var_maxSource_5256 ;
      GALGAS_uint var_expSize_5290 ;
      GALGAS_bool joker_5267 ; // Joker input parameter
      GALGAS_string joker_5292_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4721, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 120)).method_integer (var_minSource_5237, var_maxSource_5256, joker_5267, var_expSize_5290, joker_5292_1, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 120)) ;
      GALGAS_bigint var_minTarget_5338 ;
      GALGAS_bigint var_maxTarget_5357 ;
      GALGAS_uint var_resultSize_5394 ;
      GALGAS_bool joker_5368 ; // Joker input parameter
      GALGAS_string joker_5396_1 ; // Joker input parameter
      var_resultType_4771.method_integer (var_minTarget_5338, var_maxTarget_5357, joker_5368, var_resultSize_5394, joker_5396_1, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 121)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5338.objectCompare (var_minSource_5237)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5357.objectCompare (var_maxSource_5256)) ;
      }
      GALGAS_bool var_alwaysPossible_5422 = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible_5422.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 124)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-truncate.galgas", 124)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_resultSize_5394.objectCompare (var_expSize_5290)).boolEnum () ;
      if (kBoolTrue == test_9) {
        {
        routine_getNewTempVariable (var_resultType_4771, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 127)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4721  COMMA_SOURCE_FILE ("expression-truncate.galgas", 128))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)) ;
      }else if (kBoolFalse == test_9) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4721, var_resultType_4771, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 133)) ;
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
  GALGAS_string var_operandType_7086 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 164)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (var_operandType_7086, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 166)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)) ;
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
//             Overriding extension method '@addressofExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                         const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                         GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_addressofExpressionAST.mSlotID,
                                                             extensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@addressofExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                         GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_addressofExpressionAST.mSlotID,
                                                             extensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@addressofExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addressofExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_PLMType constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inGuard,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_objectIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addressofExpressionAST * object = (const cPtr_addressofExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addressofExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("expression-addressof.galgas", 69)), GALGAS_string ("addressof () cannot be used in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-addressof.galgas", 69)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_LValueRepresentation var_lvalueIR_4019 ;
    extensionMethod_analyzeLValue (object->mProperty_mLValue, constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_4019, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 72)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_4049 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint").add_operation (constinArgument_inContext.getter_mPointerSize (HERE).getter_string (SOURCE_FILE ("expression-addressof.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 87)).getter_nowhere (SOURCE_FILE ("expression-addressof.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 85)) ;
    GALGAS_PLMType var_resultType_4185 = var_resultTypeProxy_4049.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 89)) ;
    {
    routine_getNewTempVariable (var_resultType_4185, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 90)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_addressofInstructionIR::constructor_new (outArgument_outResult, var_lvalueIR_4019  COMMA_SOURCE_FILE ("expression-addressof.galgas", 91))  COMMA_SOURCE_FILE ("expression-addressof.galgas", 91)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addressofExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_addressofExpressionAST.mSlotID,
                                          extensionMethod_addressofExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addressofExpressionAST_analyzeExpression (defineExtensionMethod_addressofExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@addressofInstructionIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addressofInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                            GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                            GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addressofInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_addressofInstructionIR.mSlotID,
                                                extensionMethod_addressofInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addressofInstructionIR_enterAccessibleEntities (defineExtensionMethod_addressofInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@addressofInstructionIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addressofInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addressofInstructionIR * object = (const cPtr_addressofInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_addressofInstructionIR) ;
  switch (object->mProperty_mLValue.enumValue ()) {
  case GALGAS_LValueRepresentation::kNotBuilt:
    break ;
  case GALGAS_LValueRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference * extractPtr_5848 = (const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference *) (object->mProperty_mLValue.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5848->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_5848->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)).add_operation (extractedValue_address.getter_string (SOURCE_FILE ("expression-addressof.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)).add_operation (GALGAS_string (", 0 ; addressof ("), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)).add_operation (extractedValue_address.getter_hexString (SOURCE_FILE ("expression-addressof.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 127)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)) ;
    }
    break ;
  case GALGAS_LValueRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference * extractPtr_6068 = (const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference *) (object->mProperty_mLValue.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6068->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_6068->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 129)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 129)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 129)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 129)).add_operation (extractedValue_llvmName, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 129)).add_operation (GALGAS_string (", 0 ; addressof ("), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 129)).add_operation (extractedValue_llvmName, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 130)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 129)) ;
    }
    break ;
  case GALGAS_LValueRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_LValueRepresentation_universalReference * extractPtr_6299 = (const cEnumAssociatedValues_LValueRepresentation_universalReference *) (object->mProperty_mLValue.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6299->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_6299->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 132)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 132)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 132)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 132)).add_operation (extractedValue_llvmName, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 132)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 132)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 133)).add_operation (GALGAS_string (" ; addressof\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 132)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addressofInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_addressofInstructionIR.mSlotID,
                                            extensionMethod_addressofInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addressofInstructionIR_llvmInstructionCode (defineExtensionMethod_addressofInstructionIR_llvmInstructionCode, NULL) ;

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
  GALGAS_lstring var_typeName_2085 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName_2085 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 50)) ;
  }
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2213 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_2213.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2213.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 53)) ;
    enumerator_2213.gotoNextObject () ;
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
  GALGAS_lstring var_typeName_2799 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 62)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2799 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
  }
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2909 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_2909.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_2909.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 65)) ;
    enumerator_2909.gotoNextObject () ;
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
                                                                  const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  const GALGAS_mode constinArgument_inCurrentMode,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                  GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  GALGAS_objectIR & outArgument_outResult,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  GALGAS_string var_constructorKey_4058 = GALGAS_string ("(") ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_4101 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_4101.hasCurrentObject ()) {
    var_constructorKey_4058.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_4101.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)) ;
    enumerator_4101.gotoNextObject () ;
  }
  var_constructorKey_4058.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
  GALGAS_PLMType var_resultType_4238 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 94)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 94)) ;
  GALGAS_constructorMap var_constructorMap_4333 = extensionGetter_constructorMap (var_resultType_4238, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
  GALGAS_constructorSignature var_constructorSignature_4457 ;
  GALGAS_constructorValue var_initValue_4472 ;
  var_constructorMap_4333.method_searchKey (GALGAS_lstring::constructor_new (var_constructorKey_4058, object->mProperty_mErrorLocation  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 96)), var_constructorSignature_4457, var_initValue_4472, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 96)) ;
  switch (var_initValue_4472.enumValue ()) {
  case GALGAS_constructorValue::kNotBuilt:
    break ;
  case GALGAS_constructorValue::kEnum_zero:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 100)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (extensionGetter_key (var_resultType_4238, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)), fixItArray1  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        outArgument_outResult = GALGAS_objectIR::constructor_zero (var_resultType_4238  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 103)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_arrayValue:
    {
      const cEnumAssociatedValues_constructorValue_arrayValue * extractPtr_5949 = (const cEnumAssociatedValues_constructorValue_arrayValue *) (var_initValue_4472.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_elementType = extractPtr_5949->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_5949->mAssociatedValue1 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 106)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (extensionGetter_key (var_resultType_4238, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107)).add_operation (GALGAS_string (" array constructor should have one parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        GALGAS_expressionAST var_expression_4961 = object->mProperty_mParameterList.getter_mExpressionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 109)) ;
        GALGAS_objectIR var_expressionResult_5508 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) var_expression_4961.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extractedValue_elementType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5508, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 110)) ;
        GALGAS_objectIR var_result_5533 = function_checkAssignmentCompatibility (var_expressionResult_5508, extractedValue_elementType, object->mProperty_mParameterList.getter_mSelectorAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 127)).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
        GALGAS_operandIRList var_operandIRList_5786 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
        cEnumerator_range enumerator_5817 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 131))), kENUMERATION_UP) ;
        while (enumerator_5817.hasCurrentObject ()) {
          var_operandIRList_5786.addAssign_operation (var_result_5533  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 132)) ;
          enumerator_5817.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayConstant (var_resultType_4238, var_operandIRList_5786  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_simple:
    {
      const cEnumAssociatedValues_constructorValue_simple * extractPtr_6204 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4472.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_6204->mAssociatedValue0 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (extensionGetter_key (var_resultType_4238, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 138)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 138)), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 138)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4238, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 140)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_structure:
    {
      const cEnumAssociatedValues_constructorValue_structure * extractPtr_7819 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4472.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_7819->mAssociatedValue0 ;
      GALGAS_sortedOperandIRList var_sortedOperandIRList_6271 = extractedValue_sortedOperandList ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 144)).objectCompare (var_constructorSignature_4457.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 144)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_constructorSignature_4457.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 146)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (var_constructorSignature_4457.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 145)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 145)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 145)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 145)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 146)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 147)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 147)), fixItArray9  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 145)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        cEnumerator_constructorSignature enumerator_6664 (var_constructorSignature_4457, kENUMERATION_UP) ;
        cEnumerator_functionCallEffectiveParameterListAST enumerator_6697 (object->mProperty_mParameterList, kENUMERATION_UP) ;
        while (enumerator_6664.hasCurrentObject () && enumerator_6697.hasCurrentObject ()) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_6697.current_mSelector (HERE).getter_string (HERE).objectCompare (enumerator_6664.current_mSelector (HERE))).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_6697.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 152)), GALGAS_string ("the selector should be '!").add_operation (enumerator_6664.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 152)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 152)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 152)) ;
          }
          GALGAS_objectIR var_expressionResult_7412 ;
          callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6697.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, enumerator_6664.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7412, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 154)) ;
          GALGAS_objectIR var_result_7441 = function_checkAssignmentCompatibility (var_expressionResult_7412, enumerator_6664.current_mType (HERE), enumerator_6697.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 168)) ;
          var_sortedOperandIRList_6271.addAssign_operation (var_result_7441, enumerator_6664.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 174)) ;
          enumerator_6664.gotoNextObject () ;
          enumerator_6697.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureConstant (var_resultType_4238, var_sortedOperandIRList_6271  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 176)) ;
      }
    }
    break ;
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
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_2247 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2247.hasCurrentObject ()) {
    switch (enumerator_2247.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_2311 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_2247.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_2311->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_2456 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_2247.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2456->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_3008 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_2247.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_3008->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_2544 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_2544.hasCurrentObject ()) {
          switch (enumerator_2544.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2798 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2544.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_2798->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 59)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 59)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2911 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2544.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_2911->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 61)) ;
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
          enumerator_2544.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_2247.gotoNextObject () ;
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
    ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 76)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 76)) ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_3664 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3664.hasCurrentObject ()) {
    switch (enumerator_3664.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_3728 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_3664.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_3728->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_3857 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_3664.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3857->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 82)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4393 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_3664.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_4393->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_3945 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_3945.hasCurrentObject ()) {
          switch (enumerator_3945.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4199 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3945.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_4199->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 89)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 89)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4296 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3945.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_4296->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 91)) ;
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
          enumerator_3945.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3664.gotoNextObject () ;
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
                                                                    const GALGAS_PLMType constinArgument_inSelfType,
                                                                    const GALGAS_bool constinArgument_inGuard,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  GALGAS_PLMType var_inferredResultType_5486 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_5486 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_5486 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 123)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 123)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_5486.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-typed-constant.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 126)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 126)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constantMap var_classConstantMap_5822 = extensionGetter_classConstantMap (var_inferredResultType_5486, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 128)) ;
    GALGAS_bigint var_value_5931 ;
    GALGAS_lstring var_classTypeName_5950 ;
    var_classConstantMap_5822.method_searchKey (object->mProperty_mConstructorName, var_value_5931, var_classTypeName_5950, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 129)) ;
    GALGAS_PLMType var_resultType_5970 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_classTypeName_5950, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_5970, var_value_5931  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 131)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mProperty_mAccessList.getter_length (SOURCE_FILE ("expression-typed-constant.galgas", 134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_objectIR var_newTemporaryReference_6406 ;
    {
    routine_getNewTempVariable (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 137)), ioArgument_ioTemporaries, var_newTemporaryReference_6406, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 137)) ;
    }
    ioArgument_ioAllocaList.addAssign_operation (extensionGetter_llvmName (var_newTemporaryReference_6406, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 139)), extensionGetter_llvmTypeName (var_newTemporaryReference_6406, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 139))  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 139)) ;
    {
    extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6406, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_llvmName (var_newTemporaryReference_6406, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 143)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 141)) ;
    }
    outArgument_outResult = var_newTemporaryReference_6406 ;
    {
    routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 148)) ;
    }
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 68)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 69)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 77)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 78)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 79)) ;
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
                                                               GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_objectIR var_ifExpressionResultPossibleReference_5186 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResultPossibleReference_5186, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 101)) ;
  GALGAS_objectIR var_ifExpressionResult_5337 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResultPossibleReference_5186, var_ifExpressionResult_5337, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_type (var_ifExpressionResult_5337, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 121)).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 121)).operator_not (SOURCE_FILE ("expression-if.galgas", 121)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 122)) ;
  }
  GALGAS_objectIR var_thenExpressionPossibleReferenceResult_6037 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionPossibleReferenceResult_6037, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 125)) ;
  GALGAS_objectIR var_thenExpressionTempResult_6195 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionPossibleReferenceResult_6037, var_thenExpressionTempResult_6195, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 139)) ;
  }
  GALGAS_objectIR var_thenExpressionResult_6228 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_6195, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 144)) ;
  GALGAS_objectIR var_elseExpressionPossibleReferenceResult_6943 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionPossibleReferenceResult_6943, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 151)) ;
  GALGAS_objectIR var_elseExpressionTempResult_7101 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionPossibleReferenceResult_6943, var_elseExpressionTempResult_7101, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 165)) ;
  }
  GALGAS_objectIR var_elseExpressionResult_7134 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_7101, extensionGetter_type (var_thenExpressionResult_6228, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 172)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_5337, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 177)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_7500 ;
    GALGAS_PLMType joker_7481_1 ; // Joker input parameter
    var_ifExpressionResult_5337.method_literalInteger (joker_7481_1, var_value_7500, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 178)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_7500.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 179)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_6228 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_7134 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (extensionGetter_type (var_elseExpressionResult_7134, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 181)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 181)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_5337, var_thenExpressionResult_6228, var_elseExpressionResult_7134, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 47)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

